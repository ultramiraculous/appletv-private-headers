/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SASStartSpeech.h"

@class NSData, NSString;

@interface SASStartSpeechDictation : SASStartSpeech {
}
@property(copy, nonatomic) NSData *activationToken;	// G=0x303b3349; S=0x303b3365; 
@property(copy, nonatomic) NSString *applicationName;	// G=0x303b33b5; S=0x303b33d1; 
@property(copy, nonatomic) NSString *applicationVersion;	// G=0x303b3421; S=0x303b343d; 
@property(assign, nonatomic) BOOL censorSpeech;	// G=0x303b348d; S=0x303b3505; 
@property(copy, nonatomic) NSString *fieldId;	// G=0x303b3549; S=0x303b3565; 
@property(copy, nonatomic) NSString *fieldLabel;	// G=0x303b35b5; S=0x303b35d1; 
@property(copy, nonatomic) NSString *interactionId;	// G=0x303b3621; S=0x303b363d; 
@property(copy, nonatomic) NSString *keyboardReturnKey;	// G=0x303b368d; S=0x303b36a9; 
@property(copy, nonatomic) NSString *keyboardType;	// G=0x303b36f9; S=0x303b3715; 
@property(copy, nonatomic) NSString *language;	// G=0x303b3765; S=0x303b3781; 
@property(copy, nonatomic) NSString *postfixText;	// G=0x303b37d1; S=0x303b37ed; 
@property(copy, nonatomic) NSString *prefixText;	// G=0x303b383d; S=0x303b3859; 
@property(copy, nonatomic) NSString *region;	// G=0x303b38a9; S=0x303b38c5; 
@property(copy, nonatomic) NSString *selectedText;	// G=0x303b3915; S=0x303b3931; 
+ (id)startSpeechDictation;	// 0x303b32b9
+ (id)startSpeechDictationWithDictionary:(id)dictionary context:(id)context;	// 0x303b32fd
// declared property getter: - (id)activationToken;	// 0x303b3349
// declared property getter: - (id)applicationName;	// 0x303b33b5
// declared property getter: - (id)applicationVersion;	// 0x303b3421
// declared property getter: - (BOOL)censorSpeech;	// 0x303b348d
- (id)encodedClassName;	// 0x303b32ad
// declared property getter: - (id)fieldId;	// 0x303b3549
// declared property getter: - (id)fieldLabel;	// 0x303b35b5
- (id)groupIdentifier;	// 0x303b329d
// declared property getter: - (id)interactionId;	// 0x303b3621
// declared property getter: - (id)keyboardReturnKey;	// 0x303b368d
// declared property getter: - (id)keyboardType;	// 0x303b36f9
// declared property getter: - (id)language;	// 0x303b3765
// declared property getter: - (id)postfixText;	// 0x303b37d1
// declared property getter: - (id)prefixText;	// 0x303b383d
// declared property getter: - (id)region;	// 0x303b38a9
// declared property getter: - (id)selectedText;	// 0x303b3915
// declared property setter: - (void)setActivationToken:(id)token;	// 0x303b3365
// declared property setter: - (void)setApplicationName:(id)name;	// 0x303b33d1
// declared property setter: - (void)setApplicationVersion:(id)version;	// 0x303b343d
// declared property setter: - (void)setCensorSpeech:(BOOL)speech;	// 0x303b3505
// declared property setter: - (void)setFieldId:(id)anId;	// 0x303b3565
// declared property setter: - (void)setFieldLabel:(id)label;	// 0x303b35d1
// declared property setter: - (void)setInteractionId:(id)anId;	// 0x303b363d
// declared property setter: - (void)setKeyboardReturnKey:(id)key;	// 0x303b36a9
// declared property setter: - (void)setKeyboardType:(id)type;	// 0x303b3715
// declared property setter: - (void)setLanguage:(id)language;	// 0x303b3781
// declared property setter: - (void)setPostfixText:(id)text;	// 0x303b37ed
// declared property setter: - (void)setPrefixText:(id)text;	// 0x303b3859
// declared property setter: - (void)setRegion:(id)region;	// 0x303b38c5
// declared property setter: - (void)setSelectedText:(id)text;	// 0x303b3931
@end

