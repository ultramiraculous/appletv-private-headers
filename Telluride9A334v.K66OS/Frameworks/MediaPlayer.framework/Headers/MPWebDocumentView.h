/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MediaPlayer-Structs.h"
#import <UIWebDocumentView.h> // Unknown library

@class NSString;

@interface MPWebDocumentView : UIWebDocumentView {
	id _loadDelegate;	// 568 = 0x238
	NSString *_stylesheet;	// 572 = 0x23c
	unsigned _adjustHeightToFit : 1;	// 576 = 0x240
	unsigned _treatAsPlainText : 1;	// 576 = 0x240
}
@property(assign, nonatomic) id loadDelegate;	// G=0x34e87ea9; S=0x34e87eb9; @synthesize=_loadDelegate
@property(retain, nonatomic) NSString *stylesheet;	// G=0x34e87ec9; S=0x34e87ed9; @synthesize=_stylesheet
+ (id)newEmptyLabelView;	// 0x34e87431
- (id)initWithFrame:(CGRect)frame;	// 0x34e87589
- (void)dealloc;	// 0x34e87625
- (CGSize)layoutWithAutoresizingSize:(CGSize)autoresizingSize contentBlock:(id)block;	// 0x34e87b91
// declared property getter: - (id)loadDelegate;	// 0x34e87ea9
- (void)openURL:(id)url;	// 0x34e87e01
- (void)setContentWithString:(id)string stylesheet:(id)stylesheet;	// 0x34e87a7d
- (void)setHTMLFragment:(id)fragment;	// 0x34e876b1
// declared property setter: - (void)setLoadDelegate:(id)delegate;	// 0x34e87eb9
- (void)setPlaintextString:(id)string manuallyWrap:(BOOL)wrap;	// 0x34e877ad
// declared property setter: - (void)setStylesheet:(id)stylesheet;	// 0x34e87ed9
// declared property getter: - (id)stylesheet;	// 0x34e87ec9
- (void)webView:(id)view decidePolicyForNavigationAction:(id)navigationAction request:(id)request frame:(id)frame decisionListener:(id)listener;	// 0x34e87e21
- (void)webView:(id)view didFinishLoadForFrame:(id)frame;	// 0x34e87d01
@end

