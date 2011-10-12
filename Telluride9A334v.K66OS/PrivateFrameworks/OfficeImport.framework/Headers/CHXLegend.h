/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library


__attribute__((visibility("hidden")))
@interface CHXLegend : NSObject {
}
+ (id)chdLegendEntryFromXmlLegendEntryElement:(xmlNode *)xmlLegendEntryElement defaultFont:(id)font state:(id)state;	// 0x356c80c9
+ (id)chdLegendFromXmlLegendElement:(xmlNode *)xmlLegendElement state:(id)state;	// 0x356c75b9
+ (int)chdLegendPositionFromXmlLegendPositionElement:(xmlNode *)xmlLegendPositionElement;	// 0x356c78c5
+ (void)setDefaultLegendBounds:(id)bounds legendPosition:(int)position;	// 0x356c79ad
@end

