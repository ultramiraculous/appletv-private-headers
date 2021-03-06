/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AccountsDaemon.framework/AccountsDaemon
 */

#import </libobjc.A.h>

@class NSDate, NSString;

@interface ACDTelemetryData : NSObject {
	int _threadPriority;	// 4 = 0x4
	int _taskPriority;	// 8 = 0x8
	NSDate *_date;	// 12 = 0xc
	NSString *_message;	// 16 = 0x10
}
@property(readonly, assign, nonatomic) NSDate *date;	// G=0x2fe81005; @synthesize=_date
@property(readonly, assign, nonatomic) NSString *message;	// G=0x2fe81015; @synthesize=_message
@property(readonly, assign, nonatomic) int taskPriority;	// G=0x2fe80ff5; @synthesize=_taskPriority
@property(readonly, assign, nonatomic) int threadPriority;	// G=0x2fe80fe5; @synthesize=_threadPriority
- (id)init;	// 0x2fe80e11
- (id)initWithMessage:(id)message;	// 0x2fe80e25
- (id)initWithMessageFormat:(id)messageFormat;	// 0x2fe80ee9
- (id)initWithMessageFormat:(id)messageFormat arguments:(void *)arguments;	// 0x2fe80f71
- (void).cxx_destruct;	// 0x2fe81025
// declared property getter: - (id)date;	// 0x2fe81005
// declared property getter: - (id)message;	// 0x2fe81015
// declared property getter: - (int)taskPriority;	// 0x2fe80ff5
// declared property getter: - (int)threadPriority;	// 0x2fe80fe5
@end

