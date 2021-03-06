/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "CMMapper.h"

@class WDSection;

@interface WMSectionMapper : CMMapper {
	WDSection *wdSection;	// 8 = 0x8
	float mTopMargin;	// 12 = 0xc
	float mLeftMargin;	// 16 = 0x10
	BOOL mBreakAtStart;	// 20 = 0x14
	BOOL mBreakAtEnd;	// 21 = 0x15
	BOOL mIsTitlePage;	// 22 = 0x16
}
@property(assign) float leftMargin;	// G=0x3503017d; S=0x3503016d; converted property
@property(assign) float topMargin;	// G=0x3503015d; S=0x3503014d; converted property
+ (BOOL)isContentEmpty:(id)empty;	// 0x34f53625
- (id)initWithWDSection:(id)wdsection breakAtStart:(BOOL)start breakAtEnd:(BOOL)end parent:(id)parent;	// 0x34f52d39
- (void)MapSectionStyleAt:(id)at;	// 0x34f53115
// converted property getter: - (float)leftMargin;	// 0x3503017d
- (void)mapAt:(id)at withState:(id)state;	// 0x34f52f05
- (void)mapFooterAt:(id)at withState:(id)state;	// 0x34f5971d
- (void)mapHeaderAt:(id)at withState:(id)state;	// 0x34f532f9
// converted property setter: - (void)setLeftMargin:(float)margin;	// 0x3503016d
// converted property setter: - (void)setTopMargin:(float)margin;	// 0x3503014d
// converted property getter: - (float)topMargin;	// 0x3503015d
@end

