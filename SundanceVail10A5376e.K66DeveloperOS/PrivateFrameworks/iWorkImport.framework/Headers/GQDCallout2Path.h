/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

#import "iWorkImport-Structs.h"
#import "GQDPath.h"


@interface GQDCallout2Path : GQDPath {
	CGSize mSize;	// 8 = 0x8
	double mCornerRadius;	// 16 = 0x10
	CGPoint mTailPosition;	// 24 = 0x18
	double mTailSize;	// 32 = 0x20
	BOOL mTailAtCenter;	// 40 = 0x28
}
- (id).cxx_construct;	// 0x3585ae65
- (double)cornerRadius;	// 0x3585ae0d
- (CGPathRef)createBezierPath;	// 0x3585a979
- (int)readAttributesFromReader:(xmlTextReader *)reader processor:(id)processor;	// 0x3585ae69
- (CGSize)size;	// 0x3585adf5
- (BOOL)tailAtCenter;	// 0x3585ae55
- (CGPoint)tailCenter;	// 0x3585a815
- (CGPoint)tailPosition;	// 0x3585ae25
- (double)tailSize;	// 0x3585ae3d
@end
