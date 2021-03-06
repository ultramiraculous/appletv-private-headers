/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library
#import "NSCopying.h"
#import "OfficeImport-Structs.h"

@class OADRotation3D;

@interface OADLightRig : NSObject <NSCopying> {
	OADRotation3D *mRotation;	// 4 = 0x4
	int mType;	// 8 = 0x8
	int mDirection;	// 12 = 0xc
}
@property(assign) int direction;	// G=0x31dd32ad; S=0x31ce4769; converted property
@property(retain) id rotation;	// G=0x31dd328d; S=0x31ce466d; converted property
@property(assign) int type;	// G=0x31dd329d; S=0x31ce4701; converted property
- (id)init;	// 0x31ce4611
- (id)copyWithZone:(NSZone *)zone;	// 0x31dd3201
- (void)dealloc;	// 0x31ce9885
// converted property getter: - (int)direction;	// 0x31dd32ad
- (unsigned)hash;	// 0x31dd32bd
- (BOOL)isEqual:(id)equal;	// 0x31dd3305
// converted property getter: - (id)rotation;	// 0x31dd328d
// converted property setter: - (void)setDirection:(int)direction;	// 0x31ce4769
// converted property setter: - (void)setRotation:(id)rotation;	// 0x31ce466d
// converted property setter: - (void)setType:(int)type;	// 0x31ce4701
// converted property getter: - (int)type;	// 0x31dd329d
@end

