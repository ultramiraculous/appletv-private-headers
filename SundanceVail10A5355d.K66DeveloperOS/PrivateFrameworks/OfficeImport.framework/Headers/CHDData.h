/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library

@class EDResources, CHDDataValuesCollection, CHDFormula;

@interface CHDData : NSObject {
	CHDDataValuesCollection *mDataValues;	// 4 = 0x4
	CHDFormula *mFormula;	// 8 = 0x8
	unsigned mContentFormatId;	// 12 = 0xc
	unsigned mDataValueIndexCount;	// 16 = 0x10
	EDResources *mResources;	// 20 = 0x14
}
@property(retain) id contentFormat;	// G=0x31cfccb5; S=0x31d059ad; converted property
@property(assign) unsigned contentFormatId;	// G=0x31d768a5; S=0x31cf8d61; converted property
@property(assign) unsigned dataValueIndexCount;	// G=0x31d05d35; S=0x31cf8c61; converted property
+ (id)dataWithDataPointCount:(unsigned)dataPointCount resources:(id)resources;	// 0x31cf8635
+ (id)dataWithResources:(id)resources;	// 0x31d04279
- (id)initWithDataPointCount:(unsigned)dataPointCount resources:(id)resources;	// 0x31cf8685
- (id)initWithResources:(id)resources;	// 0x31d042c5
- (unsigned)averageDataPointDecimalCount;	// 0x31d76559
// converted property getter: - (id)contentFormat;	// 0x31cfccb5
// converted property getter: - (unsigned)contentFormatId;	// 0x31d768a5
- (unsigned)countOfCellsBeingReferenced;	// 0x31d05341
// converted property getter: - (unsigned)dataValueIndexCount;	// 0x31d05d35
- (id)dataValues;	// 0x31cf8971
- (void)dealloc;	// 0x31cfb94d
- (id)firstValueContentFormatWithWorkbook:(id)workbook;	// 0x31d76791
- (id)formula;	// 0x31cf8d71
- (bool)isEmpty;	// 0x31cfa20d
// converted property setter: - (void)setContentFormat:(id)format;	// 0x31d059ad
// converted property setter: - (void)setContentFormatId:(unsigned)anId;	// 0x31cf8d61
// converted property setter: - (void)setDataValueIndexCount:(unsigned)count;	// 0x31cf8c61
- (void)setFormula:(id)formula chart:(id)chart;	// 0x31cf87e1
@end

