/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "PDCommonBehaviorData.h"

@class NSMutableArray;

@interface PDAnimateTimeBehavior : PDCommonBehaviorData {
	NSMutableArray *mTimeAnimateValues;	// 12 = 0xc
}
- (id)init;	// 0x34fe9ccd
- (void)addTimeAnimateValue:(id)value;	// 0x350dc0a5
- (void)dealloc;	// 0x34feced5
- (id)timeAnimateValueAtIndex:(int)index;	// 0x350dc085
- (int)timeAnimateValueCount;	// 0x350dc065
@end
