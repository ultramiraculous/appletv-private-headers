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
+ (void)buildEDString:(id)string fromChildrenOfNode:(xmlNode *)node edFont:(id)font keepWhitespace:(bool)whitespace state:(id)state;	// 0x37ad7289
+ (void)buildEDString:(id)string fromNode:(xmlNode *)node edFont:(id)font keepWhitespace:(bool)whitespace state:(id)state;	// 0x37ad7395
+ (void)buildEDString:(id)string fromText:(id)text edFont:(id)font keepWhitespace:(bool)whitespace state:(id)state;	// 0x37ad7725
+ (id)cleanupWhitespace:(id)whitespace;	// 0x37ad78bd
+ (id)edStringWithRunsFromXmlDivElement:(xmlNode *)xmlDivElement state:(id)state;	// 0x37ad722d
+ (id)edStringWithRunsFromXmlStringElement:(xmlNode *)xmlStringElement state:(id)state;	// 0x379b0c8d
+ (id)edTextFromXmlStringElement:(xmlNode *)xmlStringElement;	// 0x379b0691
+ (void)parseStringWithAsciiCode:(id)asciiCode;	// 0x379b078d
+ (id)readStringWithAsciiCodeFromXmlStringElement:(xmlNode *)xmlStringElement;	// 0x379b06f9
@end

