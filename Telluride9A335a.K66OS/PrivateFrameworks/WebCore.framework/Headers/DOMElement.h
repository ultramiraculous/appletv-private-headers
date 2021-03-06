/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

#import "WebCore-Structs.h"
#import "DOMNode.h"

@class NSString, DOMCSSStyleDeclaration;

@interface DOMElement : DOMNode {
}
@property(readonly, assign) unsigned childElementCount;	// G=0x35bb6515; 
@property(readonly, assign) int clientHeight;	// G=0x35bb6459; 
@property(readonly, assign) int clientLeft;	// G=0x35bb6225; 
@property(readonly, assign) int clientTop;	// G=0x35bb62e1; 
@property(readonly, assign) int clientWidth;	// G=0x35bb639d; 
@property(readonly, retain) DOMElement *firstElementChild;	// G=0x35bb9495; 
@property(readonly, copy) NSString *innerText;	// G=0x35bb65d1; 
@property(readonly, retain) DOMElement *lastElementChild;	// G=0x35bb9559; 
@property(readonly, retain) DOMElement *nextElementSibling;	// G=0x35bb96e1; 
@property(readonly, assign) int offsetHeight;	// G=0x35bb5da9; 
@property(readonly, assign) int offsetLeft;	// G=0x35bb5b69; 
@property(readonly, retain) DOMElement *offsetParent;	// G=0x35bb93d1; 
@property(readonly, assign) int offsetTop;	// G=0x35bb5c29; 
@property(readonly, assign) int offsetWidth;	// G=0x35bb5ce9; 
@property(readonly, retain) DOMElement *previousElementSibling;	// G=0x35bb961d; 
@property(readonly, assign) int scrollHeight;	// G=0x35b1475d; 
@property(assign) int scrollLeft;	// G=0x35bb5e69; S=0x35bb5f29; 
@property(assign) int scrollTop;	// G=0x35bb5fe9; S=0x35bb60a9; 
@property(readonly, assign) int scrollWidth;	// G=0x35b144d9; 
@property(readonly, retain) DOMCSSStyleDeclaration *style;	// G=0x35b15211; 
@property(readonly, copy) NSString *tagName;	// G=0x35a3ac89; 
- (GSFontRef)_font;	// 0x35ba1511
- (id)_getURLAttribute:(id)attribute;	// 0x35ba1545
- (void)blur;	// 0x35bb8a41
// declared property getter: - (unsigned)childElementCount;	// 0x35bb6515
// declared property getter: - (int)clientHeight;	// 0x35bb6459
// declared property getter: - (int)clientLeft;	// 0x35bb6225
// declared property getter: - (int)clientTop;	// 0x35bb62e1
// declared property getter: - (int)clientWidth;	// 0x35bb639d
- (BOOL)contains:(id)contains;	// 0x35bb8bc5
// declared property getter: - (id)firstElementChild;	// 0x35bb9495
- (void)focus;	// 0x35bb6169
- (id)getAttribute:(id)attribute;	// 0x35bb671d
- (id)getAttributeNS:(id)ns :(id)arg2;	// 0x35bb70a1
- (id)getAttributeNS:(id)ns localName:(id)name;	// 0x35bb6eb5
- (id)getAttributeNode:(id)node;	// 0x35bb6a55
- (id)getAttributeNodeNS:(id)ns :(id)arg2;	// 0x35bb81d9
- (id)getAttributeNodeNS:(id)ns localName:(id)name;	// 0x35bb7f9d
- (id)getElementsByClassName:(id)name;	// 0x35bb8ed9
- (id)getElementsByTagName:(id)name;	// 0x35b1be71
- (id)getElementsByTagNameNS:(id)ns :(id)arg2;	// 0x35bb7d55
- (id)getElementsByTagNameNS:(id)ns localName:(id)name;	// 0x35bb7b0d
- (BOOL)hasAttribute:(id)attribute;	// 0x35bb8565
- (BOOL)hasAttributeNS:(id)ns :(id)arg2;	// 0x35bb8871
- (BOOL)hasAttributeNS:(id)ns localName:(id)name;	// 0x35bb86a1
// declared property getter: - (id)innerText;	// 0x35bb65d1
- (BOOL)isFocused;	// 0x35ba14f5
// declared property getter: - (id)lastElementChild;	// 0x35bb9559
// declared property getter: - (id)nextElementSibling;	// 0x35bb96e1
// declared property getter: - (int)offsetHeight;	// 0x35bb5da9
// declared property getter: - (int)offsetLeft;	// 0x35bb5b69
// declared property getter: - (id)offsetParent;	// 0x35bb93d1
// declared property getter: - (int)offsetTop;	// 0x35bb5c29
// declared property getter: - (int)offsetWidth;	// 0x35bb5ce9
// declared property getter: - (id)previousElementSibling;	// 0x35bb961d
- (id)querySelector:(id)selector;	// 0x35bb97a5
- (id)querySelectorAll:(id)all;	// 0x35bb90a5
- (void)removeAttribute:(id)attribute;	// 0x35ae992d
- (void)removeAttributeNS:(id)ns :(id)arg2;	// 0x35bb792d
- (void)removeAttributeNS:(id)ns localName:(id)name;	// 0x35bb774d
- (id)removeAttributeNode:(id)node;	// 0x35bb6d65
- (void)scrollByLines:(int)lines;	// 0x35bb8d61
- (void)scrollByPages:(int)pages;	// 0x35bb8e1d
// declared property getter: - (int)scrollHeight;	// 0x35b1475d
- (void)scrollIntoView:(BOOL)view;	// 0x35bb8af9
- (void)scrollIntoViewIfNeeded:(BOOL)needed;	// 0x35bb8c95
// declared property getter: - (int)scrollLeft;	// 0x35bb5e69
// declared property getter: - (int)scrollTop;	// 0x35bb5fe9
// declared property getter: - (int)scrollWidth;	// 0x35b144d9
- (void)setAttribute:(id)attribute :(id)arg2;	// 0x35bb6875
- (void)setAttribute:(id)attribute value:(id)value;	// 0x35aea7cd
- (void)setAttributeNS:(id)ns :(id)arg2 :(id)arg3;	// 0x35bb74ed
- (void)setAttributeNS:(id)ns qualifiedName:(id)name value:(id)value;	// 0x35bb728d
- (id)setAttributeNode:(id)node;	// 0x35bb6c15
- (id)setAttributeNodeNS:(id)ns;	// 0x35bb8415
// declared property setter: - (void)setScrollLeft:(int)left;	// 0x35bb5f29
// declared property setter: - (void)setScrollTop:(int)top;	// 0x35bb60a9
- (int)structuralComplexityContribution;	// 0x35c02575
// declared property getter: - (id)style;	// 0x35b15211
// declared property getter: - (id)tagName;	// 0x35a3ac89
- (BOOL)webkitMatchesSelector:(id)selector;	// 0x35bb9285
@end

