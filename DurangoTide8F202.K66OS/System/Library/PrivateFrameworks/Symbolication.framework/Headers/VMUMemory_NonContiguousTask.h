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
@property(readonly, assign) VMURange addressRange;	// G=0x3016f05d; converted property
@property(readonly, retain) VMUArchitecture *architecture;	// G=0x3016f079; converted property
@property(readonly, retain) VMUMachTaskContainer *machTaskContainer;	// G=0x3016f04d; converted property
+ (id)memoryWithMachTaskContainer:(id)machTaskContainer;	// 0x3016ff09
+ (id)memoryWithMachTaskContainer:(id)machTaskContainer addressRange:(VMURange)range architecture:(id)architecture;	// 0x3016f1a9
+ (id)memoryWithPid:(int)pid;	// 0x3016f279
+ (id)memoryWithPid:(int)pid addressRange:(VMURange)range architecture:(id)architecture;	// 0x3016f205
- (id)initWithMachTaskContainer:(id)machTaskContainer addressRange:(VMURange)range architecture:(id)architecture;	// 0x3016f101
// converted property getter: - (VMURange)addressRange;	// 0x3016f05d
// converted property getter: - (id)architecture;	// 0x3016f079
- (void)dealloc;	// 0x3016f08d
- (id)description;	// 0x3016f385
- (BOOL)isContiguous;	// 0x3016f089
// converted property getter: - (id)machTaskContainer;	// 0x3016f04d
- (id)memoryAtAddress:(unsigned long long)address maxSize:(unsigned long long)size;	// 0x3016f8a1
- (id)memoryFromSubRange:(VMURange)subRange mapToAddress:(unsigned long long)address architecture:(id)architecture;	// 0x3016f405
- (VMURange)regionAtAddress:(unsigned long long)address minProtection:(int)protection;	// 0x3016fe79
- (id)swappedView;	// 0x3016f30d
- (id)view;	// 0x3016f349
@end

