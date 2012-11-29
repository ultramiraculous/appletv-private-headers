/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"

@class NSDateFormatter, NSAttributedString;

__attribute__((visibility("hidden")))
@interface ATVPhotoBatchDescriptionView : BRControl {
	NSAttributedString *_dimmedTitle;	// 84 = 0x54
	NSAttributedString *_boldTitle;	// 88 = 0x58
	NSAttributedString *_title;	// 92 = 0x5c
	NSDateFormatter *_dayMonthFormatter;	// 96 = 0x60
	NSDateFormatter *_dayMonthYearFormatter;	// 100 = 0x64
}
@property(retain, nonatomic) NSAttributedString *boldTitle;	// G=0x3d23fd; S=0x3d240d; @synthesize=_boldTitle
@property(retain, nonatomic) NSDateFormatter *dayMonthFormatter;	// G=0x3d220d; S=0x3d246d; @synthesize=_dayMonthFormatter
@property(retain, nonatomic) NSDateFormatter *dayMonthYearFormatter;	// G=0x3d2299; S=0x3d2495; @synthesize=_dayMonthYearFormatter
@property(retain, nonatomic) NSAttributedString *dimmedTitle;	// G=0x3d23c5; S=0x3d23d5; @synthesize=_dimmedTitle
@property(retain, nonatomic) NSAttributedString *title;	// G=0x3d2435; S=0x3d2445; @synthesize=_title
- (id)init;	// 0x3d1435
- (void).cxx_destruct;	// 0x3d24bd
- (id)_boldTitleAttributes;	// 0x3d2165
- (id)_dimmedTitleAttributes;	// 0x3d21ad
- (id)_titleAttributes;	// 0x3d211d
- (id)accessibilityLabel;	// 0x3d2325
// declared property getter: - (id)boldTitle;	// 0x3d23fd
// declared property getter: - (id)dayMonthFormatter;	// 0x3d220d
// declared property getter: - (id)dayMonthYearFormatter;	// 0x3d2299
// declared property getter: - (id)dimmedTitle;	// 0x3d23c5
- (void)drawRect:(CGRect)rect;	// 0x3d1e75
// declared property setter: - (void)setBoldTitle:(id)title;	// 0x3d240d
// declared property setter: - (void)setDayMonthFormatter:(id)formatter;	// 0x3d246d
// declared property setter: - (void)setDayMonthYearFormatter:(id)formatter;	// 0x3d2495
// declared property setter: - (void)setDimmedTitle:(id)title;	// 0x3d23d5
// declared property setter: - (void)setTitle:(id)title;	// 0x3d2445
- (void)setTitle:(id)title boldTitle:(id)title2 dimmedTitle:(id)title3;	// 0x3d1a79
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x3d1d05
// declared property getter: - (id)title;	// 0x3d2435
- (void)updatePhotoCount:(int)count description:(id)description;	// 0x3d1485
- (void)updatePhotoCount:(int)count modifiedDate:(id)date;	// 0x3d1679
@end
