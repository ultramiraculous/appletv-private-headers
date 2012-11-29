/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSString, NSURL;

__attribute__((visibility("hidden")))
@interface ATVVerifyPaymentOperation : XXUnknownSuperclass {
	NSString *_customerTitle;	// 60 = 0x3c
	NSString *_customerMessage;	// 64 = 0x40
	NSURL *_verifyURL;	// 68 = 0x44
}
@property(retain, nonatomic) NSString *customerMessage;	// G=0x3a1d21; S=0x3a1d31; @synthesize=_customerMessage
@property(retain, nonatomic) NSString *customerTitle;	// G=0x3a1ce9; S=0x3a1cf9; @synthesize=_customerTitle
@property(retain, nonatomic) NSURL *verifyURL;	// G=0x3a1d59; S=0x3a1d69; @synthesize=_verifyURL
- (void).cxx_destruct;	// 0x3a1d91
- (id)_copyCVVCodeFromUser;	// 0x3a10b1
- (id)_copyResponseWithCode:(id)code error:(id *)error;	// 0x3a1a11
- (void)_displayCVVDialogWithCompletionHandler:(id)completionHandler;	// 0x3a12ed
- (void)_displayInvalidCVVDialog:(id)dialog withCompletionHandler:(id)completionHandler;	// 0x3a14e5
- (BOOL)_verifyCVVCode:(id)code error:(id *)error;	// 0x3a1639
// declared property getter: - (id)customerMessage;	// 0x3a1d21
// declared property getter: - (id)customerTitle;	// 0x3a1ce9
- (void)run;	// 0x3a0f19
// declared property setter: - (void)setCustomerMessage:(id)message;	// 0x3a1d31
// declared property setter: - (void)setCustomerTitle:(id)title;	// 0x3a1cf9
// declared property setter: - (void)setVerifyURL:(id)url;	// 0x3a1d69
// declared property getter: - (id)verifyURL;	// 0x3a1d59
@end
