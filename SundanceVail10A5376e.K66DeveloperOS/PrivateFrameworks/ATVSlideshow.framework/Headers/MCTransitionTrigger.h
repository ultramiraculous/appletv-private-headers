/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "MCAction.h"

@class NSString, NSDictionary, NSMutableDictionary;

@interface MCTransitionTrigger : MCAction {
	NSMutableDictionary *_transitionAttributes;	// 12 = 0xc
	NSString *_transitionID;	// 16 = 0x10
	double _transitionDuration;	// 20 = 0x14
	NSString *_transitionDestinationPlugID;	// 28 = 0x1c
}
@property(copy, nonatomic) NSDictionary *transitionAttributes;	// G=0x362fadcd; S=0x362fade1; @synthesize=_transitionAttributes
@property(copy) NSString *transitionDestinationPlugID;	// G=0x362fadf1; S=0x362fae05; @synthesize=_transitionDestinationPlugID
@property(assign, nonatomic) double transitionDuration;	// G=0x362fadb5; S=0x362fab69; @synthesize=_transitionDuration
@property(copy) NSString *transitionID;	// G=0x362fad91; S=0x362fada5; @synthesize=_transitionID
+ (id)transitionForTargetPlugObjectID:(id)targetPlugObjectID withTransitionID:(id)transitionID;	// 0x362fa809
- (id)initWithImprint:(id)imprint;	// 0x362fa881
- (void)_copySelfToSnapshot:(id)snapshot;	// 0x362fab7d
- (void)demolish;	// 0x362fa9c9
- (id)description;	// 0x362facf5
- (id)imprint;	// 0x362faa59
// declared property setter: - (void)setTransitionAttributes:(id)attributes;	// 0x362fade1
// declared property setter: - (void)setTransitionDestinationPlugID:(id)anId;	// 0x362fae05
// declared property setter: - (void)setTransitionDuration:(double)duration;	// 0x362fab69
// declared property setter: - (void)setTransitionID:(id)anId;	// 0x362fada5
// declared property getter: - (id)transitionAttributes;	// 0x362fadcd
// declared property getter: - (id)transitionDestinationPlugID;	// 0x362fadf1
// declared property getter: - (double)transitionDuration;	// 0x362fadb5
// declared property getter: - (id)transitionID;	// 0x362fad91
@end
