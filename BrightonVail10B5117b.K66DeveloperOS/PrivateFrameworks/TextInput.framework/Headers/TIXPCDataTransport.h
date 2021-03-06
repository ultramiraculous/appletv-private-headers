/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
 */

#import <NSObject.h> // Unknown library
#import "NSXPCListenerDelegate.h"

@class NSMutableDictionary, NSXPCListener;
@protocol TIUserDictionaryServer;

__attribute__((visibility("hidden")))
@interface TIXPCDataTransport : NSObject <NSXPCListenerDelegate> {
	NSXPCListener *_server;	// 4 = 0x4
	NSMutableDictionary *_dataSources;	// 8 = 0x8
	NSMutableDictionary *_readyDescriptors;	// 12 = 0xc
	id<TIUserDictionaryServer> _userDictionaryServer;	// 16 = 0x10
}
@property(retain, nonatomic) id<TIUserDictionaryServer> userDictionaryServer;	// G=0x35b8cd0d; S=0x35b8cd1d; @synthesize=_userDictionaryServer
+ (id)_cachePath;	// 0x35b8c5b9
+ (id)sharedInstance;	// 0x35b8bfc9
+ (id)transportInterface;	// 0x35b8c035
- (id)init;	// 0x35b8c299
- (void)_createCachePathIfNeeded;	// 0x35b8c699
- (oneway void)_handleForPurpose:(id)purpose withReplyBlock:(id)replyBlock;	// 0x35b8c735
- (oneway void)_userDictionaryLoad;	// 0x35b8ccbd
- (oneway void)_userDictionarySaveChanges;	// 0x35b8cce5
- (id)cachedDataForPurpose:(id)purpose;	// 0x35b8c201
- (id)connectToServer;	// 0x35b8c4b9
- (id)dataSourceForPurpose:(id)purpose;	// 0x35b8c0ad
- (void)dealloc;	// 0x35b8c2c5
- (id)fileHandleWithData:(id)data;	// 0x35b8ca81
- (BOOL)listener:(id)listener shouldAcceptNewConnection:(id)connection;	// 0x35b8c451
- (void)setCachedData:(id)data forPurpose:(id)purpose;	// 0x35b8c25d
- (void)setDataSource:(id)source forPurpose:(id)purpose;	// 0x35b8c109
// declared property setter: - (void)setUserDictionaryServer:(id)server;	// 0x35b8cd1d
- (void)setupListener;	// 0x35b8c351
// declared property getter: - (id)userDictionaryServer;	// 0x35b8cd0d
@end

