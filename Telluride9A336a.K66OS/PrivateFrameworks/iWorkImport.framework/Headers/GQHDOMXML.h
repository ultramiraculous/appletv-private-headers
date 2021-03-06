/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

#import <NSObject.h> // Unknown library
#import "iWorkImport-Structs.h"
#import "GQHXMLOutput.h"


__attribute__((visibility("hidden")))
@interface GQHDOMXML : NSObject <GQHXMLOutput> {
@private
	xmlDoc *mXMLDoc;	// 4 = 0x4
	xmlNode *mCurrentNode;	// 8 = 0x8
}
- (id)initEmpty;	// 0x304cf5c1
- (id)initWithHead;	// 0x304cf7cd
- (void)addCharRef:(const char *)ref;	// 0x304cf6f9
- (void)addXmlCharContent:(const char *)content;	// 0x304cf72d
- (CFDataRef)createHtml;	// 0x304cf6e5
- (CFDataRef)createHtmlWithCss:(CFStringRef)css;	// 0x304cf67d
- (CFDataRef)createProgressiveHtml;	// 0x304cf595
- (void)dealloc;	// 0x304cf781
- (void)endElement;	// 0x304cf581
- (void)endElementWithExpectedName:(const char *)expectedName;	// 0x304cf771
- (void)removeStyleSheetLinkNodeAndAddStyle:(CFStringRef)style;	// 0x304cf879
- (void)setAttribute:(const char *)attribute value:(const char *)value;	// 0x304cf759
- (void)startElement:(const char *)element;	// 0x304cf599
@end

