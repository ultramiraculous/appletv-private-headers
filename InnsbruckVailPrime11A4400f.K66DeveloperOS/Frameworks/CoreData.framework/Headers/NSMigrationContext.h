/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import </libobjc.A.h>

@class NSMutableDictionary, NSPropertyMapping, NSEntityMapping, NSMigrationManager;

@interface NSMigrationContext : NSObject {
	NSMutableDictionary *_bySourceAssociationTable;	// 4 = 0x4
	NSMutableDictionary *_byDestinationAssociationTable;	// 8 = 0x8
	NSMutableDictionary *_byMappingBySourceAssociationTable;	// 12 = 0xc
	NSMutableDictionary *_byMappingByDestinationAssociationTable;	// 16 = 0x10
	NSMigrationManager *_migrationManager;	// 20 = 0x14
	NSEntityMapping *_currentMapping;	// 24 = 0x18
	unsigned _currentStep;	// 28 = 0x1c
	NSPropertyMapping *_currentPropertyMapping;	// 32 = 0x20
}
@property(retain) id currentEntityMapping;	// G=0x2d0dbe11; S=0x2d0dbe21; converted property
@property(assign) unsigned currentMigrationStep;	// G=0x2d0dbf6d; S=0x2d0dbf7d; converted property
@property(retain) NSPropertyMapping *currentPropertyMapping;	// G=0x2d0dbecd; S=0x2d0dbedd; converted property
- (id)initWithMigrationManager:(id)migrationManager;	// 0x2d0dbbed
- (void)_createAssociationsByDestination:(id)destination fromSource:(id)source forEntityMapping:(id)entityMapping;	// 0x2d0dc189
- (void)_createAssociationsBySource:(id)source withDestination:(id)destination forEntityMapping:(id)entityMapping;	// 0x2d0dbfdd
- (void)associateSourceInstance:(id)instance withDestinationInstance:(id)destinationInstance forEntityMapping:(id)entityMapping;	// 0x2d0dc335
- (void)clearAssociationTables;	// 0x2d0dbd81
// converted property getter: - (id)currentEntityMapping;	// 0x2d0dbe11
// converted property getter: - (unsigned)currentMigrationStep;	// 0x2d0dbf6d
// converted property getter: - (id)currentPropertyMapping;	// 0x2d0dbecd
- (void)dealloc;	// 0x2d0dbce9
- (id)destinationInstancesForEntityMapping:(id)entityMapping sourceInstance:(id)instance;	// 0x2d0dc375
// converted property setter: - (void)setCurrentEntityMapping:(id)mapping;	// 0x2d0dbe21
// converted property setter: - (void)setCurrentMigrationStep:(unsigned)step;	// 0x2d0dbf7d
// converted property setter: - (void)setCurrentPropertyMapping:(id)mapping;	// 0x2d0dbedd
- (id)sourceInstancesForEntityMapping:(id)entityMapping destinationInstance:(id)instance;	// 0x2d0dc541
@end

