/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h> // Unknown library


__attribute__((visibility("hidden")))
@interface GEOThrottleState : NSObject {
@private
	unsigned _requestCount;	// 4 = 0x4
@protected
	double _lastResetTime;	// 8 = 0x8
}
@property(assign, nonatomic) double lastResetTime;	// G=0x37a02ec1; S=0x37a02ee9; @synthesize=_lastResetTime
@property(assign, nonatomic) unsigned requestCount;	// G=0x37a02efd; S=0x37a02ed9; @synthesize=_requestCount
// declared property getter: - (double)lastResetTime;	// 0x37a02ec1
// declared property getter: - (unsigned)requestCount;	// 0x37a02efd
// declared property setter: - (void)setLastResetTime:(double)time;	// 0x37a02ee9
// declared property setter: - (void)setRequestCount:(unsigned)count;	// 0x37a02ed9
@end

