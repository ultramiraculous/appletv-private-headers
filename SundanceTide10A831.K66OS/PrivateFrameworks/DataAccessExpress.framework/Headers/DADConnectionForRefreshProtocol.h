/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccessExpress.framework/DataAccessExpress
 */

#import <NSObject.h> // Unknown library
#import "AccountRefreshProtocol.h"

@class NSString;

@interface DADConnectionForRefreshProtocol : NSObject <AccountRefreshProtocol> {
	NSString *_accountIdentifier;	// 4 = 0x4
}
+ (id)accountToRefreshForBasicAccount:(id)basicAccount;	// 0x3376b639
- (id)_initWithBasicAccount:(id)basicAccount;	// 0x3376b589
- (void)dealloc;	// 0x3376b5ed
- (BOOL)refreshContainerListForDataclass:(id)dataclass isUserRequested:(BOOL)requested;	// 0x3376b759
- (BOOL)refreshContainerWithIdentifier:(id)identifier forDataclass:(id)dataclass isUserRequested:(BOOL)requested;	// 0x3376b681
- (BOOL)refreshContainersForDataclass:(id)dataclass isUserRequested:(BOOL)requested;	// 0x3376b705
@end

