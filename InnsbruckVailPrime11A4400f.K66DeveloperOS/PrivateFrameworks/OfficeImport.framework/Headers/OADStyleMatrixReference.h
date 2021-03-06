/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import </libobjc.A.h>
#import "OfficeImport-Structs.h"
#import "NSCopying.h"

@class OADColor;

@interface OADStyleMatrixReference : NSObject <NSCopying> {
	unsigned long mMatrixIndex;	// 4 = 0x4
	OADColor *mColor;	// 8 = 0x8
}
@property(retain) id color;	// G=0x3180e24d; S=0x3180d791; converted property
@property(assign) unsigned long matrixIndex;	// G=0x3180e019; S=0x3180d781; converted property
+ (id)styleMatrixReferenceWithMatrixIndex:(unsigned long)matrixIndex color:(id)color;	// 0x318f3cfd
- (id)initWithMatrixIndex:(unsigned long)matrixIndex color:(id)color;	// 0x3186ce0d
- (void)applyToEffectsInProperties:(id)properties styleMatrix:(id)matrix;	// 0x318f3f79
- (void)applyToFillInProperties:(id)properties styleMatrix:(id)matrix;	// 0x318f3e49
- (void)applyToStrokeInProperties:(id)properties styleMatrix:(id)matrix;	// 0x318f3d49
// converted property getter: - (id)color;	// 0x3180e24d
- (id)copyWithZone:(NSZone *)zone;	// 0x31853961
- (void)dealloc;	// 0x31827061
// converted property getter: - (unsigned long)matrixIndex;	// 0x3180e019
// converted property setter: - (void)setColor:(id)color;	// 0x3180d791
// converted property setter: - (void)setMatrixIndex:(unsigned long)index;	// 0x3180d781
@end

