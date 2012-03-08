/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

#import "WebKit-Structs.h"
#import <WAKView.h> // Unknown library
#import "WebPDFDocumentView.h"
#import "WebPDFDocumentRepresentation.h"


@interface WebPDFView : WAKView <WebPDFDocumentView, WebPDFDocumentRepresentation> {
@private
	BOOL dataSourceHasBeenSet;	// 68 = 0x44
	CGPDFDocumentRef _PDFDocument;	// 72 = 0x48
	CGRect *_pageRects;	// 76 = 0x4c
}
+ (CGColorRef)backgroundColor;	// 0x3054079d
+ (CGColorRef)shadowColor;	// 0x30540895
+ (id)supportedMIMETypes;	// 0x304f3f75
- (void)_checkPDFTitle;	// 0x30540bb5
- (void)_computePageRects;	// 0x30540d1d
- (id)_pagesInRect:(CGRect)rect;	// 0x30541095
- (BOOL)canProvideDocumentSource;	// 0x305406fd
- (void)dataSourceUpdated:(id)updated;	// 0x305406e5
- (void)dealloc;	// 0x30540749
- (CGPDFDocumentRef)doc;	// 0x30540705
- (id)documentSource;	// 0x30540701
- (void)drawPage:(CGPDFPageRef)page;	// 0x305412b9
- (void)drawRect:(CGRect)rect;	// 0x30540fbd
- (void)finishedLoadingWithDataSource:(id)dataSource;	// 0x30540afd
- (void)layout;	// 0x30540f0d
- (unsigned)pageNumberForRect:(CGRect)rect;	// 0x305409a9
- (void)receivedData:(id)data withDataSource:(id)dataSource;	// 0x305406f5
- (void)receivedError:(id)error withDataSource:(id)dataSource;	// 0x305406f9
- (CGRect)rectForPageNumber:(unsigned)pageNumber;	// 0x30540715
- (void)setDataSource:(id)source;	// 0x30540f25
- (void)setNeedsLayout:(BOOL)layout;	// 0x305406e9
- (id)title;	// 0x30540ab5
- (unsigned)totalPages;	// 0x30540989
- (void)viewDidMoveToHostWindow;	// 0x305406f1
- (void)viewWillMoveToHostWindow:(id)view;	// 0x305406ed
@end
