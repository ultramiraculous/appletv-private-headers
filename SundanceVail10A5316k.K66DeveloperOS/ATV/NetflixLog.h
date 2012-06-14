/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "NetflixNrdObject.h"
#import "NetflixNrdObjectProtocol.h"

@class NSArray;

@interface NetflixLog : NetflixNrdObject <NetflixNrdObjectProtocol> {
}
@property(copy) NSArray *traceAreas;	// G=0x455cc1; S=0x455d65; 
+ (id)sharedInstance;	// 0x455bb5
- (id)init;	// 0x455c95
- (void)debug:(id)debug;	// 0x455de1
- (void)error:(id)error;	// 0x455e09
- (void)fatal:(id)fatal;	// 0x455e1d
- (BOOL)handleEvent:(id)event;	// 0x455ea1
- (void)info:(id)info;	// 0x455df5
- (void)log:(unsigned)log message:(id)message;	// 0x455db5
// declared property setter: - (void)setTraceAreas:(id)areas;	// 0x455d65
- (void)trace:(id)trace;	// 0x455e31
// declared property getter: - (id)traceAreas;	// 0x455cc1
@end

