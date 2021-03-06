/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

#import "DOMHTMLElement.h"

@class NSString, DOMNodeList, DOMHTMLFormElement, DOMValidityState;

@interface DOMHTMLKeygenElement : DOMHTMLElement {
}
@property(assign) BOOL autofocus;	// G=0x31b02cb1; S=0x31b02dbd; 
@property(copy) NSString *challenge;	// G=0x31b02ed1; S=0x31b02ff5; 
@property(assign) BOOL disabled;	// G=0x31b031a9; S=0x31b032b5; 
@property(readonly, assign) DOMHTMLFormElement *form;	// G=0x31b033c9; 
@property(copy) NSString *keytype;	// G=0x31b034cd; S=0x31b035f1; 
@property(readonly, assign) DOMNodeList *labels;	// G=0x31b03f51; 
@property(copy) NSString *name;	// G=0x31b037a5; S=0x31b038c1; 
@property(readonly, assign) NSString *type;	// G=0x31b03a69; 
@property(readonly, assign) NSString *validationMessage;	// G=0x31b03d95; 
@property(readonly, assign) DOMValidityState *validity;	// G=0x31b03c89; 
@property(readonly, assign) BOOL willValidate;	// G=0x31b03b85; 
// declared property getter: - (BOOL)autofocus;	// 0x31b02cb1
// declared property getter: - (id)challenge;	// 0x31b02ed1
- (BOOL)checkValidity;	// 0x31b040b9
// declared property getter: - (BOOL)disabled;	// 0x31b031a9
// declared property getter: - (id)form;	// 0x31b033c9
// declared property getter: - (id)keytype;	// 0x31b034cd
// declared property getter: - (id)labels;	// 0x31b03f51
// declared property getter: - (id)name;	// 0x31b037a5
// declared property setter: - (void)setAutofocus:(BOOL)autofocus;	// 0x31b02dbd
// declared property setter: - (void)setChallenge:(id)challenge;	// 0x31b02ff5
- (void)setCustomValidity:(id)validity;	// 0x31b041bd
// declared property setter: - (void)setDisabled:(BOOL)disabled;	// 0x31b032b5
// declared property setter: - (void)setKeytype:(id)keytype;	// 0x31b035f1
// declared property setter: - (void)setName:(id)name;	// 0x31b038c1
// declared property getter: - (id)type;	// 0x31b03a69
// declared property getter: - (id)validationMessage;	// 0x31b03d95
// declared property getter: - (id)validity;	// 0x31b03c89
// declared property getter: - (BOOL)willValidate;	// 0x31b03b85
@end

