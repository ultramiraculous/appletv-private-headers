/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ATVFeedRootElement.h"

@class ATVFeedGenericCollectionElement, NSString, ATVFeedImageElement, ATVFeedDividerElement, ATVFeedShelfElement, ATVFeedTableElement;

__attribute__((visibility("hidden")))
@interface ATVFeedItemDetailElement : ATVFeedRootElement {
	NSString *_title;	// 8 = 0x8
	NSString *_subtitle;	// 12 = 0xc
	ATVFeedImageElement *_image;	// 16 = 0x10
	ATVFeedImageElement *_defaultImage;	// 20 = 0x14
	ATVFeedImageElement *_rightImage;	// 24 = 0x18
	NSString *_rating;	// 28 = 0x1c
	NSString *_summary;	// 32 = 0x20
	NSString *_footnote;	// 36 = 0x24
	ATVFeedTableElement *_table;	// 40 = 0x28
	ATVFeedShelfElement *_centerShelf;	// 44 = 0x2c
	ATVFeedDividerElement *_divider;	// 48 = 0x30
	ATVFeedShelfElement *_bottomShelf;	// 52 = 0x34
	ATVFeedGenericCollectionElement *_moreInfo;	// 56 = 0x38
}
@property(retain, nonatomic) ATVFeedShelfElement *bottomShelf;	// G=0x135809; S=0x135819; @synthesize=_bottomShelf
@property(retain, nonatomic) ATVFeedShelfElement *centerShelf;	// G=0x1357c9; S=0x1357d9; @synthesize=_centerShelf
@property(retain, nonatomic) ATVFeedImageElement *defaultImage;	// G=0x1356fd; S=0x13570d; @synthesize=_defaultImage
@property(retain, nonatomic) ATVFeedDividerElement *divider;	// G=0x1357e9; S=0x1357f9; @synthesize=_divider
@property(copy, nonatomic) NSString *footnote;	// G=0x135785; S=0x135799; @synthesize=_footnote
@property(retain, nonatomic) ATVFeedImageElement *image;	// G=0x1356dd; S=0x1356ed; @synthesize=_image
@property(retain, nonatomic) ATVFeedGenericCollectionElement *moreInfo;	// G=0x135829; S=0x135839; @synthesize=_moreInfo
@property(copy, nonatomic) NSString *rating;	// G=0x13573d; S=0x135751; @synthesize=_rating
@property(retain, nonatomic) ATVFeedImageElement *rightImage;	// G=0x13571d; S=0x13572d; @synthesize=_rightImage
@property(copy, nonatomic) NSString *subtitle;	// G=0x1356b9; S=0x1356cd; @synthesize=_subtitle
@property(copy, nonatomic) NSString *summary;	// G=0x135761; S=0x135775; @synthesize=_summary
@property(retain, nonatomic) ATVFeedTableElement *table;	// G=0x1357a9; S=0x1357b9; @synthesize=_table
@property(copy, nonatomic) NSString *title;	// G=0x135695; S=0x1356a9; @synthesize=_title
- (id)initWithXMLElement:(id)xmlelement merchant:(id)merchant parent:(id)parent;	// 0x135109
// declared property getter: - (id)bottomShelf;	// 0x135809
// declared property getter: - (id)centerShelf;	// 0x1357c9
- (void)dealloc;	// 0x135555
// declared property getter: - (id)defaultImage;	// 0x1356fd
// declared property getter: - (id)divider;	// 0x1357e9
// declared property getter: - (id)footnote;	// 0x135785
// declared property getter: - (id)image;	// 0x1356dd
// declared property getter: - (id)moreInfo;	// 0x135829
// declared property getter: - (id)rating;	// 0x13573d
// declared property getter: - (id)rightImage;	// 0x13571d
// declared property setter: - (void)setBottomShelf:(id)shelf;	// 0x135819
// declared property setter: - (void)setCenterShelf:(id)shelf;	// 0x1357d9
// declared property setter: - (void)setDefaultImage:(id)image;	// 0x13570d
// declared property setter: - (void)setDivider:(id)divider;	// 0x1357f9
// declared property setter: - (void)setFootnote:(id)footnote;	// 0x135799
// declared property setter: - (void)setImage:(id)image;	// 0x1356ed
// declared property setter: - (void)setMoreInfo:(id)info;	// 0x135839
// declared property setter: - (void)setRating:(id)rating;	// 0x135751
// declared property setter: - (void)setRightImage:(id)image;	// 0x13572d
// declared property setter: - (void)setSubtitle:(id)subtitle;	// 0x1356cd
// declared property setter: - (void)setSummary:(id)summary;	// 0x135775
// declared property setter: - (void)setTable:(id)table;	// 0x1357b9
// declared property setter: - (void)setTitle:(id)title;	// 0x1356a9
// declared property getter: - (id)subtitle;	// 0x1356b9
// declared property getter: - (id)summary;	// 0x135761
// declared property getter: - (id)table;	// 0x1357a9
// declared property getter: - (id)title;	// 0x135695
@end

