/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRSelectionHandler.h"
#import "NSURLDownloadDelegate.h"
#import "BRSingleton.h"

@class NSDate, ATVRebootWaitController, NSMutableArray, NSError, NSLock, ATVSWUpdateRecord, NSString;

@interface ATVSWUpdateManager : BRSingleton <BRSelectionHandler, NSURLDownloadDelegate> {
@private
	BOOL _checkInProgress;	// 4 = 0x4
	BOOL _downloadInProgress;	// 5 = 0x5
	BOOL _applyInProgress;	// 6 = 0x6
	BOOL _singleFileDownloadInProgress;	// 7 = 0x7
	BOOL _automaticUpdateTriggered;	// 8 = 0x8
	BOOL _forceFullUpdate;	// 9 = 0x9
	BOOL _cancelRequested;	// 10 = 0xa
	BOOL _waitingForUserConfirmation;	// 11 = 0xb
	unsigned long long _amountDownloaded;	// 12 = 0xc
	NSDate *_downloadStartTime;	// 20 = 0x14
	NSError *_downloadError;	// 24 = 0x18
	ATVRebootWaitController *_updateProgressController;	// 28 = 0x1c
	ATVSWUpdateRecord *_pendingRecord;	// 32 = 0x20
	NSMutableArray *_licenses;	// 36 = 0x24
	BOOL _licenseAccepted;	// 40 = 0x28
	NSString *_updateURL;	// 44 = 0x2c
	NSLock *_accessLock;	// 48 = 0x30
}
+ (void)initialize;	// 0x32f97f25
+ (void)setSingleton:(id)singleton;	// 0x32f980c1
+ (id)singleton;	// 0x32f980b1
- (id)init;	// 0x32f97fbd
- (BOOL)_applyInProgress;	// 0x32f9a4e9
- (void)_applyUpdates;	// 0x32f9bebd
- (void)_checkStepFinishedWithInfo:(id)info;	// 0x32f9b0b5
- (void)_cleanUpFiles;	// 0x32f9acad
- (void)_collectAppleConnectID;	// 0x32f98e7d
- (BOOL)_constructUpdateURL:(BOOL)url;	// 0x32f98aa5
- (id)_downloadError;	// 0x32f9a619
- (id)_downloadFileForURL:(id)url error:(id *)error;	// 0x32f9aa0d
- (id)_downloadLicensesFromRecord:(id)record;	// 0x32f9aeed
- (void)_downloadStepFinishedWithInfo:(id)info;	// 0x32f9b205
- (id)_downloadUpdatePayloadsFromRecord:(id)record;	// 0x32f9adc9
- (BOOL)_downloadUpdates:(id *)updates;	// 0x32f9a741
- (BOOL)_downloadingAFile;	// 0x32f9a581
- (void)_errorDuringSoftwareUpdate:(id)update;	// 0x32f9c035
- (id)_getRetailType;	// 0x32f98c55
- (id)_getUpdateIPAddress;	// 0x32f98e21
- (void)_handleCheckStepFinished:(id)finished;	// 0x32f9b0fd
- (void)_handleDownloadStepFinished:(id)finished;	// 0x32f9b24d
- (id)_imagePathForUpdateProgress;	// 0x32f9c6e1
- (id)_localFileForURL:(id)url destFileName:(id)name error:(id *)error;	// 0x32f9aa49
- (id)_localFilePathForUpdateURL:(id)updateURL;	// 0x32f9ad51
- (void)_performCheckStep;	// 0x32f99aa5
- (void)_performDownloadStep;	// 0x32f9a055
- (void)_performMSUUpdateThreaded;	// 0x32f9c195
- (void)_playbackInitiated:(id)initiated;	// 0x32f9ba11
- (void)_sendCheckStartNotification;	// 0x32f9b071
- (void)_sendDownloadStartNotification;	// 0x32f9b1c1
- (void)_sendEmergencySpaceRequest:(id)request;	// 0x32f9b9a1
- (void)_sendProgressNotification;	// 0x32f9b7dd
- (void)_setApplyInProgress:(BOOL)progress;	// 0x32f9a535
- (void)_setCancelRequest:(BOOL)request;	// 0x32f9a6f5
- (void)_setCheckInProgress:(BOOL)progress;	// 0x32f9a451
- (void)_setDownloadAFile:(BOOL)file;	// 0x32f9a5cd
- (void)_setDownloadError:(id)error;	// 0x32f9a629
- (void)_setDownloadInProgress:(BOOL)progress;	// 0x32f9a49d
- (void)_showLicenseAgreements;	// 0x32f9bc55
- (int)_showModalConfirmation:(BOOL)confirmation;	// 0x32f9bb25
- (void)_showUpdateOptions;	// 0x32f99369
- (void)_updateProgressStatus:(id)status;	// 0x32f9bef9
- (BOOL)_wasCancelRequested;	// 0x32f9a6a9
- (void)cancelUpdates;	// 0x32f98899
- (void)clearDownloadedUpdates;	// 0x32f981b5
- (void)dealloc;	// 0x32f98001
- (void)download:(id)download didCreateDestination:(id)destination;	// 0x32f9bad9
- (void)download:(id)download didFailWithError:(id)error;	// 0x32f9baf1
- (void)download:(id)download didReceiveDataOfLength:(unsigned)length;	// 0x32f9ba5d
- (BOOL)download:(id)download shouldDecodeSourceDataOfMIMEType:(id)mimetype;	// 0x32f9bad5
- (void)download:(id)download willResumeWithResponse:(id)response fromByte:(long long)byte;	// 0x32f9ba59
- (id)download:(id)download willSendRequest:(id)request redirectResponse:(id)response;	// 0x32f9ba55
- (void)downloadDidBegin:(id)download;	// 0x32f9ba41
- (void)downloadDidFinish:(id)download;	// 0x32f9badd
- (BOOL)handleSelectionForControl:(id)control;	// 0x32f9831d
- (id)localUpdateFolderPath;	// 0x32f981e5
- (BOOL)startDownload;	// 0x32f986d9
- (BOOL)startExplicitUpdateCheck:(BOOL)check forceFullUpdate:(BOOL)update;	// 0x32f98379
- (void)startMonitoring;	// 0x32f980d1
- (void)startPeriodicUpdateCheck;	// 0x32f984d9
- (void)stopMonitoring;	// 0x32f980ed
- (BOOL)updateCheckInProgress;	// 0x32f980f1
- (BOOL)updateDownloadInProgress;	// 0x32f9813d
- (unsigned long long)updateDownloadSize;	// 0x32f98189
- (void)updatesPostponed;	// 0x32f982b9
@end

