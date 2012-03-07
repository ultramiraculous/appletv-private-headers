/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */



@protocol MRRenderable
@property(readonly, assign, nonatomic) BOOL isAlphaFriendly;
@property(readonly, assign, nonatomic) BOOL isInfinite;
@property(readonly, assign, nonatomic) BOOL isNative3D;
@property(readonly, assign, nonatomic) BOOL isOpaque;
// declared property getter: - (BOOL)isAlphaFriendly;
// declared property getter: - (BOOL)isInfinite;
// declared property getter: - (BOOL)isNative3D;
// declared property getter: - (BOOL)isOpaque;
- (id)patchworkAtTime:(double)time inContext:(id)context withArguments:(id)arguments;
- (BOOL)prerenderForTime:(double)time inContext:(id)context withArguments:(id)arguments;
- (void)renderAtTime:(double)time inContext:(id)context withArguments:(id)arguments;
- (id)retainedByUserRenderedImageAtTime:(double)time inContext:(id)context withArguments:(id)arguments;
@end

