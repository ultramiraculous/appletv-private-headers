/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIDynamicBehavior.h"
#import "UIKit-Structs.h"

@class NSArray, NSMutableDictionary;

@interface UIPushBehavior : UIDynamicBehavior {
	float _angle;	// 28 = 0x1c
	float _magnitude;	// 32 = 0x20
	BOOL _active;	// 36 = 0x24
	int _mode;	// 40 = 0x28
	CGPoint _forceVector;	// 44 = 0x2c
	double _timeInterval;	// 52 = 0x34
	NSMutableDictionary *_targetPoints;	// 60 = 0x3c
	int _i;	// 64 = 0x40
}
@property(assign, nonatomic) BOOL active;	// G=0x2f96a2b5; S=0x2f96a271; 
@property(assign, nonatomic) float angle;	// G=0x2f96a911; S=0x2f96a9bd; 
@property(readonly, assign, nonatomic) NSArray *items;	// G=0x2f96a239; 
@property(assign, nonatomic) float magnitude;	// G=0x2f96a921; S=0x2f96a9f1; 
@property(readonly, assign, nonatomic) int mode;	// G=0x2f96a2c5; 
@property(assign, nonatomic) float xComponent;	// G=0x2f96a931; S=0x2f96a955; 
@property(assign, nonatomic) float yComponent;	// G=0x2f96a941; S=0x2f96a989; 
- (id)init;	// 0x2f96a0ad
- (id)initWithItems:(id)items;	// 0x2f96a1ad
- (id)initWithItems:(id)items mode:(int)mode;	// 0x2f96a115
- (void)_associate;	// 0x2f96a5ad
- (void)_commonInit;	// 0x2f96a039
- (void)_dissociate;	// 0x2f96a69d
- (void)_step;	// 0x2f96aa25
// declared property getter: - (BOOL)active;	// 0x2f96a2b5
- (void)addItem:(id)item;	// 0x2f96a2d5
// declared property getter: - (float)angle;	// 0x2f96a911
- (void)dealloc;	// 0x2f96a05d
- (id)description;	// 0x2f96acc5
// declared property getter: - (id)items;	// 0x2f96a239
// declared property getter: - (float)magnitude;	// 0x2f96a921
// declared property getter: - (int)mode;	// 0x2f96a2c5
- (void)removeItem:(id)item;	// 0x2f96a329
// declared property setter: - (void)setActive:(BOOL)active;	// 0x2f96a271
// declared property setter: - (void)setAngle:(float)angle;	// 0x2f96a9bd
- (void)setAngle:(float)angle magnitude:(float)magnitude;	// 0x2f96a779
// declared property setter: - (void)setMagnitude:(float)magnitude;	// 0x2f96a9f1
- (void)setTargetPoint:(CGPoint)point forItem:(id)item;	// 0x2f96a42d
// declared property setter: - (void)setXComponent:(float)component;	// 0x2f96a955
- (void)setXComponent:(float)component yComponent:(float)component2;	// 0x2f96a845
// declared property setter: - (void)setYComponent:(float)component;	// 0x2f96a989
- (CGPoint)targetPointForItem:(id)item;	// 0x2f96a3c1
// declared property getter: - (float)xComponent;	// 0x2f96a931
// declared property getter: - (float)yComponent;	// 0x2f96a941
@end

