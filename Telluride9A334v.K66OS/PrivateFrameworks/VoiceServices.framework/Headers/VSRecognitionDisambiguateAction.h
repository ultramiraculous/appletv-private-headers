/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/VoiceServices.framework/VoiceServices
 */

#import "VoiceServices-Structs.h"
#import "VSRecognitionRecognizeAction.h"

@class NSString, NSMutableDictionary;

@interface VSRecognitionDisambiguateAction : VSRecognitionRecognizeAction {
	NSString *_repeatedSpokenFeedbackString;	// 60 = 0x3c
	NSString *_sequenceTag;	// 64 = 0x40
	NSMutableDictionary *_knownValues;	// 68 = 0x44
	NSMutableDictionary *_knownPhoneticValues;	// 72 = 0x48
	NSMutableDictionary *_ambiguousValues;	// 76 = 0x4c
	NSMutableDictionary *_ambiguousPhoneticValues;	// 80 = 0x50
	void *_context;	// 84 = 0x54
}
@property(retain) NSString *repeatedSpokenFeedbackString;	// G=0x3201fc69; S=0x3201fc8d; converted property
@property(retain) NSString *sequenceTag;	// G=0x3201fc79; S=0x3201fcd5; converted property
- (id)_actionForEmptyResults;	// 0x3202026d
- (VSRecognitionRef)_createRecognitionInstanceWithCallbacks:(XXStruct__Vsh7C *)callbacks info:(void *)info;	// 0x32020385
- (VSRecognitionDisambiguationContextRef)_disambiguationContext;	// 0x320203f9
- (BOOL)_keywordIndexChanged;	// 0x3201fc89
- (id)_keywords;	// 0x3202050d
- (id)ambiguousValuesForClassIdentifier:(id)classIdentifier;	// 0x32020089
- (int)completionType;	// 0x3201fc65
- (void)dealloc;	// 0x320202bd
- (id)knownValueForClassIdentifier:(id)classIdentifier;	// 0x3201fd1d
- (id)knownValuesForClassIdentifier:(id)classIdentifier;	// 0x3201fecd
// converted property getter: - (id)repeatedSpokenFeedbackString;	// 0x3201fc69
// converted property getter: - (id)sequenceTag;	// 0x3201fc79
- (void)setAmbiguousValues:(id)values phoneticValues:(id)values2 forClassIdentifier:(id)classIdentifier;	// 0x320200ad
- (void)setKeywords:(id)keywords;	// 0x32020225
- (void)setKnownValue:(id)value phoneticValue:(id)value2 forClassIdentifier:(id)classIdentifier;	// 0x3201fd95
- (void)setKnownValues:(id)values phoneticValues:(id)values2 forClassIdentifier:(id)classIdentifier;	// 0x3201ff51
// converted property setter: - (void)setRepeatedSpokenFeedbackString:(id)string;	// 0x3201fc8d
// converted property setter: - (void)setSequenceTag:(id)tag;	// 0x3201fcd5
@end

