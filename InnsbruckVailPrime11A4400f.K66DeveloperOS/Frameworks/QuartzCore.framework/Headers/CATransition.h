/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

#import "QuartzCore-Structs.h"
#import "CAAnimation.h"

@class NSString, NSDictionary;

@interface CATransition : CAAnimation {
}
@property(assign) float endProgress;	// G=0x2f1e4279; S=0x2f290979; 
@property(retain) id filter;	// G=0x2f1e4219; S=0x2f1f00d1; 
@property(copy) NSDictionary *options;	// G=0x2f1e4291; S=0x2f290991; 
@property(assign) float startProgress;	// G=0x2f1e4261; S=0x2f290961; 
@property(copy) NSString *subtype;	// G=0x2f1e4249; S=0x2f1e3f81; 
@property(assign) unsigned transitionFlags;	// G=0x2f1e42a9; S=0x2f1e3f99; 
@property(copy) NSString *type;	// G=0x2f1e4231; S=0x2f1e3f69; 
- (Animation *)_copyRenderAnimationForLayer:(id)layer;	// 0x2f1e3fb9
- (unsigned)_propertyFlagsForLayer:(id)layer;	// 0x2f1e3fb5
- (BOOL)_setCARenderAnimation:(Animation *)animation layer:(id)layer;	// 0x2f1e408d
// declared property getter: - (float)endProgress;	// 0x2f1e4279
// declared property getter: - (id)filter;	// 0x2f1e4219
// declared property getter: - (id)options;	// 0x2f1e4291
// declared property setter: - (void)setEndProgress:(float)progress;	// 0x2f290979
// declared property setter: - (void)setFilter:(id)filter;	// 0x2f1f00d1
// declared property setter: - (void)setOptions:(id)options;	// 0x2f290991
// declared property setter: - (void)setStartProgress:(float)progress;	// 0x2f290961
// declared property setter: - (void)setSubtype:(id)subtype;	// 0x2f1e3f81
// declared property setter: - (void)setTransitionFlags:(unsigned)flags;	// 0x2f1e3f99
// declared property setter: - (void)setType:(id)type;	// 0x2f1e3f69
// declared property getter: - (float)startProgress;	// 0x2f1e4261
// declared property getter: - (id)subtype;	// 0x2f1e4249
// declared property getter: - (unsigned)transitionFlags;	// 0x2f1e42a9
// declared property getter: - (id)type;	// 0x2f1e4231
@end

