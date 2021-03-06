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
@property(readonly, assign, nonatomic) NSArray *sectionIndexTitles;	// G=0x3481659d; 
@property(readonly, assign, nonatomic) NSArray *sectionTitles;	// G=0x3481658d; 
@property(readonly, assign) CFStringTokenizerRef tokenizer;	// G=0x34816339; converted property
+ (id)collationWithDictionary:(id)dictionary;	// 0x34815f0d
+ (id)currentCollation;	// 0x348163e9
- (id)initWithDictionary:(id)dictionary;	// 0x34815f49
- (void)dealloc;	// 0x3481649d
- (int)sectionForObject:(id)object collationStringSelector:(SEL)selector;	// 0x34816601
- (int)sectionForSectionIndexTitleAtIndex:(int)index;	// 0x348165c1
// declared property getter: - (id)sectionIndexTitles;	// 0x3481659d
// declared property getter: - (id)sectionTitles;	// 0x3481658d
- (id)sortedArrayFromArray:(id)array collationStringSelector:(SEL)selector;	// 0x3481672d
// converted property getter: - (CFStringTokenizerRef)tokenizer;	// 0x34816339
- (id)transformedCollationStringForString:(id)string;	// 0x34816179
@end

