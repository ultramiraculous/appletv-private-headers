/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

#import "PSSetupController.h"

@class NSString;

@interface PSInternationalLanguageSetupController : PSSetupController {
	NSString *_languageToSet;	// 312 = 0x138
}
- (void)commit;	// 0x316212d9
- (void)dealloc;	// 0x31620b75
- (void)didFinishCommit;	// 0x316213cd
- (id)language:(id)language;	// 0x31621439
- (void)rotateView:(id)view toOrientation:(int)orientation;	// 0x31621185
- (void)setLanguage:(id)language specifier:(id)specifier;	// 0x316213fd
- (void)setupController;	// 0x3162146d
- (void)showBlackViewWithLabel:(id)label;	// 0x31620c11
@end

