/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ScreenReaderCore.framework/ScreenReaderCore
 */

#import "SCRCMathRowExpression.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface SCRCMathFencedExpression : SCRCMathRowExpression {
	NSString *_openString;	// 16 = 0x10
	NSString *_closeString;	// 20 = 0x14
}
@property(copy, nonatomic) NSString *closeString;	// G=0x32734f8d; S=0x32734fa1; @synthesize=_closeString
@property(copy, nonatomic) NSString *openString;	// G=0x32734f69; S=0x32734f7d; @synthesize=_openString
- (id)initWithDictionary:(id)dictionary;	// 0x327345b5
- (id)_binomialCoefficientContent;	// 0x32734841
- (BOOL)_isBinomialCoefficient;	// 0x32734775
- (id)_treePositionForBinomialCoefficientContentWithOuterTreePosition:(id)outerTreePosition;	// 0x32734869
// declared property getter: - (id)closeString;	// 0x32734f8d
- (void)dealloc;	// 0x32734699
- (id)description;	// 0x327346fd
- (id)dollarCodeDescriptionWithNumberOfOuterRadicals:(unsigned)outerRadicals treePosition:(id)position;	// 0x32734c39
- (unsigned)fractionLevel;	// 0x3273487d
- (id)latexDescriptionInMathMode:(BOOL)mathMode;	// 0x32734e4d
- (id)mathMLAttributes;	// 0x32734dad
- (id)mathMLTag;	// 0x32734da1
// declared property getter: - (id)openString;	// 0x32734f69
// declared property setter: - (void)setCloseString:(id)string;	// 0x32734fa1
// declared property setter: - (void)setOpenString:(id)string;	// 0x32734f7d
- (id)speakableDescriptionWithSpeakingStyle:(int)speakingStyle arePausesAllowed:(BOOL)allowed;	// 0x327348e9
- (id)speakableSegmentsWithSpeakingStyle:(int)speakingStyle upToDepth:(unsigned)depth treePosition:(id)position;	// 0x32734a81
@end
