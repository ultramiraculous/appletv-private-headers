/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "CoreData-Structs.h"
#import <NSObject.h> // Unknown library


__attribute__((visibility("hidden")))
@interface NSExternalRefCountedData : NSObject {
@private
	int _cd_rc;	// 4 = 0x4
	int _externalReferenceCount;	// 8 = 0x8
	externalRefFlags_st _externalRefFlags;	// 12 = 0xc
	id _toManyMap;	// 16 = 0x10
	double _birth;	// 20 = 0x14
}
@property(readonly, assign) int externalReferenceCount;	// G=0x347bc991; converted property
@property(retain) id relationshipCaches;	// G=0x347bc9a1; S=0x347bcbad; converted property
@property(assign) double timestamp;	// G=0x34780bbd; S=0x347bc979; converted property
+ (id)allocWithZone:(NSZone *)zone;	// 0x347bca0d
- (id)initWithOptions:(unsigned)options andTimestamp:(double)timestamp;	// 0x347bc9b1
- (BOOL)_isDeallocating;	// 0x347bc975
- (BOOL)_tryRetain;	// 0x347bc971
- (void)dealloc;	// 0x347bcc09
- (int)decrementRefCount;	// 0x34783381
// converted property getter: - (int)externalReferenceCount;	// 0x347bc991
- (void)incrementExternalReferenceCount:(int)count;	// 0x347bcbf5
- (void)incrementRefCount;	// 0x3477d335
- (unsigned)options;	// 0x347bc98d
- (unsigned)optionsForKey:(id)key;	// 0x347bcb79
- (id)relatedIDsForKey:(id)key;	// 0x347bcb45
// converted property getter: - (id)relationshipCaches;	// 0x347bc9a1
- (void)release;	// 0x3477d349
- (id)retain;	// 0x34780c05
- (unsigned)retainCount;	// 0x347bc95d
- (void)setRelatedIDs:(id)ids forKey:(id)key options:(unsigned)options andTimestamp:(double)timestamp;	// 0x347bca15
// converted property setter: - (void)setRelationshipCaches:(id)caches;	// 0x347bcbad
// converted property setter: - (void)setTimestamp:(double)timestamp;	// 0x347bc979
// converted property getter: - (double)timestamp;	// 0x34780bbd
- (double)timestampForKey:(id)key;	// 0x347bcaed
@end
