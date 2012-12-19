/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <NSObject.h> // Unknown library


@interface NSEntityMigrationPolicy : NSObject {
}
- (id)_nonNilValueOrDefaultValueForAttribute:(id)attribute source:(id)source destination:(id)destination;	// 0x30f351b1
- (BOOL)beginEntityMapping:(id)mapping manager:(id)manager error:(id *)error;	// 0x30f34531
- (BOOL)createDestinationInstancesForSourceInstance:(id)sourceInstance entityMapping:(id)mapping manager:(id)manager error:(id *)error;	// 0x30f34535
- (BOOL)createRelationshipsForDestinationInstance:(id)destinationInstance entityMapping:(id)mapping manager:(id)manager error:(id *)error;	// 0x30f347e5
- (BOOL)endEntityMapping:(id)mapping manager:(id)manager error:(id *)error;	// 0x30f351ad
- (BOOL)endInstanceCreationForEntityMapping:(id)entityMapping manager:(id)manager error:(id *)error;	// 0x30f347e1
- (BOOL)endRelationshipCreationForEntityMapping:(id)entityMapping manager:(id)manager error:(id *)error;	// 0x30f351a5
- (BOOL)performCustomValidationForEntityMapping:(id)entityMapping manager:(id)manager error:(id *)error;	// 0x30f351a9
@end
