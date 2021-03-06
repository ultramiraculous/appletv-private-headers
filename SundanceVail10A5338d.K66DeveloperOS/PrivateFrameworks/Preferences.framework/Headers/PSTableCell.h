/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

#import <UITableViewCell.h> // Unknown library

@class PSSpecifier, NSString, UIImageView, UIView;

@interface PSTableCell : UITableViewCell {
	id _value;	// 296 = 0x128
	UIImageView *_checkedImageView;	// 300 = 0x12c
	BOOL _checked;	// 304 = 0x130
	BOOL _shouldHideTitle;	// 305 = 0x131
	NSString *_hiddenTitle;	// 308 = 0x134
	int _alignment;	// 312 = 0x138
	SEL _pAction;	// 316 = 0x13c
	id _pTarget;	// 320 = 0x140
	BOOL _cellEnabled;	// 324 = 0x144
	PSSpecifier *_specifier;	// 328 = 0x148
	int _type;	// 332 = 0x14c
	BOOL _lazyIcon;	// 336 = 0x150
	BOOL _lazyIconDontUnload;	// 337 = 0x151
	BOOL _lazyIconForceSynchronous;	// 338 = 0x152
	NSString *_lazyIconAppID;	// 340 = 0x154
	UIView *_topShadow;	// 344 = 0x158
	UIView *_topEtchLine;	// 348 = 0x15c
	UIView *_bottomEtchLine;	// 352 = 0x160
	BOOL _etch;	// 356 = 0x164
	BOOL _reusedCell;	// 357 = 0x165
}
@property(assign) SEL action;	// G=0x31d7709d; S=0x31d7708d; converted property
@property(assign) BOOL cellEnabled;	// G=0x31d77161; S=0x31d770ad; converted property
@property(assign, getter=isChecked) BOOL checked;	// G=0x31d76eb1; S=0x31d76cc5; converted property
@property(assign, nonatomic) BOOL reusedCell;	// G=0x31d773d9; S=0x31d773e9; @synthesize=_reusedCell
@property(retain, nonatomic) PSSpecifier *specifier;	// G=0x31d77399; S=0x31d773a9; @synthesize=_specifier
@property(retain) id target;	// G=0x31d7707d; S=0x31d7706d; converted property
@property(retain) id title;	// G=0x31d76bf9; S=0x31d76c41; converted property
@property(assign, nonatomic) int type;	// G=0x31d773b9; S=0x31d773c9; @synthesize=_type
@property(retain) id value;	// G=0x31d77005; S=0x31d76f05; converted property
+ (id)bottomEtchLineView;	// 0x31d75369
+ (Class)cellClassForSpecifier:(id)specifier;	// 0x31d75051
+ (int)cellStyle;	// 0x31d7504d
+ (int)cellTypeFromString:(id)string;	// 0x31d74b49
+ (id)reuseIdentifierForBasicCellTypes:(int)basicCellTypes;	// 0x31d74ea9
+ (id)reuseIdentifierForClassAndType:(int)classAndType;	// 0x31d74f11
+ (id)reuseIdentifierForSpecifier:(id)specifier;	// 0x31d74f55
+ (id)stringFromCellType:(int)cellType;	// 0x31d74da9
+ (id)topEtchLineView;	// 0x31d75149
- (id)initWithStyle:(int)style reuseIdentifier:(id)identifier specifier:(id)specifier;	// 0x31d75581
- (id)_automationID;	// 0x31d773f9
- (id)_contentString;	// 0x31d76a8d
- (void)_setBottomEtchHidden:(BOOL)hidden;	// 0x31d77379
- (void)_setTopEtchHidden:(BOOL)hidden;	// 0x31d77359
- (void)_setTopShadowHidden:(BOOL)hidden;	// 0x31d77215
- (void)_updateEtchState:(BOOL)state;	// 0x31d768f5
// converted property getter: - (SEL)action;	// 0x31d7709d
- (id)blankIcon;	// 0x31d76b59
- (BOOL)canBeChecked;	// 0x31d76ec1
- (BOOL)canReload;	// 0x31d76a55
// converted property getter: - (BOOL)cellEnabled;	// 0x31d77161
- (void)cellRemovedFromView;	// 0x31d76b89
- (void)dealloc;	// 0x31d756f1
- (void)forceSynchronousIconLoadOnNextIconLoad;	// 0x31d76be1
- (id)getIcon;	// 0x31d76bf5
- (id)getLazyIcon;	// 0x31d76ab5
- (id)getLazyIconID;	// 0x31d76b49
- (id)iconImageView;	// 0x31d77035
// converted property getter: - (BOOL)isChecked;	// 0x31d76eb1
- (void)layoutSubviews;	// 0x31d7615d
- (void)prepareForReuse;	// 0x31d76015
- (void)refreshCellContentsWithSpecifier:(id)specifier;	// 0x31d757a5
- (void)reloadWithSpecifier:(id)specifier animated:(BOOL)animated;	// 0x31d77171
// declared property getter: - (BOOL)reusedCell;	// 0x31d773d9
- (id)scriptingInfoWithChildren;	// 0x31d77471
// converted property setter: - (void)setAction:(SEL)action;	// 0x31d7708d
- (void)setAlignment:(int)alignment;	// 0x31d77045
// converted property setter: - (void)setCellEnabled:(BOOL)enabled;	// 0x31d770ad
// converted property setter: - (void)setChecked:(BOOL)checked;	// 0x31d76cc5
- (void)setHighlighted:(BOOL)highlighted animated:(BOOL)animated;	// 0x31d76a0d
- (void)setIcon:(id)icon;	// 0x31d76ed9
// declared property setter: - (void)setReusedCell:(BOOL)cell;	// 0x31d773e9
- (void)setSelected:(BOOL)selected animated:(BOOL)animated;	// 0x31d769c5
- (void)setShouldHideTitle:(BOOL)hideTitle;	// 0x31d76cb5
// declared property setter: - (void)setSpecifier:(id)specifier;	// 0x31d773a9
// converted property setter: - (void)setTarget:(id)target;	// 0x31d7706d
// converted property setter: - (void)setTitle:(id)title;	// 0x31d76c41
// declared property setter: - (void)setType:(int)type;	// 0x31d773c9
// converted property setter: - (void)setValue:(id)value;	// 0x31d76f05
- (void)setValueChangedTarget:(id)target action:(SEL)action specifier:(id)specifier;	// 0x31d76889
// declared property getter: - (id)specifier;	// 0x31d77399
// converted property getter: - (id)target;	// 0x31d7707d
- (float)textFieldOffset;	// 0x31d771a1
// converted property getter: - (id)title;	// 0x31d76bf9
- (id)titleLabel;	// 0x31d77015
- (id)titleTextLabel;	// 0x31d768bd
// declared property getter: - (int)type;	// 0x31d773b9
// converted property getter: - (id)value;	// 0x31d77005
- (id)valueLabel;	// 0x31d77025
@end

