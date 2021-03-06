/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OADFill.h"
#import "OfficeImport-Structs.h"

@class OADColor, OADPattern;

@interface OADPatternFill : OADFill {
	OADColor *mFgColor;	// 12 = 0xc
	BOOL mIsFgColorOverridden;	// 16 = 0x10
	OADColor *mBgColor;	// 20 = 0x14
	BOOL mIsBgColorOverridden;	// 24 = 0x18
	OADPattern *mPattern;	// 28 = 0x1c
	BOOL mIsPatternOverridden;	// 32 = 0x20
}
@property(retain) id bgColor;	// G=0x34c28a95; S=0x34b87de5; converted property
@property(retain) id fgColor;	// G=0x34c28a31; S=0x34b87d99; converted property
@property(retain) id pattern;	// G=0x34c28af9; S=0x34b87d4d; converted property
+ (id)defaultProperties;	// 0x34b87b99
- (id)initWithDefaults;	// 0x34b87be1
// converted property getter: - (id)bgColor;	// 0x34c28a95
- (id)copyWithZone:(NSZone *)zone;	// 0x34c288dd
- (void)dealloc;	// 0x34b8a389
// converted property getter: - (id)fgColor;	// 0x34c28a31
- (unsigned)hash;	// 0x34c28bd9
- (BOOL)isBgColorOverridden;	// 0x34c28ac5
- (BOOL)isEqual:(id)equal;	// 0x34ba1979
- (BOOL)isFgColorOverridden;	// 0x34c28a61
- (BOOL)isPatternOverridden;	// 0x34c28b29
- (id)namedImageDataWithBlipCollection:(id)blipCollection;	// 0x34c28c9d
// converted property getter: - (id)pattern;	// 0x34c28af9
// converted property setter: - (void)setBgColor:(id)color;	// 0x34b87de5
- (void)setColor:(id)color;	// 0x34c28b5d
// converted property setter: - (void)setFgColor:(id)color;	// 0x34b87d99
- (void)setParent:(id)parent;	// 0x34b87e31
// converted property setter: - (void)setPattern:(id)pattern;	// 0x34b87d4d
- (void)setStyleColor:(id)color;	// 0x34c28b6d
@end

