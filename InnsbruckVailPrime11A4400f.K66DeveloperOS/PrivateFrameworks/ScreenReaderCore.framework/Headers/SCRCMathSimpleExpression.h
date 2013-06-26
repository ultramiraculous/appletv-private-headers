/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ScreenReaderCore.framework/ScreenReaderCore
 */

#import "SCRCMathExpression.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface SCRCMathSimpleExpression : SCRCMathExpression {
	NSString *_content;	// 12 = 0xc
}
@property(copy, nonatomic) NSString *content;	// G=0x3273576d; S=0x32735781; @synthesize=_content
- (id)initWithDictionary:(id)dictionary;	// 0x3273529d
- (id)_functionNames;	// 0x327354d9
- (BOOL)canBeUsedWithBase;	// 0x32735635
// declared property getter: - (id)content;	// 0x3273576d
- (void)dealloc;	// 0x32735325
- (id)description;	// 0x32735371
- (id)dollarCodeDescriptionWithNumberOfOuterRadicals:(unsigned)outerRadicals treePosition:(id)position;	// 0x32735701
- (int)integerValue;	// 0x32735465
- (BOOL)isFunctionName;	// 0x327355f1
- (BOOL)isInteger;	// 0x327353d1
- (BOOL)isWordOrAbbreviation;	// 0x3273548d
- (id)latexMathModeDescription;	// 0x3273573d
// declared property setter: - (void)setContent:(id)content;	// 0x32735781
- (id)speakableDescriptionWithSpeakingStyle:(int)speakingStyle arePausesAllowed:(BOOL)allowed;	// 0x32735699
@end
