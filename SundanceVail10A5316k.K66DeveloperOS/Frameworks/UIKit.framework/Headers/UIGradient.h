/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import <NSObject.h> // Unknown library


@interface UIGradient : NSObject {
	XXStruct_iyXfGC *_values;	// 4 = 0x4
	float _height;	// 8 = 0x8
	CGShadingRef _shader;	// 12 = 0xc
}
- (id)initVerticalWithValues:(XXStruct_iyXfGC *)values;	// 0x301deab5
- (void)dealloc;	// 0x3025679d
- (void)fillRect:(CGRect)rect;	// 0x30256769
- (void)fillRect:(CGRect)rect inContext:(CGContextRef)context;	// 0x301deb65
@end

