/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "MCObject.h"

@class NSString;

@interface MCAction : MCObject {
@private
	NSString *mTargetObjectID;	// 12 = 0xc
}
@property(copy) NSString *targetObjectID;	// G=0x343a9a05; S=0x343a9a19; @synthesize=mTargetObjectID
- (id)initWithImprint:(id)imprint andMontage:(id)montage;	// 0x343a98b1
- (void)_copySelfToSnapshot:(id)snapshot;	// 0x343a99d5
- (void)demolish;	// 0x343a9921
- (id)imprint;	// 0x343a9975
// declared property setter: - (void)setTargetObjectID:(id)anId;	// 0x343a9a19
// declared property getter: - (id)targetObjectID;	// 0x343a9a05
@end

