/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import <NSObject.h> // Unknown library

@class NSPort, NSMutableArray;

@interface NSPortMessage : NSObject {
@private
	NSPort *localPort;	// 4 = 0x4
	NSPort *remotePort;	// 8 = 0x8
	NSMutableArray *components;	// 12 = 0xc
	unsigned msgid;	// 16 = 0x10
	void *reserved2;	// 20 = 0x14
	void *reserved;	// 24 = 0x18
}
@property(readonly, retain) NSMutableArray *components;	// G=0x336fc19d; converted property
@property(assign) unsigned msgid;	// G=0x336fc17d; S=0x336fc18d; converted property
- (id)initWithReceivePort:(id)receivePort sendPort:(id)port components:(id)components;	// 0x336fc0d1
- (id)initWithSendPort:(id)sendPort receivePort:(id)port components:(id)components;	// 0x336fc079
// converted property getter: - (id)components;	// 0x336fc19d
- (id)copyWithZone:(NSZone *)zone;	// 0x336fc219
- (void)dealloc;	// 0x336fc0e9
// converted property getter: - (unsigned)msgid;	// 0x336fc17d
- (id)receivePort;	// 0x336fc16d
- (BOOL)sendBeforeDate:(id)date;	// 0x336fc1ad
- (id)sendPort;	// 0x336fc15d
// converted property setter: - (void)setMsgid:(unsigned)msgid;	// 0x336fc18d
@end

