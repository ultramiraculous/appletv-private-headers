/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <NSObject.h> // Unknown library

@class NSManagedObjectID;

@interface NSIncrementalStoreNode : NSObject {
	NSManagedObjectID *_objectID;	// 4 = 0x4
	unsigned long long _versionNumber;	// 8 = 0x8
	id _propertyCache;	// 16 = 0x10
	void *_reserved1;	// 20 = 0x14
}
@property(readonly, retain) NSManagedObjectID *objectID;	// G=0x30fe5459; converted property
+ (void)initialize;	// 0x30fe4eed
- (id)initWithObjectID:(id)objectID withValues:(id)values version:(unsigned long long)version;	// 0x30fe4f09
- (id)_propertyCache;	// 0x30fe5569
- (id)_snapshot_;	// 0x30fe54a1
- (unsigned)_versionNumber;	// 0x30fe54a5
- (void)dealloc;	// 0x30fe51bd
- (const id *)knownKeyValuesPointer;	// 0x30fe5481
// converted property getter: - (id)objectID;	// 0x30fe5459
- (void)updateWithValues:(id)values version:(unsigned long long)version;	// 0x30fe5235
- (id)valueForPropertyDescription:(id)propertyDescription;	// 0x30fe54b5
- (unsigned long long)version;	// 0x30fe5469
@end

