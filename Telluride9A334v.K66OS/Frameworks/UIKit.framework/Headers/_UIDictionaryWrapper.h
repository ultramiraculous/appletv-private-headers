/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import <NSObject.h> // Unknown library

@class NSURL, NSString;

__attribute__((visibility("hidden")))
@interface _UIDictionaryWrapper : NSObject {
@private
	const DCSDictionaryRef dictionary;	// 4 = 0x4
	NSURL *fileURL;	// 8 = 0x8
	NSString *indexLanguage;	// 12 = 0xc
	NSString *definitionLanguage;	// 16 = 0x10
	int type;	// 20 = 0x14
}
@property(readonly, assign, nonatomic) NSString *definitionLanguage;	// G=0x303acef9; @synthesize
@property(readonly, assign, nonatomic) unsigned definitionLanguageDirection;	// G=0x303acb01; 
@property(readonly, assign, nonatomic) DCSDictionaryRef dictionary;	// G=0x303acec9; @synthesize
@property(readonly, assign, nonatomic) NSURL *fileURL;	// G=0x303aced9; @synthesize
@property(readonly, assign, nonatomic) NSString *indexLanguage;	// G=0x303acee9; @synthesize
@property(readonly, assign, nonatomic) int type;	// G=0x303acf09; @synthesize
+ (id)dictionariesWithDictionary:(DCSDictionaryRef)dictionary;	// 0x303ac649
- (id)initWithDictionary:(DCSDictionaryRef)dictionary language:(id)language;	// 0x303ac759
- (int)compareToDictionary:(id)dictionary;	// 0x303ace05
- (void)dealloc;	// 0x303aca79
// declared property getter: - (id)definitionLanguage;	// 0x303acef9
// declared property getter: - (unsigned)definitionLanguageDirection;	// 0x303acb01
- (id)description;	// 0x303acd5d
// declared property getter: - (DCSDictionaryRef)dictionary;	// 0x303acec9
// declared property getter: - (id)fileURL;	// 0x303aced9
- (BOOL)hasMarkupForString:(id)string;	// 0x303acb3d
- (unsigned)hash;	// 0x303acc1d
// declared property getter: - (id)indexLanguage;	// 0x303acee9
- (BOOL)isEqual:(id)equal;	// 0x303acc75
- (id)markupForString:(id)string;	// 0x303acba5
// declared property getter: - (int)type;	// 0x303acf09
@end

