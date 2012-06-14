/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UITextInputTraits.h"
#import "NSObject.h"
#import "UITextInputTraits_Private.h"
#import "NSCopying.h"
#import <NSObject.h> // Unknown library
#import "UIKit-Structs.h"

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
	BOOL contentsIsSingleValue;	// 64 = 0x40
	BOOL acceptsEmoji;	// 65 = 0x41
	BOOL returnKeyGoesToNextResponder;	// 66 = 0x42
	BOOL acceptsFloatingKeyboard;	// 67 = 0x43
	BOOL acceptsSplitKeyboard;	// 68 = 0x44
	BOOL richText;	// 69 = 0x45
	BOOL displaySecureTextUsingPlainText;	// 70 = 0x46
	BOOL learnsCorrections;	// 71 = 0x47
	int emptyContentReturnKeyType;	// 72 = 0x48
	int shortcutConversionType;	// 76 = 0x4c
	BOOL suppressReturnKeyStyling;	// 80 = 0x50
	BOOL forceEnableDictation;	// 81 = 0x51
}
@property(assign, nonatomic) BOOL acceptsEmoji;	// G=0x300909fd; S=0x300a6c59; @synthesize
@property(assign, nonatomic) BOOL acceptsFloatingKeyboard;	// G=0x30090a2d; S=0x3028acfd; @synthesize
@property(assign, nonatomic) BOOL acceptsSplitKeyboard;	// G=0x30090a3d; S=0x3028ad0d; @synthesize
@property(assign, nonatomic) int autocapitalizationType;	// G=0x300908d1; S=0x300a4951; @synthesize
@property(assign, nonatomic) int autocorrectionType;	// G=0x300908e1; S=0x30067449; @synthesize
@property(assign, nonatomic) BOOL contentsIsSingleValue;	// G=0x300909ed; S=0x30145b1d; @synthesize
@property(assign, nonatomic) BOOL displaySecureTextUsingPlainText;	// G=0x30090a5d; S=0x3028ad1d; @synthesize
@property(assign, nonatomic) int emptyContentReturnKeyType;	// G=0x30090a1d; S=0x3028acdd; @synthesize
@property(assign, nonatomic) BOOL enablesReturnKeyAutomatically;	// G=0x30090931; S=0x3006700d; @synthesize
@property(assign, nonatomic) BOOL forceEnableDictation;	// G=0x3028ad4d; S=0x3028ad5d; @synthesize
@property(retain, nonatomic) UIColor *insertionPointColor;	// G=0x3009096d; S=0x30063d7d; @synthesize
@property(assign, nonatomic) unsigned insertionPointWidth;	// G=0x300909ad; S=0x3028accd; @synthesize
@property(assign, nonatomic) int keyboardAppearance;	// G=0x30090911; S=0x3028acbd; @synthesize
@property(assign, nonatomic) int keyboardType;	// G=0x30090901; S=0x300a4971; @synthesize
@property(assign, nonatomic) BOOL learnsCorrections;	// G=0x30090a6d; S=0x3028ad2d; @synthesize
@property(assign, nonatomic) BOOL returnKeyGoesToNextResponder;	// G=0x30090a0d; S=0x3028aced; @synthesize
@property(assign, nonatomic) int returnKeyType;	// G=0x30090921; S=0x30066ffd; @synthesize
@property(assign, nonatomic, getter=isRichText) BOOL richText;	// G=0x30090a4d; S=0x3017961d; @synthesize
@property(assign, nonatomic, getter=isSecureTextEntry) BOOL secureTextEntry;	// G=0x30035f0d; S=0x3028a2c5; @synthesize
@property(retain, nonatomic) UIColor *selectionBarColor;	// G=0x3009097d; S=0x30063da1; @synthesize
@property(retain, nonatomic) UIImage *selectionDragDotImage;	// G=0x3009099d; S=0x30063eb1; @synthesize
@property(retain, nonatomic) UIColor *selectionHighlightColor;	// G=0x3009098d; S=0x30063e8d; @synthesize
@property(assign, nonatomic) int shortcutConversionType;	// G=0x30090a7d; S=0x3028ad3d; @synthesize
@property(assign, nonatomic) int spellCheckingType;	// G=0x300908f1; S=0x300a4961; @synthesize
@property(assign, nonatomic) BOOL suppressReturnKeyStyling;	// G=0x30090a8d; S=0x301908c5; @synthesize
@property(assign, nonatomic) int textLoupeVisibility;	// G=0x300909bd; S=0x300e2e8d; @synthesize
@property(assign, nonatomic) int textSelectionBehavior;	// G=0x300909cd; S=0x301014b1; @synthesize
@property(assign, nonatomic) id textSuggestionDelegate;	// G=0x300909dd; S=0x30145b2d; @dynamic
@property(assign, nonatomic) CFCharacterSetRef textTrimmingSet;	// G=0x30035d15; S=0x30090941; @dynamic
+ (id)defaultTextInputTraits;	// 0x30171611
+ (BOOL)keyboardTypeRequiresASCIICapable:(int)capable;	// 0x301054e1
+ (id)traitsByAdoptingTraits:(id)traits;	// 0x301046bd
- (id)init;	// 0x30063a61
// declared property getter: - (BOOL)acceptsEmoji;	// 0x300909fd
// declared property getter: - (BOOL)acceptsFloatingKeyboard;	// 0x30090a2d
// declared property getter: - (BOOL)acceptsSplitKeyboard;	// 0x30090a3d
// declared property getter: - (int)autocapitalizationType;	// 0x300908d1
// declared property getter: - (int)autocorrectionType;	// 0x300908e1
// declared property getter: - (BOOL)contentsIsSingleValue;	// 0x300909ed
- (id)copyWithZone:(NSZone *)zone;	// 0x3008fe75
- (void)dealloc;	// 0x300a2755
- (id)description;	// 0x3028a2f1
- (id)dictionaryRepresentation;	// 0x3028a061
// declared property getter: - (BOOL)displaySecureTextUsingPlainText;	// 0x30090a5d
// declared property getter: - (int)emptyContentReturnKeyType;	// 0x30090a1d
// declared property getter: - (BOOL)enablesReturnKeyAutomatically;	// 0x30090931
// declared property getter: - (BOOL)forceEnableDictation;	// 0x3028ad4d
// declared property getter: - (id)insertionPointColor;	// 0x3009096d
// declared property getter: - (unsigned)insertionPointWidth;	// 0x300909ad
- (BOOL)isEqual:(id)equal;	// 0x3028a8b9
// declared property getter: - (BOOL)isRichText;	// 0x30090a4d
// declared property getter: - (BOOL)isSecureTextEntry;	// 0x30035f0d
// declared property getter: - (int)keyboardAppearance;	// 0x30090911
// declared property getter: - (int)keyboardType;	// 0x30090901
// declared property getter: - (BOOL)learnsCorrections;	// 0x30090a6d
// declared property getter: - (BOOL)returnKeyGoesToNextResponder;	// 0x30090a0d
// declared property getter: - (int)returnKeyType;	// 0x30090921
// declared property getter: - (id)selectionBarColor;	// 0x3009097d
// declared property getter: - (id)selectionDragDotImage;	// 0x3009099d
// declared property getter: - (id)selectionHighlightColor;	// 0x3009098d
// declared property setter: - (void)setAcceptsEmoji:(BOOL)emoji;	// 0x300a6c59
// declared property setter: - (void)setAcceptsFloatingKeyboard:(BOOL)keyboard;	// 0x3028acfd
// declared property setter: - (void)setAcceptsSplitKeyboard:(BOOL)keyboard;	// 0x3028ad0d
// declared property setter: - (void)setAutocapitalizationType:(int)type;	// 0x300a4951
// declared property setter: - (void)setAutocorrectionType:(int)type;	// 0x30067449
// declared property setter: - (void)setContentsIsSingleValue:(BOOL)value;	// 0x30145b1d
// declared property setter: - (void)setDisplaySecureTextUsingPlainText:(BOOL)text;	// 0x3028ad1d
// declared property setter: - (void)setEmptyContentReturnKeyType:(int)type;	// 0x3028acdd
// declared property setter: - (void)setEnablesReturnKeyAutomatically:(BOOL)automatically;	// 0x3006700d
// declared property setter: - (void)setForceEnableDictation:(BOOL)dictation;	// 0x3028ad5d
// declared property setter: - (void)setInsertionPointColor:(id)color;	// 0x30063d7d
// declared property setter: - (void)setInsertionPointWidth:(unsigned)width;	// 0x3028accd
// declared property setter: - (void)setKeyboardAppearance:(int)appearance;	// 0x3028acbd
// declared property setter: - (void)setKeyboardType:(int)type;	// 0x300a4971
// declared property setter: - (void)setLearnsCorrections:(BOOL)corrections;	// 0x3028ad2d
// declared property setter: - (void)setReturnKeyGoesToNextResponder:(BOOL)nextResponder;	// 0x3028aced
// declared property setter: - (void)setReturnKeyType:(int)type;	// 0x30066ffd
// declared property setter: - (void)setRichText:(BOOL)text;	// 0x3017961d
// declared property setter: - (void)setSecureTextEntry:(BOOL)entry;	// 0x3028a2c5
// declared property setter: - (void)setSelectionBarColor:(id)color;	// 0x30063da1
// declared property setter: - (void)setSelectionDragDotImage:(id)image;	// 0x30063eb1
// declared property setter: - (void)setSelectionHighlightColor:(id)color;	// 0x30063e8d
// declared property setter: - (void)setShortcutConversionType:(int)type;	// 0x3028ad3d
// declared property setter: - (void)setSpellCheckingType:(int)type;	// 0x300a4961
// declared property setter: - (void)setSuppressReturnKeyStyling:(BOOL)styling;	// 0x301908c5
// declared property setter: - (void)setTextLoupeVisibility:(int)visibility;	// 0x300e2e8d
// declared property setter: - (void)setTextSelectionBehavior:(int)behavior;	// 0x301014b1
// declared property setter: - (void)setTextSuggestionDelegate:(id)delegate;	// 0x30145b2d
// declared property setter: - (void)setTextTrimmingSet:(CFCharacterSetRef)set;	// 0x30090941
- (void)setToDefaultValues;	// 0x30063aa9
- (void)setToSecureValues;	// 0x30289fc1
// declared property getter: - (int)shortcutConversionType;	// 0x30090a7d
// declared property getter: - (int)spellCheckingType;	// 0x300908f1
// declared property getter: - (BOOL)suppressReturnKeyStyling;	// 0x30090a8d
- (void)takeTraitsFrom:(id)from;	// 0x3008fec1
// declared property getter: - (int)textLoupeVisibility;	// 0x300909bd
// declared property getter: - (int)textSelectionBehavior;	// 0x300909cd
// declared property getter: - (id)textSuggestionDelegate;	// 0x300909dd
// declared property getter: - (CFCharacterSetRef)textTrimmingSet;	// 0x30035d15
@end
