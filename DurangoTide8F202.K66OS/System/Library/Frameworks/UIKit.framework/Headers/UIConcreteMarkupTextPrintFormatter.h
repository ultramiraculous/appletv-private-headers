/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIWebDocumentViewPrintFormatter.h"
#import "UIKit-Structs.h"

@class NSString;

@interface UIConcreteMarkupTextPrintFormatter : UIWebDocumentViewPrintFormatter {
	NSString *_markupText;	// 52 = 0x34
}
@property(copy, nonatomic) NSString *markupText;	// G=0x30862195; S=0x308621a5; @synthesize=_markupText
- (id)initWithMarkupText:(id)markupText;	// 0x30862331
- (id)copyWithZone:(NSZone *)zone;	// 0x308622e1
- (void)dealloc;	// 0x30862299
// declared property getter: - (id)markupText;	// 0x30862195
// declared property setter: - (void)setMarkupText:(id)text;	// 0x308621a5
@end
