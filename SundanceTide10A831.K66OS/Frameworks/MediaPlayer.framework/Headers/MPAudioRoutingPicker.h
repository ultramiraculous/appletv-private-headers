/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MPAudioDeviceControllerDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"
#import "MediaPlayer-Structs.h"
#import <UIAlertView.h> // Unknown library

@class NSArray, MPAudioDeviceController;

@interface MPAudioRoutingPicker : UIAlertView <MPAudioDeviceControllerDelegate, UITableViewDataSource, UITableViewDelegate> {
	MPAudioDeviceController *_audioDeviceController;	// 192 = 0xc0
	BOOL _ignoringInteractionEvents;	// 196 = 0xc4
	NSArray *_routes;	// 200 = 0xc8
}
- (id)initWithAVPlayer:(id)avplayer;	// 0x36f1cd51
- (BOOL)_pickRouteAtIndex:(unsigned)index withPassword:(id)password;	// 0x36f1d4f9
- (void)audioDeviceControllerAudioRoutesChanged:(id)changed;	// 0x36f1cf59
- (void)dealloc;	// 0x36f1cef9
- (BOOL)requiresPortraitOrientation;	// 0x36f1d4f5
- (void)setAVPlayer:(id)player;	// 0x36f1cead
- (id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;	// 0x36f1d029
- (void)tableView:(id)view didSelectRowAtIndexPath:(id)indexPath;	// 0x36f1d149
- (int)tableView:(id)view numberOfRowsInSection:(int)section;	// 0x36f1cfb9
- (id)tableView:(id)view willSelectRowAtIndexPath:(id)indexPath;	// 0x36f1d105
- (void)willMoveToSuperview:(id)superview;	// 0x36f1d455
@end

