/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <ImageIO/NSObject.h>

@class UIResponder;

__attribute__((visibility("hidden")))
@interface UIInputViewPostPinningReloadState : NSObject {
	UIResponder *_responderPreventedFromSettingInputViews;	// 4 = 0x4
}
@property(retain, nonatomic) UIResponder *responderToReload;	// G=0x2f5299b9; S=0x2f529901; @synthesize=_responderPreventedFromSettingInputViews
+ (id)stateWithResponder:(id)responder;	// 0x2f5298a1
- (void)dealloc;	// 0x2f5299cd
// declared property getter: - (id)responderToReload;	// 0x2f5299b9
// declared property setter: - (void)setResponderToReload:(id)reload;	// 0x2f529901
@end
