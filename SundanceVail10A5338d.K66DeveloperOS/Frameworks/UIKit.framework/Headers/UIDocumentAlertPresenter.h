/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIAlertViewDelegate.h"
#import <NSObject.h> // Unknown library

@class NSError, UIAlertView;

__attribute__((visibility("hidden")))
@interface UIDocumentAlertPresenter : NSObject <UIAlertViewDelegate> {
	id _completionHandler;	// 4 = 0x4
	NSError *_error;	// 8 = 0x8
	UIAlertView *_alert;	// 12 = 0xc
}
+ (id)_presentAlertWithError:(id)error completionHandler:(id)handler;	// 0x30f83c39
- (id)initWithError:(id)error completionHandler:(id)handler;	// 0x30f83b35
- (void)_forceFinishNow;	// 0x30f83db9
- (void)alertView:(id)view clickedButtonAtIndex:(int)index;	// 0x30f83df9
- (void)alertViewCancel:(id)cancel;	// 0x30f83e6d
- (void)dealloc;	// 0x30f83bad
@end
