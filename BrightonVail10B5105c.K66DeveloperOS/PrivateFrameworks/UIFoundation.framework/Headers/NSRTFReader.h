/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
 */

#import "UIFoundation-Structs.h"
#import <NSObject.h> // Unknown library

@class NSMutableData, NSMapTable, UIColor, NSTextTable, NSData, NSMutableAttributedString, NSMutableDictionary, NSArray, NSFileWrapper, NSCalendar, NSMutableArray;

__attribute__((visibility("hidden")))
@interface NSRTFReader : NSObject {
	NSMutableAttributedString *_topAttributedString;	// 4 = 0x4
	NSMutableAttributedString *_curAttributedString;	// 8 = 0x8
	NSMutableArray *_attributesStack;	// 12 = 0xc
	NSMutableDictionary *_curAttributes;	// 16 = 0x10
	unsigned _level;	// 20 = 0x14
	NSData *_rtfData;	// 24 = 0x18
	NSMutableDictionary *_fontTable;	// 28 = 0x1c
	NSFileWrapper *_document;	// 32 = 0x20
	union {
		unsigned char thin[128];
		unsigned short fat[128];
	} _textBuffer;	// 36 = 0x24
	unsigned _textBufferIndex;	// 292 = 0x124
	int _rtfVersion;	// 296 = 0x128
	int _cocoaVersion;	// 300 = 0x12c
	int _cocoaSubVersion;	// 304 = 0x130
	int _readOnly;	// 308 = 0x134
	int _usesScreenFonts;	// 312 = 0x138
	unsigned long _defaultToUniCharEncoding;	// 316 = 0x13c
	NSAttributeInfo _attributeInfo;	// 320 = 0x140
	NSMutableData *_attributeInfoStack;	// 348 = 0x15c
	CGSize _paperSize;	// 352 = 0x160
	float _lMargin;	// 360 = 0x168
	float _rMargin;	// 364 = 0x16c
	float _bMargin;	// 368 = 0x170
	float _tMargin;	// 372 = 0x174
	NSMutableDictionary *_documentInfoDictionary;	// 376 = 0x178
	CGSize _viewSize;	// 380 = 0x17c
	int _viewScale;	// 388 = 0x184
	int _viewKind;	// 392 = 0x188
	NSMapTable *_cachedRTFFontTable;	// 396 = 0x18c
	float _hyphenationFactor;	// 400 = 0x190
	float _defaultTabInterval;	// 404 = 0x194
	UIColor *_documentBackgroundColor;	// 408 = 0x198
	NSRTFPriv _private;	// 412 = 0x19c
	BOOL _textBufferContentsIsFat;	// 2592 = 0xa20
	BOOL _explicitCharSetEncountered;	// 2593 = 0xa21
	BOOL _isRTLDocument;	// 2594 = 0xa22
	int _readLimit;	// 2596 = 0xa24
	int _thumbnailLimit;	// 2600 = 0xa28
	BOOL _limitReached;	// 2604 = 0xa2c
	unsigned char _textFlow;	// 2605 = 0xa2d
	NSMutableArray *_layoutOrientationSections;	// 2608 = 0xa30
	unsigned _verticalOrientationLocation;	// 2612 = 0xa34
	NSArray *_textBlocks;	// 2616 = 0xa38
	NSMutableArray *_nestedTables;	// 2620 = 0xa3c
	NSTextTable *_currentTable;	// 2624 = 0xa40
	NSTextTable *_previousTable;	// 2628 = 0xa44
	NSMutableArray *_currentRowArray;	// 2632 = 0xa48
	NSMutableArray *_previousRowArray;	// 2636 = 0xa4c
	int _currentRow;	// 2640 = 0xa50
	int _currentColumn;	// 2644 = 0xa54
	int _currentDefinitionColumn;	// 2648 = 0xa58
	BOOL _currentRowIsLast;	// 2652 = 0xa5c
	BOOL _setTableCells;	// 2653 = 0xa5d
	unsigned _currentBorderEdge;	// 2656 = 0xa60
	BOOL _currentBorderIsTable;	// 2660 = 0xa64
	NSMutableDictionary *_listDefinitions;	// 2664 = 0xa68
	int _currentListNumber;	// 2668 = 0xa6c
	int _currentListLevel;	// 2672 = 0xa70
	NSCalendar *_gregorianCalendar;	// 2676 = 0xa74
	NSMutableDictionary *_fontAttributesTable;	// 2680 = 0xa78
}
@property(assign) int baseWritingDirection;	// G=0x37594e6d; S=0x37594e55; converted property
@property(assign) int cocoaSubVersion;	// G=0x37594ca9; S=0x37594d0d; converted property
@property(assign) int cocoaVersion;	// G=0x37594c91; S=0x37594cb9; converted property
@property(assign) float defaultTabInterval;	// G=0x37594e45; S=0x37594e35; converted property
@property(retain) id mutableAttributedString;	// G=0x375964c5; S=0x37596459; converted property
@property(assign) CGSize paperSize;	// G=0x37594c2d; S=0x37594c19; converted property
@property(assign) unsigned textFlow;	// G=0x37594eb9; S=0x37594e85; converted property
@property(assign) CGSize viewSize;	// G=0x37594c59; S=0x37594c45; converted property
- (id)initWithPath:(id)path;	// 0x3758ff81
- (id)initWithRTF:(id)rtf;	// 0x375901c9
- (id)initWithRTFD:(id)rtfd;	// 0x3758fddd
- (id)initWithRTFDFileWrapper:(id)rtfdfileWrapper;	// 0x375900a9
- (id)_RTFDFileWrapper;	// 0x37594be9
- (void)_addListDefinition:(id)definition forKey:(int)key;	// 0x37597065
- (void)_addOverride:(int)override forKey:(int)key;	// 0x37597115
- (void)_beginTableRow;	// 0x3759516d
- (void)_clearTableCells;	// 0x37595961
- (unsigned)_currentBorderEdge;	// 0x37595309
- (BOOL)_currentBorderIsTable;	// 0x37595319
- (int)_currentListLevel;	// 0x37597035
- (int)_currentListNumber;	// 0x37597015
- (id)_currentTable;	// 0x3759529d
- (id)_currentTableCell;	// 0x375952ad
- (BOOL)_currentTableCellIsPlaceholder;	// 0x37595329
- (id)_documentInfoDictionary;	// 0x37596c21
- (void)_endTableCell;	// 0x37595c21
- (void)_endTableCellDefinition;	// 0x37595b81
- (void)_endTableRow;	// 0x37595cc1
- (void)_ensureTableCells;	// 0x37594ec9
- (void)_lastTableRow;	// 0x37595cad
- (id)_listDefinitions;	// 0x37597055
- (void)_mergeTableCellsHorizontally;	// 0x37595e09
- (void)_mergeTableCellsVertically;	// 0x37595ebd
- (id)_mutableParagraphStyle;	// 0x3759660d
- (void)_paragraphInTable;	// 0x37595bd1
- (void)_popState;	// 0x37597749
- (void)_popTableState;	// 0x375955e5
- (void)_pushState;	// 0x375976c1
- (void)_pushTableState;	// 0x3759541d
- (void)_setCurrentBorderEdge:(unsigned)edge isTable:(BOOL)table;	// 0x375953fd
- (void)_setCurrentListLevel:(int)level;	// 0x37597045
- (void)_setCurrentListNumber:(int)number;	// 0x37597025
- (void)_setRTFDFileWrapper:(id)wrapper;	// 0x37594ba5
- (void)_setTableCells;	// 0x37595799
- (void)_setTableNestingLevel:(int)level;	// 0x375959bd
- (void)_startTableRowDefinition;	// 0x37595b71
- (void)_updateAttributes;	// 0x37596c71
- (id)attributedString;	// 0x375967ad
- (id)attributedStringToEndOfGroup;	// 0x375966d9
- (id)attributesAtEndOfGroup;	// 0x37596a7d
// converted property getter: - (int)baseWritingDirection;	// 0x37594e6d
// converted property getter: - (int)cocoaSubVersion;	// 0x37594ca9
// converted property getter: - (int)cocoaVersion;	// 0x37594c91
- (void)dealloc;	// 0x3759785d
- (id)defaultParagraphStyle;	// 0x37596531
// converted property getter: - (float)defaultTabInterval;	// 0x37594e45
- (id)documentAttributes;	// 0x37595fa9
- (void)finalize;	// 0x37597a51
- (float)floatCocoaVersion;	// 0x37594d21
// converted property getter: - (id)mutableAttributedString;	// 0x375964c5
- (id)mutableAttributes;	// 0x375964d5
// converted property getter: - (CGSize)paperSize;	// 0x37594c2d
- (void)processString:(id)string;	// 0x37597231
- (void)setBackgroundColor:(id)color;	// 0x37594df1
// converted property setter: - (void)setBaseWritingDirection:(int)direction;	// 0x37594e55
- (void)setBottomMargin:(float)margin;	// 0x37594dd1
// converted property setter: - (void)setCocoaSubVersion:(int)version;	// 0x37594d0d
// converted property setter: - (void)setCocoaVersion:(int)version;	// 0x37594cb9
// converted property setter: - (void)setDefaultTabInterval:(float)interval;	// 0x37594e35
- (void)setHyphenationFactor:(float)factor;	// 0x37594de1
- (void)setLeftMargin:(float)margin;	// 0x37594da1
// converted property setter: - (void)setMutableAttributedString:(id)string;	// 0x37596459
// converted property setter: - (void)setPaperSize:(CGSize)size;	// 0x37594c19
- (void)setReadLimit:(int)limit;	// 0x37594bf9
- (void)setReadOnly:(int)only;	// 0x37594d81
- (void)setRightMargin:(float)margin;	// 0x37594db1
// converted property setter: - (void)setTextFlow:(unsigned)flow;	// 0x37594e85
- (void)setThumbnailLimit:(int)limit;	// 0x37594c09
- (void)setTopMargin:(float)margin;	// 0x37594dc1
- (void)setUsesScreenFonts:(int)fonts;	// 0x37594d91
- (void)setViewKind:(int)kind;	// 0x37594c71
- (void)setViewScale:(int)scale;	// 0x37594c81
// converted property setter: - (void)setViewSize:(CGSize)size;	// 0x37594c45
// converted property getter: - (unsigned)textFlow;	// 0x37594eb9
// converted property getter: - (CGSize)viewSize;	// 0x37594c59
@end
