/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import "EDSheet.h"

@class CHDChart;

__attribute__((visibility("hidden")))
@interface EDChartSheet : EDSheet {
@private
	CHDChart *mMainChart;	// 60 = 0x3c
	bool mIsBoundsSet;	// 64 = 0x40
	CGRect mBounds;	// 68 = 0x44
}
@property(assign) CGRect bounds;	// G=0x356b3699; S=0x356b2fb9; converted property
@property(retain) id mainChart;	// G=0x356b3839; S=0x356b35ad; converted property
- (void)addDrawable:(id)drawable;	// 0x356b52c1
- (bool)areBoundsSet;	// 0x3572de0d
// converted property getter: - (CGRect)bounds;	// 0x356b3699
// converted property getter: - (id)mainChart;	// 0x356b3839
// converted property setter: - (void)setBounds:(CGRect)bounds;	// 0x356b2fb9
// converted property setter: - (void)setMainChart:(id)chart;	// 0x356b35ad
- (void)teardown;	// 0x3565b831
@end

