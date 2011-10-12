/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "NSLocking.h"
#import "Foundation-Structs.h"
#import <NSObject.h> // Unknown library


@interface NSCondition : NSObject <NSLocking> {
@private
	void *_priv;	// 4 = 0x4
}
@property(retain) id name;	// G=0x30681dc9; S=0x30681d8d; converted property
+ (id)allocWithZone:(NSZone *)zone;	// 0x30607575
- (id)init;	// 0x3060757d
- (void)broadcast;	// 0x30607cdd
- (void)dealloc;	// 0x30629fb1
- (id)description;	// 0x30681cc5
- (void)finalize;	// 0x30681c21
- (void)lock;	// 0x306075dd
// converted property getter: - (id)name;	// 0x30681dc9
// converted property setter: - (void)setName:(id)name;	// 0x30681d8d
- (void)signal;	// 0x3062a06d
- (void)unlock;	// 0x30607cf1
- (void)wait;	// 0x30607c0d
- (BOOL)waitUntilDate:(id)date;	// 0x3062a1d5
@end

