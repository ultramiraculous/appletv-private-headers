/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <NSObject.h> // Unknown library
#import "Foundation-Structs.h"

@class NSArray, NSString;

@interface NSLinguisticTagger : NSObject {
	NSArray *_schemes;	// 4 = 0x4
	unsigned _options;	// 8 = 0x8
	NSString *_string;	// 12 = 0xc
	id _orthographyArray;	// 16 = 0x10
	id _tokenArray;	// 20 = 0x14
	id _reserved;	// 24 = 0x18
}
@property(retain) NSString *string;	// G=0x374309ed; S=0x37430961; converted property
+ (id)availableTagSchemesForLanguage:(id)language;	// 0x374300d5
+ (BOOL)supportsLanguage:(id)language;	// 0x374308d5
- (id)initWithTagSchemes:(id)tagSchemes options:(unsigned)options;	// 0x3743019d
- (BOOL)_acceptSentenceTerminatorRange:(NSRange)range paragraphRange:(NSRange)range2 tokens:(NSLTToken *)tokens count:(unsigned)count tokenIndex:(unsigned)index;	// 0x3743419d
- (void)_acceptSentencesForParagraphRange:(NSRange)paragraphRange;	// 0x3743479d
- (void)_analyzePunctuationTokensInRange:(NSRange)range paragraphRange:(NSRange)range2;	// 0x37434959
- (void)_analyzeTokensInInterwordRange:(NSRange)interwordRange paragraphRange:(NSRange)range;	// 0x37435041
- (void)_analyzeTokensInWordRange:(NSRange)wordRange paragraphRange:(NSRange)range;	// 0x37435149
- (void)_calculateSentenceRangesForParagraphRange:(NSRange)paragraphRange;	// 0x374348c9
- (BOOL)_ngramTagsAndFrequenciesForMisspelledRange:(NSRange)misspelledRange word:(id)word tags:(id *)tags frequencies:(id *)frequencies;	// 0x374311c9
- (id)_rankedCandidatesForMisspelledRange:(NSRange)misspelledRange candidates:(id)candidates;	// 0x37431199
- (id)_rankedCandidatesForMisspelledRange:(NSRange)misspelledRange candidates:(id)candidates contextualFrequencies:(id *)frequencies baseFrequencies:(id *)frequencies4;	// 0x37431041
- (id)_tagSchemeForScheme:(id)scheme;	// 0x374307a1
- (id)_tokenDataForParagraphAtIndex:(unsigned)index paragraphRange:(NSRange *)range requireLemmas:(BOOL)lemmas requirePartsOfSpeech:(BOOL)speech requireNamedEntities:(BOOL)entities;	// 0x3743659d
- (id)_tokenDataForParagraphAtIndex:(unsigned)index paragraphRange:(NSRange *)range tagScheme:(id)scheme;	// 0x37436681
- (id)_tokenDataForParagraphRange:(NSRange)paragraphRange requireLemmas:(BOOL)lemmas requirePartsOfSpeech:(BOOL)speech requireNamedEntities:(BOOL)entities;	// 0x37435849
- (void)_tokenizeParagraphAtIndex:(unsigned)index requireLemmas:(BOOL)lemmas requirePartsOfSpeech:(BOOL)speech requireNamedEntities:(BOOL)entities;	// 0x374363fd
- (void)dealloc;	// 0x37430645
- (id)description;	// 0x374306d1
- (void)enumerateTagsInRange:(NSRange)range scheme:(id)scheme options:(unsigned)options usingBlock:(id)block;	// 0x37436739
- (id)orthographyAtIndex:(unsigned)index effectiveRange:(NSRange *)range;	// 0x37430d69
- (id)possibleTagsAtIndex:(unsigned)index scheme:(id)scheme tokenRange:(NSRange *)range sentenceRange:(NSRange *)range4 scores:(id *)scores;	// 0x374326e1
- (NSRange)sentenceRangeForRange:(NSRange)range;	// 0x37430eb1
- (void)setOrthography:(id)orthography range:(NSRange)range;	// 0x37430ba1
// converted property setter: - (void)setString:(id)string;	// 0x37430961
// converted property getter: - (id)string;	// 0x374309ed
- (void)stringEditedInRange:(NSRange)range changeInLength:(int)length;	// 0x374309fd
- (id)tagAtIndex:(unsigned)index scheme:(id)scheme tokenRange:(NSRange *)range sentenceRange:(NSRange *)range4;	// 0x374311f1
- (id)tagSchemes;	// 0x37430791
- (id)tagsInRange:(NSRange)range scheme:(id)scheme options:(unsigned)options tokenRanges:(id *)ranges;	// 0x37433f19
@end

