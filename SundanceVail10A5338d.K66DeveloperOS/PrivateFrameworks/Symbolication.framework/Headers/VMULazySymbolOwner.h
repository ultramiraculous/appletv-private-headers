/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

#import <NSObject.h> // Unknown library
#import "Symbolication-Structs.h"

@class NSString, NSArray, NSDictionary;

@interface VMULazySymbolOwner : NSObject {
	NSString *_name;	// 4 = 0x4
	NSDictionary *_signature;	// 8 = 0x8
	NSArray *_regions;	// 12 = 0xc
	unsigned _flags;	// 16 = 0x10
}
@property(readonly, assign) unsigned flags;	// G=0x34ca804d; converted property
@property(readonly, retain) NSString *name;	// G=0x34ca7e55; converted property
@property(readonly, retain) NSArray *regions;	// G=0x34ca7e2d; converted property
@property(readonly, retain) NSDictionary *signature;	// G=0x34ca7e65; converted property
+ (id)lazySymbolOwnerWithName:(id)name signature:(id)signature regions:(id)regions flags:(unsigned)flags;	// 0x34ca7d31
- (id)initWithName:(id)name signature:(id)signature regions:(id)regions flags:(unsigned)flags;	// 0x34ca7d89
- (id)architecture;	// 0x34ca7ea1
- (BOOL)containsAddress:(unsigned long long)address;	// 0x34ca7ecd
- (void)dealloc;	// 0x34ca8189
- (id)description;	// 0x34ca811d
// converted property getter: - (unsigned)flags;	// 0x34ca804d
- (BOOL)hasRegionsForName:(id)name;	// 0x34ca7fb9
- (BOOL)isLazy;	// 0x34ca7e3d
- (BOOL)isProtected;	// 0x34ca7e41
// converted property getter: - (id)name;	// 0x34ca7e55
- (BOOL)overlapsAddressRange:(VMURange)range;	// 0x34ca7ef1
- (id)path;	// 0x34ca7e75
// converted property getter: - (id)regions;	// 0x34ca7e2d
// converted property getter: - (id)signature;	// 0x34ca7e65
- (void)slideToSegmentAddresses:(id)segmentAddresses;	// 0x34ca805d
- (BOOL)validate;	// 0x34ca8119
@end

