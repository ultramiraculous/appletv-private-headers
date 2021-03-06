/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRViewController.h"

@class ATVFeedMerchant, NSString, NSTimer;

__attribute__((visibility("hidden")))
@interface ATVFeedRootController : BRViewController {
	ATVFeedMerchant *_merchant;	// 104 = 0x68
	NSTimer *_waitTimer;	// 108 = 0x6c
	NSString *_url;	// 112 = 0x70
}
@property(copy, nonatomic) NSString *url;	// G=0x16aef5; S=0x16af09; @synthesize=_url
+ (id)controllerWithMerchant:(id)merchant;	// 0x16a3e1
- (id)initWithMerchant:(id)merchant;	// 0x16a42d
- (void)_readJavaScriptConfig:(id)config;	// 0x16a4ed
- (void)_showWaitTimer:(id)timer;	// 0x16adf1
- (void)controlWasDeactivated;	// 0x16ace5
- (void)dealloc;	// 0x16a481
- (BOOL)isNetworkDependent;	// 0x16a4e5
// declared property setter: - (void)setUrl:(id)url;	// 0x16af09
- (BOOL)showsHeader;	// 0x16a4e9
// declared property getter: - (id)url;	// 0x16aef5
- (void)wasExhumed;	// 0x16ad39
- (void)wasPopped;	// 0x16ad8d
- (void)wasPushed;	// 0x16a741
@end

