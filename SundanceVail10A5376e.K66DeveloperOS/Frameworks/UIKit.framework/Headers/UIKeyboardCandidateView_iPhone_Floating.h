/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIKeyboardCandidateView_iPhone.h"
#import "UIKeyboardCandidateViewInline.h"


__attribute__((visibility("hidden")))
@interface UIKeyboardCandidateView_iPhone_Floating : UIKeyboardCandidateView_iPhone <UIKeyboardCandidateViewInline> {
	CGRect _collapsedRect;	// 188 = 0xbc
	BOOL _withKeyboard;	// 204 = 0xcc
}
- (id)initWithFrame:(CGRect)frame;	// 0x3066aa1d
- (void)_collapse:(id)collapse;	// 0x3066b0ad
- (unsigned)_numberOfColumns:(BOOL)columns;	// 0x3066ac35
- (BOOL)_shouldShowHideKeyboard;	// 0x3066b0e5
- (BOOL)_shouldUseFullMetrics;	// 0x3066b0f5
- (id)activeCandidateList;	// 0x3066b07d
- (void)candidatesDidChange;	// 0x3066b08d
- (void)setCandidateBarExtended:(BOOL)extended fromRect:(CGRect)rect;	// 0x3066ac39
@end
