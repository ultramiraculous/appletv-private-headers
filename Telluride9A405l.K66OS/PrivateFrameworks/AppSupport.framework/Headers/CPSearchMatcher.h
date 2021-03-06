/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppSupport.framework/AppSupport
 */

#import <NSObject.h> // Unknown library

@class NSArray, NSData;

@interface CPSearchMatcher : NSObject {
	NSArray *_components;	// 4 = 0x4
	NSData *_wholeSearchStringData;	// 8 = 0x8
	NSData *_context;	// 12 = 0xc
}
- (id)initWithSearchString:(id)searchString;	// 0x36f46729
- (id)initWithSearchString:(id)searchString andLocale:(id)locale;	// 0x36f46749
- (id)initWithSearchString:(id)searchString andLocale:(id)locale andOptions:(int)options;	// 0x36f46921
- (id)initWithSearchString:(id)searchString options:(int)options;	// 0x36f4676d
- (void)dealloc;	// 0x36f46b39
- (BOOL)matches:(id)matches;	// 0x36f466c5
- (BOOL)matches:(id)matches matchType:(int)type;	// 0x36f466f5
- (BOOL)matchesUTF8String:(const char *)string;	// 0x36f466ad
- (BOOL)matchesUTF8String:(const char *)string matchType:(int)type;	// 0x36f4678d
@end

