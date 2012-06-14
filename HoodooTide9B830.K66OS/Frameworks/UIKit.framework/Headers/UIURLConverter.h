/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library

@class NSArray, NSDictionary;

__attribute__((visibility("hidden")))
@interface UIURLConverter : NSObject {
@private
	NSArray *_hostPatterns;	// 4 = 0x4
	NSArray *_hostSuffixWhiteList;	// 8 = 0x8
	NSArray *_pathPatterns;	// 12 = 0xc
	NSDictionary *_schemeMapping;	// 16 = 0x10
}
- (id)initWithURLConverterDictionary:(id)urlconverterDictionary;	// 0x30165779
- (BOOL)_URLMatchesHostSuffixWhiteList:(id)list;	// 0x30165a11
- (BOOL)_URLMatchesPatterns:(id)patterns;	// 0x3016a645
- (BOOL)_string:(id)string matchesPatterns:(id)patterns;	// 0x3016a715
- (id)convertedURLForURL:(id)url;	// 0x30165915
- (void)dealloc;	// 0x302445a9
- (void)setHostPatternStrings:(id)strings;	// 0x30244631
- (void)setHostSuffixWhiteList:(id)list;	// 0x30244665
- (void)setPathPatternStrings:(id)strings;	// 0x302446a9
- (void)setSchemeMapping:(id)mapping;	// 0x302446dd
@end
