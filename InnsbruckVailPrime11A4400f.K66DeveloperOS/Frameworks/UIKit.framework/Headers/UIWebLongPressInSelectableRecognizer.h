/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UILongPressGestureRecognizer.h"
#import "UIKit-Structs.h"

@class UIWebDocumentView;

__attribute__((visibility("hidden")))
@interface UIWebLongPressInSelectableRecognizer : UILongPressGestureRecognizer {
	UIWebDocumentView *_documentView;	// 112 = 0x70
}
@property(assign, nonatomic) UIWebDocumentView *documentView;	// G=0x2f7414c9; S=0x2f7414d9; @synthesize=_documentView
// declared property getter: - (id)documentView;	// 0x2f7414c9
// declared property setter: - (void)setDocumentView:(id)view;	// 0x2f7414d9
- (void)setState:(int)state;	// 0x2f7413cd
@end

