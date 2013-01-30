/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "NSCoding.h"
#import <NSObject.h> // Unknown library

@class NSString, NSArray, UIView;

@interface UITableViewSection : NSObject <NSCoding> {
	NSString *_headerTitle;	// 4 = 0x4
	UIView *_headerView;	// 8 = 0x8
	NSString *_footerTitle;	// 12 = 0xc
	UIView *_footerView;	// 16 = 0x10
	NSArray *_rows;	// 20 = 0x14
}
@property(copy, nonatomic) NSString *footerTitle;	// G=0x32e6c325; S=0x32e6c339; @synthesize=_footerTitle
@property(retain, nonatomic) UIView *footerView;	// G=0x32e6c349; S=0x32e6c359; @synthesize=_footerView
@property(copy, nonatomic) NSString *headerTitle;	// G=0x32e6c2e1; S=0x32e6c2f5; @synthesize=_headerTitle
@property(retain, nonatomic) UIView *headerView;	// G=0x32e6c305; S=0x32e6c315; @synthesize=_headerView
@property(copy, nonatomic) NSArray *rows;	// G=0x32e6c369; S=0x32e6c37d; @synthesize=_rows
+ (id)sectionWithRows:(id)rows;	// 0x32e6bfe5
- (id)initWithCoder:(id)coder;	// 0x32e6c049
- (void)dealloc;	// 0x32e6c241
- (void)encodeWithCoder:(id)coder;	// 0x32e6c15d
// declared property getter: - (id)footerTitle;	// 0x32e6c325
// declared property getter: - (id)footerView;	// 0x32e6c349
// declared property getter: - (id)headerTitle;	// 0x32e6c2e1
// declared property getter: - (id)headerView;	// 0x32e6c305
// declared property getter: - (id)rows;	// 0x32e6c369
// declared property setter: - (void)setFooterTitle:(id)title;	// 0x32e6c339
// declared property setter: - (void)setFooterView:(id)view;	// 0x32e6c359
// declared property setter: - (void)setHeaderTitle:(id)title;	// 0x32e6c2f5
// declared property setter: - (void)setHeaderView:(id)view;	// 0x32e6c315
// declared property setter: - (void)setRows:(id)rows;	// 0x32e6c37d
@end
