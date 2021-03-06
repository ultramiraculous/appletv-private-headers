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
@property(readonly, retain) NSString *debugDumpPath;	// G=0x30e46141; converted property
@property(assign) BOOL sensitiveActionsEnabled;	// G=0x30e46129; S=0x30e46109; converted property
- (id)init;	// 0x30e47015
- (id)initWithModelIdentifier:(id)modelIdentifier;	// 0x30e47be5
- (void)_actionCompleted:(id)completed nextAction:(id)action error:(id)error;	// 0x30e463ed
- (BOOL)_actionStarted:(id)started;	// 0x30e46619
- (id)_beginSpeakingAttributedString:(id)string;	// 0x30e46ccd
- (id)_beginSpeakingString:(id)string attributedString:(id)string2;	// 0x30e4705d
- (CFDictionaryRef)_createKeywordIndex;	// 0x30e475a5
- (id)_createPhaseSortedKeywordsFromArray:(id)array;	// 0x30e47359
- (id)_currentRecognizeAction;	// 0x30e46939
- (void)_init;	// 0x30e46fc1
- (void)_keywordIndexChanged;	// 0x30e46be9
- (id)_keywordsForModelIdentifier:(id)modelIdentifier;	// 0x30e47211
- (void)_notifyDelegateActionStarted;	// 0x30e466b1
- (void)_notifyDelegateFinishedSpeakingWithError:(id)error;	// 0x30e46d19
- (id)_notifyDelegateOpenURL:(id)url;	// 0x30e466ed
- (id)_recognitionResultHandlingThread;	// 0x30e46999
- (void)_setAction:(id)action;	// 0x30e46731
- (id)_topLevelKeywords;	// 0x30e472a1
- (id)beginNextAction;	// 0x30e47859
- (id)beginSpeakingFeedbackString;	// 0x30e4714d
- (id)beginSpeakingString:(id)string;	// 0x30e46c81
- (id)cancel;	// 0x30e463d9
- (id)cancelMaintainingKeepAlive:(BOOL)alive;	// 0x30e47669
- (void)dealloc;	// 0x30e47a99
// converted property getter: - (id)debugDumpPath;	// 0x30e46141
- (id)displayResultString;	// 0x30e46a69
- (id)displayStatusString;	// 0x30e46a89
- (BOOL)hasDeferredAction;	// 0x30e460c1
- (float)inputLevel;	// 0x30e46b01
- (BOOL)isActivelyRecognizing;	// 0x30e462cd
- (BOOL)isBusy;	// 0x30e460d5
- (BOOL)isFinished;	// 0x30e4608d
- (BOOL)isRecognizing;	// 0x30e46295
- (BOOL)isValid;	// 0x30e460a5
- (id)keywordAtIndex:(int)index;	// 0x30e46b81
- (int)keywordCount;	// 0x30e46bad
- (BOOL)nextActionWillRecognize;	// 0x30e46335
- (BOOL)nextActionWillTerminateSession;	// 0x30e46305
- (void)recognitionResultHandlingThread:(id)thread didHandleResults:(id)results nextAction:(id)action;	// 0x30e469f9
- (id)reset;	// 0x30e47781
// converted property getter: - (BOOL)sensitiveActionsEnabled;	// 0x30e46129
- (BOOL)setBluetoothInputAllowed:(BOOL)allowed;	// 0x30e46371
- (BOOL)setDebugDumpEnabled:(BOOL)enabled;	// 0x30e46da9
- (void)setDelegate:(id)delegate;	// 0x30e46171
- (void)setInputLevelUpdateInterval:(double)interval;	// 0x30e46aa9
- (void)setKeywordPhase:(unsigned)phase;	// 0x30e46b3d
- (BOOL)setNextRecognitionAudioInputPath:(id)path;	// 0x30e46e7d
- (BOOL)setNextRecognitionRequiresReset:(BOOL)reset;	// 0x30e46ef1
- (void)setPerformRecognitionHandlerActions:(BOOL)actions;	// 0x30e46151
- (BOOL)setPreferredEngine:(int)engine;	// 0x30e46f5d
// converted property setter: - (void)setSensitiveActionsEnabled:(BOOL)enabled;	// 0x30e46109
- (void)speechSynthesizer:(id)synthesizer didFinishSpeaking:(BOOL)speaking withError:(id)error;	// 0x30e46d59
- (id)spokenFeedbackAttributedString;	// 0x30e46a49
- (id)spokenFeedbackString;	// 0x30e46a29
@end

