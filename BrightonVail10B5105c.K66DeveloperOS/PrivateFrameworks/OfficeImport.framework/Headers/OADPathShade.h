/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OADShade.h"
#import "OfficeImport-Structs.h"

@class OADRelativeRect;

@interface OADPathShade : OADShade {
	OADRelativeRect *mFillToRect;	// 12 = 0xc
	BOOL mIsFillToRectOverridden;	// 16 = 0x10
	int mType;	// 20 = 0x14
	BOOL mIsTypeOverridden;	// 24 = 0x18
}
@property(retain) id fillToRect;	// G=0x37a3a945; S=0x37982675; converted property
@property(assign) int type;	// G=0x37aeff85; S=0x37982655; converted property
+ (id)defaultProperties;	// 0x37982569
- (id)initWithDefaults;	// 0x379825b1
- (id)copyWithZone:(NSZone *)zone;	// 0x37a3a7e1
- (void)dealloc;	// 0x379abf4d
// converted property getter: - (id)fillToRect;	// 0x37a3a945
- (unsigned)hash;	// 0x37aeffe9
- (BOOL)isEqual:(id)equal;	// 0x37af0045
- (BOOL)isFillToRectOverridden;	// 0x37a3a975
- (BOOL)isTypeOverridden;	// 0x37aeffb5
// converted property setter: - (void)setFillToRect:(id)rect;	// 0x37982675
// converted property setter: - (void)setType:(int)type;	// 0x37982655
// converted property getter: - (int)type;	// 0x37aeff85
@end
