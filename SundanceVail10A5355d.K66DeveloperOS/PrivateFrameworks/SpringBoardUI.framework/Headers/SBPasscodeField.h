/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SpringBoardUI.framework/SpringBoardUI
 */

#import <UIPasscodeField.h> // Unknown library


@interface SBPasscodeField : UIPasscodeField {
	int _style;	// 120 = 0x78
	float _okFontSize;	// 124 = 0x7c
	float _cancelFontSize;	// 128 = 0x80
	float _buttonWidth;	// 132 = 0x84
	BOOL _showsCancelButton;	// 136 = 0x88
	BOOL _isAlphanumericField;	// 137 = 0x89
}
@property(assign, nonatomic) int clearButtonMode;	// G=0x3639b461; S=0x3639b489; 
@property(assign, nonatomic) BOOL isAlphanumericField;	// G=0x3639be25; S=0x3639be35; @synthesize=_isAlphanumericField
@property(assign, nonatomic, getter=isOkayButtonEnabled) BOOL okayButtonEnabled;	// G=0x3639b331; S=0x3639b359; 
@property(assign, nonatomic) BOOL showsCancelButton;	// G=0x3639be45; S=0x3639b435; @synthesize=_showsCancelButton
+ (Class)textFieldClass;	// 0x3639b1a9
- (id)_entryField;	// 0x3639b21d
- (id)_initWithStyle:(int)style;	// 0x3639b1c5
- (id)_localizedCancelString;	// 0x3639b645
- (id)_localizedOKString;	// 0x3639b5ed
- (void)_textDidChange;	// 0x3639bdd5
- (void)_updateButtonFrame;	// 0x3639bb59
- (void)_updateButtonMetrics;	// 0x3639b69d
- (void)_updateButtonTitle;	// 0x3639b981
- (void)_updateFields;	// 0x3639bd25
// declared property getter: - (int)clearButtonMode;	// 0x3639b461
// declared property getter: - (BOOL)isAlphanumericField;	// 0x3639be25
// declared property getter: - (BOOL)isOkayButtonEnabled;	// 0x3639b331
// declared property setter: - (void)setClearButtonMode:(int)mode;	// 0x3639b489
// declared property setter: - (void)setIsAlphanumericField:(BOOL)field;	// 0x3639be35
- (void)setNumberOfEntryFields:(int)entryFields opaqueBackground:(BOOL)background;	// 0x3639b265
// declared property setter: - (void)setOkayButtonEnabled:(BOOL)enabled;	// 0x3639b359
// declared property setter: - (void)setShowsCancelButton:(BOOL)button;	// 0x3639b435
- (void)setShowsOKButton:(BOOL)button;	// 0x3639b3f5
// declared property getter: - (BOOL)showsCancelButton;	// 0x3639be45
- (BOOL)textFieldShouldClear:(id)textField;	// 0x3639bdd1
- (id)textInputTraits;	// 0x3639b5c5
@end

