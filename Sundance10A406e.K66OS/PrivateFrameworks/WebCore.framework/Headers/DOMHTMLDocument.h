/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

#import "DOMDocument.h"

@class NSString, DOMElement, DOMHTMLCollection;

@interface DOMHTMLDocument : DOMDocument {
}
@property(readonly, assign) DOMElement *activeElement;	// G=0x31e21c25; 
@property(copy) NSString *alinkColor;	// G=0x31e223f9; S=0x31e225b5; 
@property(copy) NSString *bgColor;	// G=0x31e21d31; S=0x31e21eed; 
@property(readonly, assign) NSString *compatMode;	// G=0x31e21a69; 
@property(copy) NSString *designMode;	// G=0x31e21705; S=0x31e218c1; 
@property(copy) NSString *dir;	// G=0x31e213a1; S=0x31e2155d; 
@property(readonly, assign) DOMHTMLCollection *embeds;	// G=0x31e20e7d; 
@property(copy) NSString *fgColor;	// G=0x31e22095; S=0x31e22251; 
@property(readonly, assign) int height;	// G=0x31e212a1; 
@property(copy) NSString *linkColor;	// G=0x31e2275d; S=0x31e22919; 
@property(readonly, assign) DOMHTMLCollection *plugins;	// G=0x31e20f89; 
@property(readonly, assign) DOMHTMLCollection *scripts;	// G=0x31e21095; 
@property(copy) NSString *vlinkColor;	// G=0x31e22ac1; S=0x31e22c7d; 
@property(readonly, assign) int width;	// G=0x31e211a1; 
- (id)_createDocumentFragmentWithMarkupString:(id)markupString baseURLString:(id)string;	// 0x31e1355d
- (id)_createDocumentFragmentWithText:(id)text;	// 0x31e137ed
// declared property getter: - (id)activeElement;	// 0x31e21c25
// declared property getter: - (id)alinkColor;	// 0x31e223f9
// declared property getter: - (id)bgColor;	// 0x31e21d31
- (void)captureEvents;	// 0x31e2346d
- (void)clear;	// 0x31e23371
- (void)close;	// 0x31e22f25
// declared property getter: - (id)compatMode;	// 0x31e21a69
- (id)createDocumentFragmentWithMarkupString:(id)markupString baseURL:(id)url;	// 0x31d2147d
- (id)createDocumentFragmentWithText:(id)text;	// 0x31e1331d
// declared property getter: - (id)designMode;	// 0x31e21705
// declared property getter: - (id)dir;	// 0x31e213a1
// declared property getter: - (id)embeds;	// 0x31e20e7d
// declared property getter: - (id)fgColor;	// 0x31e22095
- (BOOL)hasFocus;	// 0x31e23665
// declared property getter: - (int)height;	// 0x31e212a1
// declared property getter: - (id)linkColor;	// 0x31e2275d
- (void)open;	// 0x31e22e25
// declared property getter: - (id)plugins;	// 0x31e20f89
- (void)releaseEvents;	// 0x31e23569
// declared property getter: - (id)scripts;	// 0x31e21095
// declared property setter: - (void)setAlinkColor:(id)color;	// 0x31e225b5
// declared property setter: - (void)setBgColor:(id)color;	// 0x31e21eed
// declared property setter: - (void)setDesignMode:(id)mode;	// 0x31e218c1
// declared property setter: - (void)setDir:(id)dir;	// 0x31e2155d
// declared property setter: - (void)setFgColor:(id)color;	// 0x31e22251
// declared property setter: - (void)setLinkColor:(id)color;	// 0x31e22919
// declared property setter: - (void)setVlinkColor:(id)color;	// 0x31e22c7d
// declared property getter: - (id)vlinkColor;	// 0x31e22ac1
// declared property getter: - (int)width;	// 0x31e211a1
- (void)write:(id)write;	// 0x31e23021
- (void)writeln:(id)writeln;	// 0x31e231c9
@end

