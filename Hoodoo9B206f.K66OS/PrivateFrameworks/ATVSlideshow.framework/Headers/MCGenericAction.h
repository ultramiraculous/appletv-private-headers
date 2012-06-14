/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "MCAction.h"

@class NSMutableDictionary, NSDictionary;

@interface MCGenericAction : MCAction {
@private
	NSMutableDictionary *_attributes;	// 12 = 0xc
}
@property(copy) NSDictionary *attributes;	// G=0x30ad2621; S=0x30ad2635; @synthesize=_attributes
+ (id)genericActionForTargetPlugObjectID:(id)targetPlugObjectID withAttributes:(id)attributes;	// 0x30ad2381
- (id)initWithImprint:(id)imprint;	// 0x30ad23f5
- (void)_copySelfToSnapshot:(id)snapshot;	// 0x30ad253d
// declared property getter: - (id)attributes;	// 0x30ad2621
- (void)demolish;	// 0x30ad2489
- (id)imprint;	// 0x30ad24dd
// declared property setter: - (void)setAttributes:(id)attributes;	// 0x30ad2635
@end
