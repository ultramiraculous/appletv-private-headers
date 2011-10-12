/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <NSObject.h> // Unknown library

@class NSMutableSet, NSString;

__attribute__((visibility("hidden")))
@interface PFUbiquityToManyConflictDiff : NSObject {
@private
	NSMutableSet *_insertedObjectIDs;	// 4 = 0x4
	NSMutableSet *_deletedObjectIDs;	// 8 = 0x8
	NSString *_relationshipKey;	// 12 = 0xc
}
@property(readonly, assign, nonatomic) NSMutableSet *deletedObjectIDs;	// G=0x31f86399; @synthesize=_deletedObjectIDs
@property(readonly, assign, nonatomic) NSMutableSet *insertedObjectIDs;	// G=0x31f863a9; @synthesize=_insertedObjectIDs
@property(readonly, assign, nonatomic) NSString *relationshipKey;	// G=0x31f86389; @synthesize=_relationshipKey
- (id)init;	// 0x31f863b9
- (id)initForRelationshipAtKey:(id)key;	// 0x31f86a95
- (void)dealloc;	// 0x31f86a01
// declared property getter: - (id)deletedObjectIDs;	// 0x31f86399
- (id)description;	// 0x31f86985
- (void)diffWithLogSnapshot:(id)logSnapshot andPreviousSnapshot:(id)snapshot;	// 0x31f8644d
// declared property getter: - (id)insertedObjectIDs;	// 0x31f863a9
- (BOOL)isEqual:(id)equal;	// 0x31f868bd
// declared property getter: - (id)relationshipKey;	// 0x31f86389
@end

