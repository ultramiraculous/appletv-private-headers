/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

#import "PSSetupController.h"

@class NSString;

@interface PSInternationalLanguageSetupController : PSSetupController {
	NSString *_languageToSet;	// 448 = 0x1c0
}
- (void)commit;	// 0x3248e56d
- (void)dealloc;	// 0x3248dded
- (void)didFinishCommit;	// 0x3248e65d
- (id)language:(id)language;	// 0x3248e6cd
- (void)rotateView:(id)view toOrientation:(int)orientation;	// 0x3248e405
- (void)setLanguage:(id)language specifier:(id)specifier;	// 0x3248e691
- (void)setupController;	// 0x3248e701
- (void)showBlackViewWithLabel:(id)label;	// 0x3248de89
@end

