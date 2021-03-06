/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library

@class NSMutableArray;

@interface OADPath : NSObject {
	CGSize mSize;	// 4 = 0x4
	NSMutableArray *mElements;	// 12 = 0xc
	int mFillMode;	// 16 = 0x10
	BOOL mStroked;	// 20 = 0x14
}
@property(assign) int fillMode;	// G=0x34a4f335; S=0x34990e59; converted property
@property(assign) CGSize size;	// G=0x34a4f31d; S=0x34940185; converted property
@property(assign) BOOL stroked;	// G=0x34940675; S=0x34940199; converted property
- (id)init;	// 0x34881f51
- (id).cxx_construct;	// 0x34881f4d
- (void)addElement:(id)element;	// 0x3488207d
- (void)dealloc;	// 0x348820dd
- (id)elementAtIndex:(unsigned)index;	// 0x34940d69
- (unsigned)elementCount;	// 0x3488209d
// converted property getter: - (int)fillMode;	// 0x34a4f335
// converted property setter: - (void)setFillMode:(int)mode;	// 0x34990e59
// converted property setter: - (void)setSize:(CGSize)size;	// 0x34940185
// converted property setter: - (void)setStroked:(BOOL)stroked;	// 0x34940199
// converted property getter: - (CGSize)size;	// 0x34a4f31d
// converted property getter: - (BOOL)stroked;	// 0x34940675
@end

