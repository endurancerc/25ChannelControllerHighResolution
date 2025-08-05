#include <stdafx.h>
#include "controller.h"

using namespace std;

	const unsigned int VendorID =	0x0925;
	const unsigned int ProductID =	0x1299;

controller::controller(void){
	connected = false;
	connect();
}

controller::~controller(void){}

bool controller::connect(){
	GUID								HidGuid;
	HANDLE								hDevInfo;
	SP_DEVICE_INTERFACE_DATA			devInfoData;
	int									MemberIndex = 0;
	bool								MyDeviceDetected = FALSE;
	bool								LastDevice = FALSE;
	ULONG								Length;
	PSP_DEVICE_INTERFACE_DETAIL_DATA	detailData;
	ULONG								Required;
	HIDD_ATTRIBUTES						Attributes;
	PHIDP_PREPARSED_DATA				PreparsedData;

	// Get the GUID for all system HIDs
	HidD_GetHidGuid(&HidGuid);

	// Get handle to device information set for all installed devices
	hDevInfo = SetupDiGetClassDevs(&HidGuid, NULL, NULL, DIGCF_PRESENT | DIGCF_INTERFACEDEVICE);

	// Set struct size before calling SetupDiEnumDeviceInterfaces
	devInfoData.cbSize = sizeof(devInfoData);

	do {
		MyDeviceDetected=FALSE;

		// Get handle to a SP_DEVICE_INTERFACE_DATA structure for a detected device
		result = SetupDiEnumDeviceInterfaces(hDevInfo, 0, &HidGuid, MemberIndex, &devInfoData);

		if (result) {
			result = SetupDiGetDeviceInterfaceDetail(hDevInfo, &devInfoData, NULL, 0, &Length, NULL);

			//Allocate memory for the hDevInfo structure, using the returned Length.
			detailData = (PSP_DEVICE_INTERFACE_DETAIL_DATA) malloc(Length);

			//Set cbSize in the detailData structure.
			detailData->cbSize = sizeof(SP_DEVICE_INTERFACE_DETAIL_DATA);

			//Call the function again, this time passing it the returned buffer size.
			result = SetupDiGetDeviceInterfaceDetail(hDevInfo, &devInfoData, detailData, Length, &Required, NULL);

			DeviceHandle = CreateFile 
				(detailData->DevicePath, 
				GENERIC_READ | GENERIC_WRITE, 
				FILE_SHARE_READ | FILE_SHARE_WRITE, 
				(LPSECURITY_ATTRIBUTES) NULL,
				OPEN_EXISTING, 
				0, 
				NULL);
			
			Attributes.Size = sizeof(Attributes);

			result = HidD_GetAttributes(DeviceHandle, &Attributes);

			if (Attributes.VendorID == VendorID) {
				if (Attributes.ProductID == ProductID) {
					//Both the Product and Vendor IDs match.
					MyDeviceDetected = TRUE;
				}
				else {
					CloseHandle(DeviceHandle);
				}
			} 
			else {
				CloseHandle(DeviceHandle);
			}
			//Free the memory used by the detailData structure (no longer needed).
			free(detailData);
		}
		else {
			//SetupDiEnumDeviceInterfaces returned 0, so there are no more devices to check.
			LastDevice=TRUE;
		}
		//If we haven't found the device yet, and haven't tried every available device,
		//try the next one.
		MemberIndex++;
	} while ((LastDevice == FALSE) && (MyDeviceDetected == FALSE));

	if (MyDeviceDetected == FALSE) {
		connected = false;
		return false;
	}

	//Free the memory reserved for hDevInfo by SetupDiClassDevs.
	SetupDiDestroyDeviceInfoList(hDevInfo);
	
	HidD_GetPreparsedData(DeviceHandle, &PreparsedData);
	HidP_GetCaps(PreparsedData, &Capabilities);

	HidD_FreePreparsedData(PreparsedData);
	connected = true;
	return true;
}


bool controller::send(int delay1,int delay2,int delay3,int delay4,int delay5,int delay6,int delay7,int delay8,
					  int delay9,int delay10,int delay11,int delay12,int delay13,int delay14,int delay15,int delay16,
					  int delay17,int delay18,int delay19,int delay20,int delay21,int delay22,int delay23,int delay24,
					  int delay25,int delay26,int delay27,int delay28,int delay29,int delay30,int delay31,int delay32,
					  int delay33,int delay34,int delay35,int delay36,int delay37,int delay38,int delay39,int delay40,
					  int delay41,int delay42,int delay43,int delay44,int delay45,int delay46,int delay47,int delay48,
					  int delay49,int delay50)
{

	OutputReport[0] = 0;  //do not remove
	OutputReport[1] = delay1; //ch1
	OutputReport[2] = delay2; //ch2
	OutputReport[3] = delay3; //ch3
	OutputReport[4] = delay4; //ch4
	OutputReport[5] = delay5; //ch5

	OutputReport[6] = delay6; //ch6
	OutputReport[7] = delay7; //ch7
	OutputReport[8] = delay8; //ch8
	OutputReport[9] = delay9; //ch9
	OutputReport[10] = delay10; //ch10

	OutputReport[11] = delay11; //ch11
	OutputReport[12] = delay12; //ch12
	OutputReport[13] = delay13; //ch13
	OutputReport[14] = delay14; //ch14
	OutputReport[15] = delay15; //ch15

	OutputReport[16] = delay16; //ch16
	OutputReport[17] = delay17; //ch17
	OutputReport[18] = delay18; //ch18
	OutputReport[19] = delay19; //ch19
	OutputReport[20] = delay20; //ch20

	OutputReport[21] = delay21; //ch21
	OutputReport[22] = delay22; //ch22
	OutputReport[23] = delay23; //ch23
	OutputReport[24] = delay24; //ch24
	OutputReport[25] = delay25; //ch25

	OutputReport[26] = delay26; //ch26
	OutputReport[27] = delay27; //ch27
	OutputReport[28] = delay28; //ch28
	OutputReport[29] = delay29; //ch29
	OutputReport[30] = delay30; //ch30

	OutputReport[31] = delay31; //ch31
	OutputReport[32] = delay32; //ch32
	OutputReport[33] = delay33; //ch33
	OutputReport[34] = delay34; //ch34
	OutputReport[35] = delay35; //ch35

	OutputReport[36] = delay36; //ch36
	OutputReport[37] = delay37; //ch37
	OutputReport[38] = delay38; //ch38
	OutputReport[39] = delay39; //ch39
	OutputReport[40] = delay40; //ch40

	OutputReport[41] = delay41; //ch41
	OutputReport[42] = delay42; //ch42
	OutputReport[43] = delay43; //ch43
	OutputReport[44] = delay44; //ch44
	OutputReport[45] = delay45; //ch45

	OutputReport[46] = delay46; //ch46
	OutputReport[47] = delay47; //ch47
	OutputReport[48] = delay48; //ch48
	OutputReport[49] = delay49; //ch49
	OutputReport[50] = delay50; //ch50

	if(!WriteFile(DeviceHandle, OutputReport, Capabilities.OutputReportByteLength, &BytesWritten, NULL)) {
//		CloseHandle(DeviceHandle);
		connected = false;
		return false;
	}

	return true;
}