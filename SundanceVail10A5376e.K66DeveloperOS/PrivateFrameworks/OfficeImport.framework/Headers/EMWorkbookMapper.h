/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "CMMapperRoot.h"
#import "CMMapper.h"
#import "OfficeImport-Structs.h"

@class EDWorkbook, CMArchiveManager, NSMutableArray, OIXMLDocument, OIXMLElement, NSString;

@interface EMWorkbookMapper : CMMapper <CMMapperRoot> {
	unsigned mRealSheetCount;	// 8 = 0x8
	int mWidth;	// 12 = 0xc
	int mHeight;	// 16 = 0x10
	EDWorkbook *edWorkbook;	// 20 = 0x14
	NSMutableArray *mWorksheetUrls;	// 24 = 0x18
	NSMutableArray *mWorksheetNames;	// 28 = 0x1c
	NSMutableArray *mWorksheetGuids;	// 32 = 0x20
	NSString *mResourceUrlPrefix;	// 36 = 0x24
	NSString *mResourceUrlProtocol;	// 40 = 0x28
	NSString *mStyleSheetGuid;	// 44 = 0x2c
	CMArchiveManager *mArchiver;	// 48 = 0x30
	NSString *mFileName;	// 52 = 0x34
	unsigned mSheetIndex;	// 56 = 0x38
	bool mIsFirstMappedSheet;	// 60 = 0x3c
	bool mIsFrameset;	// 61 = 0x3d
	OIXMLDocument *mXhtmlDoc;	// 64 = 0x40
	OIXMLElement *mBodyElement;	// 68 = 0x44
	OIXMLDocument *mTabBarDoc;	// 72 = 0x48
	NSString *mTabBarURL;	// 76 = 0x4c
	NSMutableArray *mSheetURLs;	// 80 = 0x50
	float mTabPosition;	// 84 = 0x54
	unsigned mNumberOfMappedSheets;	// 88 = 0x58
	BOOL mHasPushedHeader;	// 92 = 0x5c
	BOOL mHasPushedFirstSheet;	// 93 = 0x5d
	BOOL mLoadingMessageVisible;	// 94 = 0x5e
}
@property(retain) id fileName;	// G=0x370e2a85; S=0x36fa0161; converted property
+ (id)baseDate;	// 0x3700c879
+ (id)borderStyleCache;	// 0x36fc247d
+ (id)borderWidthCache;	// 0x36fc2759
+ (id)cssStyleCache;	// 0x370e2a99
+ (void)setBaseDate1904:(BOOL)a1904;	// 0x36fa0011
- (id)initWithEDWorkbook:(id)edworkbook archiver:(id)archiver;	// 0x36f9fd99
- (id)_copyStringForSheet:(id)sheet atIndex:(unsigned)index withState:(id)state andMapper:(id)mapper;	// 0x370e35b9
- (id)_frontPageByCopyingMainPage;	// 0x370e2bb5
- (id)_mainPageBack;	// 0x36fcbbc5
- (void)_pushTabForSheet:(id)sheet atIndex:(unsigned)index;	// 0x370e3319
- (id)archiver;	// 0x36fb988d
- (id)blipAtIndex:(unsigned)index;	// 0x36fc4e65
- (id)copySheetMapperWithEdSheet:(id)edSheet;	// 0x370e37b9
- (void)dealloc;	// 0x36fbee69
- (id)documentTitle;	// 0x36fbcdd5
// converted property getter: - (id)fileName;	// 0x370e2a85
- (void)finishMappingWithState:(id)state;	// 0x36fbcfcd
- (BOOL)hasMultipleSheets;	// 0x36fa0299
- (bool)isMultiPage;	// 0x370e2ab5
- (void)mapBodyStyleAt:(id)at;	// 0x36fb6411
- (void)mapElement:(id)element atIndex:(unsigned)index withState:(id)state isLastElement:(BOOL)element4;	// 0x36fb4271
- (CGSize)pageSizeForDevice;	// 0x370e2b3d
// converted property setter: - (void)setFileName:(id)name;	// 0x36fa0161
- (void)startMappingWithState:(id)state;	// 0x36fa01a9
- (id)styleMatrix;	// 0x370e2ae9
- (id)workbook;	// 0x36fb56a9
@end
