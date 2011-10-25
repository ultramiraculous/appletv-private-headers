/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

#import "DOMObject.h"

@class DOMCSSStyleSheet, NSString;

__attribute__((visibility("hidden")))
@interface DOMCSSRule : DOMObject {
}
@property(copy) NSString *cssText;	// G=0x31bcdbcd; S=0x31bcda85; 
@property(readonly, retain) DOMCSSRule *parentRule;	// G=0x31bcd8fd; 
@property(readonly, retain) DOMCSSStyleSheet *parentStyleSheet;	// G=0x31bcd9c1; 
@property(readonly, assign) unsigned short type;	// G=0x31bcd7bd; 
// declared property getter: - (id)cssText;	// 0x31bcdbcd
- (void)dealloc;	// 0x31bcd87d
- (void)finalize;	// 0x31bcdd1d
// declared property getter: - (id)parentRule;	// 0x31bcd8fd
// declared property getter: - (id)parentStyleSheet;	// 0x31bcd9c1
// declared property setter: - (void)setCssText:(id)text;	// 0x31bcda85
// declared property getter: - (unsigned short)type;	// 0x31bcd7bd
@end

