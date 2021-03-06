/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MIME.framework/MIME
 */

#import "MessageStore.h"

@class NSData;

@interface MFDataMessageStore : MessageStore {
	NSData *_data;	// 24 = 0x18
	Class _messageClass;	// 28 = 0x1c
}
- (id)initWithData:(id)data;	// 0x3258d731
- (id)_cachedBodyDataForMessage:(id)message valueIfNotPresent:(id)present;	// 0x3258d789
- (id)_cachedBodyForMessage:(id)message valueIfNotPresent:(id)present;	// 0x3258d725
- (id)_cachedHeadersForMessage:(id)message valueIfNotPresent:(id)present;	// 0x3258d729
- (id)account;	// 0x3258d721
- (id)bodyDataForMessage:(id)message isComplete:(BOOL *)complete isPartial:(BOOL *)partial downloadIfNecessary:(BOOL)necessary;	// 0x3258d7a9
- (void)dealloc;	// 0x3258da05
- (id)headerDataForMessage:(id)message downloadIfNecessary:(BOOL)necessary;	// 0x3258d889
- (id)mailboxUid;	// 0x3258d72d
- (id)message;	// 0x3258d965
- (void)setMessageClass:(Class)aClass;	// 0x3258d711
- (id)storePath;	// 0x3258da01
- (void)writeUpdatedMessageDataToDisk;	// 0x3258d70d
@end

