/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIColor.h"


__attribute__((visibility("hidden")))
@interface UIDeviceRGBColor : UIColor {
	float redComponent;	// 8 = 0x8
	float greenComponent;	// 12 = 0xc
	float blueComponent;	// 16 = 0x10
	float alphaComponent;	// 20 = 0x14
	CGColorRef cachedColor;	// 24 = 0x18
}
@property(readonly, assign) float alphaComponent;	// G=0x31cb2295; converted property
- (id)initWithCGColor:(CGColorRef)cgcolor;	// 0x31c29df5
- (id)initWithHue:(float)hue saturation:(float)saturation brightness:(float)brightness alpha:(float)alpha;	// 0x31c44379
- (id)initWithRed:(float)red green:(float)green blue:(float)blue alpha:(float)alpha;	// 0x31bf91fd
- (CGColorRef)CGColor;	// 0x31bde809
- (CGColorRef)_createCGColorWithAlpha:(float)alpha;	// 0x31bf94b1
- (BOOL)_getWhite:(float *)white alpha:(float *)alpha;	// 0x31caf1b1
// converted property getter: - (float)alphaComponent;	// 0x31cb2295
- (id)colorSpaceName;	// 0x31c4afd5
- (id)colorWithAlphaComponent:(float)alphaComponent;	// 0x31cb22a5
- (id)copyWithZone:(NSZone *)zone;	// 0x31e29615
- (void)dealloc;	// 0x31c13949
- (id)description;	// 0x31d3a899
- (BOOL)getHue:(float *)hue saturation:(float *)saturation brightness:(float *)brightness alpha:(float *)alpha;	// 0x31c4411d
- (BOOL)getRed:(float *)red green:(float *)green blue:(float *)blue alpha:(float *)alpha;	// 0x31c96031
- (unsigned)hash;	// 0x31c51ff9
- (BOOL)isEqual:(id)equal;	// 0x31c46ef9
- (void)set;	// 0x31bde7d1
- (void)setFill;	// 0x31c9c75d
- (void)setStroke;	// 0x31e29629
@end

