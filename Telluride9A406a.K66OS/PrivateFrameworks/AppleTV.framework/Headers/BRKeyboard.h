/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import <NSObject.h> // Unknown library

@class BRControl, BRTextEntryControl, BRKeyboardControl, NSMutableArray, NSArray, BRGridView, NSString;

__attribute__((visibility("hidden")))
@interface BRKeyboard : NSObject {
@private
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
@property(retain) BRControl *baseKeyControl;	// G=0x330a4489; S=0x330a4479; converted property
@property(retain) BRKeyboard *baseKeyboard;	// G=0x330a44a9; S=0x330a4499; converted property
@property(assign) BOOL canWrapHorizontally;	// G=0x330a4435; S=0x330a4445; converted property
@property(assign) BOOL canWrapVertically;	// G=0x330a4455; S=0x330a4465; converted property
@property(readonly, retain) NSArray *keyDataDictionaries;	// G=0x330a48b1; converted property
@property(readonly, retain) BRKeyboardControl *keyboardControl;	// G=0x330a44bd; converted property
@property(readonly, retain) NSMutableArray *mainKeyControls;	// G=0x330a48a1; converted property
@property(readonly, retain) NSString *name;	// G=0x330a44b9; converted property
@property(assign) BOOL shouldShowLanguageSwitchButton;	// G=0x330a4cb5; S=0x330a4ca5; converted property
@property(retain) BRTextEntryControl *textEntryControl;	// G=0x330a43a9; S=0x330a43b9; converted property
- (id)init;	// 0x330a4155
- (id)initWithBaseKeyControl:(id)baseKeyControl baseKeyboard:(id)keyboard textEntryControl:(id)control;	// 0x330a4279
- (void)_accessibilityApplyImageLabel:(id)label name:(id)name;	// 0x330a6b9d
- (float)_actionKeysContainerSpacing;	// 0x330a77bd
- (float)_actionKeysContainerWidth;	// 0x330a77b9
- (id)_controlForData:(id)data;	// 0x330a6d61
- (CGColorRef)_createColorFromDictionary:(id)dictionary;	// 0x330a6ae5
- (void)_createMainAndActionKeyControls;	// 0x330a5931
- (id)_filterRawKeyboardData:(id)data;	// 0x330a6121
- (id)_glyphDataForImage:(id)image;	// 0x330a6bb1
- (id)_glyphDataForStrings:(id)strings attributes:(id)attributes;	// 0x330a6725
- (id)_glyphDataForTextString:(id)textString attributes:(id)attributes;	// 0x330a6519
- (void)_handleActionKeySelectionEvent:(id)event;	// 0x330a7591
- (Class)_keyboardControlClass;	// 0x330a730d
- (id)_keyboardDataFileName;	// 0x330a611d
- (id)_mainKeyRowPlane;	// 0x330a73ad
- (float)_mainKeysHorizontalSpacing;	// 0x330a7429
- (float)_mainKeysVerticalSpacing;	// 0x330a7425
- (int)_numberOfActionKeyColumns;	// 0x330a73a9
- (int)_numberOfActionKeyRows;	// 0x330a7395
- (int)_numberOfMainKeyColumns;	// 0x330a7391
- (int)_numberOfMainKeyRows;	// 0x330a738d
- (int)_numberOfMainKeysInLastRow;	// 0x330a7399
- (id)_optionCharactersForKeyboardInput;	// 0x330a7291
- (id)_popupKeyboardDataFileName;	// 0x330a6119
- (BOOL)_popupKeyboardValidForGlyph:(id)glyph;	// 0x330a69b1
- (float)_preferredColumnWidthForMainKeysGrid;	// 0x330a75e9
- (float)_preferredGlyphHeight:(id)height;	// 0x330a7289
- (CGSize)_preferredGlyphSize:(id)size;	// 0x330a742d
- (float)_preferredGlyphWidth:(id)width;	// 0x330a7281
- (float)_preferredTextEntryControlWidth;	// 0x330a75e5
- (id)_processGlyphDataChunk:(id)chunk;	// 0x330a6391
- (void)_replaceActionKeysContainerWithContainer:(id)container;	// 0x330a7329
- (float)_verticalGapBetweenMainAndActionKeys;	// 0x330a77c1
- (id)actionDictionaryForKeyControl:(id)keyControl;	// 0x330a4cc9
- (id)allPopupkeyboardsCharacterSet;	// 0x330a536d
- (id)attributesForTextFieldLabel;	// 0x330a4401
// converted property getter: - (id)baseKeyControl;	// 0x330a4489
// converted property getter: - (id)baseKeyboard;	// 0x330a44a9
- (BOOL)canShowLanguageSwitchButton;	// 0x330a4cc5
// converted property getter: - (BOOL)canWrapHorizontally;	// 0x330a4435
// converted property getter: - (BOOL)canWrapVertically;	// 0x330a4455
- (CGRect)candidatesBackgroundFrame;	// 0x330a78d9
- (CGRect)candidatesContainerFrame;	// 0x330a78fd
- (id)customizeTextEntryControls:(id)controls;	// 0x330a43dd
- (id)customizedTextEntryFieldControls;	// 0x330a43cd
- (void)customizedTextFieldControlsWereRemoved;	// 0x330a43d9
- (void)dealloc;	// 0x330a42e5
- (id)focusedControlForActionKeysContainer:(id)actionKeysContainer;	// 0x330a4c89
- (id)focusedControlForRow:(id)row;	// 0x330a4c75
- (CGRect)frameForPopupKeyboardControl:(id)popupKeyboardControl baseKeyControl:(id)control;	// 0x330a4939
- (void)grid:(id)grid didSelectItemAtIndex:(long)index;	// 0x330a58a1
- (float)grid:(id)grid heightForItemAtIndex:(long)index;	// 0x330a57ed
- (id)grid:(id)grid itemAtIndex:(long)index;	// 0x330a578d
- (BOOL)handleEvent:(id)event;	// 0x330a50fd
// converted property getter: - (id)keyDataDictionaries;	// 0x330a48b1
- (id)keyboardCharacterSet;	// 0x330a5101
// converted property getter: - (id)keyboardControl;	// 0x330a44bd
- (CGRect)keyboardControlFrame;	// 0x330a78b5
- (float)layoutGapBelowKeyboardControl;	// 0x330a77c5
- (float)layoutGapBelowTabControl;	// 0x330a77c9
// converted property getter: - (id)mainKeyControls;	// 0x330a48a1
- (int)mapVisualIndex:(int)index toRow:(id)row;	// 0x330a4c9d
// converted property getter: - (id)name;	// 0x330a44b9
- (long)numberOfColumnsInGrid:(id)grid;	// 0x330a575d
- (long)numberOfItemsInGrid:(id)grid;	// 0x330a5721
- (int)numberOfKeyboardsForCurrentKeyboardType;	// 0x330a4475
- (CGRect)playPauseFrame;	// 0x330a77cd
- (id)popupKeyboardForKeyControl:(id)keyControl textEntryControl:(id)control;	// 0x330a48c9
- (BOOL)popupKeyboardShouldBeRightAlignedForKey:(id)popupKeyboard;	// 0x330a4b3d
- (BOOL)popupKeyboardShouldRemainDisplayedAfterCharacterSelection;	// 0x330a4b41
- (void)removeCustomizedTextEntryControls:(id)controls;	// 0x330a43fd
- (BOOL)requiresTextFieldLabel;	// 0x330a50e9
// converted property setter: - (void)setBaseKeyControl:(id)control;	// 0x330a4479
// converted property setter: - (void)setBaseKeyboard:(id)keyboard;	// 0x330a4499
// converted property setter: - (void)setCanWrapHorizontally:(BOOL)horizontally;	// 0x330a4445
// converted property setter: - (void)setCanWrapVertically:(BOOL)vertically;	// 0x330a4465
- (void)setConstrainCursorToPopupKeyboard:(BOOL)popupKeyboard;	// 0x330a50ed
- (void)setFocusedControlWithVisualIndex:(int)visualIndex forRow:(id)row;	// 0x330a4c0d
// converted property setter: - (void)setShouldShowLanguageSwitchButton:(BOOL)showLanguageSwitchButton;	// 0x330a4ca5
// converted property setter: - (void)setTextEntryControl:(id)control;	// 0x330a43b9
// converted property getter: - (BOOL)shouldShowLanguageSwitchButton;	// 0x330a4cb5
- (CGRect)spinnerFrame;	// 0x330a7ae1
- (void)startSpinning;	// 0x330a43d1
- (void)stopSpinning;	// 0x330a43d5
- (id)switchToThisKeyboardIdentifier;	// 0x330a43c9
- (CGRect)tabControlFrame;	// 0x330a7abd
// converted property getter: - (id)textEntryControl;	// 0x330a43a9
- (BOOL)textEntryControlShouldHandleActionKeysEvents;	// 0x330a48c5
- (BOOL)textEntryControlShouldHandleMainKeysEvents;	// 0x330a48c1
- (CGRect)textFieldBackgroundFrame;	// 0x330a7945
- (CGRect)textFieldFrame;	// 0x330a7969
- (CGRect)textFieldLabelFrame;	// 0x330a7921
- (int)visualIndexOfControlWithName:(id)name forRow:(id)row;	// 0x330a4b89
- (int)visualIndexOfFocusedControlForRow:(id)row;	// 0x330a4b45
@end

