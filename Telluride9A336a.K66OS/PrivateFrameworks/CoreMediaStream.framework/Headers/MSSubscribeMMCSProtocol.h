/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

#import "MSMMCSProtocol.h"
#import "MSSubscribeStorageProtocol.h"

@class NSMutableDictionary;
@protocol MSSubscribeStorageProtocolDelegate;

@interface MSSubscribeMMCSProtocol : MSMMCSProtocol <MSSubscribeStorageProtocol> {
@private
	id<MSSubscribeStorageProtocolDelegate> _delegate;	// 28 = 0x1c
	unsigned _itemCount;	// 32 = 0x20
	NSMutableDictionary *_itemIDToAssetDict;	// 36 = 0x24
	unsigned long long *_itemIDs;	// 40 = 0x28
	const char **_signatures;	// 44 = 0x2c
	char **_authTokens;	// 48 = 0x30
}
@property(assign) id<MSSubscribeStorageProtocolDelegate> delegate;	// G=0x322b4d71; S=0x322b4d81; @synthesize=_delegate
- (id)initWithPersonID:(id)personID;	// 0x322b4101
- (void)_getItemDone:(unsigned long long)done path:(id)path error:(id)error;	// 0x322b4901
- (void)_requestCompleted;	// 0x322b4c49
- (void)_tellDelegateProtocolDidFinishRetrievingAssetParams:(id)_tellDelegateProtocol;	// 0x322b41d1
- (void)deactivate;	// 0x322b413d
- (void)dealloc;	// 0x322b4191
// declared property getter: - (id)delegate;	// 0x322b4d71
- (void)retrieveAssets:(id)assets;	// 0x322b42b1
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x322b4d81
@end

