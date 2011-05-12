/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import "CMMapper.h"

@class PDSlideBase;

__attribute__((visibility("hidden")))
@interface PMSlideMapper : CMMapper {
@private
	PDSlideBase *mSlide;	// 8 = 0x8
	CGRect mRect;	// 12 = 0xc
}
- (id)initWithPDSlide:(id)pdslide slideRect:(CGRect)rect parent:(id)parent;	// 0x31974bc5
- (id)defaultTheme;	// 0x3195da15
- (void)mapAt:(id)at withState:(id)state;	// 0x31974c25
- (void)mapBackgroundAt:(id)at recursive:(BOOL)recursive withState:(id)state;	// 0x31975129
- (void)mapDrawablesAt:(id)at withState:(id)state;	// 0x31975915
- (void)mapMasterGraphicsAt:(id)at withState:(id)state;	// 0x319757c1
- (void)mapMasterSlideAt:(id)at withState:(id)state;	// 0x31974fbd
- (id)slideName;	// 0x31aa7769
- (CGRect)slideRect;	// 0x31aa774d
- (id)styleMatrix;	// 0x31a6dfc1
@end
