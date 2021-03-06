/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import <NSObject.h> // Unknown library


__attribute__((visibility("hidden")))
@interface EnhancementHistogram : NSObject {
	float hist[256];	// 4 = 0x4
}
+ (id)histogramFromData:(const float *)data;	// 0x36b4fc09
+ (id)histogramFromDoubleData:(const double *)doubleData;	// 0x36b4fcd9
+ (id)histogramFromFloatData:(const float *)floatData;	// 0x36b4fc71
- (const float *)values;	// 0x36b4fd4d
@end

