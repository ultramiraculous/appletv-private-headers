/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

#import "VMUHeader.h"

@class NSDate, NSString, NSArray;
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
@property(readonly, assign) unsigned long long address;	// G=0x328fb7d9; converted property
@property(retain) NSString *dsymPath;	// G=0x328fb689; S=0x328fb721; converted property
@property(readonly, assign) unsigned fileType;	// G=0x328fb821; converted property
@property(readonly, assign) unsigned flags;	// G=0x328fb831; converted property
@property(readonly, assign) unsigned long long linkEditBase;	// G=0x328fb7f1; converted property
@property(readonly, retain) NSArray *loadCommands;	// G=0x328fb7c9; converted property
@property(retain) NSString *name;	// G=0x328fb669; S=0x328fb6a9; converted property
@property(retain) NSString *path;	// G=0x328fb679; S=0x328fb6e5; converted property
@property(retain) NSDate *timestamp;	// G=0x328fb699; S=0x328fb75d; converted property
@property(readonly, assign) long long vmaddrSlide;	// G=0x328fb809; converted property
// converted property getter: - (unsigned long long)address;	// 0x328fb7d9
- (id)architecture;	// 0x328fb7a9
- (id)commpage;	// 0x328fc1e1
- (unsigned)compatibilityVersion;	// 0x328fc089
- (unsigned)currentVersion;	// 0x328fbff5
- (void)dealloc;	// 0x328fc7c1
- (id)description;	// 0x328fc74d
// converted property getter: - (id)dsymPath;	// 0x328fb689
- (id)dyLinkerPath;	// 0x328fbf61
- (id)dySymbolTable;	// 0x328fbee5
// converted property getter: - (unsigned)fileType;	// 0x328fb821
// converted property getter: - (unsigned)flags;	// 0x328fb831
- (BOOL)isCommpage;	// 0x328fc1b1
- (BOOL)isFromSharedCache;	// 0x328fb841
- (BOOL)isMachO;	// 0x328fb855
- (BOOL)isProtected;	// 0x328fc399
// converted property getter: - (unsigned long long)linkEditBase;	// 0x328fb7f1
// converted property getter: - (id)loadCommands;	// 0x328fb7c9
- (id)memory;	// 0x328fb799
// converted property getter: - (id)name;	// 0x328fb669
// converted property getter: - (id)path;	// 0x328fb679
- (id)regions;	// 0x328fb9dd
- (id)sections;	// 0x328fb911
- (id)segmentAddresses;	// 0x328fc435
- (id)segmentNamed:(id)named;	// 0x328fb859
// converted property setter: - (void)setDsymPath:(id)path;	// 0x328fb721
// converted property setter: - (void)setName:(id)name;	// 0x328fb6a9
// converted property setter: - (void)setPath:(id)path;	// 0x328fb6e5
// converted property setter: - (void)setTimestamp:(id)timestamp;	// 0x328fb75d
- (id)signature;	// 0x328fc5c9
- (id)symbolTable;	// 0x328fbe69
// converted property getter: - (id)timestamp;	// 0x328fb699
- (id)uuid;	// 0x328fc11d
// converted property getter: - (long long)vmaddrSlide;	// 0x328fb809
@end
