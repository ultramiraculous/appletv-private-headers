/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "AppleTV-Structs.h"

@class NSString, BRGridView, NSMutableArray, NSArray, BRTextEntryControl, BRKeyboardControl, BRControl;

__attribute__((visibility("hidden")))
@interface BRKeyboard : XXUnknownSuperclass {
	BRTextEntryControl *_textEntryControl;	// 4 = 0x4
	BRControl *_baseKeyControl;	// 8 = 0x8
	BRKeyboard *_baseKeyboard;	// 12 = 0xc
	NSString *_name;	// 16 = 0x10
	BRKeyboardControl *_keyboardControl;	// 20 = 0x14
	BRGridView *_mainKeysGrid;	// 24 = 0x18
	NSMutableArray *_mainKeyControls;	// 28 = 0x1c
	BRControl *_actionKeysContainer;	// 32 = 0x20
	NSMutableArray *_actionKeyControls;	// 36 = 0x24
	NSArray *_keyDataDictionaries;	// 40 = 0x28
	BOOL _shouldShowLanguageSwitchButton;	// 44 = 0x2c
	BOOL _constrainCursorToPopupKeyboard;	// 45 = 0x2d
	BOOL _canWrapHorizontally;	// 46 = 0x2e
	BOOL _canWrapVertically;	// 47 = 0x2f
}
@property(retain) BRControl *baseKeyControl;	// G=0x30ff8d; S=0x30ff7d; converted property
@property(retain) BRKeyboard *baseKeyboard;	// G=0x30ffad; S=0x30ff9d; converted property
@property(assign) BOOL canWrapHorizontally;	// G=0x30ff39; S=0x30ff49; converted property
@property(assign) BOOL canWrapVertically;	// G=0x30ff59; S=0x30ff69; converted property
@property(readonly, retain) NSArray *keyDataDictionaries;	// G=0x3103a9; converted property
@property(readonly, retain) BRKeyboardControl *keyboardControl;	// G=0x30ffc1; converted property
@property(readonly, retain) NSMutableArray *mainKeyControls;	// G=0x310399; converted property
@property(readonly, retain) NSString *name;	// G=0x30ffbd; converted property
@property(assign) BOOL shouldShowLanguageSwitchButton;	// G=0x310769; S=0x310759; converted property
@property(retain) BRTextEntryControl *textEntryControl;	// G=0x30fead; S=0x30febd; converted property
- (id)init;	// 0x30fc59
- (id)initWithBaseKeyControl:(id)baseKeyControl baseKeyboard:(id)keyboard textEntryControl:(id)control;	// 0x30fd79
- (void)_accessibilityApplyImageLabel:(id)label name:(id)name;	// 0x312639
- (float)_actionKeysContainerSpacing;	// 0x31322d
- (float)_actionKeysContainerWidth;	// 0x313229
- (id)_controlForData:(id)data;	// 0x3127d9
- (CGColorRef)_createColorFromDictionary:(id)dictionary;	// 0x31258d
- (void)_createMainAndActionKeyControls;	// 0x3113c9
- (id)_filterRawKeyboardData:(id)data;	// 0x311bc9
- (id)_glyphDataForImage:(id)image;	// 0x31264d
- (id)_glyphDataForStrings:(id)strings attributes:(id)attributes;	// 0x3121c9
- (id)_glyphDataForTextString:(id)textString attributes:(id)attributes;	// 0x311fb9
- (void)_handleActionKeySelectionEvent:(id)event;	// 0x312e69
- (Class)_keyboardControlClass;	// 0x312d4d
- (id)_keyboardDataFileName;	// 0x311bc5
- (id)_mainKeyRowPlane;	// 0x312de9
- (float)_mainKeysHorizontalSpacing;	// 0x312e65
- (float)_mainKeysVerticalSpacing;	// 0x312e61
- (int)_numberOfActionKeyColumns;	// 0x312de5
- (int)_numberOfActionKeyRows;	// 0x312dd1
- (int)_numberOfMainKeyColumns;	// 0x312dcd
- (int)_numberOfMainKeyRows;	// 0x312dc9
- (int)_numberOfMainKeysInLastRow;	// 0x312dd5
- (id)_optionCharactersForKeyboardInput;	// 0x312cd1
- (id)_popupKeyboardDataFileName;	// 0x311bc1
- (BOOL)_popupKeyboardValidForGlyph:(id)glyph;	// 0x312459
- (float)_preferredColumnWidthForMainKeysGrid;	// 0x313039
- (float)_preferredGlyphHeight:(id)height;	// 0x312cc9
- (CGSize)_preferredGlyphSize:(id)size;	// 0x312ec1
- (float)_preferredGlyphWidth:(id)width;	// 0x312cc1
- (float)_preferredTextEntryControlWidth;	// 0x313035
- (id)_processGlyphDataChunk:(id)chunk;	// 0x311e39
- (void)_replaceActionKeysContainerWithContainer:(id)container;	// 0x312d69
- (float)_verticalGapBetweenMainAndActionKeys;	// 0x313231
- (id)actionDictionaryForKeyControl:(id)keyControl;	// 0x31077d
- (id)allPopupkeyboardsCharacterSet;	// 0x310df9
- (id)attributesForTextFieldLabel;	// 0x30ff05
// converted property getter: - (id)baseKeyControl;	// 0x30ff8d
// converted property getter: - (id)baseKeyboard;	// 0x30ffad
- (BOOL)canShowLanguageSwitchButton;	// 0x310779
// converted property getter: - (BOOL)canWrapHorizontally;	// 0x30ff39
// converted property getter: - (BOOL)canWrapVertically;	// 0x30ff59
- (CGRect)candidatesBackgroundFrame;	// 0x31334d
- (CGRect)candidatesContainerFrame;	// 0x313371
- (id)customizeTextEntryControls:(id)controls;	// 0x30fee1
- (id)customizedTextEntryFieldControls;	// 0x30fed1
- (void)customizedTextFieldControlsWereRemoved;	// 0x30fedd
- (void)dealloc;	// 0x30fde5
- (id)focusedControlForActionKeysContainer:(id)actionKeysContainer;	// 0x31073d
- (id)focusedControlForRow:(id)row;	// 0x310729
- (CGRect)frameForPopupKeyboardControl:(id)popupKeyboardControl baseKeyControl:(id)control;	// 0x310431
- (void)grid:(id)grid didSelectItemAtIndex:(long)index;	// 0x311339
- (float)grid:(id)grid heightForItemAtIndex:(long)index;	// 0x311299
- (id)grid:(id)grid itemAtIndex:(long)index;	// 0x311239
- (BOOL)handleEvent:(id)event;	// 0x310b51
- (BOOL)isLastCharacterSelected;	// 0x310b4d
// converted property getter: - (id)keyDataDictionaries;	// 0x3103a9
- (id)keyboardCharacterSet;	// 0x310b55
// converted property getter: - (id)keyboardControl;	// 0x30ffc1
- (CGRect)keyboardControlFrame;	// 0x313329
- (float)layoutGapBelowKeyboardControl;	// 0x313235
- (float)layoutGapBelowTabControl;	// 0x313239
// converted property getter: - (id)mainKeyControls;	// 0x310399
- (int)mapVisualIndex:(int)index toRow:(id)row;	// 0x310751
// converted property getter: - (id)name;	// 0x30ffbd
- (long)numberOfColumnsInGrid:(id)grid;	// 0x311211
- (long)numberOfItemsInGrid:(id)grid;	// 0x3111dd
- (int)numberOfKeyboardsForCurrentKeyboardType;	// 0x30ff79
- (CGRect)playPauseFrame;	// 0x31323d
- (id)popupKeyboardForKeyControl:(id)keyControl textEntryControl:(id)control;	// 0x3103c1
- (BOOL)popupKeyboardShouldBeRightAlignedForKey:(id)popupKeyboard;	// 0x3105f9
- (BOOL)popupKeyboardShouldRemainDisplayedAfterCharacterSelection;	// 0x3105fd
- (void)removeCustomizedTextEntryControls:(id)controls;	// 0x30ff01
- (BOOL)requiresTextFieldLabel;	// 0x310b39
// converted property setter: - (void)setBaseKeyControl:(id)control;	// 0x30ff7d
// converted property setter: - (void)setBaseKeyboard:(id)keyboard;	// 0x30ff9d
// converted property setter: - (void)setCanWrapHorizontally:(BOOL)horizontally;	// 0x30ff49
// converted property setter: - (void)setCanWrapVertically:(BOOL)vertically;	// 0x30ff69
- (void)setConstrainCursorToPopupKeyboard:(BOOL)popupKeyboard;	// 0x310b3d
- (void)setFocusedControlWithVisualIndex:(int)visualIndex forRow:(id)row;	// 0x3106cd
// converted property setter: - (void)setShouldShowLanguageSwitchButton:(BOOL)showLanguageSwitchButton;	// 0x310759
// converted property setter: - (void)setTextEntryControl:(id)control;	// 0x30febd
// converted property getter: - (BOOL)shouldShowLanguageSwitchButton;	// 0x310769
- (CGRect)spinnerFrame;	// 0x31353d
- (void)startSpinning;	// 0x30fed5
- (void)stopSpinning;	// 0x30fed9
- (id)switchToThisKeyboardIdentifier;	// 0x30fecd
- (CGRect)tabControlFrame;	// 0x313519
// converted property getter: - (id)textEntryControl;	// 0x30fead
- (BOOL)textEntryControlShouldHandleActionKeysEvents;	// 0x3103bd
- (BOOL)textEntryControlShouldHandleMainKeysEvents;	// 0x3103b9
- (CGRect)textFieldBackgroundFrame;	// 0x3133b9
- (CGRect)textFieldFrame;	// 0x3133dd
- (CGRect)textFieldLabelFrame;	// 0x313395
- (int)visualIndexOfControlWithName:(id)name forRow:(id)row;	// 0x310645
- (int)visualIndexOfFocusedControlForRow:(id)row;	// 0x310601
@end

