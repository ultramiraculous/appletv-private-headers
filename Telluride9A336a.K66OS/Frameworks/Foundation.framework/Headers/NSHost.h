/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <NSObject.h> // Unknown library

@class NSArray, __NSHostExtraIvars;

@interface NSHost : NSObject {
@private
	NSArray *names;	// 4 = 0x4
	NSArray *addresses;	// 8 = 0x8
	id reserved;	// 12 = 0xc
}
@property(readonly, retain) NSArray *addresses;	// G=0x336be919; converted property
@property(readonly, retain) NSArray *names;	// G=0x336be719; converted property
@property(assign, nonatomic) __NSHostExtraIvars *reserved;	// G=0x336bea65; S=0x336bea75; @synthesize
+ (id)currentHost;	// 0x336bd049
+ (void)flushHostCache;	// 0x336bea61
+ (id)hostWithAddress:(id)address;	// 0x336bd0e1
+ (id)hostWithName:(id)name;	// 0x336bd095
+ (BOOL)isHostCacheEnabled;	// 0x336bea59
+ (void)setHostCacheEnabled:(BOOL)enabled;	// 0x336bea5d
- (id)initToResolve:(id)resolve as:(int)as;	// 0x336bcf69
- (void)__resolveWithFlags:(int)flags resultArray:(id)array handler:(id)handler;	// 0x336bd4e5
- (id)address;	// 0x336be745
// converted property getter: - (id)addresses;	// 0x336be919
- (void)blockingResolveUntil:(int)until;	// 0x336bd38d
- (void)dealloc;	// 0x336be9e5
- (id)description;	// 0x336be959
- (BOOL)isEqualToHost:(id)host;	// 0x336be465
- (id)localizedName;	// 0x336be945
- (id)name;	// 0x336be535
// converted property getter: - (id)names;	// 0x336be719
// declared property getter: - (id)reserved;	// 0x336bea65
- (void)resolve:(id)resolve;	// 0x336bd12d
- (void)resolveCurrentHostWithHandler:(id)handler;	// 0x336bdc2d
// declared property setter: - (void)setReserved:(id)reserved;	// 0x336bea75
@end

