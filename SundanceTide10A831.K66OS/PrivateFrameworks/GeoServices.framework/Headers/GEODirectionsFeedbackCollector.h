/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h> // Unknown library

@class NSMutableSet, GEODirectionsFeedback, GEODirectionsFeedbackCollection;

@interface GEODirectionsFeedbackCollector : NSObject {
	GEODirectionsFeedback *_currentDirectionsFeedback;	// 4 = 0x4
	GEODirectionsFeedbackCollection *_currentFeedbackCollection;	// 8 = 0x8
	NSMutableSet *_routeIDs;	// 12 = 0xc
}
@property(retain, nonatomic) GEODirectionsFeedback *currentDirectionsFeedback;	// G=0x3029e585; S=0x3029e595; @synthesize=_currentDirectionsFeedback
@property(retain, nonatomic) GEODirectionsFeedbackCollection *currentFeedbackCollection;	// G=0x3029e565; S=0x3029e575; @synthesize=_currentFeedbackCollection
@property(retain, nonatomic) NSMutableSet *routeIDs;	// G=0x3029e5a5; S=0x3029e5b5; @synthesize=_routeIDs
- (void)addRouteID:(id)anId stepID:(unsigned)anId2;	// 0x3029e415
// declared property getter: - (id)currentDirectionsFeedback;	// 0x3029e585
// declared property getter: - (id)currentFeedbackCollection;	// 0x3029e565
- (void)dealloc;	// 0x3029e215
- (void)endFeedbackSession;	// 0x3029e4ed
- (void)reset;	// 0x3029e255
// declared property getter: - (id)routeIDs;	// 0x3029e5a5
// declared property setter: - (void)setCurrentDirectionsFeedback:(id)feedback;	// 0x3029e595
// declared property setter: - (void)setCurrentFeedbackCollection:(id)collection;	// 0x3029e575
// declared property setter: - (void)setRouteIDs:(id)ids;	// 0x3029e5b5
- (void)startFeedbackSessionForResponseID:(id)responseID;	// 0x3029e2c1
@end

