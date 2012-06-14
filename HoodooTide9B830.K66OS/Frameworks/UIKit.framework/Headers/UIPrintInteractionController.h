/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import <NSObject.h> // Unknown library

@class UIPrintPageRenderer, PKPrinter, UIPrintInfo, UIPrintPaper, NSArray, UIPrintFormatter;
@protocol UIPrintInteractionControllerDelegate;

@interface UIPrintInteractionController : NSObject {
@private
	UIPrintInfo *_printInfo;	// 4 = 0x4
	id<UIPrintInteractionControllerDelegate> _delegate;	// 8 = 0x8
	BOOL _showsPageRange;	// 12 = 0xc
	UIPrintPageRenderer *_printPageRenderer;	// 16 = 0x10
	UIPrintFormatter *_printFormatter;	// 20 = 0x14
	id _printingItem;	// 24 = 0x18
	NSArray *_printingItems;	// 28 = 0x1c
	UIPrintPaper *_printPaper;	// 32 = 0x20
	id _completionHandler;	// 36 = 0x24
	unsigned _backgroundTaskIdentifier;	// 40 = 0x28
	id _printState;	// 44 = 0x2c
}
@property(assign, nonatomic) id<UIPrintInteractionControllerDelegate> delegate;	// G=0x3037f895; S=0x3037f8a5; @synthesize=_delegate
@property(readonly, assign, nonatomic) int pageCount;	// G=0x3037c8e5; 
@property(assign, nonatomic) NSRange pageRange;	// G=0x3037c909; S=0x3037c96d; 
@property(retain, nonatomic) UIPrintPaper *paper;	// G=0x3037ca3d; S=0x3037cc51; 
@property(retain, nonatomic) UIPrintFormatter *printFormatter;	// G=0x3037f919; S=0x3037f929; @synthesize=_printFormatter
@property(retain, nonatomic) UIPrintInfo *printInfo;	// G=0x3037f861; S=0x3037f871; @synthesize=_printInfo
@property(retain, nonatomic) UIPrintPageRenderer *printPageRenderer;	// G=0x3037f8e5; S=0x3037f8f5; @synthesize=_printPageRenderer
@property(readonly, assign, nonatomic) UIPrintPaper *printPaper;	// G=0x3037f8d5; @synthesize=_printPaper
@property(retain, nonatomic) PKPrinter *printer;	// G=0x3037c991; S=0x3037c9b5; 
@property(copy, nonatomic) id printingItem;	// G=0x3037f94d; S=0x3037c221; @synthesize=_printingItem
@property(copy, nonatomic) NSArray *printingItems;	// G=0x3037f95d; S=0x3037f96d; @synthesize=_printingItems
@property(assign, nonatomic) BOOL showsPageRange;	// G=0x3037f8b5; S=0x3037f8c5; @synthesize=_showsPageRange
+ (BOOL)canPrintData:(id)data;	// 0x3037c051
+ (BOOL)canPrintURL:(id)url;	// 0x3037be81
+ (BOOL)isPrintingAvailable;	// 0x3037bdbd
+ (id)printableUTIs;	// 0x3037bdf1
+ (id)sharedPrintController;	// 0x3037c069
- (id)init;	// 0x3037c0ed
- (BOOL)_canShowDuplex;	// 0x3037c7f5
- (BOOL)_canShowPageRange;	// 0x3037c839
- (BOOL)_canShowPaperList;	// 0x3037c8a5
- (void)_cleanPrintState;	// 0x3037c6e1
- (id)_currentPrintInfo;	// 0x3037c7d1
- (void)_endPrintJob:(BOOL)job error:(id)error;	// 0x3037f699
- (id)_init;	// 0x3037c13d
- (id)_paperForContentType:(int)contentType;	// 0x3037db35
- (id)_paperForPDFItem:(id)pdfitem withDuplexMode:(int)duplexMode;	// 0x3037d939
- (void)_preparePrintInfo;	// 0x3037d7fd
- (id)_printItem:(id)item;	// 0x3037e949
- (void)_printPage;	// 0x3037e761
- (id)_printPageRenderer:(id)renderer;	// 0x3037f539
- (void)_printPanelDidDismiss;	// 0x3037d6b5
- (void)_printPanelDidPresent;	// 0x3037d459
- (void)_printPanelWillDismiss:(BOOL)_printPanel;	// 0x3037d4a1
- (void)_setPrintInfoState:(int)state;	// 0x3037d53d
- (BOOL)_setupPrintPanel:(id)panel;	// 0x3037d1e5
- (void)_startPrinting;	// 0x3037e26d
- (void)_updatePageCount;	// 0x3037ccb5
- (void)_updatePrintPaper;	// 0x3037dc71
- (void)dealloc;	// 0x3037c189
// declared property getter: - (id)delegate;	// 0x3037f895
- (void)dismissAnimated:(BOOL)animated;	// 0x3037c689
// declared property getter: - (int)pageCount;	// 0x3037c8e5
// declared property getter: - (NSRange)pageRange;	// 0x3037c909
// declared property getter: - (id)paper;	// 0x3037ca3d
- (BOOL)presentAnimated:(BOOL)animated completionHandler:(id)handler;	// 0x3037c29d
- (BOOL)presentFromBarButtonItem:(id)barButtonItem animated:(BOOL)animated completionHandler:(id)handler;	// 0x3037c569
- (BOOL)presentFromRect:(CGRect)rect inView:(id)view animated:(BOOL)animated completionHandler:(id)handler;	// 0x3037c42d
// declared property getter: - (id)printFormatter;	// 0x3037f919
// declared property getter: - (id)printInfo;	// 0x3037f861
// declared property getter: - (id)printPageRenderer;	// 0x3037f8e5
// declared property getter: - (id)printPaper;	// 0x3037f8d5
// declared property getter: - (id)printer;	// 0x3037c991
// declared property getter: - (id)printingItem;	// 0x3037f94d
// declared property getter: - (id)printingItems;	// 0x3037f95d
- (oneway void)release;	// 0x3037c0b1
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x3037f8a5
// declared property setter: - (void)setPageRange:(NSRange)range;	// 0x3037c96d
// declared property setter: - (void)setPaper:(id)paper;	// 0x3037cc51
// declared property setter: - (void)setPrintFormatter:(id)formatter;	// 0x3037f929
// declared property setter: - (void)setPrintInfo:(id)info;	// 0x3037f871
// declared property setter: - (void)setPrintPageRenderer:(id)renderer;	// 0x3037f8f5
// declared property setter: - (void)setPrinter:(id)printer;	// 0x3037c9b5
// declared property setter: - (void)setPrintingItem:(id)item;	// 0x3037c221
// declared property setter: - (void)setPrintingItems:(id)items;	// 0x3037f96d
// declared property setter: - (void)setShowsPageRange:(BOOL)range;	// 0x3037f8c5
// declared property getter: - (BOOL)showsPageRange;	// 0x3037f8b5
@end
