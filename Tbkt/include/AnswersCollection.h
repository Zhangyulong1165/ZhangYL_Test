
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
    TB_MODE_NONE    = 0, 	 //����ģʽ
    TB_MODE_SINGLE  = 1,	 //����ģʽ
    TB_MODE_MULTI   = 2,	 //����ģʽ
    TB_MODE_PAPER   = 3,	 //�׾�ģʽ
    TB_MODE_ANSWER  = 4          //����ģʽ
} TBModeDef;

//new
struct TB_DeviceStatus
{
	bool WhitelistStatus;      //������״̬  0���ر� 1������  
	int AttStatus;            //����״̬  0���ر�  1������  2:��ͬ��״̬
};

/*
* �ص���Ϣ����
*/
enum CALLBACK_MSG { MSG_PULLEDOUT = 1, MSG_COMINGDATA = 2, MSG_ERROR = 3, MSG_VRITIME = 4, MSG_SIGNDATA = 5, MSG_UPGRADEREPORT = 6, MSG_SIGNDATAWITHTIME = 7,MSG_HAND=8, MSG_PROGRESS = 0xF3 };


//new
/*
* �ص�����ԭ��
* msg == MSG_PULLEDOUT����ʾ�豸���γ�
* msg == MSG_COMINGDATA��param1��ʾ��������param2��ʾ���ַ���
* msg == MSG_ERROR: param1��ʾ�����(������̬�⿪����Ա����)��param2��ʾ������Ϣ
* msg == MSG_SIGNDATA: param1��ʾ��ǩ������param2��ʾ��ǩ�Ŀ����ַ���
*		�����ַ����ĸ�ʽ "1121776490;1121776491;1121776492;1121776493"
* param2: [{"CardID":"1121776490","Answer":"+ 
*","RepeatFlag":"6F","Version":"2.8",
*               "Type":"1","BigNum":"2","SmallNum":"3"}]
* 	  Type: �����ͣ�1 ����� 2 ����� 3 �׾��
* 	  BigNum:  ��ʾ�������(�׾�ģʽ����Ч)
* 	  SamllNum: ����ģʽ�±�ʾ��ţ��׾�ģʽ�±�ʾС�����
*/
typedef void ( * FUNPTR_ANSWER_CALLBACK)(int device, int msg, int param1, void *param2);

/*
* ��ĳ�ʼ��
* ������ֵ��ʾ�ɹ�
*/
ANSWERSCOLLECTION_API int __stdcall TPEDU_Init();

/*
* �����β
*/
ANSWERSCOLLECTION_API int __stdcall TPEDU_Release();

/*
* ö�ٵ�ǰ�豸
* �����豸����
* NameList��ʽ��"COM1;002E3972"(�м��ԷֺŸ���)
*/
ANSWERSCOLLECTION_API int __stdcall TPEDU_EnumDevices(char *NameList);

/*
* ���豸
* ������ֵ��ʾ�򿪳ɹ�
* DeviceName���豸��
*/
ANSWERSCOLLECTION_API int __stdcall TPEDU_OpenDevice(char *DeviceName);


/*
* �ͷ��豸
* ������ֵ��ʾ�ɹ�
* device: �豸���
*/
ANSWERSCOLLECTION_API int __stdcall TPEDU_CloseDevice(int device);

/*
* ע��ص�����
* ������ֵ��ʾ�ɹ�
*/
ANSWERSCOLLECTION_API int __stdcall TPEDU_SetCallbackAddr(FUNPTR_ANSWER_CALLBACK pfAddr);

/*
* ��ʼ���մ�      
* ������ֵ��ʾ�ɹ�
* device: �豸���
*/
ANSWERSCOLLECTION_API int __stdcall TPEDU_Start(int device);

/*
* ֹͣ���մ�      
* ������ֵ��ʾ�ɹ�
* device: �豸���
*/
ANSWERSCOLLECTION_API int __stdcall TPEDU_Stop(int device);

/*
* ��ù̼��汾
* ������ֵ��ʾ�ɹ�
* device: �豸���
* major����������������汾�ţ�minor��������������Ӱ汾��
* timeout: ��ʱ����(��λ��ms)
*/
ANSWERSCOLLECTION_API int __stdcall TPEDU_GetFirmwareVer(int device, unsigned char *major, unsigned char *minor);

/*
* ��ñ������İ汾��
* ������ֵ��ʾ�ɹ�
* major����������������汾�ţ�minor��������������Ӱ汾��
*/
ANSWERSCOLLECTION_API int __stdcall TPEDU_GetMiddlewareVer(unsigned char *major, unsigned char *minor);


/*
* ʹ��/���ð�����
* ������ֵ��ʾ�ɹ�
* device: �豸���
* bEnable����0��ʹ�ܣ�0��ر�
* timeout: ��ʱ����(��λ��ms)
*/
ANSWERSCOLLECTION_API int __stdcall TPEDU_EnableWhitelist(int device, int bEnable, int timeout);

/*
* ������Ӱ�����
* ������ֵ��ʾ�ɹ�
* device: �豸���
* cardid: ��ſ����ַ�������ͬʱ��Ӷ������м��ԷֺŸ���
* timeout: ��ʱ����(��λ��ms)
*/
ANSWERSCOLLECTION_API int __stdcall TPEDU_AddtoWhitelist(int device, char *cardid, int timeout);


/*
* ����ɾ��������
* ������ֵ��ʾ�ɹ�
* device: �豸���
* cardid: Ҫɾ���Ŀ��ţ������ָ����ɾ��ȫ��������������ֻ��һ��ɾ��һ��
* timeout: ��ʱ����(��λ��ms)
*/
ANSWERSCOLLECTION_API int __stdcall TPEDU_RemovefromWhitelist(int device, char *cardid, int timeout);



/*
* ��λ��д��
* ������ֵ��ʾ�ɹ�
* device: �豸���
* timeout: ��ʱ����(��λ��ms)
*/
ANSWERSCOLLECTION_API int __stdcall TPEDU_Reset(int device, int timeout);


/*
* ����ȫ��
* ������ֵ��ʾ�ɹ�
* device: �豸���
* timeout: ��ʱ����(��λ��ms)
*/
ANSWERSCOLLECTION_API int __stdcall TPEDU_Att_All_Start(int device,int timeout);

/*
* ����ȫ��
* ������ֵ��ʾ�ɹ�
* device: �豸���
* timeout: ��ʱ����(��λ��ms)
*/
ANSWERSCOLLECTION_API int __stdcall TPEDU_Att_All_Close(int device, int timeout);

/*
* ���ڳ�ʼ��
* ������ֵ��ʾ�ɹ�
* device: �豸���
* timeout: ��ʱ����(��λ��ms)
*/
ANSWERSCOLLECTION_API int __stdcall TPEDU_Att_All_Init(int device, int timeout);

//new
/*
* ���ô��⿨����ģʽ
* ������ֵ��ʾ�ɹ�
* device: �豸���
* mode  : ���⿨����ģʽ
* param : ����ģʽ�£����øò���
* 	����ģʽ�� "6", ��ʾ��6����
* 	�׾�ģʽ�� "3:5,4,8" ��ʾ�׾�ṹ��3�����⣬ ��һ���������5��С�⣬
* 		  �ڶ����������4��С�⣬�������������8��С��
*   ����Ƿ�ģʽ��"99:1,2,3,4,5,6,7,8,9,10,11,12,13"��
*                 "99:"��ʾ����99���⣬"1,"��ʾ1-8����Ŀ�е�һС���ǵǷ��⣬���������ĸ��
* timeout: ��ʱ����(��λ��ms) ��ʱʱ��3��
*/
ANSWERSCOLLECTION_API int __stdcall TPEDU_SetWorkMode(int device, TBModeDef mode, char * param,int timeout);

//new
/*
* ��ѯ��������״̬������������״̬������״̬
* ������ֵ��ʾ�ɹ�
* device: �豸���
* deviceStatus:������״̬��Ϣ
* timeout: ��ʱ����(��λ��ms)
*/
ANSWERSCOLLECTION_API int __stdcall TPEDU_GetDeviceStatus(int device,TB_DeviceStatus * deviceStatus,int timeout);


////////////////////////////////////���Խӿ�//////////////////////////////////////
 
/*	
 *	����ʱ��
 *	������ֵ��ʾ�ɹ�
 *	@ param:
 *		device: �豸���
 *		timeout: ��ʱʱ��(��λ:ms)
 **/
ANSWERSCOLLECTION_API int __stdcall TPEDU_UpdateTime(int device, int timeout);

/*
*	��������
*	������ֵ��ʾ�ɹ�
*	@ param:
*		device: �豸���
*		status: 0,��ʾ�رղ������ԣ�1����ʾ�򿪲�������
*		timeout: ��ʱʱ��(��λ:ms)
**/
ANSWERSCOLLECTION_API int __stdcall TPEDU_ConcurrentTest(int device, int status, int timeout);


/*
*	�Զ�����
*	������ֵ��ʾ�ɹ�
*	@ param:
*		device: �豸���
*		status: 0,��ʾ�ر��Զ����ԣ�1����ʾ���Զ�����
*		interval: �Զ����Ե�ʱ��������λ: ms
*		timeout: ��ʱʱ��(��λ:ms)
**/
ANSWERSCOLLECTION_API int __stdcall TPEDU_AutoTest(int device, int status, int  interval, int timeout);

/*
*	���ע���
*	������ֵ��ʾ�ɹ�
*	@ param:
*		device: �豸���
*		timeout: ��ʱʱ��(��λ:ms)
*	���������ע�Ṧ��
**/
ANSWERSCOLLECTION_API int __stdcall TPEDU_UnlockRegister(int device, int timeout);

/*
*	���òɼ���ID
*	������ֵ��ʾ�ɹ�
*	@ param:
*		device: �豸���
*		ReaderID����Ҫ���õĲɼ���ID
*		timeout: ��ʱʱ��(��λ:ms)
**/
ANSWERSCOLLECTION_API int __stdcall TPEDU_SetReaderID(int device, int ReaderID, int timeout);

/*
*	��ѯ�ɼ���ID
*	������ֵ��ʾ�ɹ�
*	@ param:
*		device: �豸���
*		ReaderID����ѯ���صĲɼ���ID
*		timeout: ��ʱʱ��(��λ:ms)
**/
ANSWERSCOLLECTION_API int __stdcall TPEDU_QueryReaderID(int device, int *ReaderID, int timeout);

/*
*	��ȡ������	
*	������ֵ��ʾ�ɹ�
*	@ param:
*		device: �豸���
*		TagID: �ɼ���ID,���200������������200��Ԫ�ص�����
*		timeout: ��ʱʱ��(��λ:ms)
**/
ANSWERSCOLLECTION_API int __stdcall TPEDU_GetWhitelist(int device, unsigned long long TagID[], int timeout);



/*
*����ǩ��
*������ֵ��ʾ�ɹ�
* device: �豸���
* timeout: ��ʱ����(��λ��ms)
*/
ANSWERSCOLLECTION_API int __stdcall TPEDU_SignIn(int device, int timeout);
/*
*�رյ���ǩ��
*������ֵ��ʾ�ɹ�
* device: �豸���
* timeout: ��ʱ����(��λ��ms)
*/
ANSWERSCOLLECTION_API int __stdcall TPEDU_SignInClose(int device, int timeout);

/*
*��ʼ����
*������ֵ��ʾ�ɹ�
* device: �豸���
* version���汾��
* type: �ļ����� 0 ��ʾAPP 1��ʾBootload
* file����ʾ�ļ�����
* filesize �ļ����ݴ�С
* timeout: ��ʱ����(��λ��ms)
*/
ANSWERSCOLLECTION_API int __stdcall TPEDU_UpgradeStart(int device,
	unsigned short version,
	unsigned char type,
	unsigned char* file,
	unsigned short filesize,
	int timeout);

/*
*ֹͣ����
*������ֵ��ʾ�ɹ�
* device: �豸���
* timeout: ��ʱ����(��λ��ms)
*/
ANSWERSCOLLECTION_API int __stdcall TPEDU_UpgradeStop(int device,
	int timeout);
/*
*����ǩ�����ϱ�ǩ����Ϣ�л����ʱ���
*������ֵ��ʾ�ɹ�
* device: �豸���
* timeout: ��ʱ����(��λ��ms)
*/
ANSWERSCOLLECTION_API int __stdcall TPEDU_SignInWithTimeStamp(int device, int timeout);

/*
*����
*������ֵ��ʾ�ɹ�
* device: �豸���
* buffer: ���ݻ���
* buffersize�������С ����ֵ100
* timeout: ��ʱ����(��λ��ms)
*/
ANSWERSCOLLECTION_API int TPEDU_About(int device, char* buffer, int buffersize, int timeout);

/*
*�������ܣ��������������ܻ��߷Ǽ���ͨѶ��ʽ
*������ֵ��ʾ�ɹ�
* device: �豸���
* enabled: trueΪ���ܣ�false Ϊ�Ǽ���
* timeout: ��ʱ����(��λ��ms)
*/
ANSWERSCOLLECTION_API int TPEDU_Encrypt(int device, bool enabled, int timeout);
#endif
