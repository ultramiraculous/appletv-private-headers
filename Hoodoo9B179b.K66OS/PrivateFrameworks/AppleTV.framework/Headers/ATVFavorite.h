/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library

@class NSDate, NSString;

@interface ATVFavorite : NSObject {
@private
	NSDate *_dateAdded;	// 4 = 0x4
	NSString *_title;	// 8 = 0x8
	NSString *_itemID;	// 12 = 0xc
}
@property(copy) NSDate *dateAdded;	// G=0x301c662d; S=0x301c6641; @synthesize=_dateAdded
@property(copy) NSString *itemID;	// G=0x301c669d; S=0x301c66b1; @synthesize=_itemID
@property(copy) NSString *title;	// G=0x301c6665; S=0x301c6679; @synthesize=_title
+ (id)favoriteFromDictionary:(id)dictionary;	// 0x301c62ed
- (id)initWithDictionary:(id)dictionary;	// 0x301c638d
- (id)_currentDsid;	// 0x301c66d5
- (id)_currentStoreFront;	// 0x301c6769
// declared property getter: - (id)dateAdded;	// 0x301c662d
- (void)dealloc;	// 0x301c6459
- (void)encodeWithDictionary:(id)dictionary;	// 0x301c64cd
- (BOOL)isSaved;	// 0x301c6571
// declared property getter: - (id)itemID;	// 0x301c669d
- (void)remove;	// 0x301c65f5
- (BOOL)removeUponAcquisition;	// 0x301c656d
- (void)save;	// 0x301c65bd
// declared property setter: - (void)setDateAdded:(id)added;	// 0x301c6641
// declared property setter: - (void)setItemID:(id)anId;	// 0x301c66b1
// declared property setter: - (void)setTitle:(id)title;	// 0x301c6679
// declared property getter: - (id)title;	// 0x301c6665
@end

