/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OADTextRun.h"

@class NSString, OADParagraphProperties;

__attribute__((visibility("hidden")))
@interface OADTextField : OADTextRun {
@private
	OADParagraphProperties *mParagraphProperties;	// 8 = 0x8
	NSString *mId;	// 12 = 0xc
	NSString *mText;	// 16 = 0x10
}
@property(retain) id id;	// G=0x353cf521; S=0x352d52d1; converted property
@property(retain) id text;	// G=0x3512db69; S=0x351e8bbd; converted property
- (id)init;	// 0x351a9f9d
- (void)dealloc;	// 0x351b2409
// converted property getter: - (id)id;	// 0x353cf521
- (BOOL)isEmpty;	// 0x3526fb49
- (id)paragraphProperties;	// 0x352d5315
- (void)removeUnnecessaryOverrides;	// 0x351af805
// converted property setter: - (void)setId:(id)anId;	// 0x352d52d1
// converted property setter: - (void)setText:(id)text;	// 0x351e8bbd
// converted property getter: - (id)text;	// 0x3512db69
@end

