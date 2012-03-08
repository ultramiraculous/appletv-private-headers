/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import "OAVState.h"

@class NSMutableArray, EDResources, NSMutableDictionary, EDSheet, OCPPackagePart, CPImportTracing, EXOAVState, EXOfficeArtState, EDWorkbook, EDReference, ECColumnWidthConvertor;
@protocol OCCancelDelegate;

__attribute__((visibility("hidden")))
@interface EXState : OAVState {
@private
	unsigned mCurrentSheetIndex;	// 28 = 0x1c
	EDSheet *mCurrentSheet;	// 32 = 0x20
	unsigned mCellStyleXfsOffset;	// 36 = 0x24
	double mDefaultColumnWidth;	// 40 = 0x28
	double mDefaultRowHeight;	// 48 = 0x30
	OCPPackagePart *mCurrentPart;	// 56 = 0x38
	OCPPackagePart *mWorkbookPart;	// 60 = 0x3c
	CFDictionaryRef mSharedFormulasMap;	// 64 = 0x40
	NSMutableArray *mArrayedFormulas;	// 68 = 0x44
	EDReference *mSheetDimension;	// 72 = 0x48
	EXOfficeArtState *mOfficeArtState;	// 76 = 0x4c
	EXOAVState *mOAVState;	// 80 = 0x50
	bool mMaxColumnsWarned;	// 84 = 0x54
	bool mMaxRowsWarned;	// 85 = 0x55
	bool mIsPredefinedTableStylesRead;	// 86 = 0x56
	NSMutableDictionary *mReferenceForCommentTextBox;	// 88 = 0x58
	bool mIsPredefinedDxfsBeingRead;	// 92 = 0x5c
	xmlNs *mRelationshipNS;	// 96 = 0x60
	unsigned mTotalCellsWithContentCount;	// 100 = 0x64
	unsigned mTotalCellsWithFormulaCount;	// 104 = 0x68
	ECColumnWidthConvertor *mColumnWidthConvertor;	// 108 = 0x6c
	NSMutableArray *mLegacyDrawables;	// 112 = 0x70
	EDWorkbook *mWorkbook;	// 116 = 0x74
	EDResources *mResources;	// 120 = 0x78
	id<OCCancelDelegate> mCancelDelegate;	// 124 = 0x7c
	CPImportTracing *mTracing;	// 128 = 0x80
}
@property(readonly, assign, nonatomic) id<OCCancelDelegate> cancelDelegate;	// G=0x3537acd5; @synthesize=mCancelDelegate
@property(assign) unsigned cellStyleXfsOffset;	// G=0x352ca2a1; S=0x352c9dd1; converted property
@property(retain) id currentPart;	// G=0x352cad71; S=0x352cac49; converted property
@property(retain) id currentSheet;	// G=0x352cc669; S=0x352cc345; converted property
@property(assign) unsigned currentSheetIndex;	// G=0x3537ac8d; S=0x352cb949; converted property
@property(assign) double defaultColumnWidth;	// G=0x3537ac9d; S=0x352ce079; converted property
@property(assign) double defaultRowHeight;	// G=0x352ce74d; S=0x352ce08d; converted property
@property(retain) id officeArtState;	// G=0x352c7b4d; S=0x35305bb9; converted property
@property(assign, getter=isPredefinedDxfsBeingRead) bool predefinedDxfsBeingRead;	// G=0x35304fc1; S=0x35304871; converted property
@property(assign, getter=isPredefinedTableStylesRead) bool predefinedTableStylesRead;	// G=0x3530442d; S=0x3530508d; converted property
@property(retain) id resources;	// G=0x352c8155; S=0x352c7b3d; converted property
@property(retain) id sheetDimension;	// G=0x352ce441; S=0x352cdbc9; converted property
@property(retain) id workbook;	// G=0x352c8175; S=0x352c7ae9; converted property
- (id)initWithWorkbookPart:(id)workbookPart cancelDelegate:(id)delegate tracing:(id)tracing;	// 0x352c70cd
- (void)addSharedBaseFormulaIndex:(unsigned)index withIndex:(long)index2;	// 0x3530ea15
- (id)arrayedFormulas;	// 0x352cf275
// declared property getter: - (id)cancelDelegate;	// 0x3537acd5
// converted property getter: - (unsigned)cellStyleXfsOffset;	// 0x352ca2a1
- (unsigned)cellsWithContentCount;	// 0x3537acc5
- (id)columnWidthConvertor;	// 0x352cdfc9
// converted property getter: - (id)currentPart;	// 0x352cad71
// converted property getter: - (id)currentSheet;	// 0x352cc669
// converted property getter: - (unsigned)currentSheetIndex;	// 0x3537ac8d
- (void)dealloc;	// 0x352cf759
// converted property getter: - (double)defaultColumnWidth;	// 0x3537ac9d
// converted property getter: - (double)defaultRowHeight;	// 0x352ce74d
- (void)incrementCellsWithContentCount;	// 0x352ceb19
- (void)incrementCellsWithFormulaCount;	// 0x3530e9c5
- (BOOL)isCancelled;	// 0x352cb925
// converted property getter: - (bool)isPredefinedDxfsBeingRead;	// 0x35304fc1
// converted property getter: - (bool)isPredefinedTableStylesRead;	// 0x3530442d
- (id)legacyDrawables;	// 0x352cefcd
- (id)oavState;	// 0x35334305
// converted property getter: - (id)officeArtState;	// 0x352c7b4d
- (xmlNs *)relationshipNameSpaceForWorkbook;	// 0x3537acb5
- (void)relationshipNameSpaceForWorkbook:(xmlNs *)workbook;	// 0x352cb6a9
- (void)reportWarning:(CPTaggedMessageStructure *)warning;	// 0x3531e045
- (void)reportWorksheetWarning:(CPTaggedMessageStructure *)warning;	// 0x353218fd
- (void)resetForNewSheet;	// 0x352cbd19
// converted property getter: - (id)resources;	// 0x352c8155
// converted property setter: - (void)setCellStyleXfsOffset:(unsigned)offset;	// 0x352c9dd1
// converted property setter: - (void)setCurrentPart:(id)part;	// 0x352cac49
// converted property setter: - (void)setCurrentSheet:(id)sheet;	// 0x352cc345
// converted property setter: - (void)setCurrentSheetIndex:(unsigned)index;	// 0x352cb949
// converted property setter: - (void)setDefaultColumnWidth:(double)width;	// 0x352ce079
// converted property setter: - (void)setDefaultRowHeight:(double)height;	// 0x352ce08d
// converted property setter: - (void)setOfficeArtState:(id)state;	// 0x35305bb9
// converted property setter: - (void)setPredefinedDxfsBeingRead:(bool)read;	// 0x35304871
// converted property setter: - (void)setPredefinedTableStylesRead:(bool)read;	// 0x3530508d
// converted property setter: - (void)setResources:(id)resources;	// 0x352c7b3d
// converted property setter: - (void)setSheetDimension:(id)dimension;	// 0x352cdbc9
- (void)setTextBox:(id)box forReference:(id)reference;	// 0x35333ff9
// converted property setter: - (void)setWorkbook:(id)workbook;	// 0x352c7ae9
- (unsigned)sharedBaseFormulaIndexWithIndex:(long)index;	// 0x3530ea85
// converted property getter: - (id)sheetDimension;	// 0x352ce441
- (id)textBoxForReference:(id)reference;	// 0x35334ea5
// converted property getter: - (id)workbook;	// 0x352c8175
- (id)workbookPart;	// 0x352c7a89
@end
