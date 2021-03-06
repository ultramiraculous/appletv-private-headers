/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "EDKeyedObject.h"
#import <NSObject.h> // Unknown library

@class EDResources, OADGraphicProperties, CHDTitle;

__attribute__((visibility("hidden")))
@interface CHDAxis : NSObject <EDKeyedObject> {
@private
	bool mReverseOrder;	// 4 = 0x4
	bool mSecondary;	// 5 = 0x5
	bool mDateTimeFormattingFlag;	// 6 = 0x6
	bool mLineVisible;	// 7 = 0x7
	bool mDeleted;	// 8 = 0x8
	bool mAutoMinimumValue;	// 9 = 0x9
	bool mAutoMaximumValue;	// 10 = 0xa
	bool mAutoCrossValue;	// 11 = 0xb
	bool mContentFormatDerived;	// 12 = 0xc
	int mAxisId;	// 16 = 0x10
	unsigned mContentFormatId;	// 20 = 0x14
	int mFontIndex;	// 24 = 0x18
	double mScalingMaximum;	// 28 = 0x1c
	double mScalingMinimum;	// 36 = 0x24
	int mOrientation;	// 44 = 0x2c
	double mCrossAxisId;	// 48 = 0x30
	double mCrossesAt;	// 56 = 0x38
	int mMajorTickMark;	// 64 = 0x40
	int mMinorTickMark;	// 68 = 0x44
	int mAxisPosition;	// 72 = 0x48
	int mAxisType;	// 76 = 0x4c
	int mTickLabelPosition;	// 80 = 0x50
	CHDTitle *mTitle;	// 84 = 0x54
	OADGraphicProperties *mMinorGridLinesGraphicProperties;	// 88 = 0x58
	OADGraphicProperties *mMajorGridLinesGraphicProperties;	// 92 = 0x5c
	OADGraphicProperties *mAxisGraphicProperties;	// 96 = 0x60
	int mCrossBetween;	// 100 = 0x64
	int mCrosses;	// 104 = 0x68
	double mTickLabelRotation;	// 108 = 0x6c
	bool mIsAutoRotation;	// 116 = 0x74
	int mTickLabelColorIndex;	// 120 = 0x78
	EDResources *mResources;	// 124 = 0x7c
}
@property(retain) id axisGraphicProperties;	// G=0x32a814ed; S=0x32987e1d; converted property
@property(assign) int axisId;	// G=0x32a813a1; S=0x329877f1; converted property
@property(assign) int axisPosition;	// G=0x329946e1; S=0x32987835; converted property
@property(assign) int axisType;	// G=0x32a81495; S=0x32987801; converted property
@property(retain) id contentFormat;	// G=0x32992a1d; S=0x32992b5d; converted property
@property(assign) unsigned contentFormatId;	// G=0x32a8156d; S=0x329d0a59; converted property
@property(assign) double crossAxisId;	// G=0x32a81431; S=0x32a81449; converted property
@property(assign) int crossBetween;	// G=0x32a814fd; S=0x3298e53d; converted property
@property(assign) int crosses;	// G=0x32a8150d; S=0x32a025f5; converted property
@property(assign) double crossesAt;	// G=0x32a8145d; S=0x3298e50d; converted property
@property(assign, getter=isDateTimeFormattingFlag) bool dateTimeFormattingFlag;	// G=0x32a81521; S=0x32a81531; converted property
@property(assign, getter=isDeleted) bool deleted;	// G=0x32a813c1; S=0x3298e57d; converted property
@property(retain) id font;	// G=0x329952a9; S=0x32a180d5; converted property
@property(assign) int fontIndex;	// G=0x32a8157d; S=0x32987845; converted property
@property(assign) bool isContentFormatDerivedFromDataPoints;	// G=0x32a81401; S=0x32992bf1; converted property
@property(assign, getter=isLineVisible) bool lineVisible;	// G=0x32a813b1; S=0x3298e56d; converted property
@property(retain) id majorGridLinesGraphicProperties;	// G=0x32995269; S=0x3298801d; converted property
@property(assign) int majorTickMark;	// G=0x32a81475; S=0x32987e65; converted property
@property(retain) id minorGridLinesGraphicProperties;	// G=0x32a814dd; S=0x32987f95; converted property
@property(assign) int minorTickMark;	// G=0x32a81485; S=0x32987e75; converted property
@property(assign) int orientation;	// G=0x32a81411; S=0x32a81421; converted property
@property(assign, getter=isReverseOrder) bool reverseOrder;	// G=0x32990981; S=0x32987799; converted property
@property(assign) double scalingMaximum;	// G=0x32995291; S=0x32987749; converted property
@property(assign) double scalingMinimum;	// G=0x32995279; S=0x329886e9; converted property
@property(assign, getter=isSecondary) bool secondary;	// G=0x329946f1; S=0x32a04ad5; converted property
@property(assign, getter=isTickLabelAutoRotation) bool tickLabelAutoRotation;	// G=0x32a81559; S=0x32987e9d; converted property
@property(assign) int tickLabelColorIndex;	// G=0x32a8158d; S=0x32987ec1; converted property
@property(assign) int tickLabelPosition;	// G=0x32a814a5; S=0x32987e85; converted property
@property(assign) double tickLabelRotationAngle;	// G=0x32a81541; S=0x32987ead; converted property
@property(retain) id title;	// G=0x32a814cd; S=0x32988bd1; converted property
- (id)initWithResources:(id)resources;	// 0x32987529
- (void)adjustAxisPositionForHorizontalChart;	// 0x32a81569
// converted property getter: - (id)axisGraphicProperties;	// 0x32a814ed
// converted property getter: - (int)axisId;	// 0x32a813a1
// converted property getter: - (int)axisPosition;	// 0x329946e1
// converted property getter: - (int)axisType;	// 0x32a81495
// converted property getter: - (id)contentFormat;	// 0x32992a1d
// converted property getter: - (unsigned)contentFormatId;	// 0x32a8156d
// converted property getter: - (double)crossAxisId;	// 0x32a81431
// converted property getter: - (int)crossBetween;	// 0x32a814fd
// converted property getter: - (int)crosses;	// 0x32a8150d
// converted property getter: - (double)crossesAt;	// 0x32a8145d
- (void)dealloc;	// 0x32997bcd
- (id)defaultDateTimeContentFormat;	// 0x32a8159d
// converted property getter: - (id)font;	// 0x329952a9
// converted property getter: - (int)fontIndex;	// 0x32a8157d
- (bool)isAutoCrossValue;	// 0x32a813f1
- (bool)isAutoMaximumValue;	// 0x32a813e1
- (bool)isAutoMinimumValue;	// 0x32a813d1
// converted property getter: - (bool)isContentFormatDerivedFromDataPoints;	// 0x32a81401
- (bool)isDate;	// 0x32a8151d
// converted property getter: - (bool)isDateTimeFormattingFlag;	// 0x32a81521
// converted property getter: - (bool)isDeleted;	// 0x32a813c1
- (bool)isHorizontalPosition;	// 0x32a028bd
// converted property getter: - (bool)isLineVisible;	// 0x32a813b1
// converted property getter: - (bool)isReverseOrder;	// 0x32990981
// converted property getter: - (bool)isSecondary;	// 0x329946f1
// converted property getter: - (bool)isTickLabelAutoRotation;	// 0x32a81559
- (bool)isTickLabelVisible;	// 0x32a814b5
- (unsigned)key;	// 0x3298842d
// converted property getter: - (id)majorGridLinesGraphicProperties;	// 0x32995269
// converted property getter: - (int)majorTickMark;	// 0x32a81475
// converted property getter: - (id)minorGridLinesGraphicProperties;	// 0x32a814dd
// converted property getter: - (int)minorTickMark;	// 0x32a81485
// converted property getter: - (int)orientation;	// 0x32a81411
// converted property getter: - (double)scalingMaximum;	// 0x32995291
// converted property getter: - (double)scalingMinimum;	// 0x32995279
// converted property setter: - (void)setAxisGraphicProperties:(id)properties;	// 0x32987e1d
// converted property setter: - (void)setAxisId:(int)anId;	// 0x329877f1
// converted property setter: - (void)setAxisPosition:(int)position;	// 0x32987835
// converted property setter: - (void)setAxisType:(int)type;	// 0x32987801
// converted property setter: - (void)setContentFormat:(id)format;	// 0x32992b5d
// converted property setter: - (void)setContentFormatId:(unsigned)anId;	// 0x329d0a59
// converted property setter: - (void)setCrossAxisId:(double)anId;	// 0x32a81449
// converted property setter: - (void)setCrossBetween:(int)between;	// 0x3298e53d
// converted property setter: - (void)setCrosses:(int)crosses;	// 0x32a025f5
// converted property setter: - (void)setCrossesAt:(double)at;	// 0x3298e50d
// converted property setter: - (void)setDateTimeFormattingFlag:(bool)flag;	// 0x32a81531
// converted property setter: - (void)setDeleted:(bool)deleted;	// 0x3298e57d
// converted property setter: - (void)setFont:(id)font;	// 0x32a180d5
// converted property setter: - (void)setFontIndex:(int)index;	// 0x32987845
// converted property setter: - (void)setIsContentFormatDerivedFromDataPoints:(bool)dataPoints;	// 0x32992bf1
// converted property setter: - (void)setLineVisible:(bool)visible;	// 0x3298e56d
// converted property setter: - (void)setMajorGridLinesGraphicProperties:(id)properties;	// 0x3298801d
// converted property setter: - (void)setMajorTickMark:(int)mark;	// 0x32987e65
// converted property setter: - (void)setMinorGridLinesGraphicProperties:(id)properties;	// 0x32987f95
// converted property setter: - (void)setMinorTickMark:(int)mark;	// 0x32987e75
// converted property setter: - (void)setOrientation:(int)orientation;	// 0x32a81421
// converted property setter: - (void)setReverseOrder:(bool)order;	// 0x32987799
// converted property setter: - (void)setScalingMaximum:(double)maximum;	// 0x32987749
// converted property setter: - (void)setScalingMinimum:(double)minimum;	// 0x329886e9
// converted property setter: - (void)setSecondary:(bool)secondary;	// 0x32a04ad5
// converted property setter: - (void)setTickLabelAutoRotation:(bool)rotation;	// 0x32987e9d
// converted property setter: - (void)setTickLabelColorIndex:(int)index;	// 0x32987ec1
// converted property setter: - (void)setTickLabelPosition:(int)position;	// 0x32987e85
// converted property setter: - (void)setTickLabelRotationAngle:(double)angle;	// 0x32987ead
// converted property setter: - (void)setTitle:(id)title;	// 0x32988bd1
- (id)tickLabelColor;	// 0x32a815d5
// converted property getter: - (int)tickLabelColorIndex;	// 0x32a8158d
// converted property getter: - (int)tickLabelPosition;	// 0x32a814a5
// converted property getter: - (double)tickLabelRotationAngle;	// 0x32a81541
// converted property getter: - (id)title;	// 0x32a814cd
@end

