/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ATVFeedMenuItemElement.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface ATVFeedSignInSignOutMenuItemElement : ATVFeedMenuItemElement {
	BOOL _signOutExitsApp;	// 4 = 0x4
	NSString *_confirmationTitle;	// 8 = 0x8
	NSString *_confirmationDescription;	// 12 = 0xc
	NSString *_signInPageURL;	// 16 = 0x10
}
@property(copy, nonatomic) NSString *confirmationDescription;	// G=0x13f265; S=0x13f279; @synthesize=_confirmationDescription
@property(copy, nonatomic) NSString *confirmationTitle;	// G=0x13f241; S=0x13f255; @synthesize=_confirmationTitle
@property(copy, nonatomic) NSString *signInPageURL;	// G=0x13f289; S=0x13f29d; @synthesize=_signInPageURL
@property(assign, nonatomic) BOOL signOutExitsApp;	// G=0x13f221; S=0x13f231; @synthesize=_signOutExitsApp
- (id)initWithXMLElement:(id)xmlelement merchant:(id)merchant parent:(id)parent;	// 0x13f041
// declared property getter: - (id)confirmationDescription;	// 0x13f265
// declared property getter: - (id)confirmationTitle;	// 0x13f241
- (void)dealloc;	// 0x13f1a9
// declared property setter: - (void)setConfirmationDescription:(id)description;	// 0x13f279
// declared property setter: - (void)setConfirmationTitle:(id)title;	// 0x13f255
// declared property setter: - (void)setSignInPageURL:(id)pageURL;	// 0x13f29d
// declared property setter: - (void)setSignOutExitsApp:(BOOL)app;	// 0x13f231
// declared property getter: - (id)signInPageURL;	// 0x13f289
// declared property getter: - (BOOL)signOutExitsApp;	// 0x13f221
@end
