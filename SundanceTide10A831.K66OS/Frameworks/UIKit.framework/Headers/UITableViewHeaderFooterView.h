/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIView.h"
#import "UITableViewSubviewReusing.h"

@class UILabel, UIColor, UIImage, UITableView, NSString;

@interface UITableViewHeaderFooterView : UIView <UITableViewSubviewReusing> {
	int _tableViewStyle;	// 84 = 0x54
	UIImage *_backgroundImage;	// 88 = 0x58
	BOOL _sectionHeader;	// 92 = 0x5c
	CGRect _frame;	// 96 = 0x60
	int _textAlignment;	// 112 = 0x70
	UITableView *_tableView;	// 116 = 0x74
	float _maxTitleWidth;	// 120 = 0x78
	BOOL _labelBackgroundColorNeedsUpdate;	// 124 = 0x7c
	BOOL _detailLabelBackgroundColorNeedsUpdate;	// 125 = 0x7d
	BOOL _floating;	// 126 = 0x7e
	NSString *_reuseIdentifier;	// 128 = 0x80
	UIView *_backgroundView;	// 132 = 0x84
	UILabel *_label;	// 136 = 0x88
	UILabel *_detailLabel;	// 140 = 0x8c
	UIView *_contentView;	// 144 = 0x90
	UIColor *_tintColor;	// 148 = 0x94
}
@property(retain, nonatomic) UIImage *backgroundImage;	// G=0x31c750a9; S=0x31c75099; @synthesize=_backgroundImage
@property(retain, nonatomic) UIView *backgroundView;	// G=0x31c74e1d; S=0x31c74fc5; 
@property(readonly, assign, nonatomic) UIView *contentView;	// G=0x31d9d2f5; @synthesize=_contentView
@property(readonly, assign, nonatomic) UILabel *detailTextLabel;	// G=0x31c96ce9; 
@property(assign, nonatomic) BOOL floating;	// G=0x3201c555; S=0x31c76775; 
@property(assign) CGRect frame;	// G=0x31c74915; S=0x31c74851; converted property
@property(assign, nonatomic) float maxTitleWidth;	// G=0x3201c699; S=0x31c766d1; @synthesize=_maxTitleWidth
@property(copy, nonatomic) NSString *reuseIdentifier;	// G=0x31d13105; S=0x3201c679; @synthesize=_reuseIdentifier
@property(assign, nonatomic) BOOL sectionHeader;	// G=0x31c754d9; S=0x31c7540d; @synthesize=_sectionHeader
@property(assign, nonatomic) UITableView *tableView;	// G=0x3201c689; S=0x31c75561; @synthesize=_tableView
@property(assign, nonatomic) int tableViewStyle;	// G=0x31c75089; S=0x31c74cf1; 
@property(copy, nonatomic) NSString *text;	// G=0x3201c135; S=0x31c755a9; 
@property(assign, nonatomic) int textAlignment;	// G=0x3201b969; S=0x31c75575; 
@property(readonly, assign, nonatomic) UILabel *textLabel;	// G=0x31c96cd5; 
@property(retain, nonatomic) UIColor *tintColor;	// G=0x3201c60d; S=0x3201c61d; 
+ (id)_defaultFontForTableViewStyle:(int)tableViewStyle isSectionHeader:(BOOL)header;	// 0x31c754ed
- (id)initWithFrame:(CGRect)frame;	// 0x31c74779
- (id)initWithReuseIdentifier:(id)reuseIdentifier;	// 0x31c74725
- (CGRect)_detailLabelFrame;	// 0x3201c161
- (CGSize)_detailTextSizeForWidth:(float)width;	// 0x3201b97d
- (void)_invalidateDetailLabelBackgroundColor;	// 0x31c753d5
- (void)_invalidateLabelBackgroundColor;	// 0x31c753a1
- (id)_label:(BOOL)label;	// 0x31c75629
- (CGRect)_labelFrame;	// 0x31c75b81
- (id)_scriptingInfo;	// 0x3201c57d
- (void)_setupLabelAppearance;	// 0x31c75709
- (CGSize)_textSizeForWidth:(float)width;	// 0x31c76239
- (void)_updateBackgroundImage;	// 0x3201c379
- (void)_updateDetailLabelBackgroundColor;	// 0x3201bc9d
- (void)_updateDetailLabelBackgroundColorIfNeeded;	// 0x3201bf09
- (void)_updateLabelBackgroundColor;	// 0x31c763b9
- (void)_updateLabelBackgroundColorIfNeeeded;	// 0x31c7637d
- (void)_updateLayerContents;	// 0x31c74d75
- (BOOL)_useDetailText;	// 0x31c97171
// declared property getter: - (id)backgroundImage;	// 0x31c750a9
// declared property getter: - (id)backgroundView;	// 0x31c74e1d
// declared property getter: - (id)contentView;	// 0x31d9d2f5
- (void)dealloc;	// 0x31d9d865
// declared property getter: - (id)detailTextLabel;	// 0x31c96ce9
// declared property getter: - (BOOL)floating;	// 0x3201c555
// converted property getter: - (CGRect)frame;	// 0x31c74915
- (void)layoutSubviews;	// 0x31c749a9
// declared property getter: - (float)maxTitleWidth;	// 0x3201c699
- (void)prepareForReuse;	// 0x31d13119
// declared property getter: - (id)reuseIdentifier;	// 0x31d13105
// declared property getter: - (BOOL)sectionHeader;	// 0x31c754d9
- (void)setBackgroundColor:(id)color;	// 0x3201c565
// declared property setter: - (void)setBackgroundImage:(id)image;	// 0x31c75099
// declared property setter: - (void)setBackgroundView:(id)view;	// 0x31c74fc5
// declared property setter: - (void)setFloating:(BOOL)floating;	// 0x31c76775
// converted property setter: - (void)setFrame:(CGRect)frame;	// 0x31c74851
// declared property setter: - (void)setMaxTitleWidth:(float)width;	// 0x31c766d1
- (void)setOpaque:(BOOL)opaque;	// 0x31d0ffed
// declared property setter: - (void)setReuseIdentifier:(id)identifier;	// 0x3201c679
// declared property setter: - (void)setSectionHeader:(BOOL)header;	// 0x31c7540d
// declared property setter: - (void)setTableView:(id)view;	// 0x31c75561
// declared property setter: - (void)setTableViewStyle:(int)style;	// 0x31c74cf1
// declared property setter: - (void)setText:(id)text;	// 0x31c755a9
// declared property setter: - (void)setTextAlignment:(int)alignment;	// 0x31c75575
// declared property setter: - (void)setTintColor:(id)color;	// 0x3201c61d
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x31c96d71
// declared property getter: - (id)tableView;	// 0x3201c689
// declared property getter: - (int)tableViewStyle;	// 0x31c75089
// declared property getter: - (id)text;	// 0x3201c135
// declared property getter: - (int)textAlignment;	// 0x3201b969
// declared property getter: - (id)textLabel;	// 0x31c96cd5
// declared property getter: - (id)tintColor;	// 0x3201c60d
@end

