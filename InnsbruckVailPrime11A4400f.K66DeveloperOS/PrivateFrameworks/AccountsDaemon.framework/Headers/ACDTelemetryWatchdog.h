/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AccountsDaemon.framework/AccountsDaemon
 */

#import </libobjc.A.h>

@class NSLock, NSMutableArray;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface ACDTelemetryWatchdog : NSObject {
	NSLock *_lock;	// 4 = 0x4
	BOOL _fired;	// 8 = 0x8
	NSMutableArray *_telemetry;	// 12 = 0xc
	NSObject<OS_dispatch_queue> *_timerQueue;	// 16 = 0x10
	NSObject<OS_dispatch_source> *_timerSource;	// 20 = 0x14
}
- (id)initWithTimeout:(double)timeout;	// 0x2fe80439
- (void).cxx_destruct;	// 0x2fe80db5
- (void)_dumpTelemetryData;	// 0x2fe80ab1
- (void)dealloc;	// 0x2fe807fd
- (void)logWithLevel:(int)level format:(id)format;	// 0x2fe8085d
- (void)recordCurrentState;	// 0x2fe809c9
@end
