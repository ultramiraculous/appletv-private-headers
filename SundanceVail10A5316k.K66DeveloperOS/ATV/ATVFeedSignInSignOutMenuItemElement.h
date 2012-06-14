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
@property(copy, nonatomic) NSString *confirmationDescription;	// G=0x139c25; S=0x139c39; @synthesize=_confirmationDescription
@property(copy, nonatomic) NSString *confirmationTitle;	// G=0x139c01; S=0x139c15; @synthesize=_confirmationTitle
@property(copy, nonatomic) NSString *signInPageURL;	// G=0x139c49; S=0x139c5d; @synthesize=_signInPageURL
@property(assign, nonatomic) BOOL signOutExitsApp;	// G=0x139be1; S=0x139bf1; @synthesize=_signOutExitsApp
- (id)initWithXMLElement:(id)xmlelement merchant:(id)merchant parent:(id)parent;	// 0x139a01
// declared property getter: - (id)confirmationDescription;	// 0x139c25
// declared property getter: - (id)confirmationTitle;	// 0x139c01
- (void)dealloc;	// 0x139b69
// declared property setter: - (void)setConfirmationDescription:(id)description;	// 0x139c39
// declared property setter: - (void)setConfirmationTitle:(id)title;	// 0x139c15
// declared property setter: - (void)setSignInPageURL:(id)pageURL;	// 0x139c5d
// declared property setter: - (void)setSignOutExitsApp:(BOOL)app;	// 0x139bf1
// declared property getter: - (id)signInPageURL;	// 0x139c49
// declared property getter: - (BOOL)signOutExitsApp;	// 0x139be1
@end

