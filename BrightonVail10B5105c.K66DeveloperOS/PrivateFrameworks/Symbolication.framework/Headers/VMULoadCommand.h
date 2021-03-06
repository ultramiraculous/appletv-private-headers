/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

#import <NSObject.h> // Unknown library


@interface VMULoadCommand : NSObject {
	unsigned long long _cmdSize;	// 4 = 0x4
	unsigned _command;	// 12 = 0xc
}
@property(readonly, assign) unsigned long long cmdSize;	// G=0x34ea31e1; converted property
+ (id)loadCommandWithMemory:(id)memory;	// 0x34ea2f91
- (id)initWithMemory:(id)memory;	// 0x34ea3159
// converted property getter: - (unsigned long long)cmdSize;	// 0x34ea31e1
- (BOOL)isDyLinker;	// 0x34ea3205
- (BOOL)isDySymTab;	// 0x34ea3201
- (BOOL)isIDDyLib;	// 0x34ea320d
- (BOOL)isLoadDyLib;	// 0x34ea3209
- (BOOL)isSegment;	// 0x34ea3211
- (BOOL)isSegment32;	// 0x34ea3215
- (BOOL)isSegment64;	// 0x34ea3219
- (BOOL)isSymTab;	// 0x34ea31fd
- (BOOL)isUUID;	// 0x34ea31f9
@end

