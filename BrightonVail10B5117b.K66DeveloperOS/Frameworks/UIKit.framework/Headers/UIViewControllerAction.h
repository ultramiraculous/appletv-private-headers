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
@property(assign, nonatomic, setter=_setCurlUpRevealedHeight:) float _curlUpRevealedHeight;	// G=0x32e92445; S=0x32d9f185; @synthesize
@property(readonly, assign, nonatomic) BOOL animated;	// G=0x32e92429; 
@property(copy, nonatomic) id completion;	// G=0x32d9f1ed; S=0x32d74799; @synthesize=_completion
@property(retain, nonatomic) NSString *name;	// G=0x32e92465; S=0x32d74765; @synthesize=_name
@property(assign, nonatomic) int transition;	// G=0x32d9f32d; S=0x32d74775; @synthesize=_transition
@property(assign, nonatomic) UIViewController *viewController;	// G=0x32e92455; S=0x32d74755; @synthesize=_viewController
- (id)initWithViewController:(id)viewController name:(id)name transition:(int)transition;	// 0x32d746d1
// declared property getter: - (float)_curlUpRevealedHeight;	// 0x32e92445
// declared property setter: - (void)_setCurlUpRevealedHeight:(float)height;	// 0x32d9f185
// declared property getter: - (BOOL)animated;	// 0x32e92429
// declared property getter: - (id)completion;	// 0x32d9f1ed
- (void)dealloc;	// 0x32d9f341
// declared property getter: - (id)name;	// 0x32e92465
// declared property setter: - (void)setCompletion:(id)completion;	// 0x32d74799
// declared property setter: - (void)setName:(id)name;	// 0x32d74765
// declared property setter: - (void)setTransition:(int)transition;	// 0x32d74775
// declared property setter: - (void)setViewController:(id)controller;	// 0x32d74755
// declared property getter: - (int)transition;	// 0x32d9f32d
// declared property getter: - (id)viewController;	// 0x32e92455
@end

