/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

#import "DOMHTMLElement.h"

@class DOMHTMLFormElement;

@interface DOMHTMLFieldSetElement : DOMHTMLElement {
}
@property(assign) BOOL disabled;	// G=0x36a9ffdd; S=0x36aa00e9; converted property
@property(readonly, assign) DOMHTMLFormElement *form;	// G=0x36aa01fd; 
@property(retain) id name;	// G=0x36aa0301; S=0x36aa0425; converted property
- (BOOL)checkValidity;	// 0x36aa0ac1
// converted property getter: - (BOOL)disabled;	// 0x36a9ffdd
// declared property getter: - (id)form;	// 0x36aa01fd
// converted property getter: - (id)name;	// 0x36aa0301
- (void)setCustomValidity:(id)validity;	// 0x36aa0bc5
// converted property setter: - (void)setDisabled:(BOOL)disabled;	// 0x36aa00e9
// converted property setter: - (void)setName:(id)name;	// 0x36aa0425
- (id)type;	// 0x36aa05d9
- (id)validationMessage;	// 0x36aa0905
- (id)validity;	// 0x36aa07f9
- (BOOL)willValidate;	// 0x36aa06f5
@end

