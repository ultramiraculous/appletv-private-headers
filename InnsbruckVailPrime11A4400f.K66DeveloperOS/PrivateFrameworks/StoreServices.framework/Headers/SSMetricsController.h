/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import </libobjc.A.h>

@class NSTimer, SSXPCConnection, SSMetricsConfiguration;
@protocol OS_dispatch_queue;

@interface SSMetricsController : NSObject {
	SSXPCConnection *_connection;	// 4 = 0x4
	SSMetricsConfiguration *_configuration;	// 8 = 0x8
	NSObject<OS_dispatch_queue> *_serialQueue;	// 12 = 0xc
	NSObject<OS_dispatch_queue> *_flushSerialQueue;	// 16 = 0x10
	BOOL _flushTimerEnabled;	// 20 = 0x14
	NSTimer *_flushEventsTimer;	// 24 = 0x18
}
@property(readonly, retain) SSMetricsConfiguration *configuration;	// G=0x328039a5; converted property
@property(assign, nonatomic, getter=isFlushTimerEnabled) BOOL flushTimerEnabled;	// G=0x328042b5; S=0x32803979; @synthesize=_flushTimerEnabled
- (id)init;	// 0x32802b9d
- (id)_connection;	// 0x32802db1
- (void)_handleFlushTimer;	// 0x328035b5
- (void)_serialQueueInsertEvents:(id)events withCompletionHandler:(id)completionHandler;	// 0x32802e0d
- (void)_setupFlushTimer;	// 0x328037d9
// converted property getter: - (id)configuration;	// 0x328039a5
- (void)dealloc;	// 0x32802d25
- (void)flushUnreportedEventsWithCompletionHandler:(id)completionHandler;	// 0x328039b5
- (void)insertEvent:(id)event withCompletionHandler:(id)completionHandler;	// 0x32803d0d
- (void)insertEvents:(id)events withCompletionHandler:(id)completionHandler;	// 0x32803d51
- (BOOL)isDisabled;	// 0x32803ce5
// declared property getter: - (BOOL)isFlushTimerEnabled;	// 0x328042b5
- (id)pingURLs;	// 0x32804035
- (id)serialQueue;	// 0x32804055
// declared property setter: - (void)setFlushTimerEnabled:(BOOL)enabled;	// 0x32803979
- (void)setGlobalConfiguration:(id)configuration;	// 0x32804065
- (void)setPageConfiguration:(id)configuration;	// 0x328041ed
@end

