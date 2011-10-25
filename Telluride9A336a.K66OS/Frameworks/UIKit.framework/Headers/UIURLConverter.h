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
- (id)initWithURLConverterDictionary:(id)urlconverterDictionary;	// 0x35200e45
- (BOOL)_URLMatchesHostSuffixWhiteList:(id)list;	// 0x352010dd
- (BOOL)_URLMatchesPatterns:(id)patterns;	// 0x35205d11
- (BOOL)_string:(id)string matchesPatterns:(id)patterns;	// 0x35205de1
- (id)convertedURLForURL:(id)url;	// 0x35200fe1
- (void)dealloc;	// 0x352dd075
- (void)setHostPatternStrings:(id)strings;	// 0x352dd0fd
- (void)setHostSuffixWhiteList:(id)list;	// 0x352dd131
- (void)setPathPatternStrings:(id)strings;	// 0x352dd175
- (void)setSchemeMapping:(id)mapping;	// 0x352dd1a9
@end

