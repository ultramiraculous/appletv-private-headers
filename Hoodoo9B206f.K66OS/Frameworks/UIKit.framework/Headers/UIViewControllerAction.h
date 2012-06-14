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
@private
	UIViewController *_viewController;	// 4 = 0x4
	NSString *_name;	// 8 = 0x8
	BOOL _animated;	// 12 = 0xc
	id _completion;	// 16 = 0x10
}
@property(assign, nonatomic) BOOL animated;	// G=0x354eb0f1; S=0x353e86ad; @synthesize=_animated
@property(copy, nonatomic) id completion;	// G=0x35402725; S=0x353e86cd; @synthesize=_completion
@property(retain, nonatomic) NSString *name;	// G=0x354eb0e1; S=0x353e8689; @synthesize=_name
@property(assign, nonatomic) UIViewController *viewController;	// G=0x354eb0d1; S=0x353e8679; @synthesize=_viewController
- (id)initWithViewController:(id)viewController name:(id)name animated:(BOOL)animated;	// 0x353e85f9
// declared property getter: - (BOOL)animated;	// 0x354eb0f1
// declared property getter: - (id)completion;	// 0x35402725
- (void)dealloc;	// 0x35402781
// declared property getter: - (id)name;	// 0x354eb0e1
// declared property setter: - (void)setAnimated:(BOOL)animated;	// 0x353e86ad
// declared property setter: - (void)setCompletion:(id)completion;	// 0x353e86cd
// declared property setter: - (void)setName:(id)name;	// 0x353e8689
// declared property setter: - (void)setViewController:(id)controller;	// 0x353e8679
// declared property getter: - (id)viewController;	// 0x354eb0d1
@end
