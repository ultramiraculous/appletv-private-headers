/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "MCObject.h"

@class MCPlug;

@interface MCPlugProxy : MCObject {
	MCPlug *_plug;	// 12 = 0xc
}
@property(retain) MCPlug *plug;	// G=0x2fcd5e31; S=0x2fcd5e45; @synthesize=_plug
- (void)_copySelfToSnapshot:(id)snapshot;	// 0x2fcd5e09
- (void)dealloc;	// 0x2fcd5d2d
- (id)forwardingTargetForSelector:(SEL)selector;	// 0x2fcd5d7d
- (BOOL)isKindOfClass:(Class)aClass;	// 0x2fcd5d8d
// declared property getter: - (id)plug;	// 0x2fcd5e31
- (void)setContainer:(id)container;	// 0x2fcd5e05
// declared property setter: - (void)setPlug:(id)plug;	// 0x2fcd5e45
- (int)zIndex;	// 0x2fcd5de5
@end
