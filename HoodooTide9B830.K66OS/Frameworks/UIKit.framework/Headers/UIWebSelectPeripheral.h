/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library
#import "UIFormPeripheral.h"

@class DOMHTMLSelectElement;
@protocol UIWebFormControl;

__attribute__((visibility("hidden")))
@interface UIWebSelectPeripheral : NSObject <UIFormPeripheral> {
@private
	DOMHTMLSelectElement *_selectionNode;	// 4 = 0x4
	id<UIWebFormControl> _selectControl;	// 8 = 0x8
}
@property(retain, nonatomic) id<UIWebFormControl> _selectControl;	// G=0x30235301; S=0x30235311; @synthesize
@property(retain, nonatomic) DOMHTMLSelectElement *_selectionNode;	// G=0x302352cd; S=0x302352dd; @synthesize
+ (id)createPeripheralWithDOMHTMLSelectElement:(id)domhtmlselectElement;	// 0x302351ed
- (id)initWithDOMHTMLSelectElement:(id)domhtmlselectElement;	// 0x30234fb9
// declared property getter: - (id)_selectControl;	// 0x30235301
// declared property getter: - (id)_selectionNode;	// 0x302352cd
- (id)assistantView;	// 0x3023528d
- (void)beginEditing;	// 0x302352ad
- (void)dealloc;	// 0x30235235
// declared property setter: - (void)set_selectControl:(id)control;	// 0x30235311
// declared property setter: - (void)set_selectionNode:(id)node;	// 0x302352dd
@end
