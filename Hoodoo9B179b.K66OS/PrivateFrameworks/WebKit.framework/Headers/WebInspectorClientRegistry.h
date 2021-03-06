/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

#import <NSObject.h> // Unknown library
#import "WebKit-Structs.h"

@protocol WebInspectorClientRegistryDelegate;

__attribute__((visibility("hidden")))
@interface WebInspectorClientRegistry : NSObject {
@private
	unsigned _nextAvailablePageId;	// 4 = 0x4
	HashMap<unsigned int,WebInspectorClient*,WTF::IntHash<unsigned int>,WTF::HashTraits<unsigned int>,WTF::HashTraits<WebInspectorClient*> > _pageClientMap;	// 8 = 0x8
	id<WebInspectorClientRegistryDelegate> _delegate;	// 28 = 0x1c
}
@property(assign, nonatomic) id<WebInspectorClientRegistryDelegate> delegate;	// G=0x345936c1; S=0x345173a9; @synthesize=_delegate
+ (id)sharedRegistry;	// 0x3450fa0d
- (id)init;	// 0x3450fa75
- (id).cxx_construct;	// 0x3450fa59
- (void).cxx_destruct;	// 0x3459375d
- (unsigned)_getNextAvailablePageId;	// 0x3450fb25
- (WebInspectorClient *)clientForPageId:(unsigned)pageId;	// 0x345936d1
// declared property getter: - (id)delegate;	// 0x345936c1
- (id)inspectableWebViews;	// 0x34593771
- (void)registerClient:(WebInspectorClient *)client;	// 0x3450fab9
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x345173a9
- (void)unregisterClient:(WebInspectorClient *)client;	// 0x34593839
@end

