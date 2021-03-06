/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "NSCoding.h"
#import "UIGestureRecognizerDelegate.h"
#import "UIView.h"

@class NSIndexPath, UIImageView, UILabel, UIButton, UITableView, UILongPressGestureRecognizer, NSTimer, UIColor, UIImage, UITextField, _UITableViewCellOldEditingData, NSString;

@interface UITableViewCell : UIView <NSCoding, UIGestureRecognizerDelegate> {
	UITableView *_tableView;	// 84 = 0x54
	id _layoutManager;	// 88 = 0x58
	id _target;	// 92 = 0x5c
	SEL _editAction;	// 96 = 0x60
	SEL _accessoryAction;	// 100 = 0x64
	id _oldEditingData;	// 104 = 0x68
	id _editingData;	// 108 = 0x6c
	float _rightMargin;	// 112 = 0x70
	int _indentationLevel;	// 116 = 0x74
	float _indentationWidth;	// 120 = 0x78
	NSString *_reuseIdentifier;	// 124 = 0x7c
	UIView *_contentView;	// 128 = 0x80
	UIImageView *_imageView;	// 132 = 0x84
	UILabel *_textLabel;	// 136 = 0x88
	UILabel *_detailTextLabel;	// 140 = 0x8c
	UIView *_backgroundView;	// 144 = 0x90
	UIView *_selectedBackgroundView;	// 148 = 0x94
	UIView *_multipleSelectionBackgroundView;	// 152 = 0x98
	UIView *_selectedOverlayView;	// 156 = 0x9c
	float _selectionFadeDuration;	// 160 = 0xa0
	UIColor *_backgroundColor;	// 164 = 0xa4
	UIColor *_separatorColor;	// 168 = 0xa8
	UIColor *_topShadowColor;	// 172 = 0xac
	UIColor *_bottomShadowColor;	// 176 = 0xb0
	UIColor *_sectionBorderColor;	// 180 = 0xb4
	UIView *_floatingSeparatorView;	// 184 = 0xb8
	UIView *_topShadowAnimationView;	// 188 = 0xbc
	UIView *_bottomShadowAnimationView;	// 192 = 0xc0
	id _badge;	// 196 = 0xc4
	CFDictionaryRef _unhighlightedStates;	// 200 = 0xc8
	id _selectionSegueTemplate;	// 204 = 0xcc
	id _accessoryActionSegueTemplate;	// 208 = 0xd0
	struct {
		unsigned showingDeleteConfirmation : 1;
		unsigned separatorStyle : 3;
		unsigned selectionStyle : 3;
		unsigned selectionFadeFraction : 11;
		unsigned editing : 1;
		unsigned editingStyle : 3;
		unsigned accessoryType : 3;
		unsigned editingAccessoryType : 3;
		unsigned showsAccessoryWhenEditing : 1;
		unsigned showsReorderControl : 1;
		unsigned showDisclosure : 1;
		unsigned showTopSeparator : 1;
		unsigned hideTopSeparatorDuringReordering : 1;
		unsigned disclosureClickable : 1;
		unsigned disclosureStyle : 1;
		unsigned showingRemoveControl : 1;
		unsigned sectionLocation : 3;
		unsigned tableViewStyle : 1;
		unsigned shouldIndentWhileEditing : 1;
		unsigned fontSet : 1;
		unsigned usingDefaultSelectedBackgroundView : 1;
		unsigned wasSwiped : 1;
		unsigned highlighted : 1;
		unsigned separatorDirty : 1;
		unsigned drawn : 1;
		unsigned drawingDisabled : 1;
		unsigned style : 12;
		unsigned showingMenu : 1;
		unsigned clipsContents : 1;
		unsigned animatingSelection : 1;
		unsigned backgroundColorSet : 1;
		unsigned needsSetup : 1;
		unsigned dontDrawTopShadow : 1;
		unsigned usingMultiselectbackgroundView : 1;
		unsigned layoutLoopCounter : 2;
	} _tableCellFlags;	// 212 = 0xd4
	UIButton *_accessoryView;	// 224 = 0xe0
	UIButton *_editingAccessoryView;	// 228 = 0xe4
	UIView *_customAccessoryView;	// 232 = 0xe8
	UIView *_customEditingAccessoryView;	// 236 = 0xec
	UIView *_separatorView;	// 240 = 0xf0
	UIView *_topSeparatorView;	// 244 = 0xf4
	UIView *_topShadowView;	// 248 = 0xf8
	UITextField *_editableTextField;	// 252 = 0xfc
	double _lastSelectionTime;	// 256 = 0x100
	NSTimer *_deselectTimer;	// 264 = 0x108
	float _textFieldOffset;	// 268 = 0x10c
	SEL _returnAction;	// 272 = 0x110
	UIColor *_selectionTintColor;	// 276 = 0x114
	UIColor *_accessoryTintColor;	// 280 = 0x118
	UIImage *_reorderControlImage;	// 284 = 0x11c
	UILongPressGestureRecognizer *_menuGesture;	// 288 = 0x120
	id _highlightingSupport;	// 292 = 0x124
	NSIndexPath *_representedIndexPath;	// 296 = 0x128
}
@property(assign) SEL accessoryAction;	// G=0x3048abf1; S=0x3048ab05; converted property
@property(retain) id accessoryActionSegueTemplate;	// G=0x30488151; S=0x3048810d; converted property
@property(assign, nonatomic) int accessoryType;	// G=0x3025f209; S=0x3025fc2d; 
@property(retain, nonatomic) UIView *accessoryView;	// G=0x302ebd71; S=0x302dc955; 
@property(retain) UIColor *backgroundColor;	// G=0x302654a9; S=0x3026092d; converted property
@property(retain, nonatomic) UIView *backgroundView;	// G=0x302f2851; S=0x302f26e9; 
@property(retain) UIColor *bottomShadowColor;	// G=0x302f3d69; S=0x30264fbd; converted property
@property(assign) BOOL clipsContents;	// G=0x30489885; S=0x3048984d; converted property
@property(readonly, assign, nonatomic) UIView *contentView;	// G=0x3025f9c1; 
@property(readonly, assign, nonatomic) UILabel *detailTextLabel;	// G=0x302e1c49; 
@property(assign) BOOL drawingEnabled;	// G=0x303d5635; S=0x30488ce1; converted property
@property(assign, nonatomic, getter=_drawsTopShadow, setter=_setDrawsTopShadow:) BOOL drawsTopShadow;	// G=0x302f1cb1; S=0x30264a7d; 
@property(assign) SEL editAction;	// G=0x3048aaf5; S=0x3048aae5; converted property
@property(readonly, assign, nonatomic) UITextField *editableTextField;	// G=0x303c134d; 
@property(assign, nonatomic, getter=isEditing) BOOL editing;	// G=0x3024db51; S=0x3048989d; 
@property(assign, nonatomic) int editingAccessoryType;	// G=0x30260029; S=0x302d5a29; 
@property(retain, nonatomic) UIView *editingAccessoryView;	// G=0x304897ad; S=0x3035a425; 
@property(readonly, assign, nonatomic) int editingStyle;	// G=0x302d5b65; 
@property(retain) id font;	// G=0x30488fd5; S=0x30488fc1; converted property
@property(assign) BOOL hidesAccessoryWhenEditing;	// G=0x30489831; S=0x304897e5; converted property
@property(assign, nonatomic, getter=isHighlighted) BOOL highlighted;	// G=0x302bb9a9; S=0x3026579d; 
@property(retain) id image;	// G=0x30489205; S=0x304891d9; converted property
@property(readonly, assign, nonatomic) UIImageView *imageView;	// G=0x302924c1; 
@property(assign, nonatomic) int indentationLevel;	// G=0x30264239; S=0x3036f3f1; 
@property(assign, nonatomic) float indentationWidth;	// G=0x30264249; S=0x3036f419; 
@property(retain) id layoutManager;	// G=0x3025e6d5; S=0x3025e691; converted property
@property(assign) int lineBreakMode;	// G=0x304890f1; S=0x304890ad; converted property
@property(retain, nonatomic) UIView *multipleSelectionBackgroundView;	// G=0x30489305; S=0x3048933d; 
@property(assign, nonatomic, getter=_needsSetup, setter=_setNeedsSetup:) BOOL needsSetup;	// G=0x302a5df9; S=0x3024df35; 
@property(retain, nonatomic) _UITableViewCellOldEditingData *oldEditingData;	// G=0x30487095; S=0x304870e5; 
@property(assign) SEL returnAction;	// G=0x3048ba4d; S=0x3048ba3d; converted property
@property(readonly, assign, nonatomic) NSString *reuseIdentifier;	// G=0x302a65c9; 
@property(retain) UIColor *sectionBorderColor;	// G=0x302f2a89; S=0x302650a9; converted property
@property(assign) int sectionLocation;	// G=0x3025eeb5; S=0x3048adfd; converted property
@property(assign, nonatomic, getter=isSelected) BOOL selected;	// G=0x30292485; S=0x302654f9; 
@property(retain, nonatomic) UIView *selectedBackgroundView;	// G=0x302dca99; S=0x30292129; 
@property(retain) id selectedImage;	// G=0x30489259; S=0x3048922d; converted property
@property(readonly, retain) UIView *selectedOverlayView;	// G=0x304895fd; converted property
@property(retain) id selectedTextColor;	// G=0x304891b1; S=0x30489185; converted property
@property(assign) float selectionFadeDuration;	// G=0x3035bb8d; S=0x3025e51d; converted property
@property(retain) id selectionSegueTemplate;	// G=0x303579bd; S=0x30488189; converted property
@property(assign, nonatomic) int selectionStyle;	// G=0x302f3781; S=0x3024db6d; 
@property(retain) UIColor *selectionTintColor;	// G=0x30355181; S=0x3048954d; converted property
@property(retain) UIColor *separatorColor;	// G=0x302f37e9; S=0x302648bd; converted property
@property(assign) int separatorStyle;	// G=0x302a547d; S=0x30245135; converted property
@property(assign, nonatomic) BOOL shouldIndentWhileEditing;	// G=0x302f1345; S=0x30489671; 
@property(readonly, assign, nonatomic) BOOL showingDeleteConfirmation;	// G=0x302624a1; 
@property(assign, nonatomic) BOOL showsReorderControl;	// G=0x30292965; S=0x302e18f9; 
@property(retain) id tableBackgroundColor;	// G=0x302f3c4d; S=0x304894a5; converted property
@property(assign) int tableViewStyle;	// G=0x3025eabd; S=0x302606bd; converted property
@property(retain) id target;	// G=0x3048aad5; S=0x3048a9ed; converted property
@property(retain) id text;	// G=0x30488f31; S=0x30488e79; converted property
@property(assign) int textAlignment;	// G=0x30489085; S=0x30489059; converted property
@property(retain) id textColor;	// G=0x3048915d; S=0x30489119; converted property
@property(assign, nonatomic, setter=setTextFieldOffset:) float textFieldOffset;	// G=0x303c22b5; S=0x303c1885; 
@property(readonly, assign, nonatomic) UILabel *textLabel;	// G=0x302e1951; 
@property(retain) UIColor *topShadowColor;	// G=0x302f29c1; S=0x302649b9; converted property
@property(assign, nonatomic) BOOL wasSwiped;	// G=0x3029294d; S=0x3024de25; 
+ (id)_defaultTopShadowColor;	// 0x30359fb9
- (id)init;	// 0x304881cd
- (id)initWithCoder:(id)coder;	// 0x30488229
- (id)initWithFrame:(CGRect)frame;	// 0x304881fd
- (id)initWithFrame:(CGRect)frame reuseIdentifier:(id)identifier;	// 0x30399de1
- (id)initWithStyle:(int)style reuseIdentifier:(id)identifier;	// 0x3025e075
- (SEL)_accessoryAction;	// 0x3048b541
- (id)_accessoryTintColor;	// 0x30489771
- (id)_accessoryView:(BOOL)view;	// 0x3025eeed
- (void)_animateFloatingSeparatorForInsertion:(BOOL)insertion withRowAnimation:(int)rowAnimation;	// 0x302a5039
- (void)_animateInnerShadowForInsertion:(BOOL)insertion withRowAnimation:(int)rowAnimation;	// 0x302a5491
- (BOOL)_backgroundColorSet;	// 0x30260791
- (float)_backgroundInset;	// 0x3025ede9
- (id)_backgroundView:(BOOL)view;	// 0x30262601
- (id)_badge;	// 0x302fc9f5
- (id)_badge:(BOOL)badge;	// 0x302624b9
- (id)_badgeText;	// 0x302fc9c9
- (BOOL)_canDrawContent;	// 0x3025e38d
- (void)_cancelInternalPerformRequests;	// 0x303551bd
- (void)_clearOpaqueViewState:(id)state;	// 0x303576b5
- (id)_contentBackgroundColor;	// 0x302e1bb9
- (id)_createRemoveControlForStyle:(int)style;	// 0x30487859
- (void)_createReorderControlIfNeeded;	// 0x30487129
- (id)_currentAccessoryView:(BOOL)view;	// 0x30487601
- (id)_customAccessoryView:(BOOL)view;	// 0x30263649
- (id)_customEditingAccessoryView:(BOOL)view;	// 0x302640f1
- (id)_defaultAccessoryView;	// 0x3025ef25
- (id)_defaultFont;	// 0x30487d2d
- (void)_delayedDeselect;	// 0x30489561
- (CGRect)_delegateConfirmationRect;	// 0x30489a5d
- (void)_descendent:(id)descendent didMoveFromSuperview:(id)superview toSuperview:(id)superview3;	// 0x303577a9
- (void)_descendent:(id)descendent willMoveFromSuperview:(id)superview toSuperview:(id)superview3;	// 0x30357651
- (void)_deselectAnimationFinished;	// 0x3035ccbd
- (id)_detailTextLabel;	// 0x302e1c5d
- (id)_detailTextLabel:(BOOL)label;	// 0x302642dd
- (void)_didCreateContentView;	// 0x30488cd9
- (id)_disclosureImage:(BOOL)image;	// 0x30260041
- (id)_disclosurePressedImage:(BOOL)image;	// 0x302603b5
- (void)_drawContentInRect:(CGRect)rect selected:(BOOL)selected;	// 0x304895f5
- (void)_drawSeparatorInRect:(CGRect)rect;	// 0x302bb889
- (BOOL)_drawsTopSeparatorDuringReordering;	// 0x303be401
// declared property getter: - (BOOL)_drawsTopShadow;	// 0x302f1cb1
- (id)_editableTextField;	// 0x303c1361
- (id)_editableTextField:(BOOL)field;	// 0x303c1fa1
- (id)_editingAccessoryView:(BOOL)view;	// 0x30262c85
- (float)_editingButtonOffset;	// 0x3048b325
- (void)_editingTransitionAnimationDidStop:(id)_editingTransitionAnimation finished:(id)finished context:(void *)context;	// 0x303bdf45
- (void)_finishedFadingGrabber:(id)grabber finished:(BOOL)finished;	// 0x30487461
- (BOOL)_gestureRecognizerShouldBegin:(id)_gestureRecognizer;	// 0x30487d95
- (void)_grabberBeganReorder:(id)reorder;	// 0x303be021
- (void)_grabberDragged:(id)dragged yDelta:(float)delta;	// 0x3048aee1
- (void)_grabberReleased:(id)released;	// 0x303bf5e1
- (BOOL)_hasAccessoryView;	// 0x30381a55
- (BOOL)_hasEditingAccessoryView;	// 0x303bdbad
- (CGSize)_imageInsetSize;	// 0x30487d85
- (id)_imageView;	// 0x302924d5
- (id)_imageView:(BOOL)view;	// 0x3026425d
- (id)_indexPath;	// 0x3048b991
- (BOOL)_isCurrentlyConsideredHighlighted;	// 0x30260cdd
- (BOOL)_isHighlighted;	// 0x302e1c19
- (BOOL)_isReorderable;	// 0x3048b2f9
- (BOOL)_isUsingOldStyleMultiselection;	// 0x3048b95d
- (void)_layoutSubviewsAnimated:(BOOL)animated;	// 0x304879b9
- (void)_longPressGestureRecognized:(id)recognized;	// 0x30487de1
- (void)_menuDismissed:(id)dismissed;	// 0x30487f91
- (id)_multiselectBackgroundColor;	// 0x30355749
- (void)_multiselectColorChanged;	// 0x3048b819
// declared property getter: - (BOOL)_needsSetup;	// 0x302a5df9
- (void)_performAction:(SEL)action sender:(id)sender;	// 0x3048ae11
- (void)_populateArchivedSubviews:(id)subviews;	// 0x304888b9
- (void)_releaseRemoveControl;	// 0x30487915
- (void)_releaseReorderingControl;	// 0x304872d1
- (id)_removeControl;	// 0x30245261
- (void)_removeFloatingSeparator;	// 0x302a62a9
- (void)_removeInnerShadow;	// 0x302a62e9
- (void)_removeRemoveControl;	// 0x302a6d15
- (id)_reorderControlImage;	// 0x303bdf01
- (id)_reorderingControl;	// 0x30487255
- (id)_reorderingSeparatorView;	// 0x30487291
- (void)_resetSelectionTimer;	// 0x302a6cbd
- (void)_saveOpaqueViewState:(id)state;	// 0x303558e9
- (id)_scriptingInfo;	// 0x3048b6a9
- (id)_selectedBackgroundView:(BOOL)view;	// 0x30262611
- (void)_setAccessoryAction:(SEL)action;	// 0x3048b455
- (void)_setAccessoryTintColor:(id)color;	// 0x304896e9
- (void)_setBadgeText:(id)text;	// 0x30489281
- (void)_setDrawsTopSeparator:(BOOL)separator;	// 0x302a6c51
- (void)_setDrawsTopSeparatorDuringReordering:(BOOL)reordering;	// 0x304880d5
// declared property setter: - (void)_setDrawsTopShadow:(BOOL)shadow;	// 0x30264a7d
- (void)_setEditingStyle:(int)style;	// 0x3024dd99
- (void)_setFont:(id)font layout:(BOOL)layout;	// 0x30488f5d
- (void)_setGrabberHidden:(BOOL)hidden;	// 0x30487399
- (void)_setHiddenForReuse:(BOOL)reuse;	// 0x302452f1
- (void)_setIndexPath:(id)path;	// 0x3048b9c9
- (void)_setMultiselecting:(BOOL)multiselecting;	// 0x3024de5d
// declared property setter: - (void)_setNeedsSetup:(BOOL)setup;	// 0x3024df35
- (void)_setOpaque:(BOOL)opaque forSubview:(id)subview;	// 0x30355ce9
- (void)_setReorderControlImage:(id)image;	// 0x3048ae9d
- (void)_setReordering:(BOOL)reordering;	// 0x303be70d
- (void)_setSelectionStyle:(int)style selectionTintColor:(id)color;	// 0x3024db85
- (void)_setShouldIndentWhileEditing:(BOOL)_set;	// 0x3024ddb1
- (void)_setShowingDeleteConfirmation:(BOOL)confirmation;	// 0x3024de41
- (void)_setShowsReorderControl:(BOOL)control;	// 0x3024ddcd
- (void)_setTableBackgroundCGColor:(CGColorRef)color withSystemColorName:(id)systemColorName;	// 0x302647d9
- (void)_setTableView:(id)view;	// 0x3048ae8d
- (void)_setTarget:(id)target;	// 0x3048b35d
- (void)_setupMenuGesture;	// 0x3025f2a9
- (void)_setupSelectedBackgroundView;	// 0x302dcae5
- (void)_setupTableViewCellCommon;	// 0x3025e505
- (BOOL)_shouldSaveOpaqueStateForView:(id)view;	// 0x3048b859
- (void)_showReorderControl;	// 0x30487a7d
- (void)_startToEditTextField;	// 0x3048b7dd
- (void)_syncAccessoryViewsIfNecessary;	// 0x3025ff0d
- (id)_tableView;	// 0x3025ee45
- (id)_target;	// 0x3048b445
- (CGSize)_textInsetSize;	// 0x30487d75
- (id)_textLabel;	// 0x302e1961
- (id)_textLabel:(BOOL)label;	// 0x30264289
- (id)_tintedDisclosureImagePressed:(BOOL)pressed;	// 0x30487471
- (id)_titleForDeleteConfirmationButton;	// 0x303db7ed
- (void)_topShadowDidFadeOut;	// 0x30487f55
- (id)_topShadowView:(BOOL)view;	// 0x302642b5
- (void)_uiRemoveControlMinusButtonHideAnimationDone:(id)done;	// 0x3048b069
- (void)_updateAndCacheBackgroundColorForHighlightIgnoringSelection:(BOOL)highlightIgnoringSelection;	// 0x30355881
- (void)_updateContentClip;	// 0x30260d11
- (void)_updateHighlightColors;	// 0x302a6e89
- (void)_updateHighlightColorsForAnimationHalfwayPoint;	// 0x3035bb9d
- (void)_updateHighlightColorsForView:(id)view highlighted:(BOOL)highlighted;	// 0x30260101
- (void)_updateSeparatorContent;	// 0x3026430d
- (void)_updateTopShadowView:(BOOL)view;	// 0x30264ac1
- (void)_willBeDeleted;	// 0x3048b099
// converted property getter: - (SEL)accessoryAction;	// 0x3048abf1
// converted property getter: - (id)accessoryActionSegueTemplate;	// 0x30488151
- (CGRect)accessoryRectForBounds:(CGRect)bounds;	// 0x3048a67d
// declared property getter: - (int)accessoryType;	// 0x3025f209
// declared property getter: - (id)accessoryView;	// 0x302ebd71
// converted property getter: - (id)backgroundColor;	// 0x302654a9
- (CGRect)backgroundRectForBounds:(CGRect)bounds;	// 0x30489b05
// declared property getter: - (id)backgroundView;	// 0x302f2851
// converted property getter: - (id)bottomShadowColor;	// 0x302f3d69
- (BOOL)canPerformAction:(SEL)action withSender:(id)sender;	// 0x30488039
// converted property getter: - (BOOL)clipsContents;	// 0x30489885
- (CGRect)contentRectForBounds:(CGRect)bounds;	// 0x30489bb9
- (CGRect)contentRectForState:(unsigned)state;	// 0x3048ac01
// declared property getter: - (id)contentView;	// 0x3025f9c1
- (void)copy:(id)copy;	// 0x304880ad
- (unsigned)currentStateMask;	// 0x302a39b9
- (void)cut:(id)cut;	// 0x30488099
- (void)dealloc;	// 0x3035bc91
- (void)deleteConfirmationControlWasCancelled:(id)cancelled;	// 0x3048b241
- (void)deleteConfirmationControlWasClicked:(id)clicked;	// 0x303dc811
// declared property getter: - (id)detailTextLabel;	// 0x302e1c49
- (void)didMoveToSuperview;	// 0x302653f5
- (void)didTransitionToState:(unsigned)state;	// 0x3035b505
// converted property getter: - (BOOL)drawingEnabled;	// 0x303d5635
// converted property getter: - (SEL)editAction;	// 0x3048aaf5
- (void)editControlWasClicked:(id)clicked;	// 0x3048b1c1
- (CGRect)editRectForBounds:(CGRect)bounds;	// 0x3048a63d
// declared property getter: - (id)editableTextField;	// 0x303c134d
// declared property getter: - (int)editingAccessoryType;	// 0x30260029
// declared property getter: - (id)editingAccessoryView;	// 0x304897ad
- (id)editingData:(BOOL)data;	// 0x302624e5
// declared property getter: - (int)editingStyle;	// 0x302d5b65
- (void)encodeWithCoder:(id)coder;	// 0x30488941
// converted property getter: - (id)font;	// 0x30488fd5
// converted property getter: - (BOOL)hidesAccessoryWhenEditing;	// 0x30489831
// converted property getter: - (id)image;	// 0x30489205
- (CGRect)imageRectForContentRect:(CGRect)contentRect;	// 0x3048a4b1
// declared property getter: - (id)imageView;	// 0x302924c1
// declared property getter: - (int)indentationLevel;	// 0x30264239
// declared property getter: - (float)indentationWidth;	// 0x30264249
- (void)insertControl:(id)control shouldInsertWithTarget:(id)target;	// 0x3048b101
- (BOOL)isAtLeastHalfSelected;	// 0x304895a1
// declared property getter: - (BOOL)isEditing;	// 0x3024db51
- (BOOL)isElementAccessibilityExposedToInterfaceBuilder;	// 0x304afc35
// declared property getter: - (BOOL)isHighlighted;	// 0x302bb9a9
// declared property getter: - (BOOL)isSelected;	// 0x30292485
// converted property getter: - (id)layoutManager;	// 0x3025e6d5
- (void)layoutSubviews;	// 0x30260f31
// converted property getter: - (int)lineBreakMode;	// 0x304890f1
// declared property getter: - (id)multipleSelectionBackgroundView;	// 0x30489305
// declared property getter: - (id)oldEditingData;	// 0x30487095
- (void)paste:(id)paste;	// 0x304880c1
- (void)prepareForReuse;	// 0x302a6a11
- (CGRect)removeControl:(id)control endFrameForTarget:(id)target;	// 0x3048b5f5
- (CGRect)removeControl:(id)control startFrameForTarget:(id)target;	// 0x3048b555
- (void)removeControl:(id)control wasCanceledForTarget:(id)target;	// 0x3048b661
- (void)removeControl:(id)control willRemoveTarget:(id)target;	// 0x3048b0c1
- (void)removeControlWillHideRemoveConfirmation:(id)removeControl;	// 0x3048b131
- (void)removeEditingData;	// 0x302a6d69
- (void)removeFromSuperview;	// 0x30350819
- (CGRect)reorderRectForBounds:(CGRect)bounds;	// 0x3048a8e5
// converted property getter: - (SEL)returnAction;	// 0x3048ba4d
// declared property getter: - (id)reuseIdentifier;	// 0x302a65c9
// converted property getter: - (id)sectionBorderColor;	// 0x302f2a89
// converted property getter: - (int)sectionLocation;	// 0x3025eeb5
// declared property getter: - (id)selectedBackgroundView;	// 0x302dca99
- (void)selectedBackgroundViewChange:(id)change finished:(id)finished context:(id)context;	// 0x304892d1
// converted property getter: - (id)selectedImage;	// 0x30489259
// converted property getter: - (id)selectedOverlayView;	// 0x304895fd
// converted property getter: - (id)selectedTextColor;	// 0x304891b1
// converted property getter: - (float)selectionFadeDuration;	// 0x3035bb8d
- (float)selectionPercent;	// 0x304895c5
// converted property getter: - (id)selectionSegueTemplate;	// 0x303579bd
// declared property getter: - (int)selectionStyle;	// 0x302f3781
// converted property getter: - (id)selectionTintColor;	// 0x30355181
// converted property getter: - (id)separatorColor;	// 0x302f37e9
// converted property getter: - (int)separatorStyle;	// 0x302a547d
// converted property setter: - (void)setAccessoryAction:(SEL)action;	// 0x3048ab05
// converted property setter: - (void)setAccessoryActionSegueTemplate:(id)aTemplate;	// 0x3048810d
// declared property setter: - (void)setAccessoryType:(int)type;	// 0x3025fc2d
// declared property setter: - (void)setAccessoryView:(id)view;	// 0x302dc955
// converted property setter: - (void)setBackgroundColor:(id)color;	// 0x3026092d
// declared property setter: - (void)setBackgroundView:(id)view;	// 0x302f26e9
// converted property setter: - (void)setBottomShadowColor:(id)color;	// 0x30264fbd
// converted property setter: - (void)setClipsContents:(BOOL)contents;	// 0x3048984d
// converted property setter: - (void)setDrawingEnabled:(BOOL)enabled;	// 0x30488ce1
// converted property setter: - (void)setEditAction:(SEL)action;	// 0x3048aae5
// declared property setter: - (void)setEditing:(BOOL)editing;	// 0x3048989d
- (void)setEditing:(BOOL)editing animated:(BOOL)animated;	// 0x3024d689
// declared property setter: - (void)setEditingAccessoryType:(int)type;	// 0x302d5a29
// declared property setter: - (void)setEditingAccessoryView:(id)view;	// 0x3035a425
- (void)setEditingStyle:(int)style;	// 0x3048960d
// converted property setter: - (void)setFont:(id)font;	// 0x30488fc1
- (void)setFrame:(CGRect)frame;	// 0x3025e3d9
// converted property setter: - (void)setHidesAccessoryWhenEditing:(BOOL)editing;	// 0x304897e5
// declared property setter: - (void)setHighlighted:(BOOL)highlighted;	// 0x3026579d
- (void)setHighlighted:(BOOL)highlighted animated:(BOOL)animated;	// 0x302657b5
// converted property setter: - (void)setImage:(id)image;	// 0x304891d9
// declared property setter: - (void)setIndentationLevel:(int)level;	// 0x3036f3f1
// declared property setter: - (void)setIndentationWidth:(float)width;	// 0x3036f419
// converted property setter: - (void)setLayoutManager:(id)manager;	// 0x3025e691
// converted property setter: - (void)setLineBreakMode:(int)mode;	// 0x304890ad
// declared property setter: - (void)setMultipleSelectionBackgroundView:(id)view;	// 0x3048933d
// declared property setter: - (void)setOldEditingData:(id)data;	// 0x304870e5
- (void)setPlaceHolderValue:(id)value;	// 0x3048ba0d
// converted property setter: - (void)setReturnAction:(SEL)action;	// 0x3048ba3d
- (void)setReuseIdentifier:(id)identifier;	// 0x30489505
// converted property setter: - (void)setSectionBorderColor:(id)color;	// 0x302650a9
// converted property setter: - (void)setSectionLocation:(int)location;	// 0x3048adfd
- (void)setSectionLocation:(int)location animated:(BOOL)animated;	// 0x3024e1d9
// declared property setter: - (void)setSelected:(BOOL)selected;	// 0x302654f9
- (void)setSelected:(BOOL)selected animated:(BOOL)animated;	// 0x30265511
// declared property setter: - (void)setSelectedBackgroundView:(id)view;	// 0x30292129
- (void)setSelectedBackgroundView:(id)view animated:(BOOL)animated;	// 0x30292141
// converted property setter: - (void)setSelectedImage:(id)image;	// 0x3048922d
// converted property setter: - (void)setSelectedTextColor:(id)color;	// 0x30489185
// converted property setter: - (void)setSelectionFadeDuration:(float)duration;	// 0x3025e51d
// converted property setter: - (void)setSelectionSegueTemplate:(id)aTemplate;	// 0x30488189
// declared property setter: - (void)setSelectionStyle:(int)style;	// 0x3024db6d
// converted property setter: - (void)setSelectionTintColor:(id)color;	// 0x3048954d
// converted property setter: - (void)setSeparatorColor:(id)color;	// 0x302648bd
// converted property setter: - (void)setSeparatorStyle:(int)style;	// 0x30245135
// declared property setter: - (void)setShouldIndentWhileEditing:(BOOL)indentWhileEditing;	// 0x30489671
- (void)setShowingDeleteConfirmation:(BOOL)confirmation;	// 0x304898b1
// declared property setter: - (void)setShowsReorderControl:(BOOL)control;	// 0x302e18f9
// converted property setter: - (void)setTableBackgroundColor:(id)color;	// 0x304894a5
// converted property setter: - (void)setTableViewStyle:(int)style;	// 0x302606bd
// converted property setter: - (void)setTarget:(id)target;	// 0x3048a9ed
// converted property setter: - (void)setText:(id)text;	// 0x30488e79
// converted property setter: - (void)setTextAlignment:(int)alignment;	// 0x30489059
// converted property setter: - (void)setTextColor:(id)color;	// 0x30489119
// declared property setter: - (void)setTextFieldOffset:(float)offset;	// 0x303c1885
// converted property setter: - (void)setTopShadowColor:(id)color;	// 0x302649b9
// declared property setter: - (void)setWasSwiped:(BOOL)swiped;	// 0x3024de25
// declared property getter: - (BOOL)shouldIndentWhileEditing;	// 0x302f1345
- (void)showSelectedBackgroundView:(BOOL)view animated:(BOOL)animated;	// 0x30355201
// declared property getter: - (BOOL)showingDeleteConfirmation;	// 0x302624a1
// declared property getter: - (BOOL)showsReorderControl;	// 0x30292965
- (int)style;	// 0x302642c5
// converted property getter: - (id)tableBackgroundColor;	// 0x302f3c4d
// converted property getter: - (int)tableViewStyle;	// 0x3025eabd
// converted property getter: - (id)target;	// 0x3048aad5
// converted property getter: - (id)text;	// 0x30488f31
// converted property getter: - (int)textAlignment;	// 0x30489085
// converted property getter: - (id)textColor;	// 0x3048915d
- (void)textFieldDidBecomeFirstResponder:(id)textField;	// 0x3048ba39
// declared property getter: - (float)textFieldOffset;	// 0x303c22b5
// declared property getter: - (id)textLabel;	// 0x302e1951
- (CGRect)textRectForContentRect:(CGRect)contentRect;	// 0x30489fcd
// converted property getter: - (id)topShadowColor;	// 0x302f29c1
- (void)touchesBegan:(id)began withEvent:(id)event;	// 0x30353f7d
- (void)touchesCancelled:(id)cancelled withEvent:(id)event;	// 0x3048ad9d
- (void)touchesEnded:(id)ended withEvent:(id)event;	// 0x30356555
- (void)touchesMoved:(id)moved withEvent:(id)event;	// 0x3048ac51
// declared property getter: - (BOOL)wasSwiped;	// 0x3029294d
- (void)willMoveToSuperview:(id)superview;	// 0x30265129
- (void)willTransitionToState:(unsigned)state;	// 0x3035a8c1
@end

