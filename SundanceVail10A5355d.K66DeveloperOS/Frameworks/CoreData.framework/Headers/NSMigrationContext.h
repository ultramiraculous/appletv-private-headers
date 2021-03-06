/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <NSObject.h> // Unknown library

@class NSEntityMapping, NSPropertyMapping, NSMigrationManager, NSMutableDictionary;

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
@property(retain) id currentEntityMapping;	// G=0x33505eb1; S=0x33505ec1; converted property
@property(assign) unsigned currentMigrationStep;	// G=0x3350600d; S=0x3350601d; converted property
@property(retain) NSPropertyMapping *currentPropertyMapping;	// G=0x33505f6d; S=0x33505f7d; converted property
- (id)initWithMigrationManager:(id)migrationManager;	// 0x33505c8d
- (void)_createAssociationsByDestination:(id)destination fromSource:(id)source forEntityMapping:(id)entityMapping;	// 0x33506229
- (void)_createAssociationsBySource:(id)source withDestination:(id)destination forEntityMapping:(id)entityMapping;	// 0x3350607d
- (void)associateSourceInstance:(id)instance withDestinationInstance:(id)destinationInstance forEntityMapping:(id)entityMapping;	// 0x335063d5
- (void)clearAssociationTables;	// 0x33505e21
// converted property getter: - (id)currentEntityMapping;	// 0x33505eb1
// converted property getter: - (unsigned)currentMigrationStep;	// 0x3350600d
// converted property getter: - (id)currentPropertyMapping;	// 0x33505f6d
- (void)dealloc;	// 0x33505d89
- (id)destinationInstancesForEntityMapping:(id)entityMapping sourceInstance:(id)instance;	// 0x33506419
// converted property setter: - (void)setCurrentEntityMapping:(id)mapping;	// 0x33505ec1
// converted property setter: - (void)setCurrentMigrationStep:(unsigned)step;	// 0x3350601d
// converted property setter: - (void)setCurrentPropertyMapping:(id)mapping;	// 0x33505f7d
- (id)sourceInstancesForEntityMapping:(id)entityMapping destinationInstance:(id)instance;	// 0x335065e9
@end

