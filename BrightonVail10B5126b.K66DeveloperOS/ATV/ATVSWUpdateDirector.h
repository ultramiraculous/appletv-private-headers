/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRSingleton.h"

@class ATVRebootWaitController, ATVSWUpdateEngine;

__attribute__((visibility("hidden")))
@interface ATVSWUpdateDirector : BRSingleton {
	ATVSWUpdateEngine *_engine;	// 4 = 0x4
	ATVRebootWaitController *_dialog;	// 8 = 0x8
	BOOL _airPlayEnabledBeforeUpdate;	// 12 = 0xc
}
+ (void)setSingleton:(id)singleton;	// 0x256511
+ (id)singleton;	// 0x256501
- (id)init;	// 0x256535
- (void).cxx_destruct;	// 0x256dc1
- (id)_errorWithTextForError:(id)error;	// 0x258031
- (void)_playbackInitiated:(id)initiated;	// 0x257cf9
- (id)_readMAAssetServerURL;	// 0x25861d
- (BOOL)_setAdvancedOptions;	// 0x259681
- (BOOL)_setAppleConnectID;	// 0x258e35
- (BOOL)_setAssetServerURL;	// 0x25875d
- (BOOL)_setPersonalizationServerURL;	// 0x258a59
- (void)_setStep2ImagePath;	// 0x2579e1
- (void)_showDownloadAndApplyConfirmationDialog:(BOOL)dialog;	// 0x257dc9
- (void)_showNoUpdatesDialog:(BOOL)dialog;	// 0x257f29
- (void)_stopBackgroundProcessing:(id)processing;	// 0x257d61
- (void)_updateAppleSucceeded:(id)succeeded;	// 0x257c51
- (void)_updateApplyFailed:(id)failed;	// 0x257a49
- (void)_updateApplyStarted:(id)started;	// 0x257761
- (void)_updateCheckFinished:(id)finished;	// 0x256df5
- (void)_updateDownloadFinished:(id)finished;	// 0x25710d
- (void)_writeMAAssetServerURL:(id)url;	// 0x258681
- (void)cancelUpdates;	// 0x256d4d
- (void)dealloc;	// 0x2567a1
- (BOOL)isUpdateCheckInProgress;	// 0x256d79
- (BOOL)isUpdateDownloadInProgress;	// 0x256d9d
- (void)startAutomaticUpdateCheck;	// 0x256cc9
- (void)startDownloadAndApply;	// 0x256d21
- (void)startManualUpdateCheck:(BOOL)check;	// 0x25680d
- (void)startRestore;	// 0x256cf5
@end

