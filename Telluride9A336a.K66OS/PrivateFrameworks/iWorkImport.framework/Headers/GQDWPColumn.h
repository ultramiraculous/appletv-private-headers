/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

#import "iWorkImport-Structs.h"
#import <NSObject.h> // Unknown library


__attribute__((visibility("hidden")))
@interface GQDWPColumn : NSObject {
@private
	long mIndex;	// 4 = 0x4
	float mWidth;	// 8 = 0x8
	float mSpacing;	// 12 = 0xc
	BOOL mHasSpacing;	// 16 = 0x10
}
+ (const StateSpec *)stateForReading;	// 0x3049b60d
- (BOOL)hasSpacing;	// 0x3049b639
- (long)index;	// 0x3049b619
- (int)readAttributesFromReader:(xmlTextReader *)reader;	// 0x3049b699
- (float)spacing;	// 0x3049b649
- (float)width;	// 0x3049b629
@end

