/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppSupport.framework/AppSupport
 */

#import <NSObject.h> // Unknown library

@class NSArray, NSData;

@interface CPSearchMatcher : NSObject {
	int _options;	// 4 = 0x4
	NSArray *_components;	// 8 = 0x8
	NSArray *_asciiComponents;	// 12 = 0xc
	NSData *_wholeSearchStringData;	// 16 = 0x10
	NSData *_context;	// 20 = 0x14
}
- (id)initWithSearchString:(id)searchString;	// 0x335e8ac9
- (id)initWithSearchString:(id)searchString andLocale:(id)locale;	// 0x335e8ae9
- (id)initWithSearchString:(id)searchString andLocale:(id)locale andOptions:(int)options;	// 0x335e87a9
- (id)initWithSearchString:(id)searchString options:(int)options;	// 0x335e8b0d
- (void)dealloc;	// 0x335e8b2d
- (BOOL)matches:(id)matches;	// 0x335e8745
- (BOOL)matches:(id)matches matchType:(int)type;	// 0x335e8775
- (BOOL)matchesASCIIString:(const char *)string matchType:(int)type;	// 0x335e80ed
- (BOOL)matchesUTF8String:(const char *)string;	// 0x335e8531
- (BOOL)matchesUTF8String:(const char *)string matchType:(int)type;	// 0x335e8549
@end
