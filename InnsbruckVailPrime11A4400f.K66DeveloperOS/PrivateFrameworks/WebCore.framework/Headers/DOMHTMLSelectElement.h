/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

#import "DOMHTMLElement.h"

@class NSString, DOMHTMLFormElement, DOMHTMLOptionsCollection;

@interface DOMHTMLSelectElement : DOMHTMLElement {
}
@property(assign) BOOL autofocus;	// G=0x331a7861; S=0x331a78f9; 
@property(assign) BOOL disabled;	// G=0x331a79f9; S=0x331a7a91; 
@property(readonly, assign) DOMHTMLFormElement *form;	// G=0x331a7b91; 
@property(readonly, assign) int length;	// G=0x331a8559; 
@property(assign) BOOL multiple;	// G=0x331a7c81; S=0x331a7cb1; 
@property(copy) NSString *name;	// G=0x331a7da5; S=0x331a7f2d; 
@property(readonly, assign) DOMHTMLOptionsCollection *options;	// G=0x331a8425; 
@property(assign) BOOL required;	// G=0x331a8065; S=0x331a80fd; converted property
@property(assign) int selectedIndex;	// G=0x331a877d; S=0x331a886d; 
@property(assign) int size;	// G=0x331a81fd; S=0x331a822d; 
@property(readonly, assign) NSString *type;	// G=0x331a831d; 
@property(copy) NSString *value;	// G=0x331a895d; S=0x331a8a8d; 
@property(readonly, assign) BOOL willValidate;	// G=0x331a8bb5; 
- (void)_activateItemAtIndex:(int)index;	// 0x33174039
- (void)_activateItemAtIndex:(int)index allowMultipleSelection:(BOOL)selection;	// 0x33174059
- (void)add:(id)add :(id)arg2;	// 0x331a9355
- (void)add:(id)add before:(id)before;	// 0x331a9239
// declared property getter: - (BOOL)autofocus;	// 0x331a7861
- (BOOL)checkValidity;	// 0x331a9561
- (unsigned)completeLength;	// 0x331cc4b9
// declared property getter: - (BOOL)disabled;	// 0x331a79f9
// declared property getter: - (id)form;	// 0x331a7b91
- (id)item:(unsigned)item;	// 0x331a9009
- (id)labels;	// 0x331a8ed5
// declared property getter: - (int)length;	// 0x331a8559
- (id)listItemAtIndex:(int)index;	// 0x331cc4c9
// declared property getter: - (BOOL)multiple;	// 0x331a7c81
// declared property getter: - (id)name;	// 0x331a7da5
- (id)namedItem:(id)item;	// 0x331a9101
// declared property getter: - (id)options;	// 0x331a8425
- (void)remove:(int)remove;	// 0x331a9471
// converted property getter: - (BOOL)required;	// 0x331a8065
// declared property getter: - (int)selectedIndex;	// 0x331a877d
- (id)selectedOptions;	// 0x331a8649
// declared property setter: - (void)setAutofocus:(BOOL)autofocus;	// 0x331a78f9
- (void)setCustomValidity:(id)validity;	// 0x331a9651
// declared property setter: - (void)setDisabled:(BOOL)disabled;	// 0x331a7a91
// declared property setter: - (void)setMultiple:(BOOL)multiple;	// 0x331a7cb1
// declared property setter: - (void)setName:(id)name;	// 0x331a7f2d
// converted property setter: - (void)setRequired:(BOOL)required;	// 0x331a80fd
// declared property setter: - (void)setSelectedIndex:(int)index;	// 0x331a886d
// declared property setter: - (void)setSize:(int)size;	// 0x331a822d
// declared property setter: - (void)setValue:(id)value;	// 0x331a8a8d
// declared property getter: - (int)size;	// 0x331a81fd
- (int)structuralComplexityContribution;	// 0x331cc241
// declared property getter: - (id)type;	// 0x331a831d
- (id)validationMessage;	// 0x331a8da1
- (id)validity;	// 0x331a8ca9
// declared property getter: - (id)value;	// 0x331a895d
// declared property getter: - (BOOL)willValidate;	// 0x331a8bb5
@end
