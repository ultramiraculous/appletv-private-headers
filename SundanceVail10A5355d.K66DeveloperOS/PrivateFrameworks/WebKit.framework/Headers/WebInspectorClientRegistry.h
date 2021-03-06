/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

#import <NSObject.h> // Unknown library
#import "WebKit-Structs.h"

@protocol WebInspectorClientRegistryDelegate;

@interface WebInspectorClientRegistry : NSObject {
	unsigned _nextAvailablePageId;	// 4 = 0x4
	HashMap<unsigned int, WebInspectorClient *, WTF::IntHash<unsigned int>, WTF::HashTraits<unsigned int>, WTF::HashTraits<WebInspectorClient *> > _pageClientMap;	// 8 = 0x8
	id<WebInspectorClientRegistryDelegate> _delegate;	// 28 = 0x1c
}
@property(assign, nonatomic) id<WebInspectorClientRegistryDelegate> delegate;	// G=0x316db5b9; S=0x3167ded9; @synthesize=_delegate
+ (id)sharedRegistry;	// 0x316769c1
- (id)init;	// 0x31676a3d
- (id).cxx_construct;	// 0x31676a21
- (void).cxx_destruct;	// 0x316db5c9
- (unsigned)_getNextAvailablePageId;	// 0x31676af1
- (WebInspectorClient *)clientForPageId:(unsigned)pageId;	// 0x316db45d
// declared property getter: - (id)delegate;	// 0x316db5b9
- (id)inspectableWebViews;	// 0x316db4e9
- (void)registerClient:(WebInspectorClient *)client;	// 0x31676a81
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x3167ded9
- (void)unregisterClient:(WebInspectorClient *)client;	// 0x316db415
@end

