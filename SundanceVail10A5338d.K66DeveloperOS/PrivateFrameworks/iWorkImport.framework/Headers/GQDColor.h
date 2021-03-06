/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

#import "iWorkImport-Structs.h"
#import "GQDNameMappable.h"
#import <NSObject.h> // Unknown library


@interface GQDColor : NSObject <GQDNameMappable> {
	float mRed;	// 4 = 0x4
	float mGreen;	// 8 = 0x8
	float mBlue;	// 12 = 0xc
	float mAlpha;	// 16 = 0x10
}
+ (id)blackColor;	// 0x35078bc1
+ (id)cmykColorFromReader:(xmlTextReader *)reader;	// 0x3507945d
+ (id)colorWithCalibratedRed:(float)calibratedRed green:(float)green blue:(float)blue;	// 0x35078be5
+ (void)readColorFromProcessor:(id)processor reader:(xmlTextReader *)reader;	// 0x35078fb1
+ (id)rgbColorFromReader:(xmlTextReader *)reader calibrated:(BOOL)calibrated;	// 0x350792b9
+ (const StateSpec *)stateForReading;	// 0x35078bb5
+ (id)whiteColorFromReader:(xmlTextReader *)reader calibrated:(BOOL)calibrated;	// 0x350793b1
- (id)initWithCalibratedRed:(float)calibratedRed green:(float)green blue:(float)blue alpha:(float)alpha;	// 0x35078c4d
- (float)alphaComponent;	// 0x35078e39
- (id)blendedColorWithFraction:(float)fraction ofColor:(id)color;	// 0x35078e49
- (float)blueComponent;	// 0x35078e29
- (id)description;	// 0x35078cdd
- (void)getRed:(float *)red green:(float *)green blue:(float *)blue alpha:(float *)alpha;	// 0x35078d91
- (float)greenComponent;	// 0x35078e19
- (int)htmlBlue;	// 0x350bee01
- (int)htmlGreen;	// 0x350bedd5
- (int)htmlRed;	// 0x350beda9
- (float)redComponent;	// 0x35078e09
@end

