/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "EDKeyedObject.h"
#import <NSObject.h> // Unknown library

@class EDResources, EDRunsCollection;

@interface CHDDefaultTextProperty : NSObject <EDKeyedObject> {
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
@property(retain) id contentFormat;	// G=0x31d76cbd; S=0x31d76d05; converted property
@property(assign) unsigned contentFormatId;	// G=0x31d76df1; S=0x31cf2111; converted property
@property(assign) int defaultTextType;	// G=0x31d76cad; S=0x31cf2121; converted property
@property(assign) bool isShowCategoryLabel;	// G=0x31d76da1; S=0x31cf2141; converted property
@property(assign) bool isShowPercentageLabel;	// G=0x31d76dc9; S=0x31cf2161; converted property
@property(assign) bool isShowSeriesLabel;	// G=0x31d76ddd; S=0x31cf2171; converted property
@property(assign) bool isShowValueLabel;	// G=0x31d76db5; S=0x31cf2151; converted property
@property(assign) int labelPosition;	// G=0x31d76d91; S=0x31cf2131; converted property
@property(retain) id runs;	// G=0x31d31359; S=0x31cf20cd; converted property
+ (id)defaultTextPropertyWithResources:(id)resources;	// 0x31cf1de1
- (id)initWithResources:(id)resources;	// 0x31cf1e2d
// converted property getter: - (id)contentFormat;	// 0x31d76cbd
// converted property getter: - (unsigned)contentFormatId;	// 0x31d76df1
- (void)dealloc;	// 0x31d07665
// converted property getter: - (int)defaultTextType;	// 0x31d76cad
// converted property getter: - (bool)isShowCategoryLabel;	// 0x31d76da1
// converted property getter: - (bool)isShowPercentageLabel;	// 0x31d76dc9
// converted property getter: - (bool)isShowSeriesLabel;	// 0x31d76ddd
// converted property getter: - (bool)isShowValueLabel;	// 0x31d76db5
- (int)key;	// 0x31cf2181
// converted property getter: - (int)labelPosition;	// 0x31d76d91
// converted property getter: - (id)runs;	// 0x31d31359
// converted property setter: - (void)setContentFormat:(id)format;	// 0x31d76d05
// converted property setter: - (void)setContentFormatId:(unsigned)anId;	// 0x31cf2111
// converted property setter: - (void)setDefaultTextType:(int)type;	// 0x31cf2121
// converted property setter: - (void)setIsShowCategoryLabel:(bool)label;	// 0x31cf2141
// converted property setter: - (void)setIsShowPercentageLabel:(bool)label;	// 0x31cf2161
// converted property setter: - (void)setIsShowSeriesLabel:(bool)label;	// 0x31cf2171
// converted property setter: - (void)setIsShowValueLabel:(bool)label;	// 0x31cf2151
// converted property setter: - (void)setLabelPosition:(int)position;	// 0x31cf2131
// converted property setter: - (void)setRuns:(id)runs;	// 0x31cf20cd
@end
