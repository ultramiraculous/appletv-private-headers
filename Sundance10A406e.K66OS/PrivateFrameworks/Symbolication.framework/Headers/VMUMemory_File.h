/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

#import "VMUMemory_Base.h"
#import "Symbolication-Structs.h"
#import "VMUMemory.h"

@class NSString, NSMutableDictionary, VMUArchitecture, NSDate;

@interface VMUMemory_File : VMUMemory_Base <VMUMemory> {
	char *_mappedAddress;	// 4 = 0x4
	unsigned long _mappedSize;	// 8 = 0x8
	NSDate *_lastModifiedTimestamp;	// 12 = 0xc
	VMURange _addressRange;	// 16 = 0x10
	VMURange _fileRange;	// 32 = 0x20
	NSString *_path;	// 48 = 0x30
	VMUArchitecture *_architecture;	// 52 = 0x34
	NSMutableDictionary *_sharedCacheMap;	// 56 = 0x38
}
@property(readonly, assign) VMURange addressRange;	// G=0x36dcaea9; converted property
@property(readonly, retain) VMUArchitecture *architecture;	// G=0x36dcaecd; converted property
@property(readonly, retain) NSDate *lastModifiedTimestamp;	// G=0x36dca8f9; converted property
@property(readonly, retain) NSString *path;	// G=0x36dca8e9; converted property
+ (id)headerFromSharedCacheWithPath:(id)path;	// 0x36dca511
+ (id)headerWithPath:(id)path;	// 0x36dca469
+ (id)memoryWithPath:(id)path;	// 0x36dca6d5
+ (id)memoryWithPath:(id)path fileRange:(VMURange)range mapToAddress:(unsigned long long)address architecture:(id)architecture;	// 0x36dca751
- (id)initWithPath:(id)path fileRange:(VMURange)range mapToAddress:(unsigned long long)address architecture:(id)architecture;	// 0x36dca7c1
// converted property getter: - (VMURange)addressRange;	// 0x36dcaea9
// converted property getter: - (id)architecture;	// 0x36dcaecd
- (void)buildSharedCacheMap;	// 0x36dca909
- (void)dealloc;	// 0x36dcad45
- (id)description;	// 0x36dcacb1
- (void)finalize;	// 0x36dcae51
- (BOOL)isContiguous;	// 0x36dcaedd
// converted property getter: - (id)lastModifiedTimestamp;	// 0x36dca8f9
- (BOOL)map;	// 0x36dcaa5d
- (id)memoryAtAddress:(unsigned long long)address maxSize:(unsigned long long)size;	// 0x36dcaee1
- (id)memoryFromSubRange:(VMURange)subRange mapToAddress:(unsigned long long)address architecture:(id)architecture;	// 0x36dcb079
// converted property getter: - (id)path;	// 0x36dca8e9
- (unsigned long long)sharedCacheHeaderOffsetForPath:(id)path;	// 0x36dcaa25
- (id)swappedView;	// 0x36dcb28d
- (id)view;	// 0x36dcb22d
@end

