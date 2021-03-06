/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UITextInputTraits_Private.h"
#import "UITextInputTraits.h"
#import "NSObject.h"
#import "NSCopying.h"
#import <ImageIO/NSObject.h>

@class UIColor, UIImage;

@protocol UITextInputTraits <NSObject>
@optional
@property(assign, nonatomic) int autocapitalizationType;
@property(assign, nonatomic) int autocorrectionType;
@property(assign, nonatomic) BOOL enablesReturnKeyAutomatically;
@property(assign, nonatomic) int keyboardAppearance;
@property(assign, nonatomic) int keyboardType;
@property(assign, nonatomic) int returnKeyType;
@property(assign, nonatomic, getter=isSecureTextEntry) BOOL secureTextEntry;
@property(assign, nonatomic) int spellCheckingType;
// declared property getter: - (int)autocapitalizationType;
// declared property getter: - (int)autocorrectionType;
// declared property getter: - (BOOL)enablesReturnKeyAutomatically;
// declared property getter: - (BOOL)isSecureTextEntry;
// declared property getter: - (int)keyboardAppearance;
// declared property getter: - (int)keyboardType;
// declared property getter: - (int)returnKeyType;
// declared property setter: - (void)setAutocapitalizationType:(int)type;
// declared property setter: - (void)setAutocorrectionType:(int)type;
// declared property setter: - (void)setEnablesReturnKeyAutomatically:(BOOL)automatically;
// declared property setter: - (void)setKeyboardAppearance:(int)appearance;
// declared property setter: - (void)setKeyboardType:(int)type;
// declared property setter: - (void)setReturnKeyType:(int)type;
// declared property setter: - (void)setSecureTextEntry:(BOOL)entry;
// declared property setter: - (void)setSpellCheckingType:(int)type;
// declared property getter: - (int)spellCheckingType;
@end

@interface UITextInputTraits : NSObject <UITextInputTraits, UITextInputTraits_Private, NSCopying> {
	int autocapitalizationType;	// 4 = 0x4
	int autocorrectionType;	// 8 = 0x8
	int spellCheckingType;	// 12 = 0xc
	unsigned keyboardType : 8;	// 16 = 0x10
	unsigned keyboardAppearance : 8;	// 17 = 0x11
	int returnKeyType;	// 20 = 0x14
	BOOL enablesReturnKeyAutomatically;	// 24 = 0x18
	BOOL secureTextEntry;	// 25 = 0x19
	CFCharacterSetRef textTrimmingSet;	// 28 = 0x1c
	UIColor *insertionPointColor;	// 32 = 0x20
	UIColor *selectionBarColor;	// 36 = 0x24
	UIColor *selectionHighlightColor;	// 40 = 0x28
	UIImage *selectionDragDotImage;	// 44 = 0x2c
	unsigned insertionPointWidth;	// 48 = 0x30
	int textLoupeVisibility;	// 52 = 0x34
	int textSelectionBehavior;	// 56 = 0x38
	id textSuggestionDelegate;	// 60 = 0x3c
	BOOL isSingleLineDocument;	// 64 = 0x40
	BOOL contentsIsSingleValue;	// 65 = 0x41
	BOOL acceptsEmoji;	// 66 = 0x42
	BOOL returnKeyGoesToNextResponder;	// 67 = 0x43
	BOOL acceptsFloatingKeyboard;	// 68 = 0x44
	BOOL acceptsSplitKeyboard;	// 69 = 0x45
	BOOL displaySecureTextUsingPlainText;	// 70 = 0x46
	BOOL learnsCorrections;	// 71 = 0x47
	int emptyContentReturnKeyType;	// 72 = 0x48
	int shortcutConversionType;	// 76 = 0x4c
	BOOL suppressReturnKeyStyling;	// 80 = 0x50
	BOOL forceEnableDictation;	// 81 = 0x51
	BOOL useInterfaceLanguageForLocalization;	// 82 = 0x52
	BOOL deferBecomingResponder;	// 83 = 0x53
	BOOL enablesReturnKeyOnNonWhiteSpaceContent;	// 84 = 0x54
}
@property(assign, nonatomic) BOOL acceptsEmoji;	// G=0x2f4be5bd; S=0x2f45d6ed; @synthesize
@property(assign, nonatomic) BOOL acceptsFloatingKeyboard;	// G=0x2f4be5ed; S=0x2f6b5ffd; @synthesize
@property(assign, nonatomic) BOOL acceptsSplitKeyboard;	// G=0x2f4be5fd; S=0x2f6b600d; @synthesize
@property(assign, nonatomic) int autocapitalizationType;	// G=0x2f4be4bd; S=0x2f45b145; @synthesize
@property(assign, nonatomic) int autocorrectionType;	// G=0x2f4be4cd; S=0x2f45b155; @synthesize
@property(assign, nonatomic) BOOL contentsIsSingleValue;	// G=0x2f4be5ad; S=0x2f5013a9; @synthesize
@property(assign, nonatomic) BOOL deferBecomingResponder;	// G=0x2f4b8791; S=0x2f6b605d; @synthesize
@property(assign, nonatomic) BOOL displaySecureTextUsingPlainText;	// G=0x2f4be60d; S=0x2f6b601d; @synthesize
@property(assign, nonatomic) int emptyContentReturnKeyType;	// G=0x2f4be5dd; S=0x2f6b5fdd; @synthesize
@property(assign, nonatomic) BOOL enablesReturnKeyAutomatically;	// G=0x2f4be51d; S=0x2f4703d5; @synthesize
@property(assign, nonatomic) BOOL enablesReturnKeyOnNonWhiteSpaceContent;	// G=0x2f6b606d; S=0x2f6b607d; @synthesize
@property(assign, nonatomic) BOOL forceEnableDictation;	// G=0x2f4be64d; S=0x2f4b81f9; @synthesize
@property(retain, nonatomic) UIColor *insertionPointColor;	// G=0x2f4bc77d; S=0x2f45b0d1; @synthesize
@property(assign, nonatomic) unsigned insertionPointWidth;	// G=0x2f4be57d; S=0x2f6b5fad; @synthesize
@property(assign, nonatomic) BOOL isSingleLineDocument;	// G=0x2f6b5fbd; S=0x2f6b5fcd; @synthesize
@property(assign, nonatomic) int keyboardAppearance;	// G=0x2f4be4fd; S=0x2f5193e5; @synthesize
@property(assign, nonatomic) int keyboardType;	// G=0x2f4be4ed; S=0x2f45b175; @synthesize
@property(assign, nonatomic) BOOL learnsCorrections;	// G=0x2f4be61d; S=0x2f6b602d; @synthesize
@property(assign, nonatomic) BOOL returnKeyGoesToNextResponder;	// G=0x2f4be5cd; S=0x2f6b5fed; @synthesize
@property(assign, nonatomic) int returnKeyType;	// G=0x2f4be50d; S=0x2f4703c5; @synthesize
@property(assign, nonatomic, getter=isSecureTextEntry) BOOL secureTextEntry;	// G=0x2f4b82ed; S=0x2f5194f9; @synthesize
@property(retain, nonatomic) UIColor *selectionBarColor;	// G=0x2f4be55d; S=0x2f45b0e1; @synthesize
@property(retain, nonatomic) UIImage *selectionDragDotImage;	// G=0x2f4be56d; S=0x2f45b135; @synthesize
@property(retain, nonatomic) UIColor *selectionHighlightColor;	// G=0x2f488f45; S=0x2f45b125; @synthesize
@property(assign, nonatomic) int shortcutConversionType;	// G=0x2f4be62d; S=0x2f49bd65; @synthesize
@property(assign, nonatomic) int spellCheckingType;	// G=0x2f4be4dd; S=0x2f45b165; @synthesize
@property(assign, nonatomic) BOOL suppressReturnKeyStyling;	// G=0x2f4be63d; S=0x2f6b603d; @synthesize
@property(assign, nonatomic) int textLoupeVisibility;	// G=0x2f4be58d; S=0x2f49bd75; @synthesize
@property(assign, nonatomic) int textSelectionBehavior;	// G=0x2f4b9975; S=0x2f4b9985; @synthesize
@property(assign, nonatomic) id textSuggestionDelegate;	// G=0x2f4be59d; S=0x2f5013b9; @dynamic
@property(assign, nonatomic) CFCharacterSetRef textTrimmingSet;	// G=0x2f49bcc9; S=0x2f4be52d; @dynamic
@property(assign, nonatomic) BOOL useInterfaceLanguageForLocalization;	// G=0x2f4be65d; S=0x2f6b604d; @synthesize
+ (id)defaultTextInputTraits;	// 0x2f6b54a5
+ (BOOL)keyboardTypeRequiresASCIICapable:(int)capable;	// 0x2f4c208d
+ (id)traitsByAdoptingTraits:(id)traits;	// 0x2f4c18b1
- (id)init;	// 0x2f45ae0d
- (void)_setColorsToMatchTintColor:(id)matchTintColor;	// 0x2f6b608d
// declared property getter: - (BOOL)acceptsEmoji;	// 0x2f4be5bd
// declared property getter: - (BOOL)acceptsFloatingKeyboard;	// 0x2f4be5ed
// declared property getter: - (BOOL)acceptsSplitKeyboard;	// 0x2f4be5fd
// declared property getter: - (int)autocapitalizationType;	// 0x2f4be4bd
// declared property getter: - (int)autocorrectionType;	// 0x2f4be4cd
// declared property getter: - (BOOL)contentsIsSingleValue;	// 0x2f4be5ad
- (id)copyWithZone:(NSZone *)zone;	// 0x2f4bd95d
- (void)dealloc;	// 0x2f4c1911
// declared property getter: - (BOOL)deferBecomingResponder;	// 0x2f4b8791
- (id)description;	// 0x2f6b54e9
- (id)dictionaryRepresentation;	// 0x2f6b524d
// declared property getter: - (BOOL)displaySecureTextUsingPlainText;	// 0x2f4be60d
// declared property getter: - (int)emptyContentReturnKeyType;	// 0x2f4be5dd
// declared property getter: - (BOOL)enablesReturnKeyAutomatically;	// 0x2f4be51d
// declared property getter: - (BOOL)enablesReturnKeyOnNonWhiteSpaceContent;	// 0x2f6b606d
// declared property getter: - (BOOL)forceEnableDictation;	// 0x2f4be64d
// declared property getter: - (id)insertionPointColor;	// 0x2f4bc77d
// declared property getter: - (unsigned)insertionPointWidth;	// 0x2f4be57d
- (BOOL)isEqual:(id)equal;	// 0x2f6b5c35
// declared property getter: - (BOOL)isSecureTextEntry;	// 0x2f4b82ed
// declared property getter: - (BOOL)isSingleLineDocument;	// 0x2f6b5fbd
// declared property getter: - (int)keyboardAppearance;	// 0x2f4be4fd
// declared property getter: - (int)keyboardType;	// 0x2f4be4ed
// declared property getter: - (BOOL)learnsCorrections;	// 0x2f4be61d
- (BOOL)publicTraitsMatchTraits:(id)traits;	// 0x2f6b5ae9
// declared property getter: - (BOOL)returnKeyGoesToNextResponder;	// 0x2f4be5cd
// declared property getter: - (int)returnKeyType;	// 0x2f4be50d
// declared property getter: - (id)selectionBarColor;	// 0x2f4be55d
// declared property getter: - (id)selectionDragDotImage;	// 0x2f4be56d
// declared property getter: - (id)selectionHighlightColor;	// 0x2f488f45
// declared property setter: - (void)setAcceptsEmoji:(BOOL)emoji;	// 0x2f45d6ed
// declared property setter: - (void)setAcceptsFloatingKeyboard:(BOOL)keyboard;	// 0x2f6b5ffd
// declared property setter: - (void)setAcceptsSplitKeyboard:(BOOL)keyboard;	// 0x2f6b600d
// declared property setter: - (void)setAutocapitalizationType:(int)type;	// 0x2f45b145
// declared property setter: - (void)setAutocorrectionType:(int)type;	// 0x2f45b155
// declared property setter: - (void)setContentsIsSingleValue:(BOOL)value;	// 0x2f5013a9
// declared property setter: - (void)setDeferBecomingResponder:(BOOL)responder;	// 0x2f6b605d
// declared property setter: - (void)setDisplaySecureTextUsingPlainText:(BOOL)text;	// 0x2f6b601d
// declared property setter: - (void)setEmptyContentReturnKeyType:(int)type;	// 0x2f6b5fdd
// declared property setter: - (void)setEnablesReturnKeyAutomatically:(BOOL)automatically;	// 0x2f4703d5
// declared property setter: - (void)setEnablesReturnKeyOnNonWhiteSpaceContent:(BOOL)content;	// 0x2f6b607d
// declared property setter: - (void)setForceEnableDictation:(BOOL)dictation;	// 0x2f4b81f9
// declared property setter: - (void)setInsertionPointColor:(id)color;	// 0x2f45b0d1
// declared property setter: - (void)setInsertionPointWidth:(unsigned)width;	// 0x2f6b5fad
// declared property setter: - (void)setIsSingleLineDocument:(BOOL)document;	// 0x2f6b5fcd
// declared property setter: - (void)setKeyboardAppearance:(int)appearance;	// 0x2f5193e5
// declared property setter: - (void)setKeyboardType:(int)type;	// 0x2f45b175
// declared property setter: - (void)setLearnsCorrections:(BOOL)corrections;	// 0x2f6b602d
// declared property setter: - (void)setReturnKeyGoesToNextResponder:(BOOL)nextResponder;	// 0x2f6b5fed
// declared property setter: - (void)setReturnKeyType:(int)type;	// 0x2f4703c5
// declared property setter: - (void)setSecureTextEntry:(BOOL)entry;	// 0x2f5194f9
// declared property setter: - (void)setSelectionBarColor:(id)color;	// 0x2f45b0e1
// declared property setter: - (void)setSelectionDragDotImage:(id)image;	// 0x2f45b135
// declared property setter: - (void)setSelectionHighlightColor:(id)color;	// 0x2f45b125
// declared property setter: - (void)setShortcutConversionType:(int)type;	// 0x2f49bd65
// declared property setter: - (void)setSpellCheckingType:(int)type;	// 0x2f45b165
// declared property setter: - (void)setSuppressReturnKeyStyling:(BOOL)styling;	// 0x2f6b603d
// declared property setter: - (void)setTextLoupeVisibility:(int)visibility;	// 0x2f49bd75
// declared property setter: - (void)setTextSelectionBehavior:(int)behavior;	// 0x2f4b9985
// declared property setter: - (void)setTextSuggestionDelegate:(id)delegate;	// 0x2f5013b9
// declared property setter: - (void)setTextTrimmingSet:(CFCharacterSetRef)set;	// 0x2f4be52d
- (void)setToDefaultValues;	// 0x2f45ae55
- (void)setToSecureValues;	// 0x2f519521
// declared property setter: - (void)setUseInterfaceLanguageForLocalization:(BOOL)localization;	// 0x2f6b604d
// declared property getter: - (int)shortcutConversionType;	// 0x2f4be62d
// declared property getter: - (int)spellCheckingType;	// 0x2f4be4dd
// declared property getter: - (BOOL)suppressReturnKeyStyling;	// 0x2f4be63d
- (void)takeTraitsFrom:(id)from;	// 0x2f4bd9a9
// declared property getter: - (int)textLoupeVisibility;	// 0x2f4be58d
// declared property getter: - (int)textSelectionBehavior;	// 0x2f4b9975
// declared property getter: - (id)textSuggestionDelegate;	// 0x2f4be59d
// declared property getter: - (CFCharacterSetRef)textTrimmingSet;	// 0x2f49bcc9
// declared property getter: - (BOOL)useInterfaceLanguageForLocalization;	// 0x2f4be65d
@end

