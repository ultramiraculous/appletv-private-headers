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
@property(retain, nonatomic) id<TIUserDictionaryServer> userDictionaryServer;	// G=0x34c7d6bd; S=0x34c7d6cd; @synthesize=_userDictionaryServer
+ (id)_cachePath;	// 0x34c7cf69
+ (id)sharedInstance;	// 0x34c7c979
+ (id)transportInterface;	// 0x34c7c9e5
- (id)init;	// 0x34c7cc49
- (void)_createCachePathIfNeeded;	// 0x34c7d049
- (oneway void)_handleForPurpose:(id)purpose withReplyBlock:(id)replyBlock;	// 0x34c7d0e5
- (oneway void)_userDictionaryLoad;	// 0x34c7d66d
- (oneway void)_userDictionarySaveChanges;	// 0x34c7d695
- (id)cachedDataForPurpose:(id)purpose;	// 0x34c7cbb1
- (id)connectToServer;	// 0x34c7ce69
- (id)dataSourceForPurpose:(id)purpose;	// 0x34c7ca5d
- (void)dealloc;	// 0x34c7cc75
- (id)fileHandleWithData:(id)data;	// 0x34c7d431
- (BOOL)listener:(id)listener shouldAcceptNewConnection:(id)connection;	// 0x34c7ce01
- (void)setCachedData:(id)data forPurpose:(id)purpose;	// 0x34c7cc0d
- (void)setDataSource:(id)source forPurpose:(id)purpose;	// 0x34c7cab9
// declared property setter: - (void)setUserDictionaryServer:(id)server;	// 0x34c7d6cd
- (void)setupListener;	// 0x34c7cd01
// declared property getter: - (id)userDictionaryServer;	// 0x34c7d6bd
@end
