/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import "CMMapper.h"

@class PDSlideBase;

@interface PMSlideMapper : CMMapper {
	PDSlideBase *mSlide;	// 8 = 0x8
	CGRect mRect;	// 12 = 0xc
}
- (id)initWithPDSlide:(id)pdslide slideRect:(CGRect)rect parent:(id)parent;	// 0x36a3fb45
- (id).cxx_construct;	// 0x36a3fb41
- (id)defaultTheme;	// 0x36a45001
- (void)mapAt:(id)at withState:(id)state;	// 0x36a3fba5
- (void)mapBackgroundAt:(id)at recursive:(BOOL)recursive withState:(id)state;	// 0x36a401e5
- (void)mapDrawablesAt:(id)at withState:(id)state;	// 0x36a43241
- (void)mapMasterGraphicsAt:(id)at withState:(id)state;	// 0x36a41885
- (void)mapMasterSlideAt:(id)at withState:(id)state;	// 0x36a40079
- (id)slideName;	// 0x36bb12fd
- (CGRect)slideRect;	// 0x36bb131d
- (id)styleMatrix;	// 0x36b2dbe9
@end
