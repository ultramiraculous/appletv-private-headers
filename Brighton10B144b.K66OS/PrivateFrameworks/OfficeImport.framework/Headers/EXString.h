/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library


@interface EXString : NSObject {
}
+ (void)buildEDString:(id)string fromChildrenOfNode:(xmlNode *)node edFont:(id)font keepWhitespace:(bool)whitespace state:(id)state;	// 0x34a32289
+ (void)buildEDString:(id)string fromNode:(xmlNode *)node edFont:(id)font keepWhitespace:(bool)whitespace state:(id)state;	// 0x34a32395
+ (void)buildEDString:(id)string fromText:(id)text edFont:(id)font keepWhitespace:(bool)whitespace state:(id)state;	// 0x34a32725
+ (id)cleanupWhitespace:(id)whitespace;	// 0x34a328bd
+ (id)edStringWithRunsFromXmlDivElement:(xmlNode *)xmlDivElement state:(id)state;	// 0x34a3222d
+ (id)edStringWithRunsFromXmlStringElement:(xmlNode *)xmlStringElement state:(id)state;	// 0x3490bc8d
+ (id)edTextFromXmlStringElement:(xmlNode *)xmlStringElement;	// 0x3490b691
+ (void)parseStringWithAsciiCode:(id)asciiCode;	// 0x3490b78d
+ (id)readStringWithAsciiCodeFromXmlStringElement:(xmlNode *)xmlStringElement;	// 0x3490b6f9
@end
