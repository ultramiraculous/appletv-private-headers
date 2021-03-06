/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "EDSortedCollection.h"

@class CHDChart;

__attribute__((visibility("hidden")))
@interface CHDSeriesCollection : EDSortedCollection {
@private
	CHDChart *mChart;	// 12 = 0xc
}
+ (id)seriesCollectionWithChart:(id)chart;	// 0x35311a85
- (id)initWithChart:(id)chart;	// 0x35292859
- (unsigned)addObject:(id)object;	// 0x35294d05
- (id)firstNonEmptySeries;	// 0x352f854d
- (unsigned)nonEmptySeriesCount;	// 0x3529602d
@end

