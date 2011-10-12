/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library
#import "OADClient.h"
#import "OfficeImport-Structs.h"
#import "OADTextClient.h"

@class NSMutableDictionary, EDSheet, EDComment, EDTextBox, EDAnchor;

__attribute__((visibility("hidden")))
@interface EDOfficeArtClient : NSObject <OADClient, OADTextClient> {
@private
	EDSheet *mSheet;	// 4 = 0x4
	id mClientState;	// 8 = 0x8
	EDAnchor *mAnchor;	// 12 = 0xc
	EDTextBox *mTextBox;	// 16 = 0x10
	EDComment *mComment;	// 20 = 0x14
	NSMutableDictionary *mTableModels;	// 24 = 0x18
	CGRect mBounds;	// 28 = 0x1c
	bool mIsBoundsSet;	// 44 = 0x2c
}
@property(retain) id anchor;	// G=0x355e7585; S=0x355e2b1d; converted property
@property(assign) CGRect bounds;	// G=0x3565fe4d; S=0x3565f20d; converted property
@property(retain) id clientState;	// G=0x35731861; S=0x357319ad; converted property
@property(retain) id comment;	// G=0x355e8d39; S=0x3565e119; converted property
@property(retain) id sheet;	// G=0x35731881; S=0x35652181; converted property
@property(retain) id tableModels;	// G=0x35731891; S=0x3573196d; converted property
@property(retain) id textBox;	// G=0x3563ff55; S=0x3563fdfd; converted property
- (id)init;	// 0x355e2951
// converted property getter: - (id)anchor;	// 0x355e7585
- (bool)areBoundsSet;	// 0x35731871
// converted property getter: - (CGRect)bounds;	// 0x3565fe4d
// converted property getter: - (id)clientState;	// 0x35731861
// converted property getter: - (id)comment;	// 0x355e8d39
- (void)dealloc;	// 0x355f27c5
- (BOOL)hasBounds;	// 0x355e7575
- (BOOL)hasText;	// 0x355ea4a5
// converted property setter: - (void)setAnchor:(id)anchor;	// 0x355e2b1d
// converted property setter: - (void)setBounds:(CGRect)bounds;	// 0x3565f20d
// converted property setter: - (void)setClientState:(id)state;	// 0x357319ad
// converted property setter: - (void)setComment:(id)comment;	// 0x3565e119
// converted property setter: - (void)setSheet:(id)sheet;	// 0x35652181
// converted property setter: - (void)setTableModels:(id)models;	// 0x3573196d
// converted property setter: - (void)setTextBox:(id)box;	// 0x3563fdfd
// converted property getter: - (id)sheet;	// 0x35731881
// converted property getter: - (id)tableModels;	// 0x35731891
// converted property getter: - (id)textBox;	// 0x3563ff55
@end

