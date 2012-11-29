/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

#import "VMUHeader.h"

@class NSString, NSArray, NSDate;
@protocol VMUMemory;

@interface VMUMachOHeader : VMUHeader {
	NSString *_name;	// 4 = 0x4
	NSString *_path;	// 8 = 0x8
	NSString *_dsymPath;	// 12 = 0xc
	NSDate *_timestamp;	// 16 = 0x10
	id<VMUMemory> _memory;	// 20 = 0x14
	unsigned long long _address;	// 24 = 0x18
	unsigned long long _linkEditBase;	// 32 = 0x20
	NSArray *_loadCommands;	// 40 = 0x28
	long long _vmaddrSlide;	// 44 = 0x2c
	unsigned _fileType;	// 52 = 0x34
	unsigned _flags;	// 56 = 0x38
}
@property(readonly, assign) unsigned long long address;	// G=0x34d5df2d; converted property
@property(retain) NSString *dsymPath;	// G=0x34d5dddd; S=0x34d5de75; converted property
@property(readonly, assign) unsigned fileType;	// G=0x34d5df75; converted property
@property(readonly, assign) unsigned flags;	// G=0x34d5df85; converted property
@property(readonly, assign) unsigned long long linkEditBase;	// G=0x34d5df45; converted property
@property(readonly, retain) NSArray *loadCommands;	// G=0x34d5df1d; converted property
@property(retain) NSString *name;	// G=0x34d5ddbd; S=0x34d5ddfd; converted property
@property(retain) NSString *path;	// G=0x34d5ddcd; S=0x34d5de39; converted property
@property(retain) NSDate *timestamp;	// G=0x34d5dded; S=0x34d5deb1; converted property
@property(readonly, assign) long long vmaddrSlide;	// G=0x34d5df5d; converted property
// converted property getter: - (unsigned long long)address;	// 0x34d5df2d
- (id)architecture;	// 0x34d5defd
- (id)commpage;	// 0x34d5e945
- (unsigned)compatibilityVersion;	// 0x34d5e7e5
- (unsigned)currentVersion;	// 0x34d5e74d
- (void)dealloc;	// 0x34d5ef11
- (id)description;	// 0x34d5ee9d
// converted property getter: - (id)dsymPath;	// 0x34d5dddd
- (id)dyLinkerPath;	// 0x34d5e6b5
- (id)dySymbolTable;	// 0x34d5e639
// converted property getter: - (unsigned)fileType;	// 0x34d5df75
// converted property getter: - (unsigned)flags;	// 0x34d5df85
- (BOOL)isCommpage;	// 0x34d5e915
- (BOOL)isFromSharedCache;	// 0x34d5df95
- (BOOL)isMachO;	// 0x34d5dfa9
- (BOOL)isProtected;	// 0x34d5eafd
// converted property getter: - (unsigned long long)linkEditBase;	// 0x34d5df45
// converted property getter: - (id)loadCommands;	// 0x34d5df1d
- (id)memory;	// 0x34d5deed
// converted property getter: - (id)name;	// 0x34d5ddbd
// converted property getter: - (id)path;	// 0x34d5ddcd
- (id)regions;	// 0x34d5e12d
- (id)sections;	// 0x34d5e061
- (id)segmentAddresses;	// 0x34d5eb95
- (id)segmentNamed:(id)named;	// 0x34d5dfad
// converted property setter: - (void)setDsymPath:(id)path;	// 0x34d5de75
// converted property setter: - (void)setName:(id)name;	// 0x34d5ddfd
// converted property setter: - (void)setPath:(id)path;	// 0x34d5de39
// converted property setter: - (void)setTimestamp:(id)timestamp;	// 0x34d5deb1
- (id)signature;	// 0x34d5ed25
- (id)symbolTable;	// 0x34d5e5bd
// converted property getter: - (id)timestamp;	// 0x34d5dded
- (id)uuid;	// 0x34d5e87d
// converted property getter: - (long long)vmaddrSlide;	// 0x34d5df5d
@end
