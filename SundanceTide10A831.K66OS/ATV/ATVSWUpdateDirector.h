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
+ (void)setSingleton:(id)singleton;	// 0x24b525
+ (id)singleton;	// 0x24b515
- (id)init;	// 0x24b549
- (void).cxx_destruct;	// 0x24bdd5
- (id)_errorWithTextForError:(id)error;	// 0x24cfe9
- (void)_playbackInitiated:(id)initiated;	// 0x24ccc9
- (id)_readMAAssetServerURL;	// 0x24d5d5
- (BOOL)_setAdvancedOptions;	// 0x24e639
- (BOOL)_setAppleConnectID;	// 0x24dded
- (BOOL)_setAssetServerURL;	// 0x24d715
- (BOOL)_setPersonalizationServerURL;	// 0x24da11
- (void)_setStep2ImagePath;	// 0x24c9bd
- (void)_showDownloadAndApplyConfirmationDialog;	// 0x24cd99
- (void)_showNoUpdatesDialog:(BOOL)dialog;	// 0x24cee1
- (void)_stopBackgroundProcessing:(id)processing;	// 0x24cd31
- (void)_updateAppleSucceeded:(id)succeeded;	// 0x24cc21
- (void)_updateApplyFailed:(id)failed;	// 0x24ca25
- (void)_updateApplyStarted:(id)started;	// 0x24c73d
- (void)_updateCheckFinished:(id)finished;	// 0x24be09
- (void)_updateDownloadFinished:(id)finished;	// 0x24c0e5
- (void)_writeMAAssetServerURL:(id)url;	// 0x24d639
- (void)cancelUpdates;	// 0x24bd61
- (void)dealloc;	// 0x24b7b5
- (BOOL)isUpdateCheckInProgress;	// 0x24bd8d
- (BOOL)isUpdateDownloadInProgress;	// 0x24bdb1
- (void)startAutomaticUpdateCheck;	// 0x24bcdd
- (void)startDownloadAndApply;	// 0x24bd35
- (void)startManualUpdateCheck:(BOOL)check;	// 0x24b821
- (void)startRestore;	// 0x24bd09
@end
