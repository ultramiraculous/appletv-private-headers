/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ATVFeedElement.h"

@class ATVFeedImageElement, NSDate, NSString;

__attribute__((visibility("hidden")))
@interface ATVFeedEventElement : ATVFeedElement {
	NSString *_title;	// 4 = 0x4
	NSString *_description;	// 8 = 0x8
	ATVFeedImageElement *_image;	// 12 = 0xc
	NSDate *_startDate;	// 16 = 0x10
	NSDate *_endDate;	// 20 = 0x14
}
@property(copy, nonatomic) NSString *description;	// G=0x1596b5; S=0x1596c9; @synthesize=_description
@property(retain, nonatomic) NSDate *endDate;	// G=0x159719; S=0x159729; @synthesize=_endDate
@property(retain, nonatomic) ATVFeedImageElement *image;	// G=0x1596d9; S=0x1596e9; @synthesize=_image
@property(retain, nonatomic) NSDate *startDate;	// G=0x1596f9; S=0x159709; @synthesize=_startDate
@property(copy, nonatomic) NSString *title;	// G=0x159691; S=0x1596a5; @synthesize=_title
- (id)initWithXMLElement:(id)xmlelement merchant:(id)merchant parent:(id)parent;	// 0x159419
- (void)dealloc;	// 0x1595f1
// declared property getter: - (id)description;	// 0x1596b5
// declared property getter: - (id)endDate;	// 0x159719
// declared property getter: - (id)image;	// 0x1596d9
// declared property setter: - (void)setDescription:(id)description;	// 0x1596c9
// declared property setter: - (void)setEndDate:(id)date;	// 0x159729
// declared property setter: - (void)setImage:(id)image;	// 0x1596e9
// declared property setter: - (void)setStartDate:(id)date;	// 0x159709
// declared property setter: - (void)setTitle:(id)title;	// 0x1596a5
// declared property getter: - (id)startDate;	// 0x1596f9
// declared property getter: - (id)title;	// 0x159691
@end

