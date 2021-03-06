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
@property(readonly, assign) VMURange addressRange;	// G=0x3558e969; converted property
@property(readonly, retain) VMUArchitecture *architecture;	// G=0x3558e98d; converted property
+ (id)memoryWithData:(char *)data addressRange:(VMURange)range architecture:(id)architecture;	// 0x3558e885
- (id)initWithData:(char *)data addressRange:(VMURange)range architecture:(id)architecture;	// 0x3558e8e1
// converted property getter: - (VMURange)addressRange;	// 0x3558e969
// converted property getter: - (id)architecture;	// 0x3558e98d
- (void)dealloc;	// 0x3558ee25
- (id)description;	// 0x3558edad
- (void)finalize;	// 0x3558eecd
- (BOOL)isContiguous;	// 0x3558e99d
- (id)memoryAtAddress:(unsigned long long)address maxSize:(unsigned long long)size;	// 0x3558e9a1
- (id)memoryFromSubRange:(VMURange)subRange mapToAddress:(unsigned long long)address architecture:(id)architecture;	// 0x3558eb39
- (id)swappedView;	// 0x3558ed4d
- (id)view;	// 0x3558eced
@end

