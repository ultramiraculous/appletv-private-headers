/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library

@class UIViewController, NSString;

__attribute__((visibility("hidden")))
@interface UIViewControllerAction : NSObject {
	UIViewController *_viewController;	// 4 = 0x4
	NSString *_name;	// 8 = 0x8
	int _transition;	// 12 = 0xc
	id _completion;	// 16 = 0x10
	float _curlUpRevealedHeight;	// 20 = 0x14
}
@property(assign, nonatomic, setter=_setCurlUpRevealedHeight:) float _curlUpRevealedHeight;	// G=0x3474642d; S=0x3465316d; @synthesize
@property(readonly, assign, nonatomic) BOOL animated;	// G=0x34746411; 
@property(copy, nonatomic) id completion;	// G=0x346531d5; S=0x34628781; @synthesize=_completion
@property(retain, nonatomic) NSString *name;	// G=0x3474644d; S=0x3462874d; @synthesize=_name
@property(assign, nonatomic) int transition;	// G=0x34653315; S=0x3462875d; @synthesize=_transition
@property(assign, nonatomic) UIViewController *viewController;	// G=0x3474643d; S=0x3462873d; @synthesize=_viewController
- (id)initWithViewController:(id)viewController name:(id)name transition:(int)transition;	// 0x346286b9
// declared property getter: - (float)_curlUpRevealedHeight;	// 0x3474642d
// declared property setter: - (void)_setCurlUpRevealedHeight:(float)height;	// 0x3465316d
// declared property getter: - (BOOL)animated;	// 0x34746411
// declared property getter: - (id)completion;	// 0x346531d5
- (void)dealloc;	// 0x34653329
// declared property getter: - (id)name;	// 0x3474644d
// declared property setter: - (void)setCompletion:(id)completion;	// 0x34628781
// declared property setter: - (void)setName:(id)name;	// 0x3462874d
// declared property setter: - (void)setTransition:(int)transition;	// 0x3462875d
// declared property setter: - (void)setViewController:(id)controller;	// 0x3462873d
// declared property getter: - (int)transition;	// 0x34653315
// declared property getter: - (id)viewController;	// 0x3474643d
@end
