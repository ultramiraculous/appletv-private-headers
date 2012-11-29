/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SASStartSpeech.h"

@class NSString, NSData;

@interface SASStartSpeechDictation : SASStartSpeech {
}
@property(copy, nonatomic) NSData *activationToken;	// G=0x37961729; S=0x37961745; 
@property(copy, nonatomic) NSString *applicationName;	// G=0x37961795; S=0x379617b1; 
@property(copy, nonatomic) NSString *applicationVersion;	// G=0x37961801; S=0x3796181d; 
@property(assign, nonatomic) BOOL censorSpeech;	// G=0x3796186d; S=0x379618e5; 
@property(copy, nonatomic) NSString *fieldId;	// G=0x37961929; S=0x37961945; 
@property(copy, nonatomic) NSString *fieldLabel;	// G=0x37961995; S=0x379619b1; 
@property(copy, nonatomic) NSString *interactionId;	// G=0x37961a01; S=0x37961a1d; 
@property(copy, nonatomic) NSString *keyboardReturnKey;	// G=0x37961a6d; S=0x37961a89; 
@property(copy, nonatomic) NSString *keyboardType;	// G=0x37961ad9; S=0x37961af5; 
@property(copy, nonatomic) NSString *language;	// G=0x37961b45; S=0x37961b61; 
@property(copy, nonatomic) NSString *postfixText;	// G=0x37961bb1; S=0x37961bcd; 
@property(copy, nonatomic) NSString *prefixText;	// G=0x37961c1d; S=0x37961c39; 
@property(copy, nonatomic) NSString *region;	// G=0x37961c89; S=0x37961ca5; 
@property(copy, nonatomic) NSString *selectedText;	// G=0x37961cf5; S=0x37961d11; 
+ (id)startSpeechDictation;	// 0x37961699
+ (id)startSpeechDictationWithDictionary:(id)dictionary context:(id)context;	// 0x379616dd
// declared property getter: - (id)activationToken;	// 0x37961729
// declared property getter: - (id)applicationName;	// 0x37961795
// declared property getter: - (id)applicationVersion;	// 0x37961801
// declared property getter: - (BOOL)censorSpeech;	// 0x3796186d
- (id)encodedClassName;	// 0x3796168d
// declared property getter: - (id)fieldId;	// 0x37961929
// declared property getter: - (id)fieldLabel;	// 0x37961995
- (id)groupIdentifier;	// 0x3796167d
// declared property getter: - (id)interactionId;	// 0x37961a01
// declared property getter: - (id)keyboardReturnKey;	// 0x37961a6d
// declared property getter: - (id)keyboardType;	// 0x37961ad9
// declared property getter: - (id)language;	// 0x37961b45
// declared property getter: - (id)postfixText;	// 0x37961bb1
// declared property getter: - (id)prefixText;	// 0x37961c1d
// declared property getter: - (id)region;	// 0x37961c89
// declared property getter: - (id)selectedText;	// 0x37961cf5
// declared property setter: - (void)setActivationToken:(id)token;	// 0x37961745
// declared property setter: - (void)setApplicationName:(id)name;	// 0x379617b1
// declared property setter: - (void)setApplicationVersion:(id)version;	// 0x3796181d
// declared property setter: - (void)setCensorSpeech:(BOOL)speech;	// 0x379618e5
// declared property setter: - (void)setFieldId:(id)anId;	// 0x37961945
// declared property setter: - (void)setFieldLabel:(id)label;	// 0x379619b1
// declared property setter: - (void)setInteractionId:(id)anId;	// 0x37961a1d
// declared property setter: - (void)setKeyboardReturnKey:(id)key;	// 0x37961a89
// declared property setter: - (void)setKeyboardType:(id)type;	// 0x37961af5
// declared property setter: - (void)setLanguage:(id)language;	// 0x37961b61
// declared property setter: - (void)setPostfixText:(id)text;	// 0x37961bcd
// declared property setter: - (void)setPrefixText:(id)text;	// 0x37961c39
// declared property setter: - (void)setRegion:(id)region;	// 0x37961ca5
// declared property setter: - (void)setSelectedText:(id)text;	// 0x37961d11
@end
