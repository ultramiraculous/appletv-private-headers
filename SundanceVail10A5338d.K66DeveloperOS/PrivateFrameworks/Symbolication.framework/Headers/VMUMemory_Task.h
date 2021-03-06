/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

#import "VMUMemory_Base.h"
#import "Symbolication-Structs.h"
#import "VMUMemory.h"

@class VMUArchitecture;

@interface VMUMemory_Task : VMUMemory_Base <VMUMemory> {
	char *_data;	// 4 = 0x4
	VMURange _addressRange;	// 8 = 0x8
	VMUArchitecture *_architecture;	// 24 = 0x18
}
@property(readonly, assign) VMURange addressRange;	// G=0x34c98979; converted property
@property(readonly, retain) VMUArchitecture *architecture;	// G=0x34c9899d; converted property
+ (id)memoryWithData:(char *)data addressRange:(VMURange)range architecture:(id)architecture;	// 0x34c98895
- (id)initWithData:(char *)data addressRange:(VMURange)range architecture:(id)architecture;	// 0x34c988f1
// converted property getter: - (VMURange)addressRange;	// 0x34c98979
// converted property getter: - (id)architecture;	// 0x34c9899d
- (void)dealloc;	// 0x34c98e35
- (id)description;	// 0x34c98dbd
- (void)finalize;	// 0x34c98edd
- (BOOL)isContiguous;	// 0x34c989ad
- (id)memoryAtAddress:(unsigned long long)address maxSize:(unsigned long long)size;	// 0x34c989b1
- (id)memoryFromSubRange:(VMURange)subRange mapToAddress:(unsigned long long)address architecture:(id)architecture;	// 0x34c98b49
- (id)swappedView;	// 0x34c98d5d
- (id)view;	// 0x34c98cfd
@end

