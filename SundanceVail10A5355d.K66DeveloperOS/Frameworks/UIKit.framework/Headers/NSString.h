/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import <NSString.h> // Unknown library


@interface NSString (UISafeInstantiators)
- (id)_initWithUTF8String:(const char *)utf8String maxLength:(unsigned)length;	// 0x33a5a2b9
@end

@interface NSString (UIStringDrawing)
+ (void)_popAscentRoundingEnabled;	// 0x33a10939
+ (void)_popWordRoundingAllowed;	// 0x33a14329
+ (void)_pushAscentRoundingEnabled:(BOOL)enabled;	// 0x33a108e1
+ (void)_pushWordRoundingAllowed:(BOOL)allowed;	// 0x33a139e9
- (CGSize)_drawInRect:(CGRect)rect withFont:(id)font lineBreakMode:(int)mode alignment:(int)alignment lineSpacing:(int)spacing includeEmoji:(BOOL)emoji truncationRect:(CGRect *)rect7;	// 0x33a58d79
- (void)_makeNeededAdjustmentsToAttributes:(id)attributes andPoint:(CGPoint *)point forWidth:(float)width;	// 0x33a70fd1
- (CGSize)drawAtPoint:(CGPoint)point forWidth:(float)width withAttributes:(id)attributes;	// 0x33a70e65
- (CGSize)drawAtPoint:(CGPoint)point forWidth:(float)width withFont:(id)font fontSize:(float)size lineBreakMode:(int)mode baselineAdjustment:(int)adjustment;	// 0x33a1a301
- (CGSize)drawAtPoint:(CGPoint)point forWidth:(float)width withFont:(id)font fontSize:(float)size lineBreakMode:(int)mode baselineAdjustment:(int)adjustment includeEmoji:(BOOL)emoji;	// 0x33a1a35d
- (CGSize)drawAtPoint:(CGPoint)point forWidth:(float)width withFont:(id)font lineBreakMode:(int)mode;	// 0x33a00c49
- (CGSize)drawAtPoint:(CGPoint)point forWidth:(float)width withFont:(id)font lineBreakMode:(int)mode letterSpacing:(float)spacing;	// 0x33a14171
- (CGSize)drawAtPoint:(CGPoint)point forWidth:(float)width withFont:(id)font lineBreakMode:(int)mode letterSpacing:(float)spacing includeEmoji:(BOOL)emoji;	// 0x33a00c9d
- (CGSize)drawAtPoint:(CGPoint)point forWidth:(float)width withFont:(id)font minFontSize:(float)size actualFontSize:(float *)size5 lineBreakMode:(int)mode baselineAdjustment:(int)adjustment;	// 0x33a861bd
- (CGSize)drawAtPoint:(CGPoint)point forWidth:(float)width withFont:(id)font minFontSize:(float)size actualFontSize:(float *)size5 lineBreakMode:(int)mode baselineAdjustment:(int)adjustment includeEmoji:(BOOL)emoji;	// 0x33a86219
- (CGSize)drawAtPoint:(CGPoint)point withFont:(id)font;	// 0x33a8616d
- (CGSize)drawInRect:(CGRect)rect withAttributes:(id)attributes;	// 0x33b93865
- (CGSize)drawInRect:(CGRect)rect withFont:(id)font;	// 0x33b933f9
- (CGSize)drawInRect:(CGRect)rect withFont:(id)font lineBreakMode:(int)mode;	// 0x33ab3f7d
- (CGSize)drawInRect:(CGRect)rect withFont:(id)font lineBreakMode:(int)mode alignment:(int)alignment;	// 0x33a9b4c5
- (CGSize)drawInRect:(CGRect)rect withFont:(id)font lineBreakMode:(int)mode alignment:(int)alignment lineSpacing:(int)spacing;	// 0x33a58cbd
- (CGSize)drawInRect:(CGRect)rect withFont:(id)font lineBreakMode:(int)mode alignment:(int)alignment lineSpacing:(int)spacing includeEmoji:(BOOL)emoji;	// 0x33a58d15
- (id)securedStringIncludingLastCharacter:(BOOL)character;	// 0x33b93449
- (CGSize)sizeForWidth:(float)width withAttributes:(id)attributes;	// 0x33a70661
- (CGSize)sizeInRect:(CGRect)rect withAttributes:(id)attributes;	// 0x33ab8729
- (CGSize)sizeWithFont:(id)font;	// 0x339fac05
- (CGSize)sizeWithFont:(id)font constrainedToSize:(CGSize)size;	// 0x33a7a629
- (CGSize)sizeWithFont:(id)font constrainedToSize:(CGSize)size lineBreakMode:(int)mode;	// 0x33b6ef19
- (CGSize)sizeWithFont:(id)font constrainedToSize:(CGSize)size lineBreakMode:(int)mode lineSpacing:(int)spacing;	// 0x33a15a49
- (CGSize)sizeWithFont:(id)font forWidth:(float)width lineBreakMode:(int)mode;	// 0x33a00939
- (CGSize)sizeWithFont:(id)font forWidth:(float)width lineBreakMode:(int)mode letterSpacing:(float)spacing;	// 0x33a00971
- (CGSize)sizeWithFont:(id)font minFontSize:(float)size actualFontSize:(float *)size3 forWidth:(float)width lineBreakMode:(int)mode;	// 0x33a19d51
- (id)stringWithFont:(id)font forWidth:(float)width lineBreakMode:(int)mode;	// 0x33a6f1f1
@end

@interface NSString (UICalloutViewAdditions)
- (id)stringByStandardizingWhitespace;	// 0x33b52179
@end

@interface NSString (UIKBExtras)
+ (USet *)_characterSetWithPattern:(id)pattern;	// 0x33c0e739
+ (USet *)_ideographSet;	// 0x33c0ea8d
+ (USet *)_japaneseLetterSet;	// 0x33c0e9ed
+ (USet *)_nonHiraganaKatakanaOrBopomofoSet;	// 0x33c0e94d
+ (USet *)_nonHiraganaOrKatakanaSet;	// 0x33c0e8ad
+ (USet *)_nonIdeographicCharacterSet;	// 0x33c0e80d
+ (id)_stringWithUnichar:(unsigned long)unichar;	// 0x33a0a8a1
+ (id)stringWithUnichar:(unsigned long)unichar;	// 0x33c0f979
- (BOOL)_containsCJScripts;	// 0x33c0ef75
- (BOOL)_containsEmoji;	// 0x33c0f4c5
- (BOOL)_containsHiraganaKatakanaOrBopomofo;	// 0x33c0f479
- (BOOL)_containsHiraganaOrKatakana;	// 0x33c0f42d
- (BOOL)_containsIdeographicCharacters;	// 0x33c0f3e1
- (BOOL)_containsSubstring:(id)substring;	// 0x33aec175
- (BOOL)_contentsExclusivelyInCharacterSet:(USet *)characterSet;	// 0x33c0eb2d
- (unsigned)_editDistanceFrom:(id)from;	// 0x33c0f73d
- (BOOL)_endsSentence;	// 0x33c0ebdd
- (BOOL)_endsWord;	// 0x33b1d5ed
- (unsigned short)_firstChar;	// 0x33c0e721
- (id)_firstGrapheme;	// 0x33c0f0e1
- (unsigned)_graphemeCount;	// 0x33c0f295
- (BOOL)_isDelete;	// 0x33af9ec1
- (BOOL)_isIdeographicGlyphs;	// 0x33c0efcd
- (BOOL)_isJapanesePhrase;	// 0x33c0f0a1
- (BOOL)_isLeftAssociative;	// 0x33c0ec59
- (BOOL)_isNaturallyRTL;	// 0x33a0a5a1
- (BOOL)_isNewlineOrReturn;	// 0x33af9f0d
- (BOOL)_isOnlyIdeographs;	// 0x33c0f061
- (BOOL)_isPlainSpace;	// 0x33b1d651
- (BOOL)_isSpace;	// 0x33c0ed71
- (BOOL)_isSpaceOrReturn;	// 0x33c0ed29
- (BOOL)_isTripledPunctuation;	// 0x33c0ecc1
- (BOOL)_looksLikeEmailAddress;	// 0x33c0edb9
- (BOOL)_looksLikeNumberInput;	// 0x33c0ee05
- (BOOL)_looksLikeURL;	// 0x33c0eef1
- (id)_stringByApplyingTransform:(id)transform;	// 0x33c0f6e1
- (id)_stringByConvertingFromHalfWidthToFullWidth;	// 0x33c0f5b9
- (id)_stringByReplacingCharacter:(unsigned long)character withCharacter:(unsigned long)character2;	// 0x33a0a849
- (id)_stringByReplacingCharactersInSet:(CFCharacterSetRef)set withCharacter:(unsigned long)character;	// 0x33a63fbd
- (id)_stringByTranscribingFromLanguage:(id)language;	// 0x33c0f601
- (id)_stringByTrimmingCharactersInCFCharacterSet:(CFCharacterSetRef)cfcharacterSet;	// 0x33b0a379
- (id)_stringByTrimmingLastCharacter;	// 0x33ac8951
- (BOOL)containsSubstring:(id)substring;	// 0x33b42b71
- (unsigned)editDistanceFrom:(id)from;	// 0x33c0fafd
- (BOOL)endsSentence;	// 0x33c0f9c5
- (BOOL)endsWord;	// 0x33c0f9dd
- (BOOL)isDelete;	// 0x33c0fa6d
- (BOOL)isLeftAssociative;	// 0x33c0f9f5
- (BOOL)isNaturallyRTL;	// 0x33c0fae5
- (BOOL)isNewlineOrReturn;	// 0x33c0fa55
- (BOOL)isPlainSpace;	// 0x33c0fa0d
- (BOOL)isSpace;	// 0x33c0fa25
- (BOOL)isSpaceOrReturn;	// 0x33c0fa3d
- (BOOL)isTripledPunctuation;	// 0x33c0fa85
- (BOOL)looksLikeEmailAddress;	// 0x33c0fa9d
- (BOOL)looksLikeNumberInput;	// 0x33c0fab5
- (BOOL)looksLikeURL;	// 0x33c0facd
- (id)stringByReplacingCharacter:(unsigned long)character withCharacter:(unsigned long)character2;	// 0x33c0f9b5
- (id)stringByReplacingCharactersInSet:(CFCharacterSetRef)set withCharacter:(unsigned long)character;	// 0x33a63fad
- (id)stringByTrimmingCharactersInCFCharacterSet:(CFCharacterSetRef)cfcharacterSet;	// 0x33c0f995
- (id)stringByTrimmingLastCharacter;	// 0x33c0f9a5
@end

@interface NSString (UIKitAdditions)
- (id)queryKeysAndValues;	// 0x33b2d84d
- (id)unescapedQueryValue;	// 0x33c12ea9
@end

@interface NSString (UIFontPrivate)
- (id)stringByStrippingLeadingAndTrailingWhitespace;	// 0x33c167a1
@end

@interface NSString (UIWebViewAdditions)
- (id)_uikit_stringByTrimmingWhitespaceAndNewlines;	// 0x33c8c2f5
- (id)_uikit_stringWithWritingDirection:(int)writingDirection asOverride:(BOOL)override;	// 0x33c8c395
@end

@interface NSString (UIKBCandidateViewAdditions)
- (unsigned)countOfComposedCharacterSequences;	// 0x33ce7b9d
@end
