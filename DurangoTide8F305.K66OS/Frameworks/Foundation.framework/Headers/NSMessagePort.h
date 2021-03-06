/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "NSPort.h"


@interface NSMessagePort : NSPort {
@private
	void *_port;	// 4 = 0x4
	id _delegate;	// 8 = 0x8
}
@property(assign) id delegate;	// G=0x327b65c9; S=0x327b65b9; converted property
+ (void)_fixNSMessagePortLeak;	// 0x327b65d9
+ (BOOL)sendBeforeTime:(double)time streamData:(id)data components:(id)components to:(id)to from:(id)from msgid:(unsigned)msgid reserved:(unsigned)reserved;	// 0x327b72b5
- (id)init;	// 0x327b6695
- (id)initWithName:(id)name;	// 0x327b7519
- (id)initWithRemoteName:(id)remoteName;	// 0x327b75a1
- (void)dealloc;	// 0x327b6c01
// converted property getter: - (id)delegate;	// 0x327b65c9
- (void)finalize;	// 0x327b69a5
- (void)invalidate;	// 0x327b6f65
- (BOOL)isValid;	// 0x327b6f49
- (id)name;	// 0x327b6fd1
- (oneway void)release;	// 0x327b6c65
- (void)removeFromRunLoop:(id)runLoop forMode:(id)mode;	// 0x327b700d
- (id)retain;	// 0x327b6be5
- (unsigned)retainCount;	// 0x327b6c4d
- (void)scheduleInRunLoop:(id)runLoop forMode:(id)mode;	// 0x327b7055
- (BOOL)sendBeforeDate:(id)date components:(id)components from:(id)from reserved:(unsigned)reserved;	// 0x327b6885
- (BOOL)sendBeforeDate:(id)date msgid:(unsigned)msgid components:(id)components from:(id)from reserved:(unsigned)reserved;	// 0x327b6825
- (BOOL)sendBeforeTime:(double)time streamData:(void *)data components:(id)components from:(id)from msgid:(unsigned)msgid;	// 0x327b68e1
// converted property setter: - (void)setDelegate:(id)delegate;	// 0x327b65b9
- (BOOL)setName:(id)name;	// 0x327b6fe9
@end

