//-------------------------------------------------------------------------------------------------
//MY_SERVER_H
//-------------------------------------------------------------------------------------------------
#ifndef MY_SERVER_H
#define MY_SERVER_H
//-------------------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------------------
//CLASS_OF_MY_SERVER
//-------------------------------------------------------------------------------------------------
//MACRO
#define MAX_USER_NUM												350
#define MAX_SEND_BUFFER_SIZE										100000
#define MAX_RECV_BUFFER_SIZE										100000
//DEFINE
#define    WM_NETWORK_MESSAGE_1                101

class MyServer
{
private :
	WSADATA mWsaData;
	int* m_epfd;
	SOCKET mSocket;
	struct sockaddr_in mAddress;

public :
	MyServer(void);

	BOOL Init(int* tResult);
	void Free(void);

	int PROCESS_FOR_NETWORK(HWND hWnd, WPARAM wPrm, LPARAM lPrm);
};

//INSTANCE
extern MyServer mSERVER;
//-------------------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------------------
#endif
//-------------------------------------------------------------------------------------------------