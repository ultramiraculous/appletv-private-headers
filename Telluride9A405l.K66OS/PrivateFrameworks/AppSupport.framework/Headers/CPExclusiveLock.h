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
@property(retain) NSString *name;	// G=0x36f32b91; S=0x36f32c15; converted property
- (id)init;	// 0x36f32b7d
- (id)initWithName:(id)name;	// 0x36f32e4d
- (void)dealloc;	// 0x36f32bc9
- (void)lock;	// 0x36f32dcd
// converted property getter: - (id)name;	// 0x36f32b91
// converted property setter: - (void)setName:(id)name;	// 0x36f32c15
- (BOOL)tryLock;	// 0x36f32d11
- (void)unlock;	// 0x36f32da1
@end
