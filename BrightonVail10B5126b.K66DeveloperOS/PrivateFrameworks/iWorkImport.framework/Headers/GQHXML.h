/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

#import "iWorkImport-Structs.h"
#import <NSObject.h> // Unknown library

@protocol GQHXMLOutput;

@interface GQHXML : NSObject {
	id<GQHXMLOutput> mOutput;	// 4 = 0x4
	BOOL mUseExternalCss;	// 8 = 0x8
	CFStringRef mFilename;	// 12 = 0xc
	CFStringRef mCssFilename;	// 16 = 0x10
	CFStringRef mCss;	// 20 = 0x14
	CFStringRef mLastCss;	// 24 = 0x18
	bool isProgressive;	// 28 = 0x1c
}
@property(readonly, assign) bool isProgressive;	// G=0x368e52d5; @synthesize
- (id)initEmptyWithFilename:(CFStringRef)filename useExternalCss:(BOOL)css;	// 0x368e4791
- (id)initWithFilename:(CFStringRef)filename documentSize:(CGSize *)size outputBundle:(id)bundle useExternalCss:(BOOL)css;	// 0x368e4849
- (void)addCharRef:(const char *)ref;	// 0x368e4e35
- (void)addContent:(CFStringRef)content;	// 0x368e4d6d
- (void)addStyleClass:(CFStringRef)aClass;	// 0x368e4e55
- (void)addStyleClassLast:(CFStringRef)last;	// 0x368e4e69
- (void)addViewportMetaTagForDocumentSize:(CGSize)documentSize;	// 0x368e4e95
- (void)addViewportMetaTagForDocumentSize:(CGSize)documentSize maximumScale:(float)scale;	// 0x368e4f51
- (void)addXmlCharContent:(const char *)content;	// 0x368e4e15
- (CFDataRef)createProgressiveHtml;	// 0x368e51fd
- (CFDataRef)createProgressiveeCSSwithStyleTags:(unsigned char)tags;	// 0x368e521d
- (CFStringRef)cssFilename;	// 0x368e4e85
- (void)dealloc;	// 0x368e4ae1
- (void)endElement;	// 0x368e4bb1
- (void)endElementWithExpectedName:(const char *)expectedName;	// 0x368e4bd1
// declared property getter: - (bool)isProgressive;	// 0x368e52d5
- (void)setAttribute:(const char *)attribute cfStringValue:(CFStringRef)value;	// 0x368e4c11
- (void)setAttribute:(const char *)attribute floatValue:(float)value;	// 0x368e4d19
- (void)setAttribute:(const char *)attribute intValue:(int)value;	// 0x368e4cc5
- (void)setAttribute:(const char *)attribute value:(const char *)value;	// 0x368e4bf1
- (void)startElement:(const char *)element;	// 0x368e4b91
- (BOOL)writeToOutputBundle:(id)outputBundle;	// 0x368e5019
@end
