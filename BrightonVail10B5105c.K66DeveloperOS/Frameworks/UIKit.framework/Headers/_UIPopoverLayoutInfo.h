/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "NSCopying.h"
#import "UIKit-Structs.h"
#import <NSObject.h> // Unknown library


__attribute__((visibility("hidden")))
@interface _UIPopoverLayoutInfo : NSObject <NSCopying> {
	UIEdgeInsets _contentInset;	// 4 = 0x4
	float _arrowHeight;	// 20 = 0x14
	CGSize _preferredContentSize;	// 24 = 0x18
	unsigned _preferredArrowDirections;	// 32 = 0x20
	CGRect _containingFrame;	// 36 = 0x24
	UIEdgeInsets _containingFrameInsets;	// 52 = 0x34
	CGRect _targetRect;	// 68 = 0x44
	BOOL _constrainToTargetRect;	// 84 = 0x54
	CGRect _frame;	// 88 = 0x58
	float _offset;	// 104 = 0x68
	unsigned _arrowDirection;	// 108 = 0x6c
	BOOL _updatesEnabled;	// 112 = 0x70
	BOOL _preferLandscapeOrientations;	// 113 = 0x71
}
@property(readonly, assign, nonatomic) unsigned arrowDirection;	// G=0x348c2429; @synthesize=_arrowDirection
@property(assign, nonatomic) float arrowHeight;	// G=0x348c2289; S=0x348c2299; @synthesize=_arrowHeight
@property(assign, nonatomic) BOOL constrainToTargetRect;	// G=0x348c23b5; S=0x348c23c5; @synthesize=_constrainToTargetRect
@property(assign, nonatomic) CGRect containingFrame;	// G=0x348c22f5; S=0x348c2319; @synthesize=_containingFrame
@property(assign, nonatomic) UIEdgeInsets containingFrameInsets;	// G=0x348c2335; S=0x348c2359; @synthesize=_containingFrameInsets
@property(assign, nonatomic) UIEdgeInsets contentInset;	// G=0x348c2249; S=0x348c226d; @synthesize=_contentInset
@property(readonly, assign, nonatomic) CGRect frame;	// G=0x348c23f5; @synthesize=_frame
@property(readonly, assign, nonatomic) float offset;	// G=0x348c2419; @synthesize=_offset
@property(assign, nonatomic) BOOL preferLandscapeOrientations;	// G=0x348c23d5; S=0x348c23e5; @synthesize=_preferLandscapeOrientations
@property(assign, nonatomic) unsigned preferredArrowDirections;	// G=0x348c22d5; S=0x348c22e5; @synthesize=_preferredArrowDirections
@property(assign, nonatomic) CGSize preferredContentSize;	// G=0x348c22a9; S=0x348c22c1; @synthesize=_preferredContentSize
@property(assign, nonatomic) CGRect targetRect;	// G=0x348c2375; S=0x348c2399; @synthesize=_targetRect
@property(assign, nonatomic, getter=_updatesEnabled, setter=_setUpdatesEnabled:) BOOL updatesEnabled;	// G=0x348c2439; S=0x348c2449; @synthesize=_updatesEnabled
+ (id)_observationKeys;	// 0x348c0f39
- (id)init;	// 0x348c0fd5
- (CGSize)_popoverViewSizeForContentSize:(CGSize)contentSize arrowDirection:(unsigned)direction;	// 0x348c161d
// declared property setter: - (void)_setUpdatesEnabled:(BOOL)enabled;	// 0x348c2449
- (void)_updateOutputs;	// 0x348c1839
// declared property getter: - (BOOL)_updatesEnabled;	// 0x348c2439
// declared property getter: - (unsigned)arrowDirection;	// 0x348c2429
// declared property getter: - (float)arrowHeight;	// 0x348c2289
// declared property getter: - (BOOL)constrainToTargetRect;	// 0x348c23b5
// declared property getter: - (CGRect)containingFrame;	// 0x348c22f5
// declared property getter: - (UIEdgeInsets)containingFrameInsets;	// 0x348c2335
// declared property getter: - (UIEdgeInsets)contentInset;	// 0x348c2249
- (id)copyWithZone:(NSZone *)zone;	// 0x348c112d
- (void)dealloc;	// 0x348c1301
- (id)description;	// 0x348c13fd
// declared property getter: - (CGRect)frame;	// 0x348c23f5
- (void)observeValueForKeyPath:(id)keyPath ofObject:(id)object change:(id)change context:(void *)context;	// 0x348c2225
// declared property getter: - (float)offset;	// 0x348c2419
// declared property getter: - (BOOL)preferLandscapeOrientations;	// 0x348c23d5
// declared property getter: - (unsigned)preferredArrowDirections;	// 0x348c22d5
// declared property getter: - (CGSize)preferredContentSize;	// 0x348c22a9
// declared property setter: - (void)setArrowHeight:(float)height;	// 0x348c2299
// declared property setter: - (void)setConstrainToTargetRect:(BOOL)targetRect;	// 0x348c23c5
// declared property setter: - (void)setContainingFrame:(CGRect)frame;	// 0x348c2319
// declared property setter: - (void)setContainingFrameInsets:(UIEdgeInsets)insets;	// 0x348c2359
// declared property setter: - (void)setContentInset:(UIEdgeInsets)inset;	// 0x348c226d
// declared property setter: - (void)setPreferLandscapeOrientations:(BOOL)orientations;	// 0x348c23e5
// declared property setter: - (void)setPreferredArrowDirections:(unsigned)directions;	// 0x348c22e5
// declared property setter: - (void)setPreferredContentSize:(CGSize)size;	// 0x348c22c1
// declared property setter: - (void)setTargetRect:(CGRect)rect;	// 0x348c2399
// declared property getter: - (CGRect)targetRect;	// 0x348c2375
@end

