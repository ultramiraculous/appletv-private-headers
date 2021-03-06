/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import <NSObject.h> // Unknown library

@class NSString, NSLocale, NSArray;

@interface UILocalizedIndexedCollation : NSObject {
	NSLocale *_locale;	// 4 = 0x4
	NSArray *_sectionTitles;	// 8 = 0x8
	NSArray *_sectionStartStrings;	// 12 = 0xc
	NSArray *_sectionIndexTitles;	// 16 = 0x10
	NSArray *_sectionIndexMapping;	// 20 = 0x14
	NSString *_transform;	// 24 = 0x18
	NSString *_firstSectionStartString;	// 28 = 0x1c
	NSString *_lastSectionStartString;	// 32 = 0x20
	CFStringTokenizerRef _tokenizer;	// 36 = 0x24
}
@property(readonly, assign, nonatomic) NSArray *sectionIndexTitles;	// G=0x32f6262d; 
@property(readonly, assign, nonatomic) NSArray *sectionTitles;	// G=0x32f6261d; 
@property(readonly, assign) CFStringTokenizerRef tokenizer;	// G=0x32f623c9; converted property
+ (id)collationWithDictionary:(id)dictionary;	// 0x32f61f9d
+ (id)currentCollation;	// 0x32f62479
- (id)initWithDictionary:(id)dictionary;	// 0x32f61fd9
- (void)dealloc;	// 0x32f6252d
- (int)sectionForObject:(id)object collationStringSelector:(SEL)selector;	// 0x32f62691
- (int)sectionForSectionIndexTitleAtIndex:(int)index;	// 0x32f62651
// declared property getter: - (id)sectionIndexTitles;	// 0x32f6262d
// declared property getter: - (id)sectionTitles;	// 0x32f6261d
- (id)sortedArrayFromArray:(id)array collationStringSelector:(SEL)selector;	// 0x32f627bd
// converted property getter: - (CFStringTokenizerRef)tokenizer;	// 0x32f623c9
- (id)transformedCollationStringForString:(id)string;	// 0x32f62209
@end

