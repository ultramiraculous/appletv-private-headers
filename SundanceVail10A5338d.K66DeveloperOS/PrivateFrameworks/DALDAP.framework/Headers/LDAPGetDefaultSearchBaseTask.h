/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DALDAP.framework/DALDAP
 */

#import "DALDAP-Structs.h"
#import "LDAPTask.h"

@class NSDate, NSString;

@interface LDAPGetDefaultSearchBaseTask : LDAPTask {
	ldap *_ld;	// 16 = 0x10
	NSString *_defaultNamingContext;	// 20 = 0x14
	NSDate *_dateConnectionWentOut;	// 24 = 0x18
}
- (id)_copyDefaultNamingContextFromLDAPElement:(ldapmsg *)ldapelement;	// 0x3099b725
- (id)_initializeServer;	// 0x3099b069
- (void)_invokeBlockOnMainThread:(id)thread;	// 0x3099bc8d
- (id)_performQuery;	// 0x3099b8ad
- (void)dealloc;	// 0x3099b005
- (void)finishWithError:(id)error;	// 0x3099bc95
- (int)numDownloadedElements;	// 0x3099bdf1
- (void)performTaskInBackground;	// 0x3099bbe5
@end
