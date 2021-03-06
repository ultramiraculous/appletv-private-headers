/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

#import </libobjc.A.h>

@class VMUMachTaskContainer, NSArray;
@protocol VMUMemory;

@interface VMUTask : NSObject {
	id<VMUMemory> _memory;	// 4 = 0x4
	VMUMachTaskContainer *_machTaskContainer;	// 8 = 0x8
	BOOL _isTranslated;	// 12 = 0xc
	NSArray *_headers;	// 16 = 0x10
}
@property(readonly, retain) NSArray *headers;	// G=0x3290c0a9; converted property
@property(readonly, assign) BOOL isTranslated;	// G=0x3290c049; converted property
+ (id)findDyldHeaderInMemory:(id)memory address:(unsigned long long)address;	// 0x3290bb01
+ (BOOL)pidIsTranslated:(int)translated;	// 0x3290baf9
+ (id)taskWithMachTaskContainer:(id)machTaskContainer;	// 0x3290bce1
- (id)initWithMachTaskContainer:(id)machTaskContainer;	// 0x3290bd1d
- (void)dealloc;	// 0x3290c0b9
// converted property getter: - (id)headers;	// 0x3290c0a9
// converted property getter: - (BOOL)isTranslated;	// 0x3290c049
- (id)memory;	// 0x3290c079
- (int)pid;	// 0x3290c059
- (unsigned)task;	// 0x3290c089
@end

