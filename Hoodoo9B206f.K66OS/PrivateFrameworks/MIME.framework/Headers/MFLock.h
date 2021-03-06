/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MIME.framework/MIME
 */

#import <NSLock.h> // Unknown library
#import "MFLockObject.h"

@class NSString;

@interface MFLock : NSLock <MFLockObject> {
	NSString *_name;	// 8 = 0x8
	id _delegate;	// 12 = 0xc
}
+ (void)initialize;	// 0x35e6d46d
- (id)init;	// 0x35e6bfc9
- (id)initWithName:(id)name andDelegate:(id)delegate;	// 0x35e6d405
- (void)dealloc;	// 0x35e6d485
- (id)description;	// 0x35e6d4d1
- (BOOL)isLockedByMe;	// 0x35e6ccc5
- (void)lock;	// 0x35e6d675
- (BOOL)lockBeforeDate:(id)date;	// 0x35e6d5a9
- (BOOL)tryLock;	// 0x35e6d611
- (void)unlock;	// 0x35e6d575
@end

