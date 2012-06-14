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
@property(copy, nonatomic) NSString *description;	// G=0x13c29d; S=0x13c2b1; @synthesize=_description
@property(retain, nonatomic) NSDate *endDate;	// G=0x13c301; S=0x13c311; @synthesize=_endDate
@property(retain, nonatomic) ATVFeedImageElement *image;	// G=0x13c2c1; S=0x13c2d1; @synthesize=_image
@property(retain, nonatomic) NSDate *startDate;	// G=0x13c2e1; S=0x13c2f1; @synthesize=_startDate
@property(copy, nonatomic) NSString *title;	// G=0x13c279; S=0x13c28d; @synthesize=_title
- (id)initWithXMLElement:(id)xmlelement merchant:(id)merchant parent:(id)parent;	// 0x13c001
- (void)dealloc;	// 0x13c1d9
// declared property getter: - (id)description;	// 0x13c29d
// declared property getter: - (id)endDate;	// 0x13c301
// declared property getter: - (id)image;	// 0x13c2c1
// declared property setter: - (void)setDescription:(id)description;	// 0x13c2b1
// declared property setter: - (void)setEndDate:(id)date;	// 0x13c311
// declared property setter: - (void)setImage:(id)image;	// 0x13c2d1
// declared property setter: - (void)setStartDate:(id)date;	// 0x13c2f1
// declared property setter: - (void)setTitle:(id)title;	// 0x13c28d
// declared property getter: - (id)startDate;	// 0x13c2e1
// declared property getter: - (id)title;	// 0x13c279
@end

