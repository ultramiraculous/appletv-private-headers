/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ToneLibrary.framework/ToneLibrary
 */

#import </libobjc.A.h>

@class NSString;
@protocol OS_dispatch_queue;

@interface TLAlert : NSObject {
	BOOL _shouldOverrideMasterSwitches;	// 4 = 0x4
	int _type;	// 8 = 0x8
	NSString *_toneIdentifier;	// 12 = 0xc
	NSString *_vibrationIdentifier;	// 16 = 0x10
	NSObject<OS_dispatch_queue> *_targetQueue;	// 20 = 0x14
	id _completionHandler;	// 24 = 0x18
}
@property(copy, nonatomic, setter=_setCompletionHandler:) id _completionHandler;	// G=0x32c04229; S=0x32c0423d; @synthesize
@property(assign, nonatomic, setter=_setShouldOverrideMasterSwitches:) BOOL _shouldOverrideMasterSwitches;	// G=0x32c041e9; S=0x32c041f9; @synthesize
@property(retain, nonatomic, setter=_setTargetQueue:) NSObject<OS_dispatch_queue> *_targetQueue;	// G=0x32c04209; S=0x32c04219; @synthesize
@property(copy, nonatomic) NSString *toneIdentifier;	// G=0x32c041a1; @synthesize=_toneIdentifier
@property(assign, nonatomic) int type;	// G=0x32c04181; @synthesize=_type
@property(copy, nonatomic) NSString *vibrationIdentifier;	// G=0x32c041c5; @synthesize=_vibrationIdentifier
+ (void)_playToneAndVibrationForType:(int)type toneIdentifier:(id)identifier vibrationIdentifier:(id)identifier3 shouldOverrideMasterSwitches:(BOOL)switches;	// 0x32c03d65
+ (void)playToneAndVibrationForType:(int)type;	// 0x32c03c75
+ (void)playToneAndVibrationForType:(int)type accountIdentifier:(id)identifier;	// 0x32c03cd9
+ (void)playToneAndVibrationForType:(int)type toneIdentifier:(id)identifier vibrationIdentifier:(id)identifier3;	// 0x32c03d41
- (id)initWithType:(int)type;	// 0x32c03de9
- (id)initWithType:(int)type accountIdentifier:(id)identifier;	// 0x32c03dfd
- (id)initWithType:(int)type toneIdentifier:(id)identifier vibrationIdentifier:(id)identifier3;	// 0x32c03ec5
// declared property getter: - (id)_completionHandler;	// 0x32c04229
// declared property setter: - (void)_setCompletionHandler:(id)handler;	// 0x32c0423d
// declared property setter: - (void)_setShouldOverrideMasterSwitches:(BOOL)_set;	// 0x32c041f9
// declared property setter: - (void)_setTargetQueue:(id)queue;	// 0x32c04219
- (void)_setToneIdentifier:(id)identifier;	// 0x32c041b5
- (void)_setType:(int)type;	// 0x32c04191
- (void)_setVibrationIdentifier:(id)identifier;	// 0x32c041d9
// declared property getter: - (BOOL)_shouldOverrideMasterSwitches;	// 0x32c041e9
// declared property getter: - (id)_targetQueue;	// 0x32c04209
- (void)dealloc;	// 0x32c04085
- (BOOL)playWithCompletionHandler:(id)completionHandler targetQueue:(id)queue;	// 0x32c04105
- (void)stop;	// 0x32c04149
// declared property getter: - (id)toneIdentifier;	// 0x32c041a1
// declared property getter: - (int)type;	// 0x32c04181
// declared property getter: - (id)vibrationIdentifier;	// 0x32c041c5
@end

