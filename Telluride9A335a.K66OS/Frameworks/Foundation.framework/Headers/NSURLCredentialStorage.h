/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <NSObject.h> // Unknown library

@class NSURLCredentialStorageInternal;

@interface NSURLCredentialStorage : NSObject {
@private
	NSURLCredentialStorageInternal *_internal;	// 4 = 0x4
}
+ (id)sharedCredentialStorage;	// 0x320c97ed
- (id)init;	// 0x320c97d5
- (id)_internalInit;	// 0x320c9c9d
- (id)allCredentials;	// 0x320c99d9
- (id)credentialsForProtectionSpace:(id)protectionSpace;	// 0x320c9859
- (void)dealloc;	// 0x320c9789
- (id)defaultCredentialForProtectionSpace:(id)protectionSpace;	// 0x320c9bd5
- (void)removeCredential:(id)credential forProtectionSpace:(id)protectionSpace;	// 0x320c9b8d
- (void)setCredential:(id)credential forProtectionSpace:(id)protectionSpace;	// 0x320c9b45
- (void)setDefaultCredential:(id)credential forProtectionSpace:(id)protectionSpace;	// 0x320c9c55
@end

