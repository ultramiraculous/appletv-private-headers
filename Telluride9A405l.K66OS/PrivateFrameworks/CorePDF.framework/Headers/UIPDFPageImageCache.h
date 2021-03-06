/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

#import "CorePDF-Structs.h"
#import <NSObject.h> // Unknown library

@class UIPDFDocument, NSOperationQueue;

@interface UIPDFPageImageCache : NSObject {
	UIPDFDocument *_document;	// 4 = 0x4
	unsigned _lookAhead;	// 8 = 0x8
	unsigned _jobCount;	// 12 = 0xc
	UIPDFPageRenderJob **_jobsPrioritized;	// 16 = 0x10
	unsigned nextJobIndex;	// 20 = 0x14
	unsigned _pageCount;	// 24 = 0x18
	UIPDFPageRenderJob **_jobsByPage;	// 28 = 0x1c
	NSOperationQueue *_renderQueue;	// 32 = 0x20
	int _lock;	// 36 = 0x24
}
@property(readonly, assign) UIPDFDocument *document;	// G=0x31f8ed65; @synthesize=_document
@property(readonly, assign) unsigned lookAhead;	// G=0x31f8ed45; @synthesize=_lookAhead
@property(readonly, assign) unsigned pageCount;	// G=0x31f8ed55; @synthesize=_pageCount
- (id)initWithDocument:(id)document;	// 0x31f8ed75
- (id)initWithDocument:(id)document cacheCount:(unsigned)count lookAhead:(unsigned)ahead;	// 0x31f8eecd
- (void)addRenderJob:(id)job;	// 0x31f8ed95
- (void)cacheImageOfPage:(unsigned)page maxSize:(CGSize)size;	// 0x31f8f595
- (void)cancelPendingRenderOperations;	// 0x31f8f1bd
- (void)cancelPendingRenderOperationsForTarget:(id)target;	// 0x31f8f139
- (void)dealloc;	// 0x31f8f669
- (void)deliverImageOfPage:(unsigned)page maxSize:(CGSize)size receiver:(id)receiver selector:(SEL)selector info:(id)info;	// 0x31f8f251
- (void)didReceiveMemoryWarning:(id)warning;	// 0x31f8f04d
// declared property getter: - (id)document;	// 0x31f8ed65
// declared property getter: - (unsigned)lookAhead;	// 0x31f8ed45
// declared property getter: - (unsigned)pageCount;	// 0x31f8ed55
@end

