/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import <NSObject.h> // Unknown library
#import "CoreDAV-Structs.h"

@class NSData;

@interface CoreDAVXMLData : NSObject {
@private
	BOOL _shouldAddFormattingSpaces;	// 4 = 0x4
	xmlTextWriter *_writer;	// 8 = 0x8
	xmlDoc *_doc;	// 12 = 0xc
	BOOL _docHasEnded;	// 16 = 0x10
	CFDictionaryRef _seenURIsToPrefixes;	// 20 = 0x14
	CFDictionaryRef _seenURIsToDepth;	// 24 = 0x18
	CFArrayRef _elementStack;	// 28 = 0x1c
}
@property(readonly, assign, nonatomic) NSData *data;	// G=0x347b3309; 
@property(assign) BOOL shouldAddFormattingSpaces;	// G=0x347b33a9; S=0x347b33b9; @synthesize=_shouldAddFormattingSpaces
- (id)init;	// 0x347b2385
- (const char *)_prefixForNameSpace:(const char *)nameSpace;	// 0x347b2509
- (void)_startElement:(id)element inNamespace:(id)aNamespace;	// 0x347b27fd
- (void)_startElement:(id)element inNamespace:(id)aNamespace withAttributeNamesAndValues:(id)attributeNamesAndValues attributes:(void *)attributes;	// 0x347b2969
- (void)appendElement:(id)element inNamespace:(id)aNamespace withStringContent:(id)stringContent withAttributeNamesAndValues:(id)attributeNamesAndValues;	// 0x347b2f29
- (void)appendElement:(id)element inNamespace:(id)aNamespace withStringContentAsCDATA:(id)stringContentAsCDATA withAttributeNamesAndValues:(id)attributeNamesAndValues;	// 0x347b304d
// declared property getter: - (id)data;	// 0x347b3309
- (void)dealloc;	// 0x347b2481
- (void)endElement:(id)element inNamespace:(id)aNamespace;	// 0x347b2c9d
// declared property setter: - (void)setShouldAddFormattingSpaces:(BOOL)addFormattingSpaces;	// 0x347b33b9
// declared property getter: - (BOOL)shouldAddFormattingSpaces;	// 0x347b33a9
- (void)startElement:(id)element inNamespace:(id)aNamespace withAttributeNamesAndValues:(id)attributeNamesAndValues;	// 0x347b2a3d
- (void)startElement:(id)element inNamespace:(id)aNamespace withAttributes:(id)attributes;	// 0x347b2b0d
@end

