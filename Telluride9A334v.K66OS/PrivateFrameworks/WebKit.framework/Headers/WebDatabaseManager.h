/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

#import <NSObject.h> // Unknown library


@interface WebDatabaseManager : NSObject {
}
+ (void)didFinishLastTransaction;	// 0x339a8051
+ (void)endBackgroundTask;	// 0x339a8061
+ (void)removeEmptyDatabaseFiles;	// 0x3399753d
+ (void)scheduleEmptyDatabaseRemoval;	// 0x33997349
+ (id)sharedWebDatabaseManager;	// 0x339cd9ed
+ (void)startBackgroundTask;	// 0x339a7df9
+ (void)willBeginFirstTransaction;	// 0x339a7de9
- (id)init;	// 0x339ce131
- (id)databasesWithOrigin:(id)origin;	// 0x339cde35
- (void)deleteAllDatabases;	// 0x339cdb6d
- (BOOL)deleteDatabase:(id)database withOrigin:(id)origin;	// 0x339cda39
- (BOOL)deleteOrigin:(id)origin;	// 0x339cdb41
- (id)detailsForDatabase:(id)database withOrigin:(id)origin;	// 0x339cdbb9
- (id)origins;	// 0x339cdfad
@end
