/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "TCPServer.h"

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface ATVTCPControlReceiver : TCPServer {
	Class connClass;	// 52 = 0x34
	NSMutableArray *_openConnections;	// 56 = 0x38
}
@property(assign) Class connectionClass;	// G=0x238f1d; S=0x238f2d; converted property
- (id)init;	// 0x238d59
- (BOOL)_start;	// 0x2390ed
// converted property getter: - (Class)connectionClass;	// 0x238f1d
- (void)connectionClosed:(id)closed;	// 0x238fcd
- (void)dealloc;	// 0x238ed1
- (void)handleNewConnectionFromAddress:(id)address inputStream:(id)stream outputStream:(id)stream3;	// 0x238f3d
- (void)newBytesReceived:(id)received data:(id)data;	// 0x23907d
// converted property setter: - (void)setConnectionClass:(Class)aClass;	// 0x238f2d
@end
