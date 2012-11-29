/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/EventKit.framework/EventKit
 */

#import <NSManagedObjectContext.h> // Unknown library

@class NSString;

__attribute__((visibility("hidden")))
@interface EKSideTableContext : NSManagedObjectContext {
	NSString *_path;	// 128 = 0x80
}
- (id)init;	// 0x34b81921
- (id)initWithPath:(id)path;	// 0x34b1fa31
- (id)_alarmsMatchingPredicate:(id)predicate;	// 0x34b81935
- (id)_managedObjectModel;	// 0x34b1fe4d
- (id)_pathForPersistentStore;	// 0x34b1fda1
- (id)_persistentStoreCoordinator;	// 0x34b1fae5
- (void)_removeSqliteFiles;	// 0x34b81ced
- (id)_settingForKey:(id)key;	// 0x34b20209
- (id)_urlForPersistentStore;	// 0x34b1fd69
- (id)alarmsBetweenStartDate:(id)date endDate:(id)date2;	// 0x34b81afd
- (void)deleteAllAlarms;	// 0x34b81a09
- (id)insertNewAlarm;	// 0x34b81ad5
- (id)nextAlarmFireTime;	// 0x34b20011
- (id)rootDirectory;	// 0x34b1fdd5
- (void)setSetting:(id)setting forKey:(id)key;	// 0x34b81c59
- (id)settingForKey:(id)key;	// 0x34b201d5
@end
