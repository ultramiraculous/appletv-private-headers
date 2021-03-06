/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "EDKeyedObject.h"
#import <NSObject.h> // Unknown library

@class EDResources, EDRunsCollection;

__attribute__((visibility("hidden")))
@interface CHDDefaultTextProperty : NSObject <EDKeyedObject> {
@private
	EDResources *mResources;	// 4 = 0x4
	int mDefaultTextType;	// 8 = 0x8
	unsigned mContentFormatId;	// 12 = 0xc
	EDRunsCollection *mRuns;	// 16 = 0x10
	int mLabelPosition;	// 20 = 0x14
	bool mShowCategoryLabel;	// 24 = 0x18
	bool mShowValueLabel;	// 25 = 0x19
	bool mShowPercentageLabel;	// 26 = 0x1a
	bool mShowSeriesLabel;	// 27 = 0x1b
}
@property(retain) id contentFormat;	// G=0x30e476b1; S=0x30e4761d; converted property
@property(assign) unsigned contentFormatId;	// G=0x30e4760d; S=0x30d49531; converted property
@property(assign) int defaultTextType;	// G=0x30e475ad; S=0x30d49541; converted property
@property(assign) bool isShowCategoryLabel;	// G=0x30e475cd; S=0x30d49561; converted property
@property(assign) bool isShowPercentageLabel;	// G=0x30e475ed; S=0x30d49581; converted property
@property(assign) bool isShowSeriesLabel;	// G=0x30e475fd; S=0x30d49591; converted property
@property(assign) bool isShowValueLabel;	// G=0x30e475dd; S=0x30d49571; converted property
@property(assign) int labelPosition;	// G=0x30e475bd; S=0x30d49551; converted property
@property(retain) id runs;	// G=0x30db5d81; S=0x30d494e9; converted property
+ (id)defaultTextPropertyWithResources:(id)resources;	// 0x30d4921d
- (id)initWithResources:(id)resources;	// 0x30d49269
// converted property getter: - (id)contentFormat;	// 0x30e476b1
// converted property getter: - (unsigned)contentFormatId;	// 0x30e4760d
- (void)dealloc;	// 0x30d5ccc9
// converted property getter: - (int)defaultTextType;	// 0x30e475ad
// converted property getter: - (bool)isShowCategoryLabel;	// 0x30e475cd
// converted property getter: - (bool)isShowPercentageLabel;	// 0x30e475ed
// converted property getter: - (bool)isShowSeriesLabel;	// 0x30e475fd
// converted property getter: - (bool)isShowValueLabel;	// 0x30e475dd
- (unsigned)key;	// 0x30d495a1
// converted property getter: - (int)labelPosition;	// 0x30e475bd
// converted property getter: - (id)runs;	// 0x30db5d81
// converted property setter: - (void)setContentFormat:(id)format;	// 0x30e4761d
// converted property setter: - (void)setContentFormatId:(unsigned)anId;	// 0x30d49531
// converted property setter: - (void)setDefaultTextType:(int)type;	// 0x30d49541
// converted property setter: - (void)setIsShowCategoryLabel:(bool)label;	// 0x30d49561
// converted property setter: - (void)setIsShowPercentageLabel:(bool)label;	// 0x30d49581
// converted property setter: - (void)setIsShowSeriesLabel:(bool)label;	// 0x30d49591
// converted property setter: - (void)setIsShowValueLabel:(bool)label;	// 0x30d49571
// converted property setter: - (void)setLabelPosition:(int)position;	// 0x30d49551
// converted property setter: - (void)setRuns:(id)runs;	// 0x30d494e9
@end

