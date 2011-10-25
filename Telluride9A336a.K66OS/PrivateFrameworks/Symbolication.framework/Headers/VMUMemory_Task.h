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
@property(readonly, assign) VMURange addressRange;	// G=0x30120801; converted property
@property(readonly, retain) VMUArchitecture *architecture;	// G=0x30120825; converted property
+ (id)memoryWithData:(char *)data addressRange:(VMURange)range architecture:(id)architecture;	// 0x301208d5
- (id)initWithData:(char *)data addressRange:(VMURange)range architecture:(id)architecture;	// 0x30120839
// converted property getter: - (VMURange)addressRange;	// 0x30120801
// converted property getter: - (id)architecture;	// 0x30120825
- (void)dealloc;	// 0x30120991
- (id)description;	// 0x30120a31
- (void)finalize;	// 0x30120931
- (BOOL)isContiguous;	// 0x30120835
- (id)memoryAtAddress:(unsigned long long)address maxSize:(unsigned long long)size;	// 0x30120d05
- (id)memoryFromSubRange:(VMURange)subRange mapToAddress:(unsigned long long)address architecture:(id)architecture;	// 0x30120b65
- (id)swappedView;	// 0x30120aad
- (id)view;	// 0x30120b09
@end

