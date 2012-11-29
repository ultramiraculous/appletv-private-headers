/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

#import <NSObject.h> // Unknown library
#import "CorePDF-Structs.h"

@class UIPDFDocument, NSOperationQueue;

@interface UIPDFPageImageCache : NSObject {
	UIPDFDocument *_document;	// 4 = 0x4
	unsigned _lookAhead;	// 8 = 0x8
	unsigned _jobCount;	// 12 = 0xc
	id *_jobsPrioritized;	// 16 = 0x10
	unsigned _nextJobIndex;	// 20 = 0x14
	unsigned _pageCount;	// 24 = 0x18
	id *_jobsByPage;	// 28 = 0x1c
	NSOperationQueue *_renderQueue;	// 32 = 0x20
	int _lock;	// 36 = 0x24
}
@property(readonly, assign) UIPDFDocument *document;	// G=0x32269fb1; @synthesize=_document
@property(readonly, assign) unsigned lookAhead;	// G=0x32269fd9; @synthesize=_lookAhead
@property(readonly, assign) unsigned pageCount;	// G=0x32269fc5; @synthesize=_pageCount
- (id)initWithDocument:(id)document;	// 0x3226939d
- (id)initWithDocument:(id)document cacheCount:(unsigned)count lookAhead:(unsigned)ahead;	// 0x322693bd
- (void)addRenderJob:(id)job;	// 0x32269725
- (void)cacheImageOfPage:(unsigned)page maxSize:(CGSize)size;	// 0x3226987d
- (void)cancelPendingRenderOperations;	// 0x32269e65
- (void)cancelPendingRenderOperationsForTarget:(id)target;	// 0x32269ef9
- (void)clearCache;	// 0x32269529
- (void)dealloc;	// 0x32269675
- (void)deliverImageOfPage:(unsigned)page maxSize:(CGSize)size quality:(BOOL *)quality receiver:(id)receiver selector:(SEL)selector info:(id)info;	// 0x322699ad
- (void)didReceiveMemoryWarning:(id)warning;	// 0x32269f79
// declared property getter: - (id)document;	// 0x32269fb1
- (id)getImageIfAvailableForPage:(unsigned)page;	// 0x32269df1
// declared property getter: - (unsigned)lookAhead;	// 0x32269fd9
// declared property getter: - (unsigned)pageCount;	// 0x32269fc5
@end
