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
+ (id)blackColor;	// 0x3580bb39
+ (id)cmykColorFromReader:(xmlTextReader *)reader;	// 0x3580c3d5
+ (id)colorWithCalibratedRed:(float)calibratedRed green:(float)green blue:(float)blue;	// 0x3580bb5d
+ (void)readColorFromProcessor:(id)processor reader:(xmlTextReader *)reader;	// 0x3580bf29
+ (id)rgbColorFromReader:(xmlTextReader *)reader calibrated:(BOOL)calibrated;	// 0x3580c231
+ (const StateSpec *)stateForReading;	// 0x3580bb2d
+ (id)whiteColorFromReader:(xmlTextReader *)reader calibrated:(BOOL)calibrated;	// 0x3580c329
- (id)initWithCalibratedRed:(float)calibratedRed green:(float)green blue:(float)blue alpha:(float)alpha;	// 0x3580bbc5
- (float)alphaComponent;	// 0x3580bdb1
- (id)blendedColorWithFraction:(float)fraction ofColor:(id)color;	// 0x3580bdc1
- (float)blueComponent;	// 0x3580bda1
- (id)description;	// 0x3580bc55
- (void)getRed:(float *)red green:(float *)green blue:(float *)blue alpha:(float *)alpha;	// 0x3580bd09
- (float)greenComponent;	// 0x3580bd91
- (int)htmlBlue;	// 0x35852a01
- (int)htmlGreen;	// 0x358529d5
- (int)htmlRed;	// 0x358529a9
- (float)redComponent;	// 0x3580bd81
@end

