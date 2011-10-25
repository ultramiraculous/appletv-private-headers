/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import "ATVJSObject.h"
#import <NSObject.h> // Unknown library


__attribute__((visibility("hidden")))
@interface ATVJSCallback : NSObject <ATVJSObject> {
@private
	dispatch_queue_s *_callbackQueue;	// 4 = 0x4
	id _successBlock;	// 8 = 0x8
	unsigned _successArgCount;	// 12 = 0xc
	id _failureBlock;	// 16 = 0x10
	OpaqueJSValue *_jsObjectRef;	// 20 = 0x14
}
@property(readonly, assign, nonatomic) OpaqueJSValue *jsObjectRef;	// G=0x33a2ab0d; @synthesize=_jsObjectRef
- (id)initWithContext:(OpaqueJSContext *)context callbackQueue:(dispatch_queue_s *)queue successBlock:(id)block successArgCount:(unsigned)count failureBlock:(id)block5;	// 0x33a2a7ad
- (void)_callbackFailure:(id)failure;	// 0x33a2aa5d
- (void)_callbackSuccess:(id)success context:(OpaqueJSContext *)context exception:(const OpaqueJSValue **)exception;	// 0x33a2a96d
- (void)dealloc;	// 0x33a2a8f9
// declared property getter: - (OpaqueJSValue *)jsObjectRef;	// 0x33a2ab0d
@end

