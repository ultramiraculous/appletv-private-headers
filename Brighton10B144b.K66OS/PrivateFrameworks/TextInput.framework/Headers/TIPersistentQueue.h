/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
 */

#import <NSObject.h> // Unknown library

@class NSURL;

@interface TIPersistentQueue : NSObject {
	NSURL *_presentedItemURL;	// 4 = 0x4
}
- (id)initWithURL:(id)url;	// 0x359b2c95
- (void)dealloc;	// 0x359b2ced
- (void)dequeueObjects:(id)objects;	// 0x359b2fdd
- (void)enqueueObjects:(id)objects;	// 0x359b2e65
- (void)readObjects:(id)objects;	// 0x359b2d39
@end
