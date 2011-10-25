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
@property(assign, nonatomic) id<WebInspectorClientRegistryDelegate> delegate;	// G=0x364fbb15; S=0x3647f439; @synthesize=_delegate
+ (id)sharedRegistry;	// 0x36477a9d
- (id)init;	// 0x36477b05
- (id).cxx_construct;	// 0x36477ae9
- (void).cxx_destruct;	// 0x364fbbb1
- (unsigned)_getNextAvailablePageId;	// 0x36477bb5
- (WebInspectorClient *)clientForPageId:(unsigned)pageId;	// 0x364fbb25
// declared property getter: - (id)delegate;	// 0x364fbb15
- (id)inspectableWebViews;	// 0x364fbbc5
- (void)registerClient:(WebInspectorClient *)client;	// 0x36477b49
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x3647f439
- (void)unregisterClient:(WebInspectorClient *)client;	// 0x364fbc8d
@end

