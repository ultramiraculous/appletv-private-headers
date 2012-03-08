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
@property(retain, nonatomic) id<UIWebFormControl> _control;	// G=0x33b96c75; S=0x33b96c85; @synthesize
@property(retain, nonatomic) DOMHTMLInputElement *_inputElement;	// G=0x33b96c41; S=0x33b96c51; @synthesize
+ (id)createPeripheralWithDOMHTMLInputElement:(id)domhtmlinputElement;	// 0x33b96bb9
- (id)initWithDOMHTMLInputElement:(id)domhtmlinputElement;	// 0x33b969fd
// declared property getter: - (id)_control;	// 0x33b96c75
- (int)_datePickerModeForInputType:(id)inputType;	// 0x33b96955
// declared property getter: - (id)_inputElement;	// 0x33b96c41
- (id)assistantView;	// 0x33b96c21
- (void)beginEditing;	// 0x33b96c01
- (void)dealloc;	// 0x33b96b61
// declared property setter: - (void)set_control:(id)control;	// 0x33b96c85
// declared property setter: - (void)set_inputElement:(id)element;	// 0x33b96c51
@end
