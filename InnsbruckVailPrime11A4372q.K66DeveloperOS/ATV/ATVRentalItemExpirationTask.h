/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <AppleTVServices/ATVBackgroundTask.h>

@class ATVDataItem;

__attribute__((visibility("hidden")))
@interface ATVRentalItemExpirationTask : ATVBackgroundTask {
	ATVDataItem *_item;	// 4 = 0x4
}
@property(assign, nonatomic) __weak ATVDataItem *item;	// G=0x1f805d; S=0x1f807d; @synthesize=_item
- (id)initWithDataItem:(id)dataItem;	// 0x1f7de9
- (void).cxx_destruct;	// 0x1f8091
// declared property getter: - (id)item;	// 0x1f805d
- (BOOL)perform;	// 0x1f7eb9
// declared property setter: - (void)setItem:(id)item;	// 0x1f807d
@end
