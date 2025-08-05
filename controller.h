#pragma once
#include <windows.h>
#include <stdio.h>
#include <conio.h>
#include <iostream>

extern "C" {
	#include "hidsdi.h"
	#include <setupapi.h>
}

class controller {
public:
	controller(void);
	~controller(void);

	bool connected;
bool send(int delay1,int delay2,int delay3,int delay4,int delay5,int delay6,int delay7,int delay8,
					  int delay9,int delay10,int delay11,int delay12,int delay13,int delay14,int delay15,int delay16,
					  int delay17,int delay18,int delay19,int delay20,int delay21,int delay22,int delay23,int delay24,
					  int delay25,int delay26,int delay27,int delay28,int delay29,int delay30,int delay31,int delay32,
					  int delay33,int delay34,int delay35,int delay36,int delay37,int delay38,int delay39,int delay40,
					  int delay41,int delay42,int delay43,int delay44,int delay45,int delay46,int delay47,int delay48,
					  int delay49,int delay50);
	bool connect();

private:	

	HANDLE								DeviceHandle;
	HIDP_CAPS							Capabilities;
	BOOL								result;

	CHAR								OutputReport[51]; //buffer out to pctx or servo controller

	DWORD								BytesWritten;
	DWORD								BytesRead;
};