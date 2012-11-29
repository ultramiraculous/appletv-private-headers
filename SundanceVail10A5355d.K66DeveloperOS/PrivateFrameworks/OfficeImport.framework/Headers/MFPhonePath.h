/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import "MFPath.h"


@interface MFPhonePath : MFPath {
	CGPathRef m_path;	// 4 = 0x4
	int m_state;	// 8 = 0x8
}
@property(readonly, assign) int state;	// G=0x31e78645; converted property
- (id)init;	// 0x31c4d431
- (id)initWithPath:(CGPathRef)path state:(int)state;	// 0x31cd6b1d
- (int)abort;	// 0x31e78659
- (void)appendBezierPath:(CGPathRef)path dc:(id)dc;	// 0x31d27d71
- (int)begin;	// 0x31d27ad5
- (int)closeFigure;	// 0x31d285ad
- (id)copyWithZone:(NSZone *)zone;	// 0x31cd6ab5
- (CGPoint)currentPoint;	// 0x31d285e5
- (void)dealloc;	// 0x31c5182d
- (int)end;	// 0x31d28675
- (int)fill:(id)fill;	// 0x31d28b5d
- (int)flatten;	// 0x31e78691
- (CGPathRef)getBezierPath;	// 0x31d28865
- (BOOL)isOpen;	// 0x31c4fd6d
// converted property getter: - (int)state;	// 0x31e78645
- (int)stroke:(id)stroke;	// 0x31d28fd5
- (int)widen:(id)widen;	// 0x31e786a9
@end
