/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSDate;

__attribute__((visibility("hidden")))
@interface RUIYTListCacheItem : XXUnknownSuperclass {
	NSDate *_creationDate;	// 4 = 0x4
	id _results;	// 8 = 0x8
	double _timeInterval;	// 12 = 0xc
}
@property(retain) id results;	// G=0x234381; S=0x234395; @synthesize=_results
@property(assign) double timeInterval;	// G=0x2343a5; S=0x2343d9; @synthesize=_timeInterval
- (id)init;	// 0x234265
- (void).cxx_destruct;	// 0x23440d
- (BOOL)hasExpired;	// 0x2342d9
// declared property getter: - (id)results;	// 0x234381
// declared property setter: - (void)setResults:(id)results;	// 0x234395
// declared property setter: - (void)setTimeInterval:(double)interval;	// 0x2343d9
// declared property getter: - (double)timeInterval;	// 0x2343a5
@end

