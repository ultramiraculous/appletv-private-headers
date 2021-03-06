/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "PhotoController.h"

@class NSMutableDictionary, NSTimer;

__attribute__((visibility("hidden")))
@interface PhotoQueryController : PhotoController {
	NSMutableDictionary *_previews;	// 172 = 0xac
	BOOL _refreshData;	// 176 = 0xb0
	NSTimer *_deviceSleepHoldOffTimer;	// 180 = 0xb4
}
@property(assign, nonatomic) __weak NSTimer *deviceSleepHoldOffTimer;	// G=0x27a7ad; S=0x27a351; @synthesize=_deviceSleepHoldOffTimer
- (id)initWithMode:(int)mode dataServerID:(id)anId;	// 0x279101
- (void).cxx_destruct;	// 0x27a7cd
- (id)_createItemsQueryForCollection:(id)collection;	// 0x27a439
- (id)_previewKeyForIndexPath:(id)indexPath;	// 0x27a669
- (void)_selectedScreenSaverCollection:(id)collection;	// 0x27a6e5
- (void)_sendScreenSaverHoldOfNotification:(id)notification;	// 0x27a3e5
- (BOOL)dataClientUpdated:(id)updated;	// 0x279331
- (BOOL)dataQueryComplete:(id)complete;	// 0x279179
- (BOOL)dataServerConnectionChanged:(id)changed;	// 0x279569
// declared property getter: - (id)deviceSleepHoldOffTimer;	// 0x27a7ad
- (void)list:(id)list didFocusItemAtIndexPath:(id)indexPath;	// 0x2795b5
- (void)list:(id)list didSelectItemAtIndexPath:(id)indexPath;	// 0x2796e9
- (id)newPlayQueryForIndexPath:(id)indexPath;	// 0x279ff1
- (id)newPreviewQueryForIndexPath:(id)indexPath;	// 0x279b19
- (void)playQueryComplete:(id)complete;	// 0x27a161
- (BOOL)previewQueryComplete:(id)complete;	// 0x279f01
// declared property setter: - (void)setDeviceSleepHoldOffTimer:(id)timer;	// 0x27a351
- (void)wasPopped;	// 0x2792e9
@end

