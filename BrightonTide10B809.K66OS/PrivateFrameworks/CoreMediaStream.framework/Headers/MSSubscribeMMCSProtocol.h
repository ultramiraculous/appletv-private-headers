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
	id<MSSubscribeStorageProtocolDelegate> _delegate;	// 20 = 0x14
	unsigned _itemCount;	// 24 = 0x18
	NSMutableDictionary *_itemIDToAssetDict;	// 28 = 0x1c
	unsigned long long *_itemIDs;	// 32 = 0x20
	const char **_signatures;	// 36 = 0x24
	char **_authTokens;	// 40 = 0x28
}
@property(assign, nonatomic) id<MSSubscribeStorageProtocolDelegate> delegate;	// G=0x3375f599; S=0x3375f5a9; @synthesize=_delegate
- (id)initWithPersonID:(id)personID;	// 0x3375e781
- (void).cxx_destruct;	// 0x3375f5b9
- (void)_getItemDone:(unsigned long long)done path:(id)path error:(id)error;	// 0x3375f059
- (void)_requestCompleted;	// 0x3375f485
- (void)_tellDelegateProtocolDidFinishRetrievingAssetParams:(id)_tellDelegateProtocol;	// 0x3375e869
- (void)deactivate;	// 0x3375e7e5
- (void)dealloc;	// 0x3375e829
// declared property getter: - (id)delegate;	// 0x3375f599
- (void)retrieveAssets:(id)assets;	// 0x3375e99d
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x3375f5a9
@end

