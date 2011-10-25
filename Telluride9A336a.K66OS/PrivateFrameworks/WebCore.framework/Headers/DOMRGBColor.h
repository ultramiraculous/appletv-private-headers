/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

#import "WebCore-Structs.h"
#import "DOMObject.h"

@class DOMCSSPrimitiveValue;

__attribute__((visibility("hidden")))
@interface DOMRGBColor : DOMObject {
}
@property(readonly, retain) DOMCSSPrimitiveValue *alpha;	// G=0x31c22859; 
@property(readonly, retain) DOMCSSPrimitiveValue *blue;	// G=0x31c229a1; 
@property(readonly, retain) DOMCSSPrimitiveValue *green;	// G=0x31c22ae9; 
@property(readonly, retain) DOMCSSPrimitiveValue *red;	// G=0x31c22c31; 
// declared property getter: - (id)alpha;	// 0x31c22859
// declared property getter: - (id)blue;	// 0x31c229a1
- (CGColorRef)color;	// 0x31c22799
- (void)dealloc;	// 0x31c22725
- (void)finalize;	// 0x31c22d79
// declared property getter: - (id)green;	// 0x31c22ae9
// declared property getter: - (id)red;	// 0x31c22c31
@end

