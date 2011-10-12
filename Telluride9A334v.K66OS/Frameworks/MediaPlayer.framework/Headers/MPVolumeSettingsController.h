/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "UITwoSidedAlertControllerDelegate.h"
#import <UITwoSidedAlertController.h> // Unknown library

@class NSString;

@interface MPVolumeSettingsController : UITwoSidedAlertController <UITwoSidedAlertControllerDelegate> {
	NSString *_audioCategory;	// 20 = 0x14
}
- (id)initWithAudioCategory:(id)audioCategory;	// 0x34e12ad1
- (void)audioRoutingPicker:(id)picker didSelectRouteAtIndex:(int)index;	// 0x34e12d41
- (id)createBackAlert;	// 0x34e12ccd
- (id)createFrontAlert;	// 0x34e12b85
- (void)dealloc;	// 0x34e12b39
- (void)twoSidedAlertControllerDidDismiss:(id)twoSidedAlertController;	// 0x34e12d05
@end

