/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"

@class BRDropShadowControl, BRListControl;

__attribute__((visibility("hidden")))
@interface BRBoxListControl : BRControl {
	BRListControl *_list;	// 80 = 0x50
	BRDropShadowControl *_shadow;	// 84 = 0x54
}
@property(retain) id providers;	// G=0x2988b5; S=0x298879; converted property
- (id)init;	// 0x2985d5
- (void)dealloc;	// 0x2987d5
- (void)layoutSubcontrols;	// 0x2988f5
- (float)listHeightToMaximum:(float)maximum;	// 0x2988d5
// converted property getter: - (id)providers;	// 0x2988b5
- (void)setProvider:(id)provider;	// 0x298839
// converted property setter: - (void)setProviders:(id)providers;	// 0x298879
@end

