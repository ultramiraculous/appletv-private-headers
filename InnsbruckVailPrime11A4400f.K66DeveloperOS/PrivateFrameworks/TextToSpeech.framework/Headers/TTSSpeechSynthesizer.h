/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/TextToSpeech.framework/TextToSpeech
 */

#import "TextToSpeech-Structs.h"
#import </libobjc.A.h>
#import "TTSSpeechConnectionDelegate.h"

@class NSString, TTSSpeechConnection;
@protocol TTSSpeechSynthesizerDelegate, OS_dispatch_queue;

@interface TTSSpeechSynthesizer : NSObject <TTSSpeechConnectionDelegate> {
	int _footprint;	// 4 = 0x4
	BOOL _useCustomVoice;	// 8 = 0x8
	int _gender;	// 12 = 0xc
	BOOL _useSharedSession;	// 16 = 0x10
	BOOL _audioSessionIDIsValid;	// 17 = 0x11
	unsigned _audioSessionID;	// 20 = 0x14
	unsigned _audioQueueFlags;	// 24 = 0x18
	NSObject<OS_dispatch_queue> *_queue;	// 28 = 0x1c
	TTSSpeechConnection *_speechConnection;	// 32 = 0x20
	struct {
		unsigned delegateStartWithRequest : 1;
		unsigned delegateFinishWithRequest : 1;
		unsigned delegateFinishWithPhonemesSpokenWithRequest : 1;
		unsigned delegatePauseWithRequest : 1;
		unsigned delegateContinueWithRequest : 1;
		unsigned delegateWillSpeakWithRequest : 1;
		unsigned willUseInput : 1;
	} _synthesizerFlags;	// 36 = 0x24
	id<TTSSpeechSynthesizerDelegate> _delegate;	// 40 = 0x28
	float _rate;	// 44 = 0x2c
	float _pitch;	// 48 = 0x30
	float _volume;	// 52 = 0x34
	NSString *_voice;	// 56 = 0x38
}
@property(assign, nonatomic) __weak id<TTSSpeechSynthesizerDelegate> delegate;	// G=0x32a36b99; S=0x32a356d9; @synthesize=_delegate
@property(assign) int footprint;	// G=0x32a35e31; S=0x32a35e21; converted property
@property(assign) int gender;	// G=0x32a35e71; S=0x32a35e61; converted property
@property(assign, nonatomic) float pitch;	// G=0x32a36bd9; S=0x32a36be9; @synthesize=_pitch
@property(assign, nonatomic) float rate;	// G=0x32a36bb9; S=0x32a36bc9; @synthesize=_rate
@property(assign) BOOL useCustomVoice;	// G=0x32a35e51; S=0x32a35e41; converted property
@property(retain, nonatomic) NSString *voice;	// G=0x32a35d89; S=0x32a36c19; @synthesize=_voice
@property(assign, nonatomic) float volume;	// G=0x32a36bf9; S=0x32a36c09; @synthesize=_volume
+ (id)availableFootprintsForVoice:(id)voice languageCode:(id)code;	// 0x32a34c5d
+ (id)availableLanguageCodes;	// 0x32a34c4d
+ (id)availableVoices;	// 0x32a34bc5
+ (id)availableVoicesForLanguageCode:(id)languageCode;	// 0x32a34bd9
+ (BOOL)isSystemSpeaking;	// 0x32a34ce9
- (id)init;	// 0x32a34d39
- (void).cxx_destruct;	// 0x32a36c41
- (BOOL)_continueSpeakingRequest:(id)request withError:(id *)error;	// 0x32a35625
- (BOOL)_pauseSpeakingRequest:(id)request atNextBoundary:(int)nextBoundary synchronously:(BOOL)synchronously error:(id *)error;	// 0x32a3555d
- (void)_setDelegate:(id)delegate;	// 0x32a34e69
- (BOOL)_startSpeakingString:(id)string orAttributedString:(id)string2 toURL:(id)url withLanguageCode:(id)languageCode request:(id *)request error:(id *)error;	// 0x32a34f9d
- (BOOL)_stopSpeakingRequest:(id)request atNextBoundary:(int)nextBoundary synchronously:(BOOL)synchronously error:(id *)error;	// 0x32a35495
- (void)connection:(id)connection speechRequest:(id)request didStopAtEnd:(BOOL)end phonemesSpoken:(id)spoken error:(id)error;	// 0x32a365ed
- (void)connection:(id)connection speechRequest:(id)request willSpeakMark:(int)mark inRange:(NSRange)range;	// 0x32a3698d
- (void)connection:(id)connection speechRequestDidContinue:(id)speechRequest;	// 0x32a36409
- (void)connection:(id)connection speechRequestDidPause:(id)speechRequest;	// 0x32a36225
- (void)connection:(id)connection speechRequestDidStart:(id)speechRequest;	// 0x32a36041
- (BOOL)continueSpeakingRequest:(id)request withError:(id *)error;	// 0x32a36029
- (BOOL)continueSpeakingWithError:(id *)error;	// 0x32a35b09
- (void)dealloc;	// 0x32a34e1d
// declared property getter: - (id)delegate;	// 0x32a36b99
// converted property getter: - (int)footprint;	// 0x32a35e31
// converted property getter: - (int)gender;	// 0x32a35e71
- (BOOL)isSpeaking;	// 0x32a35be9
- (float)maximumRate;	// 0x32a35d81
- (float)minimumRate;	// 0x32a35d79
- (BOOL)pauseSpeakingAtNextBoundary:(int)nextBoundary error:(id *)error;	// 0x32a359d5
- (BOOL)pauseSpeakingAtNextBoundary:(int)nextBoundary synchronously:(BOOL)synchronously error:(id *)error;	// 0x32a359f5
- (BOOL)pauseSpeakingRequest:(id)request atNextBoundary:(int)nextBoundary error:(id *)error;	// 0x32a35fd5
- (BOOL)pauseSpeakingRequest:(id)request atNextBoundary:(int)nextBoundary synchronously:(BOOL)synchronously error:(id *)error;	// 0x32a36005
// declared property getter: - (float)pitch;	// 0x32a36bd9
// declared property getter: - (float)rate;	// 0x32a36bb9
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x32a356d9
// converted property setter: - (void)setFootprint:(int)footprint;	// 0x32a35e21
// converted property setter: - (void)setGender:(int)gender;	// 0x32a35e61
// declared property setter: - (void)setPitch:(float)pitch;	// 0x32a36be9
// declared property setter: - (void)setRate:(float)rate;	// 0x32a36bc9
// converted property setter: - (void)setUseCustomVoice:(BOOL)voice;	// 0x32a35e41
// declared property setter: - (void)setVoice:(id)voice;	// 0x32a36c19
// declared property setter: - (void)setVolume:(float)volume;	// 0x32a36c09
- (id)speechString;	// 0x32a35cd1
- (BOOL)startSpeakingAttributedString:(id)string toURL:(id)url withLanguageCode:(id)languageCode error:(id *)error;	// 0x32a34dc9
- (BOOL)startSpeakingString:(id)string error:(id *)error;	// 0x32a357a1
- (BOOL)startSpeakingString:(id)string request:(id *)request error:(id *)error;	// 0x32a35ec5
- (BOOL)startSpeakingString:(id)string toURL:(id)url error:(id *)error;	// 0x32a357c5
- (BOOL)startSpeakingString:(id)string toURL:(id)url request:(id *)request error:(id *)error;	// 0x32a35ef9
- (BOOL)startSpeakingString:(id)string toURL:(id)url withLanguageCode:(id)languageCode error:(id *)error;	// 0x32a3584d
- (BOOL)startSpeakingString:(id)string withLanguageCode:(id)languageCode error:(id *)error;	// 0x32a35805
- (BOOL)startSpeakingString:(id)string withLanguageCode:(id)languageCode request:(id *)request error:(id *)error;	// 0x32a35f3d
- (BOOL)stopSpeakingAtNextBoundary:(int)nextBoundary error:(id *)error;	// 0x32a358a1
- (BOOL)stopSpeakingAtNextBoundary:(int)nextBoundary synchronously:(BOOL)synchronously error:(id *)error;	// 0x32a358c1
- (BOOL)stopSpeakingRequest:(id)request atNextBoundary:(int)nextBoundary error:(id *)error;	// 0x32a35f81
- (BOOL)stopSpeakingRequest:(id)request atNextBoundary:(int)nextBoundary synchronously:(BOOL)synchronously error:(id *)error;	// 0x32a35fb1
- (void)useAudioQueueFlags:(unsigned)flags;	// 0x32a35eb5
// converted property getter: - (BOOL)useCustomVoice;	// 0x32a35e51
- (void)useSharedAudioSession:(BOOL)session;	// 0x32a35e81
- (void)useSpecificAudioSession:(unsigned)session;	// 0x32a35e91
// declared property getter: - (id)voice;	// 0x32a35d89
// declared property getter: - (float)volume;	// 0x32a36bf9
@end

