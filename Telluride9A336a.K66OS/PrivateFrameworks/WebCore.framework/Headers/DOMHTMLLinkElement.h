/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

#import "DOMHTMLElement.h"

@class NSURL, DOMStyleSheet, NSString;

__attribute__((visibility("hidden")))
@interface DOMHTMLLinkElement : DOMHTMLElement {
}
@property(readonly, copy) NSURL *absoluteLinkURL;	// G=0x31c01e91; 
@property(copy) NSString *charset;	// G=0x31c00c35; S=0x31c01255; 
@property(assign) BOOL disabled;	// G=0x31c00aa9; S=0x31c00b69; 
@property(copy) NSString *href;	// G=0x31c01c75; S=0x31c01399; 
@property(copy) NSString *hreflang;	// G=0x31c00d15; S=0x31c014dd; 
@property(copy) NSString *media;	// G=0x31c00df5; S=0x31c01621; 
@property(copy) NSString *rel;	// G=0x31c00ed5; S=0x31c01765; 
@property(copy) NSString *rev;	// G=0x31c00fb5; S=0x31c018a9; 
@property(readonly, retain) DOMStyleSheet *sheet;	// G=0x31c01dcd; 
@property(copy) NSString *target;	// G=0x31c01095; S=0x31c019ed; 
@property(copy) NSString *type;	// G=0x31c01175; S=0x31c01b31; 
- (BOOL)_mediaQueryMatches;	// 0x31bc77f1
- (BOOL)_mediaQueryMatchesForOrientation:(int)orientation;	// 0x31bc774d
// declared property getter: - (id)absoluteLinkURL;	// 0x31c01e91
// declared property getter: - (id)charset;	// 0x31c00c35
// declared property getter: - (BOOL)disabled;	// 0x31c00aa9
// declared property getter: - (id)href;	// 0x31c01c75
// declared property getter: - (id)hreflang;	// 0x31c00d15
// declared property getter: - (id)media;	// 0x31c00df5
// declared property getter: - (id)rel;	// 0x31c00ed5
// declared property getter: - (id)rev;	// 0x31c00fb5
// declared property setter: - (void)setCharset:(id)charset;	// 0x31c01255
// declared property setter: - (void)setDisabled:(BOOL)disabled;	// 0x31c00b69
// declared property setter: - (void)setHref:(id)href;	// 0x31c01399
// declared property setter: - (void)setHreflang:(id)hreflang;	// 0x31c014dd
// declared property setter: - (void)setMedia:(id)media;	// 0x31c01621
// declared property setter: - (void)setRel:(id)rel;	// 0x31c01765
// declared property setter: - (void)setRev:(id)rev;	// 0x31c018a9
// declared property setter: - (void)setTarget:(id)target;	// 0x31c019ed
// declared property setter: - (void)setType:(id)type;	// 0x31c01b31
// declared property getter: - (id)sheet;	// 0x31c01dcd
// declared property getter: - (id)target;	// 0x31c01095
// declared property getter: - (id)type;	// 0x31c01175
@end

