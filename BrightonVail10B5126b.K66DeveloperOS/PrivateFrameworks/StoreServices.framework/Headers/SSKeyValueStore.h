/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <NSObject.h> // Unknown library

@class SSKeyValueStoreDatabase, SSXPCConnection;

@interface SSKeyValueStore : NSObject {
	SSXPCConnection *_connection;	// 4 = 0x4
	SSKeyValueStoreDatabase *_database;	// 8 = 0x8
	BOOL _useLocalRead;	// 12 = 0xc
	BOOL _useLocalWrite;	// 13 = 0xd
}
@property(readonly, assign, getter=isLocalReadable) BOOL localReadable;	// G=0x3550338d; 
@property(readonly, assign, getter=isLocalWritable) BOOL localWritable;	// G=0x3550339d; 
+ (BOOL)isLocalReadable;	// 0x35502ab9
- (id)init;	// 0x3550156d
- (id)copyAccountDictionaryForDomain:(id)domain;	// 0x35502b69
- (id)copyAccounts;	// 0x35502d0d
- (void)dealloc;	// 0x35501701
- (void)getValueForDomain:(id)domain key:(id)key usingBlock:(id)block;	// 0x35501765
- (void)getValuesForDomain:(id)domain keys:(const id *)keys count:(unsigned)count usingBlock:(id)block;	// 0x35501a3d
- (id)iTunesValueForKey:(id)key usedDomain:(id *)domain;	// 0x355033ad
// declared property getter: - (BOOL)isLocalReadable;	// 0x3550338d
// declared property getter: - (BOOL)isLocalWritable;	// 0x3550339d
- (void)modifyUsingTransactionBlock:(id)block;	// 0x355035f5
- (void)readUsingSessionBlock:(id)block;	// 0x35503615
- (void)removeAccountFromDomain:(id)domain;	// 0x35503635
- (void)removeAllValuesForDomain:(id)domain;	// 0x35501dad
- (void)removeAllValuesForDomain:(id)domain completionBlock:(id)block;	// 0x35501dc1
- (void)removeAllValuesWithCompletionBlock:(id)completionBlock;	// 0x355020b5
- (void)setValue:(id)value forDomain:(id)domain key:(id)key;	// 0x35502315
- (void)setValue:(id)value forDomain:(id)domain key:(id)key completionBlock:(id)block;	// 0x35502339
- (void)setValuesWithDictionary:(id)dictionary forDomain:(id)domain;	// 0x355025b1
- (void)setValuesWithDictionary:(id)dictionary forDomain:(id)domain completionBlock:(id)block;	// 0x355025d5
@end

