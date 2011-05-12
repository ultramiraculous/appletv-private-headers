/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIView.h"

@class NSArray, UIButton, UIColor, UILabel, NSString, UIImageView, UITextField;
@protocol UISearchBarDelegate;

@interface UISearchBar : UIView {
@private
	UITextField *_searchField;	// 44 = 0x2c
	UILabel *_promptLabel;	// 48 = 0x30
	UIButton *_cancelButton;	// 52 = 0x34
	id<UISearchBarDelegate> _delegate;	// 56 = 0x38
	id _controller;	// 60 = 0x3c
	UIColor *_tintColor;	// 64 = 0x40
	UIImageView *_separator;	// 68 = 0x44
	NSString *_cancelButtonText;	// 72 = 0x48
	NSArray *_scopes;	// 76 = 0x4c
	int _selectedScope;	// 80 = 0x50
	UIView *_background;	// 84 = 0x54
	UIView *_scopeBar;	// 88 = 0x58
	UIEdgeInsets _contentInset;	// 92 = 0x5c
	id _appearance;	// 108 = 0x6c
	struct {
		unsigned barStyle : 3;
		unsigned showsBookmarkButton : 1;
		unsigned showsCancelButton : 1;
		unsigned isTranslucent : 1;
		unsigned autoDisableCancelButton : 1;
		unsigned showsScopeBar : 1;
		unsigned hideBackground : 1;
		unsigned combinesLandscapeBars : 1;
		unsigned usesEmbeddedAppearance : 1;
		unsigned showsSearchResultsButton : 1;
		unsigned searchResultsButtonSelected : 1;
		unsigned pretendsIsInBar : 1;
		unsigned disabled : 1;
	} _searchBarFlags;	// 112 = 0x70
}
@property(assign, nonatomic) int autocapitalizationType;	// G=0x32185109; S=0x31feb21d; 
@property(assign, nonatomic) int autocorrectionType;	// G=0x321850e9; S=0x31feb1fd; 
@property(retain) id backgroundImage;	// G=0x321851d1; S=0x3200bdcd; converted property
@property(assign, nonatomic) int barStyle;	// G=0x32184a1d; S=0x3201d3ed; 
@property(retain) UIButton *cancelButton;	// G=0x32184ac9; S=0x32185129; converted property
@property(assign) BOOL combinesLandscapeBars;	// G=0x32184a99; S=0x31fec075; converted property
@property(assign) UIEdgeInsets contentInset;	// G=0x32184ad9; S=0x31fec439; converted property
@property(retain) id controller;	// G=0x32184a0d; S=0x31febf11; converted property
@property(assign, nonatomic) id<UISearchBarDelegate> delegate;	// G=0x32184b25; S=0x31feb1bd; @synthesize=_delegate
@property(assign) BOOL drawsBackground;	// G=0x31ff0685; S=0x32185179; converted property
@property(assign, nonatomic) int keyboardType;	// G=0x321850c9; S=0x31feb1cd; 
@property(copy, nonatomic) NSString *placeholder;	// G=0x31fec091; S=0x31feb24d; 
@property(assign) BOOL pretendsIsInBar;	// G=0x32184b35; S=0x32184b4d; converted property
@property(copy, nonatomic) NSString *prompt;	// G=0x32185365; S=0x32185385; 
@property(copy, nonatomic) NSArray *scopeButtonTitles;	// G=0x32185099; S=0x3200ea29; 
@property(readonly, retain) UITextField *searchField;	// G=0x3206ae49; converted property
@property(assign, nonatomic, getter=isSearchResultsButtonSelected) BOOL searchResultsButtonSelected;	// G=0x32184a6d; S=0x321852e5; 
@property(assign, nonatomic) int selectedScopeButtonIndex;	// G=0x32184af5; S=0x3200e8d5; 
@property(assign, nonatomic) BOOL showsBookmarkButton;	// G=0x32184a85; S=0x321852a5; 
@property(assign, nonatomic) BOOL showsCancelButton;	// G=0x320acba5; S=0x320b0f21; 
@property(assign, nonatomic) BOOL showsScopeBar;	// G=0x32184b05; S=0x31feb4dd; 
@property(assign, nonatomic) BOOL showsSearchResultsButton;	// G=0x32184a55; S=0x32185325; 
@property(copy, nonatomic) NSString *text;	// G=0x321853fd; S=0x3206aa6d; 
@property(retain, nonatomic) UIColor *tintColor;	// G=0x32184b15; S=0x321851f1; @synthesize=_tintColor
@property(assign, nonatomic, getter=isTranslucent) BOOL translucent;	// G=0x32184a31; S=0x3218541d; 
@property(assign) BOOL usesEmbeddedAppearance;	// G=0x32184ab1; S=0x31febf3d; converted property
- (id)initWithCoder:(id)coder;	// 0x32185cc5
- (id)initWithFrame:(CGRect)frame;	// 0x31fe8d85
- (void)_bookmarkButtonPressed;	// 0x32184ea5
- (void)_cancelButtonPressed;	// 0x3206a8a9
- (void)_destroyCancelButton;	// 0x3206b3fd
- (void)_hideShowAnimationDidFinish;	// 0x320af5d9
- (BOOL)_isEnabled;	// 0x32184b69
- (BOOL)_isInBar;	// 0x31feb6b9
- (void)_populateArchivedSubviews:(id)subviews;	// 0x32185b85
- (void)_resultsListButtonPressed;	// 0x32184e4d
- (id)_scopeBar;	// 0x320adca9
- (void)_scopeChanged:(id)changed;	// 0x3200f049
- (void)_searchFieldBeginEditing;	// 0x3204eaad
- (void)_searchFieldEditingChanged;	// 0x3206720d
- (void)_searchFieldEndEditing;	// 0x3206b2a5
- (void)_searchFieldReturnPressed;	// 0x320ada99
- (void)_setAutoDisableCancelButton:(BOOL)button;	// 0x31febf21
- (void)_setCancelButtonBackgroundImage:(id)image forStates:(unsigned)states;	// 0x32184f35
- (void)_setCancelButtonText:(id)text;	// 0x3218505d
- (void)_setEnabled:(BOOL)enabled;	// 0x32184dc9
- (void)_setEnabled:(BOOL)enabled animated:(BOOL)animated;	// 0x32184ce1
- (void)_setShowsCancelButton:(BOOL)button;	// 0x3204f491
- (void)_setShowsSeparator:(BOOL)separator;	// 0x31feb101
- (void)_setUpScopeBar;	// 0x3200eba5
- (void)_setupCancelButton;	// 0x3204eb5d
- (void)_setupPromptLabel;	// 0x32186301
- (void)_setupSearchField;	// 0x31fe8ea1
- (void)_takeAppearanceFromNavigationBarAppearance:(id)navigationBarAppearance;	// 0x32184ee5
- (void)_updateOpacity;	// 0x31ff069d
- (void)_updateRightView;	// 0x31feaa39
- (void)_updateSearchFieldArt;	// 0x31feaf29
// declared property getter: - (int)autocapitalizationType;	// 0x32185109
// declared property getter: - (int)autocorrectionType;	// 0x321850e9
// converted property getter: - (id)backgroundImage;	// 0x321851d1
// declared property getter: - (int)barStyle;	// 0x32184a1d
- (BOOL)becomeFirstResponder;	// 0x32184e05
- (BOOL)canBecomeFirstResponder;	// 0x32184e29
- (BOOL)canResignFirstResponder;	// 0x32184de1
// converted property getter: - (id)cancelButton;	// 0x32184ac9
// converted property getter: - (BOOL)combinesLandscapeBars;	// 0x32184a99
// converted property getter: - (UIEdgeInsets)contentInset;	// 0x32184ad9
// converted property getter: - (id)controller;	// 0x32184a0d
- (void)dealloc;	// 0x321855c1
// declared property getter: - (id)delegate;	// 0x32184b25
// converted property getter: - (BOOL)drawsBackground;	// 0x31ff0685
- (void)encodeWithCoder:(id)coder;	// 0x32185701
- (BOOL)isElementAccessibilityExposedToInterfaceBuilder;	// 0x3218c3e5
- (BOOL)isFirstResponder;	// 0x31ff32cd
// declared property getter: - (BOOL)isSearchResultsButtonSelected;	// 0x32184a6d
// declared property getter: - (BOOL)isTranslucent;	// 0x32184a31
// declared property getter: - (int)keyboardType;	// 0x321850c9
- (void)layoutSubviews;	// 0x31fefd5d
- (void)movedToSuperview:(id)superview;	// 0x31feb891
// declared property getter: - (id)placeholder;	// 0x31fec091
// converted property getter: - (BOOL)pretendsIsInBar;	// 0x32184b35
// declared property getter: - (id)prompt;	// 0x32185365
- (BOOL)resignFirstResponder;	// 0x320108dd
// declared property getter: - (id)scopeButtonTitles;	// 0x32185099
// converted property getter: - (id)searchField;	// 0x3206ae49
// declared property getter: - (int)selectedScopeButtonIndex;	// 0x32184af5
// declared property setter: - (void)setAutocapitalizationType:(int)type;	// 0x31feb21d
// declared property setter: - (void)setAutocorrectionType:(int)type;	// 0x31feb1fd
// converted property setter: - (void)setBackgroundImage:(id)image;	// 0x3200bdcd
// declared property setter: - (void)setBarStyle:(int)style;	// 0x3201d3ed
// converted property setter: - (void)setCancelButton:(id)button;	// 0x32185129
// converted property setter: - (void)setCombinesLandscapeBars:(BOOL)bars;	// 0x31fec075
// converted property setter: - (void)setContentInset:(UIEdgeInsets)inset;	// 0x31fec439
// converted property setter: - (void)setController:(id)controller;	// 0x31febf11
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x31feb1bd
// converted property setter: - (void)setDrawsBackground:(BOOL)background;	// 0x32185179
// declared property setter: - (void)setKeyboardType:(int)type;	// 0x31feb1cd
// declared property setter: - (void)setPlaceholder:(id)placeholder;	// 0x31feb24d
// converted property setter: - (void)setPretendsIsInBar:(BOOL)bar;	// 0x32184b4d
// declared property setter: - (void)setPrompt:(id)prompt;	// 0x32185385
// declared property setter: - (void)setScopeButtonTitles:(id)titles;	// 0x3200ea29
// declared property setter: - (void)setSearchResultsButtonSelected:(BOOL)selected;	// 0x321852e5
// declared property setter: - (void)setSelectedScopeButtonIndex:(int)index;	// 0x3200e8d5
// declared property setter: - (void)setShowsBookmarkButton:(BOOL)button;	// 0x321852a5
// declared property setter: - (void)setShowsCancelButton:(BOOL)button;	// 0x320b0f21
- (void)setShowsCancelButton:(BOOL)button animated:(BOOL)animated;	// 0x320af1fd
// declared property setter: - (void)setShowsScopeBar:(BOOL)bar;	// 0x31feb4dd
// declared property setter: - (void)setShowsSearchResultsButton:(BOOL)button;	// 0x32185325
// declared property setter: - (void)setText:(id)text;	// 0x3206aa6d
// declared property setter: - (void)setTintColor:(id)color;	// 0x321851f1
// declared property setter: - (void)setTranslucent:(BOOL)translucent;	// 0x3218541d
// converted property setter: - (void)setUsesEmbeddedAppearance:(BOOL)appearance;	// 0x31febf3d
// declared property getter: - (BOOL)showsBookmarkButton;	// 0x32184a85
// declared property getter: - (BOOL)showsCancelButton;	// 0x320acba5
// declared property getter: - (BOOL)showsScopeBar;	// 0x32184b05
// declared property getter: - (BOOL)showsSearchResultsButton;	// 0x32184a55
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x31feb511
// declared property getter: - (id)text;	// 0x321853fd
- (BOOL)textField:(id)field shouldChangeCharactersInRange:(NSRange)range replacementString:(id)string;	// 0x32066a89
- (BOOL)textFieldShouldBeginEditing:(id)textField;	// 0x3204ceb1
- (BOOL)textFieldShouldEndEditing:(id)textField;	// 0x3206aecd
// declared property getter: - (id)tintColor;	// 0x32184b15
// converted property getter: - (BOOL)usesEmbeddedAppearance;	// 0x32184ab1
- (void)willMoveToSuperview:(id)superview;	// 0x31feb871
@end
