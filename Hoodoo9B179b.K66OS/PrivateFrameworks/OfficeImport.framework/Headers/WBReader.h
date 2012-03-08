/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import "OCBReader.h"

@class SFUNoCopyDictionary, NSString, WBOfficeArtReaderState, NSMutableArray, WDDocument;
@protocol OCCancelDelegate;

__attribute__((visibility("hidden")))
@interface WBReader : OCBReader {
@private
	WrdBinaryReader *mWrdReader;	// 16 = 0x10
	WrdNoteTable *mFootnoteTable;	// 20 = 0x14
	WrdNoteTable *mEndnoteTable;	// 24 = 0x18
	WrdAnnotationTable *mAnnotationTable;	// 28 = 0x1c
	WrdCPTableHeaders *mTableHeaders;	// 32 = 0x20
	WrdBookmarkTable *mBookmarkTable;	// 36 = 0x24
	WrdBookmarkTable *mAnnotationBookmarkTable;	// 40 = 0x28
	WrdFieldPositionTable *mFieldPositionTables[8];	// 44 = 0x2c
	WrdStoryTable *mStoryTable;	// 76 = 0x4c
	WrdStoryTable *mHeaderStoryTable;	// 80 = 0x50
	WrdFileShapeAddressTable *mFileShapeAddressTable;	// 84 = 0x54
	WrdFileShapeAddressTable *mFileShapeAddressHeaderTable;	// 88 = 0x58
	WrdEshObjectFactory *mEshObjectFactory;	// 92 = 0x5c
	WrdParagraphProperties *mLastRowParagraphProperties;	// 96 = 0x60
	NSMutableArray *mAnnotationOwners;	// 100 = 0x64
	SFUNoCopyDictionary *mIndexToStyles;	// 104 = 0x68
	SFUNoCopyDictionary *mIndexToFonts;	// 108 = 0x6c
	WDDocument *mTargetDocument;	// 112 = 0x70
	WBOfficeArtReaderState *mOfficeArtState;	// 116 = 0x74
	vector<WBTextBoxReaderInfo,std::allocator<WBTextBoxReaderInfo> > *mTextBoxes;	// 120 = 0x78
	NSString *mFileName;	// 124 = 0x7c
	BOOL mReportProgress;	// 128 = 0x80
	id mAnnotationRangeStart;	// 132 = 0x84
	id<OCCancelDelegate> mCancelDelegate;	// 136 = 0x88
	BOOL mIsThumbnail;	// 140 = 0x8c
}
@property(retain) id annotationRangeStart;	// G=0x328683c5; S=0x329a0fed; converted property
@property(readonly, retain, nonatomic) id<OCCancelDelegate> cancelDelegate;	// G=0x32864061; @synthesize=mCancelDelegate
@property(assign) BOOL isThumbnail;	// G=0x32865ef9; S=0x3284ed59; converted property
@property(assign) WrdParagraphProperties *lastRowParagraphProperties;	// G=0x328757b1; S=0x32873821; converted property
@property(retain) id officeArtState;	// G=0x3286c19d; S=0x328873a5; converted property
@property(assign) BOOL reportProgress;	// G=0x328662b9; S=0x328646b5; converted property
@property(assign, nonatomic) WDDocument *targetDocument;	// G=0x3286d4b5; S=0x32855fed; @synthesize=mTargetDocument
+ (id)readFromData:(id)data cancel:(id)cancel tracing:(id)tracing asThumbnail:(BOOL)thumbnail;	// 0x329a102d
+ (id)readFromFileName:(id)fileName cancel:(id)cancel tracing:(id)tracing asThumbnail:(BOOL)thumbnail;	// 0x328474a9
- (id)initWithData:(id)data cancel:(id)cancel tracing:(id)tracing;	// 0x329a1361
- (id)initWithFile:(FILE *)file fileName:(id)name cancel:(id)cancel tracing:(id)tracing;	// 0x32847889
- (void)addFont:(id)font index:(int)index;	// 0x32856b61
- (void)addStyle:(id)style index:(int)index;	// 0x3285f721
- (WrdBookmarkTable *)annotationBookmarkTable;	// 0x329a0fa9
- (id)annotationOwner:(int)owner;	// 0x329a0fc9
// converted property getter: - (id)annotationRangeStart;	// 0x328683c5
- (WrdAnnotationTable *)annotationTable;	// 0x329a0f99
- (WrdBookmarkTable *)bookmarkTable;	// 0x32861ad5
- (void)cacheTextBox:(id)box withChainIndex:(unsigned short)chainIndex;	// 0x3286d529
// declared property getter: - (id)cancelDelegate;	// 0x32864061
- (void)dealloc;	// 0x327d7295
- (id)drawableForShapeId:(unsigned)shapeId;	// 0x32870875
- (WrdNoteTable *)endnoteTable;	// 0x32866c65
- (WrdEshObjectFactory *)eshObjectFactory;	// 0x329a0fb9
- (WrdFieldPositionTable *)fieldPositionTableForTextType:(int)textType;	// 0x32866ce5
- (id)fileName;	// 0x32858509
- (WrdFileShapeAddressTable *)fileShapeAddressHeaderTable;	// 0x32875c45
- (WrdFileShapeAddressTable *)fileShapeAddressTable;	// 0x32870809
- (id)fontAtIndex:(int)index;	// 0x32860b95
- (WrdNoteTable *)footnoteTable;	// 0x32866c55
- (WrdStoryTable *)headerStoryTable;	// 0x3290596d
- (void)initialize;	// 0x32849945
// converted property getter: - (BOOL)isThumbnail;	// 0x32865ef9
// converted property getter: - (WrdParagraphProperties *)lastRowParagraphProperties;	// 0x328757b1
- (OcReader *)ocReader;	// 0x328584ed
// converted property getter: - (id)officeArtState;	// 0x3286c19d
- (id)readCharactersForTextRun:(WrdTextRun *)textRun;	// 0x32867ef5
- (id)readCharactersFrom:(unsigned long)from to:(unsigned long)to textType:(int)type;	// 0x32867f21
// converted property getter: - (BOOL)reportProgress;	// 0x328662b9
// converted property setter: - (void)setAnnotationRangeStart:(id)start;	// 0x329a0fed
// converted property setter: - (void)setIsThumbnail:(BOOL)thumbnail;	// 0x3284ed59
// converted property setter: - (void)setLastRowParagraphProperties:(WrdParagraphProperties *)properties;	// 0x32873821
// converted property setter: - (void)setOfficeArtState:(id)state;	// 0x328873a5
// converted property setter: - (void)setReportProgress:(BOOL)progress;	// 0x328646b5
// declared property setter: - (void)setTargetDocument:(id)document;	// 0x32855fed
- (WrdStoryTable *)storyTable;	// 0x32875e11
- (id)styleAtIndex:(int)index;	// 0x3285f841
- (WrdCPTableHeaders *)tableHeaders;	// 0x328686d9
// declared property getter: - (id)targetDocument;	// 0x3286d4b5
- (unsigned)textBoxCount;	// 0x32869209
- (WBTextBoxReaderInfo)textBoxInfoAtIndex:(unsigned)index;	// 0x32875c61
- (WrdBinaryReader *)wrdReader;	// 0x32856279
@end
