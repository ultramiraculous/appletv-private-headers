/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import "OCBReader.h"

@class TSUNoCopyDictionary, WDDocument, NSMutableArray, WBOfficeArtReaderState;

@interface WBReader : OCBReader {
	WrdNoteTable *mFootnoteTable;	// 44 = 0x2c
	WrdNoteTable *mEndnoteTable;	// 48 = 0x30
	WrdAnnotationTable *mAnnotationTable;	// 52 = 0x34
	WrdCPTableHeaders *mTableHeaders;	// 56 = 0x38
	WrdBookmarkTable *mBookmarkTable;	// 60 = 0x3c
	WrdBookmarkTable *mAnnotationBookmarkTable;	// 64 = 0x40
	WrdFieldPositionTable *mFieldPositionTables[8];	// 68 = 0x44
	WrdStoryTable *mStoryTable;	// 100 = 0x64
	WrdStoryTable *mHeaderStoryTable;	// 104 = 0x68
	WrdFileShapeAddressTable *mFileShapeAddressTable;	// 108 = 0x6c
	WrdFileShapeAddressTable *mFileShapeAddressHeaderTable;	// 112 = 0x70
	WrdEshObjectFactory *mEshObjectFactory;	// 116 = 0x74
	WrdParagraphProperties *mLastRowParagraphProperties;	// 120 = 0x78
	NSMutableArray *mAnnotationOwners;	// 124 = 0x7c
	TSUNoCopyDictionary *mIndexToStyles;	// 128 = 0x80
	TSUNoCopyDictionary *mIndexToFonts;	// 132 = 0x84
	WDDocument *mTargetDocument;	// 136 = 0x88
	WBOfficeArtReaderState *mOfficeArtState;	// 140 = 0x8c
	vector<WBTextBoxReaderInfo, std::__1::allocator<WBTextBoxReaderInfo> > *mTextBoxes;	// 144 = 0x90
	BOOL mReportProgress;	// 148 = 0x94
	id mAnnotationRangeStart;	// 152 = 0x98
}
@property(retain) id annotationRangeStart;	// G=0x3174ac95; S=0x31897761; converted property
@property(assign) WrdParagraphProperties *lastRowParagraphProperties;	// G=0x3175870d; S=0x31756129; converted property
@property(retain) id officeArtState;	// G=0x3174cb05; S=0x3174cb15; converted property
@property(assign) BOOL reportProgress;	// G=0x317487a1; S=0x3174684d; converted property
@property(assign, nonatomic) WDDocument *targetDocument;	// G=0x317d65b1; S=0x31733b99; @synthesize=mTargetDocument
- (id)initWithCancelDelegate:(id)cancelDelegate tracing:(id)tracing;	// 0x31724045
- (void)addFont:(id)font index:(int)index;	// 0x31734735
- (void)addStyle:(id)style index:(int)index;	// 0x3173edad
- (OCCBinaryStreamer *)allocBinaryStreamerWithCryptoKey:(OCCCryptoKey *)cryptoKey baseOutputFilenameInUTF8:(const char *)utf8;	// 0x319273e9
- (WrdBookmarkTable *)annotationBookmarkTable;	// 0x31749329
- (id)annotationOwner:(int)owner;	// 0x318808dd
// converted property getter: - (id)annotationRangeStart;	// 0x3174ac95
- (WrdAnnotationTable *)annotationTable;	// 0x317492d5
- (WrdBookmarkTable *)bookmarkTable;	// 0x31741941
- (void)cacheTextBox:(id)box withChainIndex:(unsigned short)chainIndex;	// 0x317d66cd
- (void)dealloc;	// 0x317722d9
- (id)drawableForShapeId:(unsigned)shapeId;	// 0x317d782d
- (OCCEncryptionInfoReader *)encryptionInfoReader;	// 0x317259cd
- (WrdNoteTable *)endnoteTable;	// 0x31749221
- (WrdEshObjectFactory *)eshObjectFactory;	// 0x319274b1
- (WrdFieldPositionTable *)fieldPositionTableForTextType:(int)textType;	// 0x317494cd
- (WrdFileShapeAddressTable *)fileShapeAddressHeaderTable;	// 0x317d7c19
- (WrdFileShapeAddressTable *)fileShapeAddressTable;	// 0x317d7725
- (id)fontAtIndex:(int)index;	// 0x31741381
- (WrdNoteTable *)footnoteTable;	// 0x317491cd
- (WrdStoryTable *)headerStoryTable;	// 0x3185d879
- (void)initialize;	// 0x31725d65
// converted property getter: - (WrdParagraphProperties *)lastRowParagraphProperties;	// 0x3175870d
// converted property getter: - (id)officeArtState;	// 0x3174cb05
- (id)read;	// 0x31725aa1
- (id)readCharactersForTextRun:(WrdTextRun *)textRun;	// 0x3174a791
- (id)readCharactersFrom:(unsigned)from to:(unsigned)to textType:(int)type;	// 0x3174a7bd
// converted property getter: - (BOOL)reportProgress;	// 0x317487a1
// converted property setter: - (void)setAnnotationRangeStart:(id)start;	// 0x31897761
// converted property setter: - (void)setLastRowParagraphProperties:(WrdParagraphProperties *)properties;	// 0x31756129
// converted property setter: - (void)setOfficeArtState:(id)state;	// 0x3174cb15
// converted property setter: - (void)setReportProgress:(BOOL)progress;	// 0x3174684d
// declared property setter: - (void)setTargetDocument:(id)document;	// 0x31733b99
- (BOOL)start;	// 0x317243e9
- (WrdStoryTable *)storyTable;	// 0x317d7e09
- (id)styleAtIndex:(int)index;	// 0x3173eebd
- (WrdCPTableHeaders *)tableHeaders;	// 0x31758be1
// declared property getter: - (id)targetDocument;	// 0x317d65b1
- (unsigned)textBoxCount;	// 0x3175985d
- (WBTextBoxReaderInfo)textBoxInfoAtIndex:(unsigned)index;	// 0x317d7c5d
- (WrdBinaryReader *)wrdReader;	// 0x31724711
@end

