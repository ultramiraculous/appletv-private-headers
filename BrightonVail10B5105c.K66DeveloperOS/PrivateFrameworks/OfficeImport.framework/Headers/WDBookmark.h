/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "WDRun.h"

@class NSString;

@interface WDBookmark : WDRun {
	NSString *mName;	// 8 = 0x8
	int mBookmarkType;	// 12 = 0xc
}
@property(assign) int bookmarkType;	// G=0x3798d81d; S=0x3798d80d; converted property
@property(retain) id name;	// G=0x379a21d5; S=0x3798d82d; converted property
- (id)initWithParagraph:(id)paragraph name:(id)name type:(int)type;	// 0x379ef439
// converted property getter: - (int)bookmarkType;	// 0x3798d81d
- (void)dealloc;	// 0x379abbfd
// converted property getter: - (id)name;	// 0x379a21d5
- (int)runType;	// 0x379a1851
// converted property setter: - (void)setBookmarkType:(int)type;	// 0x3798d80d
// converted property setter: - (void)setName:(id)name;	// 0x3798d82d
@end
