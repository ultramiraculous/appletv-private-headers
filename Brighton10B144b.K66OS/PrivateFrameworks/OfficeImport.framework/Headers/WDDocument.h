/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OCDDocument.h"

@class WDFontTable, OADBackground, WDRevisionAuthorTable, WDText, WDCitationTable, NSMutableArray, WDListDefinitionTable, WDStyleSheet, WDListTable, OADTheme, NSString, NSDate;

@interface WDDocument : OCDDocument {
	WDStyleSheet *mStyleSheet;	// 20 = 0x14
	WDFontTable *mFontTable;	// 24 = 0x18
	WDListDefinitionTable *mListDefinitionTable;	// 28 = 0x1c
	WDRevisionAuthorTable *mRevisionAuthorTable;	// 32 = 0x20
	WDCitationTable *mCitationTable;	// 36 = 0x24
	WDListTable *mListTable;	// 40 = 0x28
	NSMutableArray *mSections;	// 44 = 0x2c
	unsigned short mDefaultTabWidth;	// 48 = 0x30
	WDText *mImageBulletText;	// 52 = 0x34
	WDText *mFootnoteSeparator;	// 56 = 0x38
	WDText *mFootnoteContinuationSeparator;	// 60 = 0x3c
	WDText *mFootnoteContinuationNotice;	// 64 = 0x40
	WDText *mEndnoteSeparator;	// 68 = 0x44
	WDText *mEndnoteContinuationSeparator;	// 72 = 0x48
	WDText *mEndnoteContinuationNotice;	// 76 = 0x4c
	int mFootnoteNumberFormat;	// 80 = 0x50
	int mEndnoteNumberFormat;	// 84 = 0x54
	int mFootnotePosition;	// 88 = 0x58
	int mEndnotePosition;	// 92 = 0x5c
	int mFootnoteRestart;	// 96 = 0x60
	int mEndnoteRestart;	// 100 = 0x64
	unsigned short mFootnoteNumberingStart;	// 104 = 0x68
	int mGutterPosition;	// 108 = 0x6c
	NSString *mOleFilename;	// 112 = 0x70
	NSString *mKinsokuAltBreakBefore;	// 116 = 0x74
	NSString *mKinsokuAltBreakAfter;	// 120 = 0x78
	short mZoomPercentage;	// 124 = 0x7c
	NSString *mVersion;	// 128 = 0x80
	unsigned mMirrorMargins : 1;	// 132 = 0x84
	unsigned mBorderSurroundHeader : 1;	// 132 = 0x84
	unsigned mBorderSurroundFooter : 1;	// 132 = 0x84
	unsigned mKinsokuStrict : 1;	// 132 = 0x84
	unsigned mAutoHyphenate : 1;	// 132 = 0x84
	unsigned mEvenAndOddHeaders : 1;	// 132 = 0x84
	unsigned mGraphicsInHeaderFooter : 1;	// 132 = 0x84
	unsigned mBookFold : 1;	// 132 = 0x84
	unsigned mShowMarkup : 1;	// 133 = 0x85
	unsigned mShowComments : 1;	// 133 = 0x85
	unsigned mTrackChanges : 1;	// 133 = 0x85
	unsigned mShowRevisionMarksOnScreen : 1;	// 133 = 0x85
	unsigned mShowInsertionsAndDeletions : 1;	// 133 = 0x85
	unsigned mShowFormatting : 1;	// 133 = 0x85
	unsigned mShowOutline : 1;	// 133 = 0x85
	NSMutableArray *mDocumentImages;	// 136 = 0x88
	NSMutableArray *mChangeTrackingEditDates;	// 140 = 0x8c
	NSMutableArray *mChangeTrackingEditAuthors;	// 144 = 0x90
	NSDate *mCreationDate;	// 148 = 0x94
	NSMutableArray *mImageBullets;	// 152 = 0x98
	int mZIndexTotalForMainText;	// 156 = 0x9c
	int mZIndexTotalForHeaderFooterText;	// 160 = 0xa0
	OADBackground *mDocumentBackground;	// 164 = 0xa4
	OADTheme *mTheme;	// 168 = 0xa8
}
@property(assign) BOOL autoHyphenate;	// G=0x34aada29; S=0x3491ce99; converted property
@property(assign) BOOL bookFold;	// G=0x34aadbf1; S=0x348e67b1; converted property
@property(assign) BOOL borderSurroundFooter;	// G=0x34aad9ad; S=0x3491ce79; converted property
@property(assign) BOOL borderSurroundHeader;	// G=0x34aad999; S=0x3491ce59; converted property
@property(retain) id creationDate;	// G=0x34aadf55; S=0x34aadf65; converted property
@property(assign) unsigned short defaultTabWidth;	// G=0x34903fc9; S=0x348e67dd; converted property
@property(retain) id documentBackground;	// G=0x34aadfb1; S=0x349274f1; converted property
@property(assign) int endnoteNumberFormat;	// G=0x34aada61; S=0x348e6d29; converted property
@property(assign) int endnotePosition;	// G=0x34aada81; S=0x348e6d49; converted property
@property(assign) int endnoteRestart;	// G=0x34aadaa1; S=0x348e6d39; converted property
@property(assign) BOOL evenAndOddHeaders;	// G=0x34aada3d; S=0x348e6775; converted property
@property(assign) int footnoteNumberFormat;	// G=0x34aada51; S=0x348e6889; converted property
@property(assign) unsigned short footnoteNumberingStart;	// G=0x34aadab1; S=0x348e6979; converted property
@property(assign) int footnotePosition;	// G=0x34aada71; S=0x348e6969; converted property
@property(assign) int footnoteRestart;	// G=0x34aada91; S=0x348e68f9; converted property
@property(assign) BOOL graphicsInHeaderFooter;	// G=0x34aad9c1; S=0x34aad9d5; converted property
@property(assign) int gutterPosition;	// G=0x34aadbe1; S=0x348e67cd; converted property
@property(retain) id kinsokuAltBreakAfter;	// G=0x34aada05; S=0x349d50fd; converted property
@property(retain) id kinsokuAltBreakBefore;	// G=0x34aad9f5; S=0x349d5139; converted property
@property(assign) BOOL kinsokuStrict;	// G=0x34aada15; S=0x3491d09d; converted property
@property(assign) BOOL mirrorMargins;	// G=0x34aad985; S=0x348e6795; converted property
@property(retain) id oleFilename;	// G=0x34931919; S=0x3491d395; converted property
@property(assign) BOOL showComments;	// G=0x34aade39; S=0x348e67ed; converted property
@property(assign) BOOL showFormatting;	// G=0x34aade89; S=0x348e6849; converted property
@property(assign) BOOL showInsertionsAndDeletions;	// G=0x34aade75; S=0x348e6829; converted property
@property(assign) BOOL showMarkup;	// G=0x34aade25; S=0x348e680d; converted property
@property(assign) BOOL showOutline;	// G=0x34aade9d; S=0x3491cec9; converted property
@property(assign) BOOL showRevisionMarksOnScreen;	// G=0x34aade61; S=0x3491ce39; converted property
@property(assign) BOOL trackChanges;	// G=0x34aade4d; S=0x348e6869; converted property
@property(retain) id version;	// G=0x34aadd59; S=0x34aadd69; converted property
@property(assign) int zIndexTotalForHeaderFooterText;	// G=0x34aae075; S=0x348f7a71; converted property
@property(assign) int zIndexTotalForMainText;	// G=0x34aae065; S=0x348f7a61; converted property
@property(assign) short zoomPercentage;	// G=0x34aadc05; S=0x3491ceb9; converted property
- (id)init;	// 0x348d5819
- (void)addChangeTrackingEditAtDate:(id)date authorIndex:(int)index;	// 0x34aadeb1
- (void)addCitation:(id)citation forID:(id)anId;	// 0x34aadb01
- (id)addImageBulletText;	// 0x349d283d
- (void)addImageBullets;	// 0x34aadc21
- (id)addList:(id)list;	// 0x34aadbc1
- (id)addListDefinition;	// 0x34aadb61
- (void)addRevisionAuthor:(id)author;	// 0x34aade05
- (id)addSection;	// 0x348e7321
- (id)annotationBlockIterator;	// 0x34aae48d
- (id)annotationIterator;	// 0x34aae301
- (id)applicationName;	// 0x34aadc15
// converted property getter: - (BOOL)autoHyphenate;	// 0x34aada29
// converted property getter: - (BOOL)bookFold;	// 0x34aadbf1
// converted property getter: - (BOOL)borderSurroundFooter;	// 0x34aad9ad
// converted property getter: - (BOOL)borderSurroundHeader;	// 0x34aad999
- (id)changeTrackingEditAuthors;	// 0x34aadf45
- (id)changeTrackingEditDates;	// 0x34aadf35
- (int)citationCount;	// 0x34aadac1
- (id)citationFor:(id)aFor;	// 0x34aadae1
// converted property getter: - (id)creationDate;	// 0x34aadf55
- (void)dealloc;	// 0x34905c95
// converted property getter: - (unsigned short)defaultTabWidth;	// 0x34903fc9
// converted property getter: - (id)documentBackground;	// 0x34aadfb1
- (id)endnoteBlockIterator;	// 0x34aae409
- (id)endnoteContinuationNotice;	// 0x348e6d59
- (id)endnoteContinuationSeparator;	// 0x349314e9
- (id)endnoteIterator;	// 0x34aae27d
// converted property getter: - (int)endnoteNumberFormat;	// 0x34aada61
// converted property getter: - (int)endnotePosition;	// 0x34aada81
// converted property getter: - (int)endnoteRestart;	// 0x34aadaa1
- (id)endnoteSeparator;	// 0x349314d9
// converted property getter: - (BOOL)evenAndOddHeaders;	// 0x34aada3d
- (id)fontTable;	// 0x348d661d
- (id)footnoteBlockIterator;	// 0x34aae385
- (id)footnoteContinuationNotice;	// 0x348e6989
- (id)footnoteContinuationSeparator;	// 0x349314c9
- (id)footnoteIterator;	// 0x34aae1f9
// converted property getter: - (int)footnoteNumberFormat;	// 0x34aada51
// converted property getter: - (unsigned short)footnoteNumberingStart;	// 0x34aadab1
// converted property getter: - (int)footnotePosition;	// 0x34aada71
// converted property getter: - (int)footnoteRestart;	// 0x34aada91
- (id)footnoteSeparator;	// 0x34931435
// converted property getter: - (BOOL)graphicsInHeaderFooter;	// 0x34aad9c1
// converted property getter: - (int)gutterPosition;	// 0x34aadbe1
- (id)imageBulletParagraph;	// 0x349a9671
- (id)imageBulletText;	// 0x34aadfa1
- (id)imageBulletWithCharacterOffset:(int)characterOffset;	// 0x349d29d5
- (id)imageBullets;	// 0x34927605
- (BOOL)isFromBinary;	// 0x34aae511
// converted property getter: - (id)kinsokuAltBreakAfter;	// 0x34aada05
// converted property getter: - (id)kinsokuAltBreakBefore;	// 0x34aad9f5
// converted property getter: - (BOOL)kinsokuStrict;	// 0x34aada15
- (id)lastSection;	// 0x348ed341
- (id)listAt:(int)at;	// 0x34aadba1
- (int)listCount;	// 0x34aadb81
- (id)listDefinitionAt:(int)at;	// 0x34aadb41
- (int)listDefinitionCount;	// 0x34aadb21
- (id)listDefinitionTable;	// 0x348e4afd
- (id)listDefinitionWithId:(int)anId;	// 0x348e5c61
- (id)listTable;	// 0x348e5b55
- (id)mainBlocksIterator;	// 0x34aae0f1
- (id)mainRunsIterator;	// 0x34aae175
// converted property getter: - (BOOL)mirrorMargins;	// 0x34aad985
- (id)newAnnotationBlockIterator;	// 0x34aae4b5
- (id)newAnnotationIterator;	// 0x34aae329
- (id)newEndnoteBlockIterator;	// 0x34aae431
- (id)newEndnoteIterator;	// 0x34aae2a5
- (id)newFootnoteBlockIterator;	// 0x34aae3ad
- (id)newFootnoteIterator;	// 0x34aae221
- (id)newMainBlocksIterator;	// 0x34aae119
- (id)newMainRunsIterator;	// 0x34aae19d
- (id)newSectionIterator;	// 0x34aae0ad
// converted property getter: - (id)oleFilename;	// 0x34931919
- (void)removeEmptySections;	// 0x34aadfc1
- (int)revisionAuthorAddLookup:(id)lookup;	// 0x34aadde5
- (id)revisionAuthorAt:(int)at;	// 0x34aaddc5
- (int)revisionAuthorCount;	// 0x34aadda5
- (id)revisionAuthorTable;	// 0x34929db9
- (id)sectionAt:(int)at;	// 0x348f9b7d
- (int)sectionCount;	// 0x348f8ab9
- (id)sectionIterator;	// 0x34aae085
- (id)sections;	// 0x348f8bc5
// converted property setter: - (void)setAutoHyphenate:(BOOL)hyphenate;	// 0x3491ce99
// converted property setter: - (void)setBookFold:(BOOL)fold;	// 0x348e67b1
// converted property setter: - (void)setBorderSurroundFooter:(BOOL)footer;	// 0x3491ce79
// converted property setter: - (void)setBorderSurroundHeader:(BOOL)header;	// 0x3491ce59
// converted property setter: - (void)setCreationDate:(id)date;	// 0x34aadf65
// converted property setter: - (void)setDefaultTabWidth:(unsigned short)width;	// 0x348e67dd
// converted property setter: - (void)setDocumentBackground:(id)background;	// 0x349274f1
// converted property setter: - (void)setEndnoteNumberFormat:(int)format;	// 0x348e6d29
// converted property setter: - (void)setEndnotePosition:(int)position;	// 0x348e6d49
// converted property setter: - (void)setEndnoteRestart:(int)restart;	// 0x348e6d39
// converted property setter: - (void)setEvenAndOddHeaders:(BOOL)headers;	// 0x348e6775
// converted property setter: - (void)setFootnoteNumberFormat:(int)format;	// 0x348e6889
// converted property setter: - (void)setFootnoteNumberingStart:(unsigned short)start;	// 0x348e6979
// converted property setter: - (void)setFootnotePosition:(int)position;	// 0x348e6969
// converted property setter: - (void)setFootnoteRestart:(int)restart;	// 0x348e68f9
// converted property setter: - (void)setGraphicsInHeaderFooter:(BOOL)headerFooter;	// 0x34aad9d5
// converted property setter: - (void)setGutterPosition:(int)position;	// 0x348e67cd
// converted property setter: - (void)setKinsokuAltBreakAfter:(id)after;	// 0x349d50fd
// converted property setter: - (void)setKinsokuAltBreakBefore:(id)before;	// 0x349d5139
// converted property setter: - (void)setKinsokuStrict:(BOOL)strict;	// 0x3491d09d
// converted property setter: - (void)setMirrorMargins:(BOOL)margins;	// 0x348e6795
// converted property setter: - (void)setOleFilename:(id)filename;	// 0x3491d395
// converted property setter: - (void)setShowComments:(BOOL)comments;	// 0x348e67ed
// converted property setter: - (void)setShowFormatting:(BOOL)formatting;	// 0x348e6849
// converted property setter: - (void)setShowInsertionsAndDeletions:(BOOL)deletions;	// 0x348e6829
// converted property setter: - (void)setShowMarkup:(BOOL)markup;	// 0x348e680d
// converted property setter: - (void)setShowOutline:(BOOL)outline;	// 0x3491cec9
// converted property setter: - (void)setShowRevisionMarksOnScreen:(BOOL)screen;	// 0x3491ce39
// converted property setter: - (void)setTrackChanges:(BOOL)changes;	// 0x348e6869
// converted property setter: - (void)setVersion:(id)version;	// 0x34aadd69
// converted property setter: - (void)setZIndexTotalForHeaderFooterText:(int)headerFooterText;	// 0x348f7a71
// converted property setter: - (void)setZIndexTotalForMainText:(int)mainText;	// 0x348f7a61
// converted property setter: - (void)setZoomPercentage:(short)percentage;	// 0x3491ceb9
// converted property getter: - (BOOL)showComments;	// 0x34aade39
// converted property getter: - (BOOL)showFormatting;	// 0x34aade89
// converted property getter: - (BOOL)showInsertionsAndDeletions;	// 0x34aade75
// converted property getter: - (BOOL)showMarkup;	// 0x34aade25
// converted property getter: - (BOOL)showOutline;	// 0x34aade9d
// converted property getter: - (BOOL)showRevisionMarksOnScreen;	// 0x34aade61
- (id)styleSheet;	// 0x348de125
- (id)theme;	// 0x348dabd5
// converted property getter: - (BOOL)trackChanges;	// 0x34aade4d
// converted property getter: - (id)version;	// 0x34aadd59
// converted property getter: - (int)zIndexTotalForHeaderFooterText;	// 0x34aae075
// converted property getter: - (int)zIndexTotalForMainText;	// 0x34aae065
// converted property getter: - (short)zoomPercentage;	// 0x34aadc05
@end
