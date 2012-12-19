/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AccountsDaemon.framework/AccountsDaemon
 */

#import <NSObject.h> // Unknown library

@class ACDDatabase;

@interface ACDClientAuthorizationManager : NSObject {
	ACDDatabase *_database;	// 4 = 0x4
}
- (id)initWithDatabase:(id)database;	// 0x3357d9f1
- (void).cxx_destruct;	// 0x3357f88d
- (id)_csvStringFromSet:(id)set;	// 0x3357f7a5
- (id)_setFromCSVString:(id)csvstring;	// 0x3357f82d
- (id)allAuthorizationsForAccountType:(id)accountType;	// 0x3357efb1
- (id)authorizationForClient:(id)client accountType:(id)type;	// 0x3357da51
- (id)removeAllClientAuthorizationsForAccountType:(id)accountType;	// 0x3357f275
- (id)removeAuthorizationForClient:(id)client accountType:(id)type;	// 0x3357e915
- (id)setAuthorization:(id)authorization forClient:(id)client onAccountType:(id)type;	// 0x3357e049
@end
