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
}
+ (void)setSingleton:(id)singleton;	// 0x23bd85
+ (id)singleton;	// 0x23bd75
- (id)init;	// 0x23bda9
- (void).cxx_destruct;	// 0x23c60d
- (id)_errorWithTextForError:(id)error;	// 0x23d6b9
- (void)_playbackInitiated:(id)initiated;	// 0x23d399
- (id)_readMAAssetServerURL;	// 0x23dca5
- (BOOL)_setAdvancedOptions;	// 0x23ed09
- (BOOL)_setAppleConnectID;	// 0x23e4bd
- (BOOL)_setAssetServerURL;	// 0x23dde5
- (BOOL)_setPersonalizationServerURL;	// 0x23e0e1
- (void)_setStep2ImagePath;	// 0x23d1d5
- (void)_showDownloadAndApplyConfirmationDialog;	// 0x23d469
- (void)_showNoUpdatesDialog:(BOOL)dialog;	// 0x23d5b1
- (void)_stopBackgroundProcessing:(id)processing;	// 0x23d401
- (void)_updateApplyFailed:(id)failed;	// 0x23d23d
- (void)_updateApplyStarted:(id)started;	// 0x23cf75
- (void)_updateCheckFinished:(id)finished;	// 0x23c641
- (void)_updateDownloadFinished:(id)finished;	// 0x23c91d
- (void)_writeMAAssetServerURL:(id)url;	// 0x23dd09
- (void)cancelUpdates;	// 0x23c599
- (void)dealloc;	// 0x23bfed
- (BOOL)isUpdateCheckInProgress;	// 0x23c5c5
- (BOOL)isUpdateDownloadInProgress;	// 0x23c5e9
- (void)startAutomaticUpdateCheck;	// 0x23c515
- (void)startDownloadAndApply;	// 0x23c56d
- (void)startManualUpdateCheck:(BOOL)check;	// 0x23c059
- (void)startRestore;	// 0x23c541
@end

