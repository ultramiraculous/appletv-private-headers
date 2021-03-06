/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class ATVJSContext, ATVFeedController, ATVFeedRootElement;

__attribute__((visibility("hidden")))
@interface ATVFeedDocument : XXUnknownSuperclass {
	ATVFeedRootElement *_rootElement;	// 4 = 0x4
	ATVJSContext *_javaScriptContext;	// 8 = 0x8
	ATVFeedController *_feedController;	// 12 = 0xc
	BOOL _ownsJavascriptContext;	// 16 = 0x10
}
@property(assign, nonatomic) ATVFeedController *feedController;	// G=0x165dc9; S=0x165d79; @synthesize=_feedController
@property(retain, nonatomic) ATVJSContext *javaScriptContext;	// G=0x165da9; S=0x165db9; @synthesize=_javaScriptContext
@property(assign, nonatomic) BOOL ownsJavascriptContext;	// G=0x165dd9; S=0x165de9; @synthesize=_ownsJavascriptContext
@property(retain, nonatomic) ATVFeedRootElement *rootElement;	// G=0x165d89; S=0x165d99; @synthesize=_rootElement
- (void)dealloc;	// 0x165ce9
// declared property getter: - (id)feedController;	// 0x165dc9
// declared property getter: - (id)javaScriptContext;	// 0x165da9
// declared property getter: - (BOOL)ownsJavascriptContext;	// 0x165dd9
// declared property getter: - (id)rootElement;	// 0x165d89
// declared property setter: - (void)setFeedController:(id)controller;	// 0x165d79
// declared property setter: - (void)setJavaScriptContext:(id)context;	// 0x165db9
// declared property setter: - (void)setOwnsJavascriptContext:(BOOL)context;	// 0x165de9
// declared property setter: - (void)setRootElement:(id)element;	// 0x165d99
@end

