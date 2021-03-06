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
@interface GQHStreamedXML : NSObject <GQHXMLOutput> {
@private
	xmlOutputBuffer *mOutputBuffer;	// 4 = 0x4
	CFDataRef mData;	// 8 = 0x8
	CFArrayRef mElementNameStack;	// 12 = 0xc
	int mLastOp;	// 16 = 0x10
	BOOL mNeedNewlineBeforeNextElement;	// 20 = 0x14
	xmlDoc *mXMLDoc;	// 24 = 0x18
}
- (id)initEmpty;	// 0x304cfa09
- (id)initWithHead;	// 0x304d01f9
- (void)addCharRef:(const char *)ref;	// 0x304cfc11
- (void)addXmlCharContent:(const char *)content;	// 0x304cfcd1
- (CFDataRef)createHtml;	// 0x304cfb95
- (CFDataRef)createHtmlWithCss:(CFStringRef)css;	// 0x304cfa05
- (CFDataRef)createProgressiveHtml;	// 0x304cfb19
- (void)dealloc;	// 0x304d011d
- (void)endElement;	// 0x304cfeed
- (void)endElementWithExpectedName:(const char *)expectedName;	// 0x304cfedd
- (const char *)peekElementName;	// 0x304d02c5
- (char *)popElementName;	// 0x304d0319
- (void)pushElementName:(const char *)name;	// 0x304d02f5
- (void)setAttribute:(const char *)attribute value:(const char *)value;	// 0x304cfdc1
- (void)startElement:(const char *)element;	// 0x304d0061
@end

