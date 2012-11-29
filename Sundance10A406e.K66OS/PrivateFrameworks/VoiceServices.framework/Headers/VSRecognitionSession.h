/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/VoiceServices.framework/VoiceServices
 */

#import <NSObject.h> // Unknown library
#import "VoiceServices-Structs.h"

@class NSString, VSSpeechSynthesizer, NSArray, VSRecognitionAction;
@protocol VSRecognitionSessionDelegate;

@interface VSRecognitionSession : NSObject {
	NSString *_modelIdentifier;	// 4 = 0x4
	void *_keepAlive;	// 8 = 0x8
	id<VSRecognitionSessionDelegate> _delegate;	// 12 = 0xc
	VSRecognitionAction *_currentAction;	// 16 = 0x10
	NSArray *_topLevelKeywords;	// 20 = 0x14
	id _handlingThread;	// 24 = 0x18
	VSSpeechSynthesizer *_synthesizer;	// 28 = 0x1c
	NSString *_languageID;	// 32 = 0x20
	NSString *_debugDumpPath;	// 36 = 0x24
	NSString *_audioInputPath;	// 40 = 0x28
	double _levelInterval;	// 44 = 0x2c
	unsigned _keywordPhase;	// 52 = 0x34
	struct {
		unsigned delegateWillBegin : 1;
		unsigned delegateBegin : 1;
		unsigned delegateOpenURL : 1;
		unsigned delegateFinishedSpeaking : 1;
		unsigned delegateComplete : 1;
		unsigned debugDumpEnabled : 1;
		unsigned preferredEngine : 2;
		unsigned performHandlerActions : 1;
		unsigned allowSensitiveActions : 1;
		unsigned bluetoothAllowed : 1;
		unsigned resetNextAction : 1;
		unsigned isSpeaking : 1;
		unsigned actionBegan : 1;
		unsigned actionBeginning : 1;
		unsigned actionBeginDeferred : 1;
		unsigned invalid : 1;
		unsigned observeKeywordChange : 1;
	} _sessionFlags;	// 56 = 0x38
}
@property(readonly, retain) NSString *debugDumpPath;	// G=0x3346f961; converted property
@property(assign) BOOL sensitiveActionsEnabled;	// G=0x3346e7e5; S=0x3346e7c1; converted property
- (id)init;	// 0x3346e0b1
- (id)initWithModelIdentifier:(id)modelIdentifier;	// 0x3346e0f5
- (void)_actionCompleted:(id)completed nextAction:(id)action error:(id)error;	// 0x3346e979
- (BOOL)_actionStarted:(id)started;	// 0x3346eb91
- (id)_beginSpeakingAttributedString:(id)string;	// 0x3346f6e5
- (id)_beginSpeakingString:(id)string attributedString:(id)string2;	// 0x3346f735
- (CFDictionaryRef)_createKeywordIndex;	// 0x3346f115
- (id)_createPhaseSortedKeywordsFromArray:(id)array;	// 0x3346f1e1
- (id)_currentRecognizeAction;	// 0x3346ee91
- (void)_init;	// 0x3346e069
- (void)_keywordIndexChanged;	// 0x3346f53d
- (id)_keywordsForModelIdentifier:(id)modelIdentifier;	// 0x3346f4a1
- (void)_notifyDelegateActionStarted;	// 0x3346ec25
- (void)_notifyDelegateFinishedSpeakingWithError:(id)error;	// 0x3346f805
- (id)_notifyDelegateOpenURL:(id)url;	// 0x3346ec5d
- (id)_recognitionResultHandlingThread;	// 0x3346eee5
- (void)_setAction:(id)action;	// 0x3346ec99
- (id)_topLevelKeywords;	// 0x3346f3e9
- (id)beginNextAction;	// 0x3346e3a5
- (id)beginSpeakingFeedbackString;	// 0x3346f5d1
- (id)beginSpeakingString:(id)string;	// 0x3346f695
- (id)cancel;	// 0x3346e965
- (id)cancelMaintainingKeepAlive:(BOOL)alive;	// 0x3346e865
- (void)dealloc;	// 0x3346e15d
// converted property getter: - (id)debugDumpPath;	// 0x3346f961
- (id)displayResultString;	// 0x3346efb9
- (id)displayStatusString;	// 0x3346efd9
- (BOOL)hasDeferredAction;	// 0x3346e715
- (float)inputLevel;	// 0x3346f051
- (BOOL)isActivelyRecognizing;	// 0x3346e6a5
- (BOOL)isBusy;	// 0x3346e729
- (BOOL)isFinished;	// 0x3346e6e1
- (BOOL)isRecognizing;	// 0x3346e669
- (BOOL)isValid;	// 0x3346e6f9
- (id)keywordAtIndex:(int)index;	// 0x3346f0c1
- (int)keywordCount;	// 0x3346f0ed
- (BOOL)nextActionWillRecognize;	// 0x3346e789
- (BOOL)nextActionWillTerminateSession;	// 0x3346e759
- (void)recognitionResultHandlingThread:(id)thread didHandleResults:(id)results nextAction:(id)action;	// 0x3346ef49
- (id)reset;	// 0x3346e591
// converted property getter: - (BOOL)sensitiveActionsEnabled;	// 0x3346e7e5
- (BOOL)setBluetoothInputAllowed:(BOOL)allowed;	// 0x3346e7f9
- (BOOL)setDebugDumpEnabled:(BOOL)enabled;	// 0x3346f889
- (void)setDelegate:(id)delegate;	// 0x3346e2a9
- (void)setInputLevelUpdateInterval:(double)interval;	// 0x3346eff9
- (void)setKeywordPhase:(unsigned)phase;	// 0x3346f081
- (BOOL)setNextRecognitionAudioInputPath:(id)path;	// 0x3346f971
- (BOOL)setNextRecognitionRequiresReset:(BOOL)reset;	// 0x3346f9e1
- (void)setPerformRecognitionHandlerActions:(BOOL)actions;	// 0x3346fab9
- (BOOL)setPreferredEngine:(int)engine;	// 0x3346fa4d
// converted property setter: - (void)setSensitiveActionsEnabled:(BOOL)enabled;	// 0x3346e7c1
- (void)speechSynthesizer:(id)synthesizer didFinishSpeaking:(BOOL)speaking withError:(id)error;	// 0x3346f83d
- (id)spokenFeedbackAttributedString;	// 0x3346ef99
- (id)spokenFeedbackString;	// 0x3346ef79
@end
