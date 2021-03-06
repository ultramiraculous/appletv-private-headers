/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ToneLibrary.framework/ToneLibrary
 */

#import <NSObject.h> // Unknown library

@class NSDictionary;
@protocol OS_dispatch_queue;

@interface TLAlert : NSObject {
	int _type;	// 4 = 0x4
	unsigned long _soundID;	// 8 = 0x8
	NSDictionary *_vibrationPattern;	// 12 = 0xc
	NSObject<OS_dispatch_queue> *_targetQueue;	// 16 = 0x10
	id _completionHandler;	// 20 = 0x14
}
@property(copy, nonatomic) id completionHandler;	// G=0x32462611; S=0x32462625; @synthesize=_completionHandler
@property(readonly, assign, nonatomic, getter=isPlaying) BOOL playing;	// G=0x324624d9; 
@property(assign, nonatomic) unsigned long soundID;	// G=0x324625ad; S=0x324625bd; @synthesize=_soundID
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *targetQueue;	// G=0x324625f1; S=0x32462601; @synthesize=_targetQueue
@property(assign, nonatomic) int type;	// G=0x3246258d; S=0x3246259d; @synthesize=_type
@property(copy, nonatomic) NSDictionary *vibrationPattern;	// G=0x324625cd; S=0x324625e1; @synthesize=_vibrationPattern
+ (void)playToneAndVibrationForType:(int)type;	// 0x3246201d
+ (void)playToneAndVibrationForType:(int)type accountIdentifier:(id)identifier;	// 0x32462081
+ (void)playToneAndVibrationForType:(int)type toneIdentifier:(id)identifier vibrationIdentifier:(id)identifier3;	// 0x324620e9
- (id)initWithType:(int)type;	// 0x32462159
- (id)initWithType:(int)type accountIdentifier:(id)identifier;	// 0x3246216d
- (id)initWithType:(int)type toneIdentifier:(id)identifier vibrationIdentifier:(id)identifier3;	// 0x32462205
// declared property getter: - (id)completionHandler;	// 0x32462611
- (void)dealloc;	// 0x32462429
// declared property getter: - (BOOL)isPlaying;	// 0x324624d9
- (BOOL)playWithCompletionHandler:(id)completionHandler targetQueue:(id)queue;	// 0x32462511
// declared property setter: - (void)setCompletionHandler:(id)handler;	// 0x32462625
// declared property setter: - (void)setSoundID:(unsigned long)anId;	// 0x324625bd
// declared property setter: - (void)setTargetQueue:(id)queue;	// 0x32462601
// declared property setter: - (void)setType:(int)type;	// 0x3246259d
// declared property setter: - (void)setVibrationPattern:(id)pattern;	// 0x324625e1
- (unsigned long)soundBehavior;	// 0x32462495
// declared property getter: - (unsigned long)soundID;	// 0x324625ad
- (void)stop;	// 0x32462555
// declared property getter: - (id)targetQueue;	// 0x324625f1
// declared property getter: - (int)type;	// 0x3246258d
// declared property getter: - (id)vibrationPattern;	// 0x324625cd
@end

