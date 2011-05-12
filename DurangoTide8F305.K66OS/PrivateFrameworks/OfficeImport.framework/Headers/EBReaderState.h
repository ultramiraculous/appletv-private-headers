/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import "EBState.h"

@class ECColumnWidthConvertor, OABReaderState;

__attribute__((visibility("hidden")))
@interface EBReaderState : EBState {
@private
	XlBinaryReader *mXlReader;	// 36 = 0x24
	XlSheetInfoTable *mXlSheetInfoTable;	// 40 = 0x28
	ECColumnWidthConvertor *mColumnWidthConvertor;	// 44 = 0x2c
	unsigned mTotalCellsWithContentCount;	// 48 = 0x30
	XlEshObjectFactory *mXlEshObjectFactory;	// 52 = 0x34
	OABReaderState *mOAState;	// 56 = 0x38
}
- (id)initWithXlReader:(XlBinaryReader *)xlReader cancelDelegate:(id)delegate tracing:(id)tracing;	// 0x344b2cdd
- (unsigned)cellsWithContentCount;	// 0x345b4edd
- (id)columnWidthConvertor;	// 0x343a2619
- (void)dealloc;	// 0x343c73c9
- (void)incrementCellsWithContentCount;	// 0x343a9e19
- (id)oaState;	// 0x344b9811
- (void)pauseReading;	// 0x343bcd91
- (void)readGlobalXlObjects;	// 0x344b9899
- (void)reportWarning:(CPTaggedMessageStructure *)warning;	// 0x344be115
- (void)resumeReading;	// 0x3439df11
- (XlBinaryReader *)xlReader;	// 0x3439e0f9
- (XlSheetInfoTable *)xlSheetInfoTable;	// 0x344bb099
@end
