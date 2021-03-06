/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

#import "VMUHeader.h"

@class NSDate, NSString, NSArray;

@interface VMUFatHeader : VMUHeader {
	NSDate *_timestamp;	// 4 = 0x4
	NSString *_path;	// 8 = 0x8
	NSArray *_fatArchs;	// 12 = 0xc
}
@property(readonly, retain) NSArray *fatArchs;	// G=0x34c93a51; converted property
@property(readonly, retain) NSString *path;	// G=0x34c93a31; converted property
@property(readonly, retain) NSDate *timestamp;	// G=0x34c93a41; converted property
+ (id)fatHeaderWithMemory:(id)memory path:(id)path timestamp:(id)timestamp;	// 0x34c93819
- (id)initWithMemory:(id)memory path:(id)path timestamp:(id)timestamp;	// 0x34c9386d
- (void)dealloc;	// 0x34c93af9
- (id)fatArchMatchingArchitecture:(id)architecture;	// 0x34c93a61
// converted property getter: - (id)fatArchs;	// 0x34c93a51
- (BOOL)isFat;	// 0x34c93a2d
// converted property getter: - (id)path;	// 0x34c93a31
// converted property getter: - (id)timestamp;	// 0x34c93a41
@end

