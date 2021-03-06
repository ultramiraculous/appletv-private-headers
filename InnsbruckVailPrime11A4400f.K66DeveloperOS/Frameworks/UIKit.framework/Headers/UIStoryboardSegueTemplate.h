/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <ImageIO/NSObject.h>
#import "NSCoding.h"

@class UIViewController, NSString;

__attribute__((visibility("hidden")))
@interface UIStoryboardSegueTemplate : NSObject <NSCoding> {
	NSString *_identifier;	// 4 = 0x4
	NSString *_segueClassName;	// 8 = 0x8
	UIViewController *_viewController;	// 12 = 0xc
	NSString *_destinationViewControllerIdentifier;	// 16 = 0x10
	BOOL _performOnViewLoad;	// 20 = 0x14
}
@property(readonly, assign, nonatomic) NSString *identifier;	// G=0x2f80cf95; @synthesize=_identifier
@property(assign, nonatomic) BOOL performOnViewLoad;	// G=0x2f80cfc5; S=0x2f80cfd5; @synthesize=_performOnViewLoad
@property(assign, nonatomic) UIViewController *viewController;	// G=0x2f80cfa5; S=0x2f80cfb5; @synthesize=_viewController
- (id)initWithCoder:(id)coder;	// 0x2f80cbb9
- (void)_perform:(id)perform;	// 0x2f80ce95
- (void)dealloc;	// 0x2f80cb41
- (id)defaultSegueClassName;	// 0x2f80cd6d
- (Class)effectiveSegueClass;	// 0x2f80cd79
- (void)encodeWithCoder:(id)coder;	// 0x2f80ccad
// declared property getter: - (id)identifier;	// 0x2f80cf95
- (void)perform:(id)perform;	// 0x2f80cf31
// declared property getter: - (BOOL)performOnViewLoad;	// 0x2f80cfc5
- (id)segueWithDestinationViewController:(id)destinationViewController;	// 0x2f80ce0d
// declared property setter: - (void)setPerformOnViewLoad:(BOOL)load;	// 0x2f80cfd5
// declared property setter: - (void)setViewController:(id)controller;	// 0x2f80cfb5
// declared property getter: - (id)viewController;	// 0x2f80cfa5
@end

