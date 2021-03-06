/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

#import <NSObject.h> // Unknown library


@interface WebDatabaseManager : NSObject {
}
+ (void)didFinishLastTransaction;	// 0x3451dfc1
+ (void)endBackgroundTask;	// 0x3451dfd1
+ (void)removeEmptyDatabaseFiles;	// 0x3450d4ad
+ (void)scheduleEmptyDatabaseRemoval;	// 0x3450d2b9
+ (id)sharedWebDatabaseManager;	// 0x345439e9
+ (void)startBackgroundTask;	// 0x3451dd69
+ (void)willBeginFirstTransaction;	// 0x3451dd59
- (id)init;	// 0x3454412d
- (id)databasesWithOrigin:(id)origin;	// 0x34543e31
- (void)deleteAllDatabases;	// 0x34543b69
- (BOOL)deleteDatabase:(id)database withOrigin:(id)origin;	// 0x34543a35
- (BOOL)deleteOrigin:(id)origin;	// 0x34543b3d
- (id)detailsForDatabase:(id)database withOrigin:(id)origin;	// 0x34543bb5
- (id)origins;	// 0x34543fa9
@end

