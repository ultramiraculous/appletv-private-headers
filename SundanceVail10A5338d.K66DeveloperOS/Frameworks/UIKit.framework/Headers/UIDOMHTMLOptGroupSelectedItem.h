/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIWebSelectedItemPrivate.h"
#import <NSObject.h> // Unknown library

@class DOMHTMLOptGroupElement;

__attribute__((visibility("hidden")))
@interface UIDOMHTMLOptGroupSelectedItem : NSObject <UIWebSelectedItemPrivate> {
	DOMHTMLOptGroupElement *_node;	// 4 = 0x4
}
@property(retain, nonatomic) DOMHTMLOptGroupElement *_node;	// G=0x30e1c19d; S=0x30e1c1ad; @synthesize
@property(readonly, retain) DOMHTMLOptGroupElement *node;	// G=0x30e1c139; converted property
@property(assign) BOOL selected;	// G=0x30e1c149; S=0x30e1c151; converted property
- (id)initWithHTMLOptGroupNode:(id)htmloptGroupNode;	// 0x30e1c0f1
// declared property getter: - (id)_node;	// 0x30e1c19d
- (void)dealloc;	// 0x30e1c159
- (BOOL)isGroup;	// 0x30e1c14d
// converted property getter: - (id)node;	// 0x30e1c139
// converted property getter: - (BOOL)selected;	// 0x30e1c149
// converted property setter: - (void)setSelected:(BOOL)selected;	// 0x30e1c151
// declared property setter: - (void)set_node:(id)node;	// 0x30e1c1ad
- (void)unselect;	// 0x30e1c155
@end
