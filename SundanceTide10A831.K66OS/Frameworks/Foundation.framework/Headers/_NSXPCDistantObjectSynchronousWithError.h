/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "_NSXPCDistantObjectWithError.h"


__attribute__((visibility("hidden")))
@interface _NSXPCDistantObjectSynchronousWithError : _NSXPCDistantObjectWithError {
	double _timeout;	// 36 = 0x24
}
@property(assign) double timeout;	// G=0x32661595; S=0x326615c9; @synthesize=_timeout
- (id)_initWithConnection:(id)connection proxyNumber:(unsigned long long)number interface:(id)interface error:(id)error timeout:(double)timeout;	// 0x326614a5
- (void)forwardInvocation:(id)invocation;	// 0x32661505
// declared property setter: - (void)setTimeout:(double)timeout;	// 0x326615c9
// declared property getter: - (double)timeout;	// 0x32661595
@end

