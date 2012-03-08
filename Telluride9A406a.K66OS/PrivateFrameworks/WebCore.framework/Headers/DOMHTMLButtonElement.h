/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

#import "DOMHTMLElement.h"

@class DOMHTMLFormElement, NSString;

@interface DOMHTMLButtonElement : DOMHTMLElement {
}
@property(copy) NSString *accessKey;	// G=0x36a3d8b5; S=0x36a3d249; 
@property(assign) BOOL autofocus;	// G=0x36a3dce5; S=0x36a3df5d; 
@property(assign) BOOL disabled;	// G=0x36a3dc1d; S=0x36a3de85; 
@property(readonly, retain) DOMHTMLFormElement *form;	// G=0x36a3ca4d; 
@property(retain) id formAction;	// G=0x36a3cbe1; S=0x36a3cd39; converted property
@property(retain) id formEnctype;	// G=0x36a3d615; S=0x36a3ce7d; converted property
@property(retain) id formMethod;	// G=0x36a3d6f5; S=0x36a3cfc1; converted property
@property(assign) BOOL formNoValidate;	// G=0x36a3db55; S=0x36a3ddad; converted property
@property(retain) id formTarget;	// G=0x36a3d7d5; S=0x36a3d105; converted property
@property(copy) NSString *name;	// G=0x36a3d995; S=0x36a3d38d; 
@property(readonly, copy) NSString *type;	// G=0x36a3cb09; 
@property(copy) NSString *value;	// G=0x36a3da75; S=0x36a3d4d1; 
@property(readonly, assign) BOOL willValidate;	// G=0x36a3c98d; 
// declared property getter: - (id)accessKey;	// 0x36a3d8b5
// declared property getter: - (BOOL)autofocus;	// 0x36a3dce5
- (BOOL)checkValidity;	// 0x36a3e395
- (void)click;	// 0x36a3e58d
// declared property getter: - (BOOL)disabled;	// 0x36a3dc1d
// declared property getter: - (id)form;	// 0x36a3ca4d
// converted property getter: - (id)formAction;	// 0x36a3cbe1
// converted property getter: - (id)formEnctype;	// 0x36a3d615
// converted property getter: - (id)formMethod;	// 0x36a3d6f5
// converted property getter: - (BOOL)formNoValidate;	// 0x36a3db55
// converted property getter: - (id)formTarget;	// 0x36a3d7d5
- (id)labels;	// 0x36a3e24d
// declared property getter: - (id)name;	// 0x36a3d995
// declared property setter: - (void)setAccessKey:(id)key;	// 0x36a3d249
// declared property setter: - (void)setAutofocus:(BOOL)autofocus;	// 0x36a3df5d
- (void)setCustomValidity:(id)validity;	// 0x36a3e455
// declared property setter: - (void)setDisabled:(BOOL)disabled;	// 0x36a3de85
// converted property setter: - (void)setFormAction:(id)action;	// 0x36a3cd39
// converted property setter: - (void)setFormEnctype:(id)enctype;	// 0x36a3ce7d
// converted property setter: - (void)setFormMethod:(id)method;	// 0x36a3cfc1
// converted property setter: - (void)setFormNoValidate:(BOOL)validate;	// 0x36a3ddad
// converted property setter: - (void)setFormTarget:(id)target;	// 0x36a3d105
// declared property setter: - (void)setName:(id)name;	// 0x36a3d38d
// declared property setter: - (void)setValue:(id)value;	// 0x36a3d4d1
- (int)structuralComplexityContribution;	// 0x36a7c59d
// declared property getter: - (id)type;	// 0x36a3cb09
- (id)validationMessage;	// 0x36a3e101
- (id)validity;	// 0x36a3e035
// declared property getter: - (id)value;	// 0x36a3da75
// declared property getter: - (BOOL)willValidate;	// 0x36a3c98d
@end
