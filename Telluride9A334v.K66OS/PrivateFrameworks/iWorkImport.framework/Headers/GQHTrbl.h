/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

#import "iWorkImport-Structs.h"
#import <NSObject.h> // Unknown library


__attribute__((visibility("hidden")))
@interface GQHTrbl : NSObject {
@private
	int mTop;	// 4 = 0x4
	int mRight;	// 8 = 0x8
	int mBottom;	// 12 = 0xc
	int mLeft;	// 16 = 0x10
}
@property(assign) int bottom;	// G=0x32bfb51d; S=0x32bfb50d; converted property
@property(assign) int left;	// G=0x32bfb53d; S=0x32bfb52d; converted property
@property(assign) int right;	// G=0x32bfb4fd; S=0x32bfb4ed; converted property
@property(assign) int top;	// G=0x32bfb4dd; S=0x32bfb4cd; converted property
- (id)init;	// 0x32bfb54d
// converted property getter: - (int)bottom;	// 0x32bfb51d
- (CFStringRef)createStringRef;	// 0x32bfb5c1
// converted property getter: - (int)left;	// 0x32bfb53d
// converted property getter: - (int)right;	// 0x32bfb4fd
// converted property setter: - (void)setBottom:(int)bottom;	// 0x32bfb50d
// converted property setter: - (void)setLeft:(int)left;	// 0x32bfb52d
// converted property setter: - (void)setRight:(int)right;	// 0x32bfb4ed
// converted property setter: - (void)setTop:(int)top;	// 0x32bfb4cd
- (void)setTop:(int)top right:(int)right bottom:(int)bottom left:(int)left;	// 0x32bfb48d
// converted property getter: - (int)top;	// 0x32bfb4dd
@end
