/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library
#import "OfficeImport-Structs.h"


__attribute__((visibility("hidden")))
@interface CHBAxis : NSObject {
}
+ (Class)chbAxisClassWith:(id)with;	// 0x35383f3d
+ (Class)chbAxisClassWith:(XlChartPlotAxis *)with plotAxis:(int)axis;	// 0x352901ed
+ (int)chbAxisIdForPlotAxis:(int)plotAxis state:(id)state;	// 0x352907a9
+ (int)chdAxisPositionFromAxisType:(int)axisType;	// 0x35290811
+ (id)readWithXlPlotAxis:(int)xlPlotAxis state:(id)state;	// 0x3528ec25
+ (int)xlPlotAxisTypeFrom:(int)from;	// 0x35383f21
@end

