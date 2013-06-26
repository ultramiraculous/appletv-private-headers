/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

#import "CorePDF-Structs.h"
#import <NSObject.h> // Unknown library

@class UIPDFPage;

@interface UIPDFSelection : NSObject {
	UIPDFPage *_page;	// 4 = 0x4
	CGPDFSelectionRef _cgSelection;	// 8 = 0x8
	BOOL _dirty;	// 12 = 0xc
	CFStringRef _string;	// 16 = 0x10
	XXStruct_ny2fMB stringRange;	// 20 = 0x14
}
@property(readonly, retain) UIPDFPage *page;	// G=0x33882661; converted property
@property(assign, nonatomic) XXStruct_ny2fMB stringRange;	// G=0x338835b1; S=0x338835c9; @synthesize
- (id)initWithPage:(id)page cgSelection:(CGPDFSelectionRef)selection;	// 0x338835dd
- (id)initWithPage:(id)page fromArchive:(id)archive;	// 0x33882515
- (id)initWithSelection:(id)selection;	// 0x338825c9
- (CGPDFSelectionRef)CGSelection;	// 0x338836cd
- (id)archive;	// 0x3388315d
- (id)attributedStringAtIndex:(unsigned)index;	// 0x338828e5
- (CGRect)bounds;	// 0x3388275d
- (id)containingTextLine;	// 0x33882ad9
- (void)copyToPasteboard;	// 0x338833cd
- (void)dealloc;	// 0x33883659
- (id)description;	// 0x3388370d
- (unsigned)extendAtEnd:(unsigned)end;	// 0x338833a5
- (unsigned)extendAtStart:(unsigned)start;	// 0x3388337d
- (void)extendToParagraph;	// 0x338836dd
- (XXStruct_ny2fMB)extent;	// 0x33883519
- (BOOL)getBounds:(CGRect *)bounds transform:(CGAffineTransform *)transform index:(unsigned)index;	// 0x33882ba1
- (id)htmlAtIndex:(unsigned)index;	// 0x33882cb1
- (BOOL)isEmpty;	// 0x33882939
- (BOOL)isNonEmpty;	// 0x33882959
- (BOOL)isWord;	// 0x33882b65
- (unsigned)numberOfRectangles;	// 0x33882b85
// converted property getter: - (id)page;	// 0x33882661
- (XXStruct_BUymIA)rectangleAtIndex:(unsigned)index scale:(float)scale inset:(float)inset;	// 0x33882d49
- (id)selectionExtendedToLineBoundaries;	// 0x33882981
// declared property setter: - (void)setStringRange:(XXStruct_ny2fMB)range;	// 0x338835c9
- (id)string;	// 0x33882881
// declared property getter: - (XXStruct_ny2fMB)stringRange;	// 0x338835b1
- (id)textAtIndex:(unsigned)index;	// 0x33882c19
- (CGAffineTransform)transform;	// 0x33882671
@end
