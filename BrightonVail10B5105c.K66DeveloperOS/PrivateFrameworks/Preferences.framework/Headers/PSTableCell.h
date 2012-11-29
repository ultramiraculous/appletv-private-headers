/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

#import <UITableViewCell.h> // Unknown library

@class PSSpecifier, NSString, UIImageView, UIView;

@interface PSTableCell : UITableViewCell {
	id _value;	// 300 = 0x12c
	UIImageView *_checkedImageView;	// 304 = 0x130
	BOOL _checked;	// 308 = 0x134
	BOOL _shouldHideTitle;	// 309 = 0x135
	NSString *_hiddenTitle;	// 312 = 0x138
	int _alignment;	// 316 = 0x13c
	SEL _pAction;	// 320 = 0x140
	id _pTarget;	// 324 = 0x144
	BOOL _cellEnabled;	// 328 = 0x148
	PSSpecifier *_specifier;	// 332 = 0x14c
	int _type;	// 336 = 0x150
	BOOL _lazyIcon;	// 340 = 0x154
	BOOL _lazyIconDontUnload;	// 341 = 0x155
	BOOL _lazyIconForceSynchronous;	// 342 = 0x156
	NSString *_lazyIconAppID;	// 344 = 0x158
	UIView *_topShadow;	// 348 = 0x15c
	UIView *_topEtchLine;	// 352 = 0x160
	UIView *_bottomEtchLine;	// 356 = 0x164
	BOOL _etch;	// 360 = 0x168
	BOOL _reusedCell;	// 361 = 0x169
}
@property(assign) SEL action;	// G=0x3160e911; S=0x3160e901; converted property
@property(assign) BOOL cellEnabled;	// G=0x3160e9d5; S=0x3160e921; converted property
@property(assign, getter=isChecked) BOOL checked;	// G=0x3160e725; S=0x3160e539; converted property
@property(assign, nonatomic) BOOL reusedCell;	// G=0x3160ec4d; S=0x3160ec5d; @synthesize=_reusedCell
@property(retain, nonatomic) PSSpecifier *specifier;	// G=0x3160ec0d; S=0x3160ec1d; @synthesize=_specifier
@property(retain) id target;	// G=0x3160e8f1; S=0x3160e8e1; converted property
@property(retain) id title;	// G=0x3160e46d; S=0x3160e4b5; converted property
@property(assign, nonatomic) int type;	// G=0x3160ec2d; S=0x3160ec3d; @synthesize=_type
@property(retain) id value;	// G=0x3160e879; S=0x3160e779; converted property
+ (id)bottomEtchLineView;	// 0x3160c969
+ (Class)cellClassForSpecifier:(id)specifier;	// 0x3160c651
+ (int)cellStyle;	// 0x3160c64d
+ (int)cellTypeFromString:(id)string;	// 0x3160c149
+ (id)reuseIdentifierForBasicCellTypes:(int)basicCellTypes;	// 0x3160c4a9
+ (id)reuseIdentifierForClassAndType:(int)classAndType;	// 0x3160c511
+ (id)reuseIdentifierForSpecifier:(id)specifier;	// 0x3160c555
+ (id)stringFromCellType:(int)cellType;	// 0x3160c3a9
+ (id)topEtchLineView;	// 0x3160c749
- (id)initWithStyle:(int)style reuseIdentifier:(id)identifier specifier:(id)specifier;	// 0x3160cb81
- (id)_automationID;	// 0x3160ec6d
- (id)_contentString;	// 0x3160e301
- (void)_setBottomEtchHidden:(BOOL)hidden;	// 0x3160ebed
- (void)_setTopEtchHidden:(BOOL)hidden;	// 0x3160ebcd
- (void)_setTopShadowHidden:(BOOL)hidden;	// 0x3160ea89
- (void)_updateEtchState:(BOOL)state;	// 0x3160e169
// converted property getter: - (SEL)action;	// 0x3160e911
- (id)blankIcon;	// 0x3160e3cd
- (BOOL)canBeChecked;	// 0x3160e735
- (BOOL)canReload;	// 0x3160e2c9
// converted property getter: - (BOOL)cellEnabled;	// 0x3160e9d5
- (void)cellRemovedFromView;	// 0x3160e3fd
- (void)dealloc;	// 0x3160ccf1
- (void)forceSynchronousIconLoadOnNextIconLoad;	// 0x3160e455
- (id)getIcon;	// 0x3160e469
- (id)getLazyIcon;	// 0x3160e329
- (id)getLazyIconID;	// 0x3160e3bd
- (id)iconImageView;	// 0x3160e8a9
// converted property getter: - (BOOL)isChecked;	// 0x3160e725
- (void)layoutSubviews;	// 0x3160d8e5
- (void)prepareForReuse;	// 0x3160d79d
- (void)refreshCellContentsWithSpecifier:(id)specifier;	// 0x3160cda5
- (void)reloadWithSpecifier:(id)specifier animated:(BOOL)animated;	// 0x3160e9e5
// declared property getter: - (BOOL)reusedCell;	// 0x3160ec4d
- (id)scriptingInfoWithChildren;	// 0x3160ece5
// converted property setter: - (void)setAction:(SEL)action;	// 0x3160e901
- (void)setAlignment:(int)alignment;	// 0x3160e8b9
// converted property setter: - (void)setCellEnabled:(BOOL)enabled;	// 0x3160e921
// converted property setter: - (void)setChecked:(BOOL)checked;	// 0x3160e539
- (void)setHighlighted:(BOOL)highlighted animated:(BOOL)animated;	// 0x3160e281
- (void)setIcon:(id)icon;	// 0x3160e74d
// declared property setter: - (void)setReusedCell:(BOOL)cell;	// 0x3160ec5d
- (void)setSelected:(BOOL)selected animated:(BOOL)animated;	// 0x3160e239
- (void)setShouldHideTitle:(BOOL)hideTitle;	// 0x3160e529
// declared property setter: - (void)setSpecifier:(id)specifier;	// 0x3160ec1d
// converted property setter: - (void)setTarget:(id)target;	// 0x3160e8e1
// converted property setter: - (void)setTitle:(id)title;	// 0x3160e4b5
// declared property setter: - (void)setType:(int)type;	// 0x3160ec3d
// converted property setter: - (void)setValue:(id)value;	// 0x3160e779
- (void)setValueChangedTarget:(id)target action:(SEL)action specifier:(id)specifier;	// 0x3160e0fd
// declared property getter: - (id)specifier;	// 0x3160ec0d
// converted property getter: - (id)target;	// 0x3160e8f1
- (float)textFieldOffset;	// 0x3160ea15
// converted property getter: - (id)title;	// 0x3160e46d
- (id)titleLabel;	// 0x3160e889
- (id)titleTextLabel;	// 0x3160e131
// declared property getter: - (int)type;	// 0x3160ec2d
// converted property getter: - (id)value;	// 0x3160e879
- (id)valueLabel;	// 0x3160e899
@end
