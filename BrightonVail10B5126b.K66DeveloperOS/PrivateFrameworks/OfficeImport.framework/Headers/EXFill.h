/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library


@interface EXFill : NSObject {
}
+ (id)edFillFromXmlFillElement:(xmlNode *)xmlFillElement differentialFill:(bool)fill state:(id)state;	// 0x349088c5
+ (id)edFillFromXmlFillElement:(xmlNode *)xmlFillElement state:(id)state;	// 0x349088a5
+ (id)edGradientFillFromXmlElement:(xmlNode *)xmlElement state:(id)state;	// 0x34a305c9
+ (int)edGradientTypeFromXmlGradientTypeString:(id)xmlGradientTypeString state:(id)state;	// 0x34a30731
+ (id)edPatternFillFromXmlElement:(xmlNode *)xmlElement differentialFill:(bool)fill state:(id)state;	// 0x349089bd
+ (int)edPatternTypeFromXmlPatternTypeString:(id)xmlPatternTypeString;	// 0x34908ba1
+ (id)edStopFromXmlGradientElement:(xmlNode *)xmlGradientElement state:(id)state;	// 0x34a30789
@end
