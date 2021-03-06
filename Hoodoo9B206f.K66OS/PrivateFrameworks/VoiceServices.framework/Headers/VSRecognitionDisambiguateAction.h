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
@property(retain) NSString *repeatedSpokenFeedbackString;	// G=0x3151bc0d; S=0x3151bc31; converted property
@property(retain) NSString *sequenceTag;	// G=0x3151bc1d; S=0x3151bc79; converted property
- (id)_actionForEmptyResults;	// 0x3151c211
- (VSRecognitionRef)_createRecognitionInstanceWithCallbacks:(XXStruct__Vsh7C *)callbacks info:(void *)info;	// 0x3151c329
- (VSRecognitionDisambiguationContextRef)_disambiguationContext;	// 0x3151c39d
- (BOOL)_keywordIndexChanged;	// 0x3151bc2d
- (id)_keywords;	// 0x3151c4b1
- (id)ambiguousValuesForClassIdentifier:(id)classIdentifier;	// 0x3151c02d
- (int)completionType;	// 0x3151bc09
- (void)dealloc;	// 0x3151c261
- (id)knownValueForClassIdentifier:(id)classIdentifier;	// 0x3151bcc1
- (id)knownValuesForClassIdentifier:(id)classIdentifier;	// 0x3151be71
// converted property getter: - (id)repeatedSpokenFeedbackString;	// 0x3151bc0d
// converted property getter: - (id)sequenceTag;	// 0x3151bc1d
- (void)setAmbiguousValues:(id)values phoneticValues:(id)values2 forClassIdentifier:(id)classIdentifier;	// 0x3151c051
- (void)setKeywords:(id)keywords;	// 0x3151c1c9
- (void)setKnownValue:(id)value phoneticValue:(id)value2 forClassIdentifier:(id)classIdentifier;	// 0x3151bd39
- (void)setKnownValues:(id)values phoneticValues:(id)values2 forClassIdentifier:(id)classIdentifier;	// 0x3151bef5
// converted property setter: - (void)setRepeatedSpokenFeedbackString:(id)string;	// 0x3151bc31
// converted property setter: - (void)setSequenceTag:(id)tag;	// 0x3151bc79
@end

