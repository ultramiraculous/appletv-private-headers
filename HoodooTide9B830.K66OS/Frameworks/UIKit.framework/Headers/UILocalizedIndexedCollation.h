/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library

@class NSArray, NSLocale, NSString;

@interface UILocalizedIndexedCollation : NSObject {
@private
	NSLocale *_locale;	// 4 = 0x4
	NSArray *_sectionTitles;	// 8 = 0x8
	NSArray *_sectionStartStrings;	// 12 = 0xc
	NSArray *_sectionIndexTitles;	// 16 = 0x10
	NSArray *_sectionIndexMapping;	// 20 = 0x14
	NSString *_transform;	// 24 = 0x18
}
@property(readonly, assign, nonatomic) NSArray *sectionIndexTitles;	// G=0x302e38c9; 
@property(readonly, assign, nonatomic) NSArray *sectionTitles;	// G=0x302e38b9; 
+ (id)collationWithDictionary:(id)dictionary;	// 0x302e34d1
+ (id)currentCollation;	// 0x302e3755
- (id)initWithDictionary:(id)dictionary;	// 0x302e350d
- (void)dealloc;	// 0x302e3809
- (int)sectionForObject:(id)object collationStringSelector:(SEL)selector;	// 0x302e3929
- (int)sectionForSectionIndexTitleAtIndex:(int)index;	// 0x302e38ed
// declared property getter: - (id)sectionIndexTitles;	// 0x302e38c9
// declared property getter: - (id)sectionTitles;	// 0x302e38b9
- (id)sortedArrayFromArray:(id)array collationStringSelector:(SEL)selector;	// 0x302e3a45
- (id)transformedCollationStringForString:(id)string;	// 0x302e36ed
@end
