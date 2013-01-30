/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AccountsDaemon.framework/AccountsDaemon
 */

#import "AccountsDaemon-Structs.h"
#import <NSObject.h> // Unknown library

@class NSManagedObjectModel, NSPersistentStoreCoordinator, NSPersistentStore, NSString, NSManagedObjectContext;

@interface ACDDatabase : NSObject {
	NSString *_path;	// 4 = 0x4
	NSManagedObjectContext *_context;	// 8 = 0x8
	NSManagedObjectModel *_model;	// 12 = 0xc
	NSPersistentStoreCoordinator *_storeCoordinator;	// 16 = 0x10
	NSPersistentStore *_store;	// 20 = 0x14
}
@property(readonly, assign, nonatomic) NSManagedObjectContext *managedObjectContext;	// G=0x333cd9a9; @dynamic
@property(readonly, assign, nonatomic) NSString *path;	// G=0x333cec01; @synthesize=_path
@property(assign, nonatomic) int version;	// G=0x333cd9dd; S=0x333cda65; @dynamic
+ (CFStringRef)_copyRootPath;	// 0x333ce0cd
+ (id)defaultPath;	// 0x333cd8a1
- (id)initWithDefaultPath;	// 0x333cd8d5
- (id)initWithPath:(id)path;	// 0x333cd92d
- (void).cxx_destruct;	// 0x333cec11
- (BOOL)_databaseFileExists;	// 0x333ceba9
- (id)_managedObjectModel;	// 0x333ce2d1
- (id)_persistentStoreCoordinator;	// 0x333ce495
- (void)_removeFilesAtURL:(id)url forStoreCoordinator:(id)storeCoordinator;	// 0x333cea75
- (void)_setupManagedObjectContext;	// 0x333ce121
- (id)_store;	// 0x333ce3e9
- (unsigned)countOfEntityNamed:(id)entityNamed withPredicate:(id)predicate;	// 0x333cdef1
- (id)fetchObjectsForEntityNamed:(id)entityNamed;	// 0x333cdb4d
- (id)fetchObjectsForEntityNamed:(id)entityNamed withPredicate:(id)predicate;	// 0x333cdb6d
- (id)fetchObjectsForEntityNamed:(id)entityNamed withPredicate:(id)predicate sortDescriptor:(id)descriptor;	// 0x333cdbb5
// declared property getter: - (id)managedObjectContext;	// 0x333cd9a9
- (id)objectForObjectURI:(id)objectURI;	// 0x333cde2d
// declared property getter: - (id)path;	// 0x333cec01
// declared property setter: - (void)setVersion:(int)version;	// 0x333cda65
// declared property getter: - (int)version;	// 0x333cd9dd
@end
