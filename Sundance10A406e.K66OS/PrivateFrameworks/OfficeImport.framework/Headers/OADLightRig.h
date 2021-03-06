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
@property(assign) int direction;	// G=0x350a935d; S=0x34fba7b1; converted property
@property(retain) id rotation;	// G=0x350a933d; S=0x34fba6b5; converted property
@property(assign) int type;	// G=0x350a934d; S=0x34fba749; converted property
- (id)init;	// 0x34fba659
- (id)copyWithZone:(NSZone *)zone;	// 0x350a92b1
- (void)dealloc;	// 0x34fbf8cd
// converted property getter: - (int)direction;	// 0x350a935d
- (unsigned)hash;	// 0x350a936d
- (BOOL)isEqual:(id)equal;	// 0x350a93b5
// converted property getter: - (id)rotation;	// 0x350a933d
// converted property setter: - (void)setDirection:(int)direction;	// 0x34fba7b1
// converted property setter: - (void)setRotation:(id)rotation;	// 0x34fba6b5
// converted property setter: - (void)setType:(int)type;	// 0x34fba749
// converted property getter: - (int)type;	// 0x350a934d
@end

