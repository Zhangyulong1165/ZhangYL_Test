
#ifndef _ANSWERS_COLLECTION_API_H_
#define _ANSWERS_COLLECTION_API_H_

#ifdef ANSWERSCOLLECTION_EXPORTS
#define ANSWERSCOLLECTION_API __declspec(dllexport)
#else
#define ANSWERSCOLLECTION_API __declspec(dllimport)
#endif

#define ERR_INVALID_DEV_NUM						0
#define ERR_OPEN_FAIL							-1
#define ERR_SEND_FAIL							-2
#define ERR_RECV_TIMEOUT						-3
#define ERR_HEAD_UNRECOGNIZE					-4
#define ERR_EXEC_FAIL							-5
#define ERR_CHECK_WRONG							-6
#define ERR_MEM_ALLOC_FAIL						-7
#define ERR_INVALID_PARAM						-8
#define ERR_OTHERS								-9
#define ERR_CALLBACK_NOT_SET					-10
#define ERR_FUNCTION_NOT_SUPPORT				-11

//new
typedef enum
{
    TB_MODE_NONE    = 0, 	 //待机模式
    TB_MODE_SINGLE  = 1,	 //单题模式
    TB_MODE_MULTI   = 2,	 //多题模式
    TB_MODE_PAPER   = 3,	 //套卷模式
    TB_MODE_ANSWER  = 4          //抢答模式
} TBModeDef;

//new
struct TB_DeviceStatus
{
	bool WhitelistStatus;      //白名单状态  0：关闭 1：开启  
	int AttStatus;            //考勤状态  0：关闭  1：开启  2:不同步状态
};

/*
* 回调消息类型
*/
enum CALLBACK_MSG { MSG_PULLEDOUT = 1, MSG_COMINGDATA = 2, MSG_ERROR = 3, MSG_VRITIME = 4, MSG_SIGNDATA = 5, MSG_UPGRADEREPORT = 6, MSG_SIGNDATAWITHTIME = 7,MSG_HAND=8, MSG_PROGRESS = 0xF3 };


//new
/*
* 回调函数原型
* msg == MSG_PULLEDOUT：表示设备被拔出
* msg == MSG_COMINGDATA：param1表示答案条数，param2表示答案字符串
* msg == MSG_ERROR: param1表示错误号(供本动态库开发人员调试)，param2表示错误信息
* msg == MSG_SIGNDATA: param1表示标签个数，param2表示标签的卡号字符串
*		卡号字符串的格式 "1121776490;1121776491;1121776492;1121776493"
* param2: [{"CardID":"1121776490","Answer":"+ 
*","RepeatFlag":"6F","Version":"2.8",
*               "Type":"1","BigNum":"2","SmallNum":"3"}]
* 	  Type: 答案类型，1 单题答案 2 多题答案 3 套卷答案
* 	  BigNum:  表示大题序号(套卷模式下有效)
* 	  SamllNum: 多题模式下表示题号，套卷模式下表示小题序号
*/
typedef void ( * FUNPTR_ANSWER_CALLBACK)(int device, int msg, int param1, void *param2);

/*
* 库的初始化
* 返回正值表示成功
*/
ANSWERSCOLLECTION_API int __stdcall TPEDU_Init();

/*
* 库的收尾
*/
ANSWERSCOLLECTION_API int __stdcall TPEDU_Release();

/*
* 枚举当前设备
* 返回设备个数
* NameList格式："COM1;002E3972"(中间以分号隔开)
*/
ANSWERSCOLLECTION_API int __stdcall TPEDU_EnumDevices(char *NameList);

/*
* 打开设备
* 返回正值表示打开成功
* DeviceName：设备名
*/
ANSWERSCOLLECTION_API int __stdcall TPEDU_OpenDevice(char *DeviceName);


/*
* 释放设备
* 返回正值表示成功
* device: 设备编号
*/
ANSWERSCOLLECTION_API int __stdcall TPEDU_CloseDevice(int device);

/*
* 注册回调函数
* 返回正值表示成功
*/
ANSWERSCOLLECTION_API int __stdcall TPEDU_SetCallbackAddr(FUNPTR_ANSWER_CALLBACK pfAddr);

/*
* 开始接收答案      
* 返回正值表示成功
* device: 设备编号
*/
ANSWERSCOLLECTION_API int __stdcall TPEDU_Start(int device);

/*
* 停止接收答案      
* 返回正值表示成功
* device: 设备编号
*/
ANSWERSCOLLECTION_API int __stdcall TPEDU_Stop(int device);

/*
* 获得固件版本
* 返回正值表示成功
* device: 设备编号
* major（输出参数）：主版本号，minor（输出参数）：子版本号
* timeout: 超时设置(单位：ms)
*/
ANSWERSCOLLECTION_API int __stdcall TPEDU_GetFirmwareVer(int device, unsigned char *major, unsigned char *minor);

/*
* 获得本答题库的版本号
* 返回正值表示成功
* major（输出参数）：主版本号，minor（输出参数）：子版本号
*/
ANSWERSCOLLECTION_API int __stdcall TPEDU_GetMiddlewareVer(unsigned char *major, unsigned char *minor);


/*
* 使能/禁用白名单
* 返回正值表示成功
* device: 设备编号
* bEnable：非0则使能，0则关闭
* timeout: 超时设置(单位：ms)
*/
ANSWERSCOLLECTION_API int __stdcall TPEDU_EnableWhitelist(int device, int bEnable, int timeout);

/*
* 批量添加白名单
* 返回正值表示成功
* device: 设备编号
* cardid: 存放卡号字符串，可同时添加多条，中间以分号隔开
* timeout: 超时设置(单位：ms)
*/
ANSWERSCOLLECTION_API int __stdcall TPEDU_AddtoWhitelist(int device, char *cardid, int timeout);


/*
* 单条删除白名单
* 返回正值表示成功
* device: 设备编号
* cardid: 要删除的卡号，传入空指针则删除全部白名单，否则只能一次删除一条
* timeout: 超时设置(单位：ms)
*/
ANSWERSCOLLECTION_API int __stdcall TPEDU_RemovefromWhitelist(int device, char *cardid, int timeout);



/*
* 复位读写器
* 返回正值表示成功
* device: 设备编号
* timeout: 超时设置(单位：ms)
*/
ANSWERSCOLLECTION_API int __stdcall TPEDU_Reset(int device, int timeout);


/*
* 考勤全开
* 返回正值表示成功
* device: 设备编号
* timeout: 超时设置(单位：ms)
*/
ANSWERSCOLLECTION_API int __stdcall TPEDU_Att_All_Start(int device,int timeout);

/*
* 考勤全关
* 返回正值表示成功
* device: 设备编号
* timeout: 超时设置(单位：ms)
*/
ANSWERSCOLLECTION_API int __stdcall TPEDU_Att_All_Close(int device, int timeout);

/*
* 考勤初始化
* 返回正值表示成功
* device: 设备编号
* timeout: 超时设置(单位：ms)
*/
ANSWERSCOLLECTION_API int __stdcall TPEDU_Att_All_Init(int device, int timeout);

//new
/*
* 设置答题卡工作模式
* 返回正值表示成功
* device: 设备编号
* mode  : 答题卡工作模式
* param : 多题模式下，启用该参数
* 	多题模式： "6", 表示有6道题
* 	套卷模式： "3:5,4,8" 表示套卷结构有3道大题， 第一道大题包含5道小题，
* 		  第二道大题包含4道小题，第三道大题包含8道小题
*   多题登分模式："99:1,2,3,4,5,6,7,8,9,10,11,12,13"，
*                 "99:"表示共有99道题，"1,"表示1-8道题目中第一小题是登分题，其余的是字母题
* timeout: 超时设置(单位：ms) 超时时间3秒
*/
ANSWERSCOLLECTION_API int __stdcall TPEDU_SetWorkMode(int device, TBModeDef mode, char * param,int timeout);

//new
/*
* 查询接收器的状态，包含白名单状态，考勤状态
* 返回正值表示成功
* device: 设备编号
* deviceStatus:接收器状态信息
* timeout: 超时设置(单位：ms)
*/
ANSWERSCOLLECTION_API int __stdcall TPEDU_GetDeviceStatus(int device,TB_DeviceStatus * deviceStatus,int timeout);


////////////////////////////////////测试接口//////////////////////////////////////
 
/*	
 *	更新时间
 *	返回正值表示成功
 *	@ param:
 *		device: 设备编号
 *		timeout: 超时时间(单位:ms)
 **/
ANSWERSCOLLECTION_API int __stdcall TPEDU_UpdateTime(int device, int timeout);

/*
*	并发测试
*	返回正值表示成功
*	@ param:
*		device: 设备编号
*		status: 0,表示关闭并发测试，1，表示打开并发测试
*		timeout: 超时时间(单位:ms)
**/
ANSWERSCOLLECTION_API int __stdcall TPEDU_ConcurrentTest(int device, int status, int timeout);


/*
*	自动测试
*	返回正值表示成功
*	@ param:
*		device: 设备编号
*		status: 0,表示关闭自动测试，1，表示打开自动测试
*		interval: 自动测试的时间间隔，单位: ms
*		timeout: 超时时间(单位:ms)
**/
ANSWERSCOLLECTION_API int __stdcall TPEDU_AutoTest(int device, int status, int  interval, int timeout);

/*
*	解除注册绑定
*	返回正值表示成功
*	@ param:
*		device: 设备编号
*		timeout: 超时时间(单位:ms)
*	描述：解除注册功能
**/
ANSWERSCOLLECTION_API int __stdcall TPEDU_UnlockRegister(int device, int timeout);

/*
*	设置采集器ID
*	返回正值表示成功
*	@ param:
*		device: 设备编号
*		ReaderID：需要设置的采集器ID
*		timeout: 超时时间(单位:ms)
**/
ANSWERSCOLLECTION_API int __stdcall TPEDU_SetReaderID(int device, int ReaderID, int timeout);

/*
*	查询采集器ID
*	返回正值表示成功
*	@ param:
*		device: 设备编号
*		ReaderID：查询返回的采集器ID
*		timeout: 超时时间(单位:ms)
**/
ANSWERSCOLLECTION_API int __stdcall TPEDU_QueryReaderID(int device, int *ReaderID, int timeout);

/*
*	获取白名单	
*	返回正值表示成功
*	@ param:
*		device: 设备编号
*		TagID: 采集器ID,最大200个，建议申请200个元素的数组
*		timeout: 超时时间(单位:ms)
**/
ANSWERSCOLLECTION_API int __stdcall TPEDU_GetWhitelist(int device, unsigned long long TagID[], int timeout);



/*
*点名签到
*返回正值表示成功
* device: 设备编号
* timeout: 超时设置(单位：ms)
*/
ANSWERSCOLLECTION_API int __stdcall TPEDU_SignIn(int device, int timeout);
/*
*关闭点名签到
*返回正值表示成功
* device: 设备编号
* timeout: 超时设置(单位：ms)
*/
ANSWERSCOLLECTION_API int __stdcall TPEDU_SignInClose(int device, int timeout);

/*
*开始升级
*返回正值表示成功
* device: 设备编号
* version：版本号
* type: 文件类型 0 表示APP 1表示Bootload
* file：表示文件内容
* filesize 文件内容大小
* timeout: 超时设置(单位：ms)
*/
ANSWERSCOLLECTION_API int __stdcall TPEDU_UpgradeStart(int device,
	unsigned short version,
	unsigned char type,
	unsigned char* file,
	unsigned short filesize,
	int timeout);

/*
*停止升级
*返回正值表示成功
* device: 设备编号
* timeout: 超时设置(单位：ms)
*/
ANSWERSCOLLECTION_API int __stdcall TPEDU_UpgradeStop(int device,
	int timeout);
/*
*启动签到，上报签到信息中会包括时间戳
*返回正值表示成功
* device: 设备编号
* timeout: 超时设置(单位：ms)
*/
ANSWERSCOLLECTION_API int __stdcall TPEDU_SignInWithTimeStamp(int device, int timeout);

/*
*关于
*返回正值表示成功
* device: 设备编号
* buffer: 数据缓存
* buffersize：缓存大小 建议值100
* timeout: 超时设置(单位：ms)
*/
ANSWERSCOLLECTION_API int TPEDU_About(int device, char* buffer, int buffersize, int timeout);

/*
*开启加密，开启接收器加密或者非加密通讯方式
*返回正值表示成功
* device: 设备编号
* enabled: true为加密，false 为非加密
* timeout: 超时设置(单位：ms)
*/
ANSWERSCOLLECTION_API int TPEDU_Encrypt(int device, bool enabled, int timeout);
#endif
