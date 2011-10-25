/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"

@class BRReflectionControl, BRTextControl, BRImageControl, BRSyncProgressControl;

@interface BRImageAndSyncingPreviewController : BRControl {
@private
	BRImageControl *_imageControl;	// 48 = 0x30
	BRReflectionControl *_reflectionControl;	// 52 = 0x34
	BRSyncProgressControl *_syncProgressControl;	// 56 = 0x38
	BRTextControl *_statusTextControl;	// 60 = 0x3c
	BOOL _hasProgress;	// 64 = 0x40
}
@property(readonly, retain) BRImageControl *imageControl;	// G=0x33adfbb9; converted property
- (id)init;	// 0x33adf825
- (void)_startSyncingProgress:(id)progress;	// 0x33adfde9
- (void)_stopSyncingProgress:(id)progress;	// 0x33adff6d
- (void)_updateProgress:(id)progress;	// 0x33adfe81
- (void)controlWasActivated;	// 0x33adfbc9
- (void)dealloc;	// 0x33adf8dd
// converted property getter: - (id)imageControl;	// 0x33adfbb9
- (void)layoutSubcontrols;	// 0x33adf981
- (void)setHasSyncProgress:(BOOL)progress;	// 0x33adfc3d
- (void)setImage:(id)image;	// 0x33adfb75
- (void)setReflectionAmount:(float)amount;	// 0x33adfdc9
- (void)setReflectionOffset:(float)offset;	// 0x33adfd75
- (void)setStatusMessage:(id)message;	// 0x33adfd0d
@end

