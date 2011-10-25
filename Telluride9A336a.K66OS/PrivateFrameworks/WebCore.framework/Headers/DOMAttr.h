/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

#import "DOMNode.h"

@class NSString, DOMCSSStyleDeclaration, DOMElement;

__attribute__((visibility("hidden")))
@interface DOMAttr : DOMNode {
}
@property(readonly, copy) NSString *name;	// G=0x31bc7df1; 
@property(readonly, retain) DOMElement *ownerElement;	// G=0x31bc8089; 
@property(readonly, assign) BOOL specified;	// G=0x31bc7cf5; 
@property(readonly, retain) DOMCSSStyleDeclaration *style;	// G=0x31bc8201; 
@property(copy) NSString *value;	// G=0x31bc7d25; S=0x31bc7f41; 
- (BOOL)isId;	// 0x31bc8145
// declared property getter: - (id)name;	// 0x31bc7df1
// declared property getter: - (id)ownerElement;	// 0x31bc8089
// declared property setter: - (void)setValue:(id)value;	// 0x31bc7f41
// declared property getter: - (BOOL)specified;	// 0x31bc7cf5
// declared property getter: - (id)style;	// 0x31bc8201
// declared property getter: - (id)value;	// 0x31bc7d25
@end

