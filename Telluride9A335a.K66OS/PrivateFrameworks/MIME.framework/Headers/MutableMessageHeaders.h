/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MIME.framework/MIME
 */

#import "MessageHeaders.h"
#import "MIME-Structs.h"

@class NSMutableDictionary, NSMutableArray;

@interface MutableMessageHeaders : MessageHeaders {
	NSMutableDictionary *_headersAdded;	// 12 = 0xc
	NSMutableArray *_headersRemoved;	// 16 = 0x10
}
- (void)_appendAddedHeaderKey:(id)key value:(id)value toData:(id)data;	// 0x32fb7659
- (void)_appendHeaderKey:(id)key value:(id)value toData:(id)data;	// 0x32fb771d
- (id)_copyHeaderValueForKey:(id)key;	// 0x32fb7421
- (id)_copyHeaderValueForKey:(id)key offset:(unsigned *)offset decoded:(BOOL)decoded;	// 0x32fb72e5
- (id)_headerValueForKey:(id)key;	// 0x32fb7d79
- (id)allHeaderKeys;	// 0x32fb7f1d
- (void)dealloc;	// 0x32fb7fd5
- (id)description;	// 0x32fb6ab9
- (id)encodedHeaders;	// 0x32fb6f49
- (id)firstHeaderForKey:(id)key;	// 0x32fb7c81
- (BOOL)hasHeaderForKey:(id)key;	// 0x32fb7e71
- (void)mergeHeaders:(id)headers;	// 0x32fb798d
- (id)mutableCopy;	// 0x32fb6a45
- (void)removeHeaderForKey:(id)key;	// 0x32fb7bdd
- (void)setAddressList:(id)list forKey:(id)key;	// 0x32fb6ead
- (void)setAddressListForBcc:(id)bcc;	// 0x32fb6e1d
- (void)setAddressListForCc:(id)cc;	// 0x32fb6e41
- (void)setAddressListForSender:(id)sender;	// 0x32fb6e89
- (void)setAddressListForTo:(id)to;	// 0x32fb6e65
- (void)setHeader:(id)header forKey:(id)key;	// 0x32fb7a79
- (void)setReferences:(id)references;	// 0x32fb6dd1
- (void)stripInternalHeaders;	// 0x32fb6cc5
@end

