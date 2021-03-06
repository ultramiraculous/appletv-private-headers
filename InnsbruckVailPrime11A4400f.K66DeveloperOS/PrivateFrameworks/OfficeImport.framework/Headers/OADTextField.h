/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OADTextRun.h"

@class OADParagraphProperties, NSString;

@interface OADTextField : OADTextRun {
	OADParagraphProperties *mParagraphProperties;	// 8 = 0x8
	NSString *mId;	// 12 = 0xc
	NSString *mText;	// 16 = 0x10
}
@property(retain) id id;	// G=0x318f6465; S=0x31834d89; converted property
@property(retain) id text;	// G=0x3171bfc1; S=0x316d6ce5; converted property
- (id)init;	// 0x316d6aa1
- (void)dealloc;	// 0x3171f649
// converted property getter: - (id)id;	// 0x318f6465
- (BOOL)isEmpty;	// 0x317cb785
- (id)paragraphProperties;	// 0x31834dc9
- (void)removeUnnecessaryOverrides;	// 0x316dbba1
// converted property setter: - (void)setId:(id)anId;	// 0x31834d89
// converted property setter: - (void)setText:(id)text;	// 0x316d6ce5
// converted property getter: - (id)text;	// 0x3171bfc1
@end

