/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppSupport.framework/AppSupport
 */

#import <NSObject.h> // Unknown library
#import "NSLocking.h"

@class NSString;

@interface CPExclusiveLock : NSObject <NSLocking> {
	int _fd;	// 4 = 0x4
	NSString *_name;	// 8 = 0x8
}
@property(retain) NSString *name;	// G=0x34717b91; S=0x34717c15; converted property
- (id)init;	// 0x34717b7d
- (id)initWithName:(id)name;	// 0x34717e4d
- (void)dealloc;	// 0x34717bc9
- (void)lock;	// 0x34717dcd
// converted property getter: - (id)name;	// 0x34717b91
// converted property setter: - (void)setName:(id)name;	// 0x34717c15
- (BOOL)tryLock;	// 0x34717d11
- (void)unlock;	// 0x34717da1
@end
