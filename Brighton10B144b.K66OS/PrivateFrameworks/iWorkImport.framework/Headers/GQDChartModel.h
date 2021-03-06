/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

#import "iWorkImport-Structs.h"
#import <NSObject.h> // Unknown library


@interface GQDChartModel : NSObject {
	CFArrayRef mChartData;	// 4 = 0x4
	CFArrayRef mColumnNames;	// 8 = 0x8
	CFArrayRef mRowNames;	// 12 = 0xc
	CFDictionaryRef mPropertyBag;	// 16 = 0x10
	long mDirection;	// 20 = 0x14
	CFStringRef mTitle;	// 24 = 0x18
	CFStringRef mCatagoryTitle;	// 28 = 0x1c
	CFStringRef mValueTitle;	// 32 = 0x20
	CFStringRef mValue2Title;	// 36 = 0x24
	CFBundleRef mProcessorBundle;	// 40 = 0x28
	BOOL mIsFormulaChart;	// 44 = 0x2c
}
- (CFStringRef)catagoryTitle;	// 0x368b1e99
- (CFArrayRef)chartData;	// 0x368b1cb5
- (CFArrayRef)columnNames;	// 0x368b1cc5
- (void)dealloc;	// 0x368b1f75
- (long)direction;	// 0x368b1e45
- (BOOL)hasFloatValueForProperty:(CFStringRef)property forSeriesAtIndex:(long)index value:(float *)value;	// 0x368b1e0d
- (BOOL)hasIntValueForProperty:(CFStringRef)property forSeriesAtIndex:(long)index value:(int *)value;	// 0x368b1dd5
- (BOOL)hasStringValueForProperty:(CFStringRef)property forSeriesAtIndex:(long)index value:(const CFStringRef *)value;	// 0x368b1da1
- (BOOL)hasValueForProperty:(CFStringRef)property forSeriesAtIndex:(long)index value:(const void **)value;	// 0x368b1d59
- (BOOL)isFormulaChart;	// 0x368b1f65
- (CFDictionaryRef)propertiesForSeriesAtIndex:(long)index;	// 0x368b1d21
- (CFDictionaryRef)propertyBag;	// 0x368b1ce5
- (CFArrayRef)rowNames;	// 0x368b1cd5
- (CFArrayRef)seriesArray;	// 0x368b1cf5
- (void)setProcessorBundle:(CFBundleRef)bundle;	// 0x368b2141
- (CFStringRef)title;	// 0x368b1e55
- (void)transpose;	// 0x368b2055
- (CFStringRef)value2Title;	// 0x368b1f21
- (CFStringRef)valueTitle;	// 0x368b1edd
@end

