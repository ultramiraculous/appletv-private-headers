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
+ (id)blackColor;	// 0x3244e7a1
+ (id)cmykColorFromReader:(xmlTextReader *)reader;	// 0x3244f03d
+ (id)colorWithCalibratedRed:(float)calibratedRed green:(float)green blue:(float)blue;	// 0x3244e7c5
+ (void)readColorFromProcessor:(id)processor reader:(xmlTextReader *)reader;	// 0x3244eb91
+ (id)rgbColorFromReader:(xmlTextReader *)reader calibrated:(BOOL)calibrated;	// 0x3244ee99
+ (const StateSpec *)stateForReading;	// 0x3244e795
+ (id)whiteColorFromReader:(xmlTextReader *)reader calibrated:(BOOL)calibrated;	// 0x3244ef91
- (id)initWithCalibratedRed:(float)calibratedRed green:(float)green blue:(float)blue alpha:(float)alpha;	// 0x3244e82d
- (float)alphaComponent;	// 0x3244ea19
- (id)blendedColorWithFraction:(float)fraction ofColor:(id)color;	// 0x3244ea29
- (float)blueComponent;	// 0x3244ea09
- (id)description;	// 0x3244e8bd
- (void)getRed:(float *)red green:(float *)green blue:(float *)blue alpha:(float *)alpha;	// 0x3244e971
- (float)greenComponent;	// 0x3244e9f9
- (int)htmlBlue;	// 0x324959a9
- (int)htmlGreen;	// 0x3249597d
- (int)htmlRed;	// 0x32495951
- (float)redComponent;	// 0x3244e9e9
@end
