/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <NSObject.h> // Unknown library

@protocol NSISVariableDelegate;

@interface NSISVariable : NSObject {
	int _refCount;	// 4 = 0x4
	id<NSISVariableDelegate> _delegate;	// 8 = 0x8
}
@property(assign) id<NSISVariableDelegate> delegate;	// G=0x31a9b82d; S=0x31a9b841; @synthesize=_delegate
@property(readonly, assign) BOOL shouldBeMinimized;	// G=0x31a9b609; 
@property(readonly, assign) int valueRestriction;	// G=0x31a9b5a5; 
+ (id)variableMarkingConstraint:(id)constraint valueRestriction:(int)restriction shouldBeMinimized:(BOOL)minimized;	// 0x31a9b2c9
+ (id)variableWithDelegate:(id)delegate valueRestriction:(int)restriction shouldBeMinimized:(BOOL)minimized;	// 0x31a9b195
+ (id)variableWithName:(id)name valueRestriction:(int)restriction shouldBeMinimized:(BOOL)minimized;	// 0x31a9b3fd
- (BOOL)_isDeallocating;	// 0x31a9b801
- (BOOL)_tryRetain;	// 0x31a9b7a1
- (float)allowedMagnitudeForIntegralizationAdjustmentOfMarkedConstraint;	// 0x31a9b51d
// declared property getter: - (id)delegate;	// 0x31a9b82d
- (id)description;	// 0x31a9b499
- (id)markedConstraint;	// 0x31a9b66d
- (BOOL)markedConstraintIsEligibleForIntegralizationAdjustment;	// 0x31a9b54d
- (oneway void)release;	// 0x31a9b711
- (id)retain;	// 0x31a9b6d1
- (unsigned)retainCount;	// 0x31a9b78d
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x31a9b841
- (BOOL)shouldBeIntegral;	// 0x31a9b4f1
// declared property getter: - (BOOL)shouldBeMinimized;	// 0x31a9b609
- (BOOL)valueIsUserVisible;	// 0x31a9b579
// declared property getter: - (int)valueRestriction;	// 0x31a9b5a5
@end
