/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

#import "WebCore-Structs.h"
#import "DOMHTMLElement.h"

@class NSURL, NSString;

@interface DOMHTMLAreaElement : DOMHTMLElement {
}
@property(readonly, copy) NSURL *absoluteLinkURL;	// G=0x36838ea1; 
@property(copy) NSString *accessKey;	// G=0x36837479; S=0x368379b9; 
@property(copy) NSString *alt;	// G=0x36837559; S=0x36837afd; 
@property(copy) NSString *coords;	// G=0x36837639; S=0x36837c41; 
@property(readonly, copy) NSString *hashName;	// G=0x3683858d; 
@property(readonly, copy) NSString *host;	// G=0x368386d9; 
@property(readonly, copy) NSString *hostname;	// G=0x36838825; 
@property(copy) NSString *href;	// G=0x36838295; S=0x36837d85; 
@property(assign) BOOL noHref;	// G=0x368383ed; S=0x368384b5; 
@property(readonly, copy) NSString *pathname;	// G=0x36838971; 
@property(retain) id ping;	// G=0x36837719; S=0x36837ec9; converted property
@property(readonly, copy) NSString *port;	// G=0x36838abd; 
@property(readonly, copy) NSString *protocol;	// G=0x36838c09; 
@property(readonly, copy) NSString *search;	// G=0x36838d55; 
@property(copy) NSString *shape;	// G=0x368377f9; S=0x3683800d; 
@property(copy) NSString *target;	// G=0x368378d9; S=0x36838151; 
// declared property getter: - (id)absoluteLinkURL;	// 0x36838ea1
- (WKQuad)absoluteQuadWithOwner:(id)owner;	// 0x3687bea1
- (id)absoluteQuadsWithOwner:(id)owner;	// 0x3687b2d9
// declared property getter: - (id)accessKey;	// 0x36837479
// declared property getter: - (id)alt;	// 0x36837559
- (CGRect)boundingBoxWithOwner:(id)owner;	// 0x3687bf49
- (id)boundingBoxesWithOwner:(id)owner;	// 0x3687b251
// declared property getter: - (id)coords;	// 0x36837639
// declared property getter: - (id)hashName;	// 0x3683858d
// declared property getter: - (id)host;	// 0x368386d9
// declared property getter: - (id)hostname;	// 0x36838825
// declared property getter: - (id)href;	// 0x36838295
// declared property getter: - (BOOL)noHref;	// 0x368383ed
// declared property getter: - (id)pathname;	// 0x36838971
// converted property getter: - (id)ping;	// 0x36837719
// declared property getter: - (id)port;	// 0x36838abd
// declared property getter: - (id)protocol;	// 0x36838c09
// declared property getter: - (id)search;	// 0x36838d55
// declared property setter: - (void)setAccessKey:(id)key;	// 0x368379b9
// declared property setter: - (void)setAlt:(id)alt;	// 0x36837afd
// declared property setter: - (void)setCoords:(id)coords;	// 0x36837c41
// declared property setter: - (void)setHref:(id)href;	// 0x36837d85
// declared property setter: - (void)setNoHref:(BOOL)href;	// 0x368384b5
// converted property setter: - (void)setPing:(id)ping;	// 0x36837ec9
// declared property setter: - (void)setShape:(id)shape;	// 0x3683800d
// declared property setter: - (void)setTarget:(id)target;	// 0x36838151
// declared property getter: - (id)shape;	// 0x368377f9
// declared property getter: - (id)target;	// 0x368378d9
@end

