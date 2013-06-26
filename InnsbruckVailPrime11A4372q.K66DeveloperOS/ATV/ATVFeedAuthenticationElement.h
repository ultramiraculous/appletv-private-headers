/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ATVFeedRootElement.h"

@class ATVFeedImageElement, NSString;

__attribute__((visibility("hidden")))
@interface ATVFeedAuthenticationElement : ATVFeedRootElement {
	ATVFeedImageElement *_image;	// 4 = 0x4
	NSString *_accountNameTitle;	// 8 = 0x8
	NSString *_accountNameInstructions;	// 12 = 0xc
	NSString *_accountNameLabel;	// 16 = 0x10
	NSString *_accountNameFootnote;	// 20 = 0x14
	NSString *_accountPasswordTitle;	// 24 = 0x18
	NSString *_accountPasswordInstructions;	// 28 = 0x1c
	NSString *_accountPasswordLabel;	// 32 = 0x20
	NSString *_connectionString;	// 36 = 0x24
	NSString *_failureTitle;	// 40 = 0x28
	NSString *_failureInstructions;	// 44 = 0x2c
	NSString *_urlToLoadAfterAuth;	// 48 = 0x30
}
@property(copy, nonatomic) NSString *accountNameFootnote;	// G=0x121fc1; S=0x121fd5; @synthesize=_accountNameFootnote
@property(copy, nonatomic) NSString *accountNameInstructions;	// G=0x121f79; S=0x121f8d; @synthesize=_accountNameInstructions
@property(copy, nonatomic) NSString *accountNameLabel;	// G=0x121f9d; S=0x121fb1; @synthesize=_accountNameLabel
@property(copy, nonatomic) NSString *accountNameTitle;	// G=0x121f55; S=0x121f69; @synthesize=_accountNameTitle
@property(copy, nonatomic) NSString *accountPasswordInstructions;	// G=0x122009; S=0x12201d; @synthesize=_accountPasswordInstructions
@property(copy, nonatomic) NSString *accountPasswordLabel;	// G=0x12202d; S=0x122041; @synthesize=_accountPasswordLabel
@property(copy, nonatomic) NSString *accountPasswordTitle;	// G=0x121fe5; S=0x121ff9; @synthesize=_accountPasswordTitle
@property(copy, nonatomic) NSString *connectionString;	// G=0x122051; S=0x122065; @synthesize=_connectionString
@property(copy, nonatomic) NSString *failureInstructions;	// G=0x122099; S=0x1220ad; @synthesize=_failureInstructions
@property(copy, nonatomic) NSString *failureTitle;	// G=0x122075; S=0x122089; @synthesize=_failureTitle
@property(retain, nonatomic) ATVFeedImageElement *image;	// G=0x121f1d; S=0x121f2d; @synthesize=_image
@property(copy, nonatomic) NSString *urlToLoadAfterAuth;	// G=0x1220bd; S=0x1220d1; @synthesize=_urlToLoadAfterAuth
- (id)initWithXMLElement:(id)xmlelement merchant:(id)merchant parent:(id)parent;	// 0x121ab5
- (void).cxx_destruct;	// 0x1220e1
// declared property getter: - (id)accountNameFootnote;	// 0x121fc1
// declared property getter: - (id)accountNameInstructions;	// 0x121f79
// declared property getter: - (id)accountNameLabel;	// 0x121f9d
// declared property getter: - (id)accountNameTitle;	// 0x121f55
// declared property getter: - (id)accountPasswordInstructions;	// 0x122009
// declared property getter: - (id)accountPasswordLabel;	// 0x12202d
// declared property getter: - (id)accountPasswordTitle;	// 0x121fe5
// declared property getter: - (id)connectionString;	// 0x122051
// declared property getter: - (id)failureInstructions;	// 0x122099
// declared property getter: - (id)failureTitle;	// 0x122075
// declared property getter: - (id)image;	// 0x121f1d
// declared property setter: - (void)setAccountNameFootnote:(id)footnote;	// 0x121fd5
// declared property setter: - (void)setAccountNameInstructions:(id)instructions;	// 0x121f8d
// declared property setter: - (void)setAccountNameLabel:(id)label;	// 0x121fb1
// declared property setter: - (void)setAccountNameTitle:(id)title;	// 0x121f69
// declared property setter: - (void)setAccountPasswordInstructions:(id)instructions;	// 0x12201d
// declared property setter: - (void)setAccountPasswordLabel:(id)label;	// 0x122041
// declared property setter: - (void)setAccountPasswordTitle:(id)title;	// 0x121ff9
// declared property setter: - (void)setConnectionString:(id)string;	// 0x122065
// declared property setter: - (void)setFailureInstructions:(id)instructions;	// 0x1220ad
// declared property setter: - (void)setFailureTitle:(id)title;	// 0x122089
// declared property setter: - (void)setImage:(id)image;	// 0x121f2d
// declared property setter: - (void)setUrlToLoadAfterAuth:(id)loadAfterAuth;	// 0x1220d1
// declared property getter: - (id)urlToLoadAfterAuth;	// 0x1220bd
@end
