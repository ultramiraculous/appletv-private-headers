/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

#import <NSObject.h> // Unknown library

@class NSString, DKConnection;
@protocol AFDictationDelegate;

@interface AFDictationConnection : NSObject {
	DKConnection *_connection;	// 4 = 0x4
	NSString *_lastUsedLanguage;	// 8 = 0x8
	id<AFDictationDelegate> _delegate;	// 12 = 0xc
	float _averagePower;	// 16 = 0x10
	float _peakPower;	// 20 = 0x14
	BOOL _isCapturingSpeech;	// 24 = 0x18
}
@property(readonly, assign) float averagePower;	// G=0x33fab021; converted property
@property(assign, nonatomic) __weak id<AFDictationDelegate> delegate;	// G=0x33fab0d5; S=0x33fab0f5; @synthesize=_delegate
@property(readonly, assign) float peakPower;	// G=0x33fab031; converted property
+ (BOOL)dictationIsEnabled;	// 0x33faa869
+ (BOOL)dictationIsSupportedForLanguageCode:(id)languageCode error:(id *)error;	// 0x33faa901
+ (void)fetchSupportedLanguageCodes:(id)codes;	// 0x33faaa41
- (void).cxx_destruct;	// 0x33fab109
- (void)_checkAndSetIsCapturingSpeech:(BOOL)speech;	// 0x33fa9bf1
- (void)_clearConnection;	// 0x33faa1cd
- (id)_connection;	// 0x33faa5f5
- (void)_handleMessage:(id)message;	// 0x33faa565
- (void)_msgSpeechLevelUpdate:(id)update;	// 0x33faa29d
- (void)_msgSpeechRecognitionDidFail:(id)_msgSpeechRecognition;	// 0x33faa50d
- (void)_msgSpeechRecognized:(id)recognized;	// 0x33faa421
- (void)_msgSpeechRecordingDidBegin:(id)_msgSpeechRecording;	// 0x33faa28d
- (void)_msgSpeechRecordingDidCancel:(id)_msgSpeechRecording;	// 0x33faa381
- (void)_msgSpeechRecordingDidEnd:(id)_msgSpeechRecording;	// 0x33faa351
- (void)_msgSpeechRecordingDidFail:(id)_msgSpeechRecording;	// 0x33faa3b1
- (void)_msgSpeechRecordingWillBegin:(id)_msgSpeechRecording;	// 0x33faa27d
- (void)_tellSpeechDelegateDidRecognizeSpeechPhrases:(id)_tellSpeechDelegate languageModel:(id)model correctionIdentifier:(id)identifier;	// 0x33fa9e75
- (void)_tellSpeechDelegateRecognitionDidFail:(id)_tellSpeechDelegateRecognition;	// 0x33faa161
- (void)_tellSpeechDelegateRecordingDidBegin;	// 0x33fa9d0d
- (void)_tellSpeechDelegateRecordingDidCancel;	// 0x33fa9db5
- (void)_tellSpeechDelegateRecordingDidEnd;	// 0x33fa9d61
- (void)_tellSpeechDelegateRecordingDidFail:(id)_tellSpeechDelegateRecording;	// 0x33fa9e09
- (void)_tellSpeechDelegateRecordingWillBegin;	// 0x33fa9cb9
- (void)_unhandledMessage:(id)message;	// 0x33faa54d
// converted property getter: - (float)averagePower;	// 0x33fab021
- (void)cancelSpeech;	// 0x33faac81
- (void)dealloc;	// 0x33fa9bb1
// declared property getter: - (id)delegate;	// 0x33fab0d5
- (void)endSession;	// 0x33fab041
// converted property getter: - (float)peakPower;	// 0x33fab031
- (void)preheat;	// 0x33faaac9
- (void)sendSpeechCorrection:(id)correction forIdentifier:(id)identifier;	// 0x33faaf19
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x33fab0f5
- (void)setRecordingAlertRoute:(int)route;	// 0x33faae19
- (void)startDictationWithLanguageCode:(id)languageCode options:(id)options;	// 0x33faac5d
- (void)startDictationWithLanguageCode:(id)languageCode options:(id)options speechOptions:(id)options3;	// 0x33faaacd
- (void)startDictationWithSpeechFileAtURL:(id)url options:(id)options forLanguage:(id)language;	// 0x33fab14d
- (void)stopSpeech;	// 0x33faae05
- (void)stopSpeechWithOptions:(id)options;	// 0x33faad15
@end

