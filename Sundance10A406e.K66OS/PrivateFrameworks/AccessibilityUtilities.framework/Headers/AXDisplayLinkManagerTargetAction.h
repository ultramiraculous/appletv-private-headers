/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
 */

#import <NSObject.h> // Unknown library


@interface AXDisplayLinkManagerTargetAction : NSObject {
	id _target;	// 4 = 0x4
	SEL _actionSelector;	// 8 = 0x8
	int _frameInterval;	// 12 = 0xc
	int _displayDidRefreshCount;	// 16 = 0x10
}
@property(assign, nonatomic, setter=_setActionSelector:) SEL _actionSelector;	// G=0x326c5305; S=0x326c5315; @synthesize
@property(assign, nonatomic, setter=_setDisplayDidRefreshCount:) int _displayDidRefreshCount;	// G=0x326c5345; S=0x326c5355; @synthesize
@property(assign, nonatomic, setter=_setFrameInterval:) int _frameInterval;	// G=0x326c5325; S=0x326c5335; @synthesize
@property(retain, nonatomic, setter=_setTarget:) id _target;	// G=0x326c52e5; S=0x326c52f5; @synthesize
- (id)initWithTarget:(id)target actionSelector:(SEL)selector;	// 0x326c5079
- (id)initWithTarget:(id)target actionSelector:(SEL)selector frameInterval:(int)interval;	// 0x326c509d
// declared property getter: - (SEL)_actionSelector;	// 0x326c5305
// declared property getter: - (int)_displayDidRefreshCount;	// 0x326c5345
// declared property getter: - (int)_frameInterval;	// 0x326c5325
// declared property setter: - (void)_setActionSelector:(SEL)selector;	// 0x326c5315
// declared property setter: - (void)_setDisplayDidRefreshCount:(int)_setDisplay;	// 0x326c5355
// declared property setter: - (void)_setFrameInterval:(int)interval;	// 0x326c5335
// declared property setter: - (void)_setTarget:(id)target;	// 0x326c52f5
// declared property getter: - (id)_target;	// 0x326c52e5
- (void)dealloc;	// 0x326c511d
- (void)displayDidRefresh:(id)display;	// 0x326c5265
- (unsigned)hash;	// 0x326c520d
- (BOOL)isEqual:(id)equal;	// 0x326c5161
@end
