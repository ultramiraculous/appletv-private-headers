/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library


__attribute__((visibility("hidden")))
@interface CHDDataValuesCollection : NSObject {
@private
	CFDataRef mPackedValues;	// 4 = 0x4
	unsigned mDataValueCount;	// 8 = 0x8
	CFDictionaryRef mIndexToDataValueMap;	// 12 = 0xc
	bool mContainsStringValue;	// 16 = 0x10
}
- (id)init;	// 0x3564e9b1
- (id)initWithDataPointCount:(unsigned)dataPointCount;	// 0x3564ec2d
- (bool)addDataPoint:(CHDDataPoint *)point;	// 0x3564edb1
- (bool)addDataValue:(id)value;	// 0x356c5241
- (void)cleanup;	// 0x356520b9
- (bool)containsStringValue;	// 0x35657a55
- (unsigned)count;	// 0x3564eb1d
- (CHDDataPoint *)dataPointAtIndex:(unsigned)index;	// 0x3564f0bd
- (CHDDataPoint *)dataPointWithIndex:(unsigned)index;	// 0x356cdabd
- (id)dataValueAtIndex:(unsigned)index;	// 0x35652e49
- (id)dataValueWithIndex:(unsigned)index;	// 0x356cda69
- (void)dealloc;	// 0x35652079
- (void)finishReading;	// 0x3564f031
- (void)resetWithDataPointCount:(unsigned)dataPointCount;	// 0x356e4605
- (void)setupBufferForValues:(unsigned)values;	// 0x3564ea15
@end

