/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreBookkeeper.framework/StoreBookkeeper
 */

#import </libobjc.A.h>

@class NSString;

@interface SBKAlertDialog : NSObject {
	NSString *_title;	// 4 = 0x4
	NSString *_message;	// 8 = 0x8
	NSString *_cancelButtonTitle;	// 12 = 0xc
	id _completionHandler;	// 16 = 0x10
	NSString *_acceptButtonTitle;	// 20 = 0x14
}
@property(copy) NSString *acceptButtonTitle;	// G=0x327b2735; S=0x327b2749; @synthesize=_acceptButtonTitle
@property(copy) NSString *cancelButtonTitle;	// G=0x327b26ed; S=0x327b2701; @synthesize=_cancelButtonTitle
@property(copy) id completionHandler;	// G=0x327b2711; S=0x327b2725; @synthesize=_completionHandler
@property(copy) NSString *message;	// G=0x327b26c9; S=0x327b26dd; @synthesize=_message
@property(copy) NSString *title;	// G=0x327b26a5; S=0x327b26b9; @synthesize=_title
- (id)initWithTitle:(id)title message:(id)message cancelButtonTitle:(id)title3 acceptButtonTitle:(id)title4;	// 0x327b1f11
- (void).cxx_destruct;	// 0x327b2759
- (void)_runAsCFUserNotificationDisplayAlert;	// 0x327b23c1
- (BOOL)_runAsUIAlertView;	// 0x327b22cd
// declared property getter: - (id)acceptButtonTitle;	// 0x327b2735
- (void)alertView:(id)view clickedButtonAtIndex:(int)index;	// 0x327b2251
// declared property getter: - (id)cancelButtonTitle;	// 0x327b26ed
// declared property getter: - (id)completionHandler;	// 0x327b2711
// declared property getter: - (id)message;	// 0x327b26c9
// declared property setter: - (void)setAcceptButtonTitle:(id)title;	// 0x327b2749
// declared property setter: - (void)setCancelButtonTitle:(id)title;	// 0x327b2701
// declared property setter: - (void)setCompletionHandler:(id)handler;	// 0x327b2725
// declared property setter: - (void)setMessage:(id)message;	// 0x327b26dd
// declared property setter: - (void)setTitle:(id)title;	// 0x327b26b9
- (void)showWithCompletionHandler:(id)completionHandler;	// 0x327b1fd9
// declared property getter: - (id)title;	// 0x327b26a5
@end
