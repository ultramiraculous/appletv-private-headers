/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

#import "VMUMemory_Base.h"
#import "Symbolication-Structs.h"
#import "VMUMemory.h"

@class VMUMachTaskContainer, VMUArchitecture;

@interface VMUMemory_NonContiguousTask : VMUMemory_Base <VMUMemory> {
	VMUMachTaskContainer *_machTaskContainer;	// 4 = 0x4
	VMURange _addressRange;	// 8 = 0x8
	VMUArchitecture *_architecture;	// 24 = 0x18
}
@property(readonly, assign) VMURange addressRange;	// G=0x36dcbc49; converted property
@property(readonly, retain) VMUArchitecture *architecture;	// G=0x36dcbc6d; converted property
@property(readonly, retain) VMUMachTaskContainer *machTaskContainer;	// G=0x36dcbba1; converted property
+ (id)memoryWithMachTaskContainer:(id)machTaskContainer;	// 0x36dcba1d
+ (id)memoryWithMachTaskContainer:(id)machTaskContainer addressRange:(VMURange)range architecture:(id)architecture;	// 0x36dcba8d
+ (id)memoryWithPid:(int)pid;	// 0x36dcb915
+ (id)memoryWithPid:(int)pid addressRange:(VMURange)range architecture:(id)architecture;	// 0x36dcb9a5
- (id)initWithMachTaskContainer:(id)machTaskContainer addressRange:(VMURange)range architecture:(id)architecture;	// 0x36dcbae9
// converted property getter: - (VMURange)addressRange;	// 0x36dcbc49
// converted property getter: - (id)architecture;	// 0x36dcbc6d
- (void)dealloc;	// 0x36dcc7e5
- (id)description;	// 0x36dcc76d
- (BOOL)isContiguous;	// 0x36dcbc7d
// converted property getter: - (id)machTaskContainer;	// 0x36dcbba1
- (id)memoryAtAddress:(unsigned long long)address maxSize:(unsigned long long)size;	// 0x36dcbc81
- (id)memoryFromSubRange:(VMURange)subRange mapToAddress:(unsigned long long)address architecture:(id)architecture;	// 0x36dcc24d
- (VMURange)regionAtAddress:(unsigned long long)address minProtection:(int)protection;	// 0x36dcbbb1
- (id)swappedView;	// 0x36dcc729
- (id)view;	// 0x36dcc6e5
@end

