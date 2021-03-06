/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIColor.h"
#import "UIKit-Structs.h"


__attribute__((visibility("hidden")))
@interface UIDeviceWhiteColor : UIColor {
@private
	float whiteComponent;	// 4 = 0x4
	float alphaComponent;	// 8 = 0x8
	CGColorRef cachedColor;	// 12 = 0xc
}
@property(readonly, assign) float alphaComponent;	// G=0x3069aae5; converted property
- (id)initWithCGColor:(CGColorRef)cgcolor;	// 0x305da1d5
- (id)initWithWhite:(float)white alpha:(float)alpha;	// 0x305936c1
- (CGColorRef)CGColor;	// 0x30593769
- (CGColorRef)_createCGColorWithAlpha:(float)alpha;	// 0x305937c9
// converted property getter: - (float)alphaComponent;	// 0x3069aae5
- (id)colorSpaceName;	// 0x306407c5
- (id)colorWithAlphaComponent:(float)alphaComponent;	// 0x3075a475
- (void)dealloc;	// 0x305a2f55
- (id)description;	// 0x3075a3f5
- (unsigned)hash;	// 0x3075a095
- (BOOL)isEqual:(id)equal;	// 0x3069aaf5
- (void)set;	// 0x305a787d
- (void)setFill;	// 0x305f0e15
- (void)setStroke;	// 0x305f0e3d
@end

