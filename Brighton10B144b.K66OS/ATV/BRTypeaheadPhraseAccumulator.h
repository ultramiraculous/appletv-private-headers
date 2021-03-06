/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSObject, NSString, NSTimer;
@protocol BRTypeaheadPhraseAccumulatorChangeHandler;

__attribute__((visibility("hidden")))
@interface BRTypeaheadPhraseAccumulator : XXUnknownSuperclass {
	double _lastAccumulatedCharacterTimestamp;	// 4 = 0x4
	NSObject<BRTypeaheadPhraseAccumulatorChangeHandler> *_phraseChangeHandler;	// 12 = 0xc
	NSString *_currentPhrase;	// 16 = 0x10
	NSTimer *_typeaheadTimer;	// 20 = 0x14
}
@property(retain, nonatomic) NSString *currentPhrase;	// G=0x41015d; S=0x41070d; @synthesize=_currentPhrase
@property(retain, nonatomic) NSObject<BRTypeaheadPhraseAccumulatorChangeHandler> *phraseChangeHandler;	// G=0x4106fd; S=0x410441; @synthesize=_phraseChangeHandler
@property(retain, nonatomic) NSTimer *typeaheadTimer;	// G=0x410735; S=0x410745; @synthesize=_typeaheadTimer
+ (id)sharedInstance;	// 0x41006d
- (id)init;	// 0x4100e9
- (void).cxx_destruct;	// 0x41076d
- (void)_resetTypeaheadTimer;	// 0x4104c5
- (void)_typeaheadTimerFired:(id)fired;	// 0x4104f9
// declared property getter: - (id)currentPhrase;	// 0x41015d
- (BOOL)decodeEvent:(id)event;	// 0x4101f9
- (id)description;	// 0x410469
- (BOOL)notifyChangeHandler;	// 0x410195
// declared property getter: - (id)phraseChangeHandler;	// 0x4106fd
- (BOOL)processAsAccessibilityTypeahead;	// 0x4105b1
- (void)resetAndOptionallyNotifyHandler:(BOOL)handler;	// 0x4103c1
// declared property setter: - (void)setCurrentPhrase:(id)phrase;	// 0x41070d
// declared property setter: - (void)setPhraseChangeHandler:(id)handler;	// 0x410441
// declared property setter: - (void)setTypeaheadTimer:(id)timer;	// 0x410745
// declared property getter: - (id)typeaheadTimer;	// 0x410735
@end

