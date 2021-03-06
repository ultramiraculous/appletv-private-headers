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
@property(readonly, assign) VMURange addressRange;	// G=0x34d61941; converted property
@property(readonly, retain) VMUArchitecture *architecture;	// G=0x34d61965; converted property
+ (id)memoryWithData:(char *)data addressRange:(VMURange)range architecture:(id)architecture;	// 0x34d6185d
- (id)initWithData:(char *)data addressRange:(VMURange)range architecture:(id)architecture;	// 0x34d618b9
// converted property getter: - (VMURange)addressRange;	// 0x34d61941
// converted property getter: - (id)architecture;	// 0x34d61965
- (void)dealloc;	// 0x34d61dfd
- (id)description;	// 0x34d61d85
- (void)finalize;	// 0x34d61ea5
- (BOOL)isContiguous;	// 0x34d61975
- (id)memoryAtAddress:(unsigned long long)address maxSize:(unsigned long long)size;	// 0x34d61979
- (id)memoryFromSubRange:(VMURange)subRange mapToAddress:(unsigned long long)address architecture:(id)architecture;	// 0x34d61b11
- (id)swappedView;	// 0x34d61d25
- (id)view;	// 0x34d61cc5
@end

