/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library

@class NSMutableArray;

@interface WMTableColumnInfo : NSObject {
	NSMutableArray *mStopArray;	// 4 = 0x4
}
- (id)initWithStopArray:(id)stopArray;	// 0x33a56375
- (unsigned)columnSpan:(float)span at:(unsigned)at;	// 0x33a57111
- (unsigned)count;	// 0x33b2bbe9
- (void)dealloc;	// 0x33a58225
- (void)mergeStopArray:(id)array;	// 0x33a563f5
- (float)stopAt:(unsigned)at;	// 0x33a56571
@end

