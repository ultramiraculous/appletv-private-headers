/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ToneLibrary.framework/ToneLibrary
 */

#import <NSObject.h> // Unknown library


@interface TLVibrationPattern : NSObject {
	id _propertyListRepresentation;	// 4 = 0x4
	id _complexPatternDescription;	// 8 = 0x8
	double _duration;	// 12 = 0xc
	id _contextObject;	// 20 = 0x14
@private
	id contextObject;	// 24 = 0x18
}
@property(readonly, assign) id _artificiallyRepeatingPropertyListRepresentation;	// G=0x34f30791; 
@property(assign, setter=_setDuration:) double _duration;	// G=0x34f30c6d; S=0x34f30ca1; @synthesize
@property(readonly, assign) double computedDuration;	// G=0x34f308e9; 
@property(retain, nonatomic) id contextObject;	// G=0x34f30cd5; S=0x34f30ce5; @synthesize
@property(readonly, assign, nonatomic) id propertyListRepresentation;	// G=0x34f306d5; 
+ (id)complexVibrationPatternWithDurationsForVibrationsAndPauses:(double)vibrationsAndPauses;	// 0x34f302bd
+ (BOOL)isValidVibrationPatternPropertyListRepresentation:(id)representation;	// 0x34f2fdcd
+ (id)simpleVibrationPatternWithVibrationDuration:(double)vibrationDuration pauseDuration:(double)duration;	// 0x34f30151
- (id)init;	// 0x34f304fd
- (id)initWithPropertyListRepresentation:(id)propertyListRepresentation;	// 0x34f305b1
- (id)initWithPropertyListRepresentation:(id)propertyListRepresentation skipValidation:(BOOL)validation;	// 0x34f305c5
// declared property getter: - (id)_artificiallyRepeatingPropertyListRepresentation;	// 0x34f30791
// declared property getter: - (double)_duration;	// 0x34f30c6d
// declared property setter: - (void)_setDuration:(double)duration;	// 0x34f30ca1
- (void)appendVibrationComponentWithDuration:(double)duration isPause:(BOOL)pause;	// 0x34f30a59
// declared property getter: - (double)computedDuration;	// 0x34f308e9
// declared property getter: - (id)contextObject;	// 0x34f30cd5
- (void)dealloc;	// 0x34f30661
// declared property getter: - (id)propertyListRepresentation;	// 0x34f306d5
// declared property setter: - (void)setContextObject:(id)object;	// 0x34f30ce5
@end

