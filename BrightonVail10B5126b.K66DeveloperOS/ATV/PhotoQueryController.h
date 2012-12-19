/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "PhotoController.h"

@class NSTimer, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface PhotoQueryController : PhotoController {
	NSMutableDictionary *_previews;	// 172 = 0xac
	BOOL _refreshData;	// 176 = 0xb0
	NSTimer *_deviceSleepHoldOffTimer;	// 180 = 0xb4
}
@property(assign, nonatomic) __weak NSTimer *deviceSleepHoldOffTimer;	// G=0x80ff5; S=0x80f35; @synthesize=_deviceSleepHoldOffTimer
- (id)initForScreenSaver:(BOOL)screenSaver dataServerID:(id)anId;	// 0x7fa91
- (void).cxx_destruct;	// 0x81015
- (id)_createItemsQueryForCollection:(id)collection;	// 0x80c85
- (id)_previewKeyForIndexPath:(id)indexPath;	// 0x80eb9
- (void)_sendScreenSaverHoldOfNotification:(id)notification;	// 0x80fa1
- (BOOL)dataClientUpdated:(id)updated;	// 0x7fcc9
- (BOOL)dataQueryComplete:(id)complete;	// 0x7fb11
- (BOOL)dataServerConnectionChanged:(id)changed;	// 0x7fef9
// declared property getter: - (id)deviceSleepHoldOffTimer;	// 0x80ff5
- (void)list:(id)list didFocusItemAtIndexPath:(id)indexPath;	// 0x7ff45
- (void)list:(id)list didSelectItemAtIndexPath:(id)indexPath;	// 0x80079
- (id)newPlayQueryForIndexPath:(id)indexPath;	// 0x80929
- (id)newPreviewQueryForIndexPath:(id)indexPath;	// 0x80461
- (void)playQueryComplete:(id)complete;	// 0x80a99
- (BOOL)previewQueryComplete:(id)complete;	// 0x80839
// declared property setter: - (void)setDeviceSleepHoldOffTimer:(id)timer;	// 0x80f35
- (void)wasPopped;	// 0x7fc81
@end
