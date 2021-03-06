/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library

@class EDWorkbook, EDResources, CPTracing;
@protocol OCCancelDelegate;

@interface EBState : NSObject {
	XlLinkTable *mXlLinkTable;	// 4 = 0x4
	XlNameTable *mXlNameTable;	// 8 = 0x8
	ChVector<OcText> *mSheetNames;	// 12 = 0xc
	XlFormulaProcessor *mXlFormulaProcessor;	// 16 = 0x10
	EDWorkbook *mWorkbook;	// 20 = 0x14
	EDResources *mResources;	// 24 = 0x18
	id<OCCancelDelegate> mCancelDelegate;	// 28 = 0x1c
	CPTracing *mTracing;	// 32 = 0x20
}
@property(readonly, assign, nonatomic) id<OCCancelDelegate> cancelDelegate;	// G=0x370c8d65; @synthesize=mCancelDelegate
@property(retain) id resources;	// G=0x36f91205; S=0x36f8ef79; converted property
@property(retain) id workbook;	// G=0x36f9c929; S=0x36f8ef69; converted property
- (id)initWithCancelDelegate:(id)cancelDelegate tracing:(id)tracing;	// 0x36f8d109
// declared property getter: - (id)cancelDelegate;	// 0x370c8d65
- (void)dealloc;	// 0x36fb17e5
- (BOOL)isCancelled;	// 0x36f9eff5
// converted property getter: - (id)resources;	// 0x36f91205
// converted property setter: - (void)setResources:(id)resources;	// 0x36f8ef79
// converted property setter: - (void)setWorkbook:(id)workbook;	// 0x36f8ef69
- (ChVector<OcText> *)sheetNames;	// 0x37107ef1
- (id)tracing;	// 0x36fa085d
// converted property getter: - (id)workbook;	// 0x36f9c929
- (XlFormulaProcessor *)xlFormulaProcessor;	// 0x36f9a615
- (XlLinkTable *)xlLinkTable;	// 0x36f99e81
- (XlNameTable *)xlNameTable;	// 0x36f9a245
@end

