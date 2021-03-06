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
@property(copy, nonatomic) NSString *confirmationDescription;	// G=0x162aad; S=0x162ac1; @synthesize=_confirmationDescription
@property(copy, nonatomic) NSString *confirmationTitle;	// G=0x162a89; S=0x162a9d; @synthesize=_confirmationTitle
@property(copy, nonatomic) NSString *signInPageURL;	// G=0x162ad1; S=0x162ae5; @synthesize=_signInPageURL
@property(assign, nonatomic) BOOL signOutExitsApp;	// G=0x162a69; S=0x162a79; @synthesize=_signOutExitsApp
- (id)initWithXMLElement:(id)xmlelement merchant:(id)merchant parent:(id)parent;	// 0x162889
// declared property getter: - (id)confirmationDescription;	// 0x162aad
// declared property getter: - (id)confirmationTitle;	// 0x162a89
- (void)dealloc;	// 0x1629f1
// declared property setter: - (void)setConfirmationDescription:(id)description;	// 0x162ac1
// declared property setter: - (void)setConfirmationTitle:(id)title;	// 0x162a9d
// declared property setter: - (void)setSignInPageURL:(id)pageURL;	// 0x162ae5
// declared property setter: - (void)setSignOutExitsApp:(BOOL)app;	// 0x162a79
// declared property getter: - (id)signInPageURL;	// 0x162ad1
// declared property getter: - (BOOL)signOutExitsApp;	// 0x162a69
@end

