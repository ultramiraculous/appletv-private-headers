/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ITSync.framework/ITSync
 */

#import <NSObject.h> // Unknown library

@class NSString;

@interface ITTaskAssertion : NSObject {
@private
	id _expireHandler;	// 4 = 0x4
	NSString *_debugInfo;	// 8 = 0x8
}
- (id)initWithExpirationHandler:(id)expirationHandler debugInfo:(id)info;	// 0x3408ac81
- (void)dealloc;	// 0x3408a3e5
- (id)description;	// 0x3408ad15
- (void)invalidate;	// 0x3408a349
- (void)performExpirationHandler;	// 0x3408a399
@end

