/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library

@class UIView, UISpringBoardHostedView;

__attribute__((visibility("hidden")))
@interface UIRemoteSheetInfo : NSObject {
	UIView *_sheetView;	// 4 = 0x4
	UISpringBoardHostedView *_remoteView;	// 8 = 0x8
	id _delegate;	// 12 = 0xc
	SEL _selector;	// 16 = 0x10
	void *_context;	// 20 = 0x14
	int _returnCode;	// 24 = 0x18
}
@property(assign, nonatomic) void *context;	// G=0x32f3fd75; S=0x32f3fd85; @synthesize=_context
@property(assign, nonatomic) id delegate;	// G=0x32f3fd35; S=0x32f3fd45; @synthesize=_delegate
@property(retain, nonatomic) UISpringBoardHostedView *remoteView;	// G=0x32f3fd15; S=0x32f3fd25; @synthesize=_remoteView
@property(assign, nonatomic) int returnCode;	// G=0x32f3fd95; S=0x32f3fda5; @synthesize=_returnCode
@property(assign, nonatomic) SEL selector;	// G=0x32f3fd55; S=0x32f3fd65; @synthesize=_selector
@property(retain, nonatomic) UIView *sheetView;	// G=0x32f3fcf5; S=0x32f3fd05; @synthesize=_sheetView
// declared property getter: - (void *)context;	// 0x32f3fd75
- (void)dealloc;	// 0x32f3fc91
// declared property getter: - (id)delegate;	// 0x32f3fd35
// declared property getter: - (id)remoteView;	// 0x32f3fd15
// declared property getter: - (int)returnCode;	// 0x32f3fd95
// declared property getter: - (SEL)selector;	// 0x32f3fd55
// declared property setter: - (void)setContext:(void *)context;	// 0x32f3fd85
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x32f3fd45
// declared property setter: - (void)setRemoteView:(id)view;	// 0x32f3fd25
// declared property setter: - (void)setReturnCode:(int)code;	// 0x32f3fda5
// declared property setter: - (void)setSelector:(SEL)selector;	// 0x32f3fd65
// declared property setter: - (void)setSheetView:(id)view;	// 0x32f3fd05
// declared property getter: - (id)sheetView;	// 0x32f3fcf5
@end

