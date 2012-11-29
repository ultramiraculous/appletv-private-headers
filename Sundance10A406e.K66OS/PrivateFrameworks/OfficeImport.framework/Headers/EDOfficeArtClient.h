/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library
#import "OADTextClient.h"
#import "OfficeImport-Structs.h"
#import "OADClient.h"

@class EDComment, EDSheet, EDAnchor, NSMutableDictionary, EDTextBox;

@interface EDOfficeArtClient : NSObject <OADClient, OADTextClient> {
	EDSheet *mSheet;	// 4 = 0x4
	id mClientState;	// 8 = 0x8
	EDAnchor *mAnchor;	// 12 = 0xc
	EDTextBox *mTextBox;	// 16 = 0x10
	EDComment *mComment;	// 20 = 0x14
	NSMutableDictionary *mTableModels;	// 24 = 0x18
	CGRect mBounds;	// 28 = 0x1c
	bool mIsBoundsSet;	// 44 = 0x2c
}
@property(retain) id anchor;	// G=0x34f12e25; S=0x34f0aff1; converted property
@property(assign) CGRect bounds;	// G=0x34f209f5; S=0x34f1e605; converted property
@property(retain) id clientState;	// G=0x35083c19; S=0x35083c29; converted property
@property(retain) id comment;	// G=0x34f187ed; S=0x35000739; converted property
@property(retain) id sheet;	// G=0x35083c81; S=0x34fd1b01; converted property
@property(retain) id tableModels;	// G=0x35083c91; S=0x35083ca1; converted property
@property(retain) id textBox;	// G=0x34f200b9; S=0x34f1e375; converted property
- (id)init;	// 0x34f0ae25
- (id).cxx_construct;	// 0x34f0ae21
// converted property getter: - (id)anchor;	// 0x34f12e25
- (bool)areBoundsSet;	// 0x35083c6d
// converted property getter: - (CGRect)bounds;	// 0x34f209f5
// converted property getter: - (id)clientState;	// 0x35083c19
// converted property getter: - (id)comment;	// 0x34f187ed
- (void)dealloc;	// 0x34f1a809
- (BOOL)hasBounds;	// 0x34f12e11
- (BOOL)hasText;	// 0x34f19c9d
// converted property setter: - (void)setAnchor:(id)anchor;	// 0x34f0aff1
// converted property setter: - (void)setBounds:(CGRect)bounds;	// 0x34f1e605
// converted property setter: - (void)setClientState:(id)state;	// 0x35083c29
// converted property setter: - (void)setComment:(id)comment;	// 0x35000739
// converted property setter: - (void)setSheet:(id)sheet;	// 0x34fd1b01
// converted property setter: - (void)setTableModels:(id)models;	// 0x35083ca1
// converted property setter: - (void)setTextBox:(id)box;	// 0x34f1e375
// converted property getter: - (id)sheet;	// 0x35083c81
// converted property getter: - (id)tableModels;	// 0x35083c91
// converted property getter: - (id)textBox;	// 0x34f200b9
@end
