/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

#import "iTunesStore-Structs.h"
#import <NSObject.h> // Unknown library

@class ISSQLiteDatabase, NSURL;

@interface ISCookieStorage : NSObject {
@private
	ISSQLiteDatabase *_db;	// 4 = 0x4
	dispatch_queue_s *_dispatchQueue;	// 8 = 0x8
	void *_processAssertion;	// 12 = 0xc
	int _processAssertionCount;	// 16 = 0x10
	NSURL *_storageLocation;	// 20 = 0x14
}
@property(readonly, assign) NSURL *storageLocation;	// G=0x3696911d; 
+ (id)sharedInstance;	// 0x36969fd1
+ (id)sharedStorage;	// 0x36968519
- (id)init;	// 0x36968369
- (id)initWithStorageLocation:(id)storageLocation;	// 0x3696837d
- (void)_beginProcessAssertion;	// 0x36969155
- (void)_bindInsertStatement:(sqlite3_stmt *)statement forCookie:(id)cookie userIdentifier:(id)identifier;	// 0x3696923d
- (BOOL)_bindStatement:(sqlite3_stmt *)statement withValues:(id)values;	// 0x369693b9
- (id)_columnNameForCookieProperty:(id)cookieProperty;	// 0x36969561
- (id)_cookieForSelectStatement:(sqlite3_stmt *)selectStatement;	// 0x3696962d
- (CFSetRef)_copyPrivateCookiesForURL:(id)url userIdentifier:(id)identifier;	// 0x369698d1
- (void)_endProcessAssertion;	// 0x36969cf5
- (BOOL)_setupCookieDatabase:(id)database;	// 0x36969de5
- (id)cookieHeadersForURL:(id)url userIdentifier:(id)identifier;	// 0x36968719
- (void)dealloc;	// 0x36968491
- (void)removeAllCookies;	// 0x36968c41
- (void)removeCookiesWithProperties:(id)properties;	// 0x36968cc9
- (void)setCookies:(id)cookies forUserIdentifier:(id)userIdentifier;	// 0x36968855
- (void)setCookiesForHTTPResponse:(id)httpresponse userIdentifier:(id)identifier;	// 0x36968a11
// declared property getter: - (id)storageLocation;	// 0x3696911d
- (void)synchronizeCookies;	// 0x36969fe1
@end
