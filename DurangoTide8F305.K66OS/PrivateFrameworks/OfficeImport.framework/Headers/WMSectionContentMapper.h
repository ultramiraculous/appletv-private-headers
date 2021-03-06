/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "CMMapper.h"

@class WDText;

__attribute__((visibility("hidden")))
@interface WMSectionContentMapper : CMMapper {
@private
	WDText *wdText;	// 8 = 0x8
}
- (id)initWithWDText:(id)wdtext parent:(id)parent;	// 0x3446af35
- (void)mapAt:(id)at withState:(id)state;	// 0x3446af75
- (void)mapTextFrameAt:(id)at withState:(id)state;	// 0x3449450d
- (void)mapTextFrameStyleTo:(id)to withState:(id)state;	// 0x344946f1
- (id)paragraphAtIndex:(int)index;	// 0x3446217d
- (void)updateTextFrameState:(id)state atIndex:(int)index;	// 0x34462069
@end

