/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSDate, NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface ATVCupidPhotoBatch : XXUnknownSuperclass {
	NSString *_description;	// 4 = 0x4
	NSMutableArray *_photos;	// 8 = 0x8
	NSString *_ID;	// 12 = 0xc
	NSDate *_modifiedDate;	// 16 = 0x10
	int _selectedIndex;	// 20 = 0x14
}
@property(retain, nonatomic) NSString *ID;	// G=0x3d81e9; S=0x3d81f9; @synthesize=_ID
@property(retain, nonatomic) NSString *description;	// G=0x3d8179; S=0x3d8189; @synthesize=_description
@property(retain, nonatomic) NSDate *modifiedDate;	// G=0x3d8221; S=0x3d8231; @synthesize=_modifiedDate
@property(retain, nonatomic) NSMutableArray *photos;	// G=0x3d81b1; S=0x3d81c1; @synthesize=_photos
@property(assign, nonatomic) int selectedIndex;	// G=0x3d8259; S=0x3d8269; @synthesize=_selectedIndex
- (void).cxx_destruct;	// 0x3d8279
// declared property getter: - (id)ID;	// 0x3d81e9
// declared property getter: - (id)description;	// 0x3d8179
// declared property getter: - (id)modifiedDate;	// 0x3d8221
// declared property getter: - (id)photos;	// 0x3d81b1
// declared property getter: - (int)selectedIndex;	// 0x3d8259
// declared property setter: - (void)setDescription:(id)description;	// 0x3d8189
// declared property setter: - (void)setID:(id)anId;	// 0x3d81f9
// declared property setter: - (void)setModifiedDate:(id)date;	// 0x3d8231
// declared property setter: - (void)setPhotos:(id)photos;	// 0x3d81c1
// declared property setter: - (void)setSelectedIndex:(int)index;	// 0x3d8269
@end

