/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

#import <NSObject.h> // Unknown library
#import "NSXMLParserDelegate.h"

@class NSMutableString, UIPDFAnnotation;

@interface UIPDFAnnotationParserDelegate : NSObject <NSXMLParserDelegate> {
	NSMutableString *_characters;	// 4 = 0x4
	BOOL _parseError;	// 8 = 0x8
	UIPDFAnnotation *_annotation;	// 12 = 0xc
}
@property(retain, nonatomic) UIPDFAnnotation *annotation;	// G=0x3226a761; S=0x3226a771; @synthesize=_annotation
@property(readonly, assign, nonatomic) BOOL parseError;	// G=0x3226a795; @synthesize=_parseError
- (id)init;	// 0x3226a2fd
// declared property getter: - (id)annotation;	// 0x3226a761
- (void)dealloc;	// 0x3226a341
// declared property getter: - (BOOL)parseError;	// 0x3226a795
- (void)parser:(id)parser didEndElement:(id)element namespaceURI:(id)uri qualifiedName:(id)name;	// 0x3226a65d
- (void)parser:(id)parser didStartElement:(id)element namespaceURI:(id)uri qualifiedName:(id)name attributes:(id)attributes;	// 0x3226a3ad
- (void)parser:(id)parser foundCharacters:(id)characters;	// 0x3226a385
- (void)parser:(id)parser parseErrorOccurred:(id)occurred;	// 0x3226a36d
- (void)parserDidStartDocument:(id)parser;	// 0x3226a381
// declared property setter: - (void)setAnnotation:(id)annotation;	// 0x3226a771
@end

