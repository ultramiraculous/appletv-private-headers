/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OADDash.h"
#import "OfficeImport-Structs.h"

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface OADCustomDash : OADDash {
@private
	NSMutableArray *mStops;	// 12 = 0xc
	unsigned mAreStopsOverridden : 1;	// 16 = 0x10
}
@property(retain) id stops;	// G=0x34e246bd; S=0x34cc8e99; converted property
+ (id)defaultProperties;	// 0x34cc8e09
- (id)initWithDefaults;	// 0x34cc8e51
- (void)addStopWithDash:(float)dash space:(float)space;	// 0x34cc8f0d
- (BOOL)areStopsOverridden;	// 0x34e246ed
- (id)copyWithZone:(NSZone *)zone;	// 0x34e24649
- (float)dashAtIndex:(unsigned)index;	// 0x34cc905d
- (void)dealloc;	// 0x34ccc465
- (unsigned)hash;	// 0x34e24729
- (BOOL)isEqual:(id)equal;	// 0x34e24769
// converted property setter: - (void)setStops:(id)stops;	// 0x34cc8e99
- (float)spaceAtIndex:(unsigned)index;	// 0x34cc90a9
- (unsigned)stopCount;	// 0x34cc903d
// converted property getter: - (id)stops;	// 0x34e246bd
@end
