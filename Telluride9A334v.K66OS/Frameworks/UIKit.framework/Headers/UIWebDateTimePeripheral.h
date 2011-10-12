/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library
#import "UIFormPeripheral.h"

@class DOMHTMLInputElement;
@protocol UIWebFormControl;

__attribute__((visibility("hidden")))
@interface UIWebDateTimePeripheral : NSObject <UIFormPeripheral> {
@private
	DOMHTMLInputElement *_inputElement;	// 4 = 0x4
	id<UIWebFormControl> _control;	// 8 = 0x8
}
@property(retain, nonatomic) id<UIWebFormControl> _control;	// G=0x30245c75; S=0x30245c85; @synthesize
@property(retain, nonatomic) DOMHTMLInputElement *_inputElement;	// G=0x30245c41; S=0x30245c51; @synthesize
+ (id)createPeripheralWithDOMHTMLInputElement:(id)domhtmlinputElement;	// 0x30245bb9
- (id)initWithDOMHTMLInputElement:(id)domhtmlinputElement;	// 0x302459fd
// declared property getter: - (id)_control;	// 0x30245c75
- (int)_datePickerModeForInputType:(id)inputType;	// 0x30245955
// declared property getter: - (id)_inputElement;	// 0x30245c41
- (id)assistantView;	// 0x30245c21
- (void)beginEditing;	// 0x30245c01
- (void)dealloc;	// 0x30245b61
// declared property setter: - (void)set_control:(id)control;	// 0x30245c85
// declared property setter: - (void)set_inputElement:(id)element;	// 0x30245c51
@end

