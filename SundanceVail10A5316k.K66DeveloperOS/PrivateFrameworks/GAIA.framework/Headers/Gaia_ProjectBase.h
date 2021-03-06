/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GAIA.framework/GAIA
 */

#import "GAIA-Structs.h"
#import <NSObject.h> // Unknown library

@protocol iGaia_Woodpecker, iGaia_GrapeCalUiControl, iGaia_GrapeHost;

@interface Gaia_ProjectBase : NSObject {
@private
	int stationId;	// 4 = 0x4
	BOOL serialNum[64];	// 8 = 0x8
	BOOL csvFileName[1024];	// 72 = 0x48
	iGaia_LogManager *lm;	// 1096 = 0x448
	iGaia_MultitouchDevice *mt;	// 1100 = 0x44c
	iGaia_SpecManager *sp;	// 1104 = 0x450
	id<iGaia_Woodpecker> wp;	// 1108 = 0x454
	id<iGaia_GrapeCalUiControl> sc;	// 1112 = 0x458
	id<iGaia_GrapeHost> grapehost;	// 1116 = 0x45c
	tGaia_SystemInfo *sysInfo;	// 1120 = 0x460
}
- (id)initWithSpecManager:(iGaia_SpecManager *)specManager;	// 0x3243e955
- (int)GetCbInfo:(unsigned char)info status:(char *)status failCnt:(char *)cnt;	// 0x3244005d
- (const char *)GetCsvFileName;	// 0x3243ed69
- (id)GetGrapeHost;	// 0x32440861
- (const iGaia_LogManager *)GetLogManager;	// 0x324406f1
- (const iGaia_MultitouchDevice *)GetMultitouchDevice;	// 0x32440799
- (id)GetScreenControl;	// 0x32440845
- (const char *)GetSerialNumber;	// 0x3243ecc5
- (const iGaia_SpecManager *)GetSpecManager;	// 0x3244080d
- (int)GetStationId;	// 0x3243ec01
- (const tGaia_SystemInfo *)GetSystemInfo;	// 0x3243f0b9
- (id)GetWoodpecker;	// 0x32440829
- (int)OpenLogFile:(const char *)file;	// 0x3243ee75
- (int)PrintSystemInfo:(char *)info;	// 0x3243fb99
- (int)PrintTestStart:(char *)start;	// 0x32440415
- (void)ResetMutitouchDevice;	// 0x3244070d
- (int)SetCb:(unsigned char)cb status:(unsigned char)status;	// 0x324402fd
- (int)SetCsvFileName:(const char *)name;	// 0x3243ece1
- (int)SetGrapeHost:(id)host;	// 0x3243ee35
- (int)SetLogRelay:(unsigned long)relay logSink:(id)sink;	// 0x3243ed85
- (int)SetScreenColor:(char *)color;	// 0x324415c1
- (int)SetScreenControl:(id)control;	// 0x3243edf5
- (int)SetScreenImage:(char *)image;	// 0x32441265
- (int)SetScreenMessage:(char *)message;	// 0x32441ea1
- (int)SetScreenUnitName:(char *)name;	// 0x32441b45
- (int)SetSerialNumber:(const char *)number;	// 0x3243ec1d
- (int)SetStationId:(int)anId;	// 0x3243ebc5
- (int)SetVerboseLevel:(char *)level;	// 0x3243efb9
- (int)SetWoodpecker:(id)woodpecker;	// 0x3243edb5
- (int)SpecGeneratePlist:(char *)plist;	// 0x32440b45
- (int)SpecInit:(char *)init;	// 0x3244087d
- (int)SpecList:(char *)list;	// 0x324409d5
- (void)dealloc;	// 0x3243eaf9
- (int)reboot:(char *)reboot;	// 0x32442549
- (int)shutdown:(char *)shutdown;	// 0x324425ad
@end

