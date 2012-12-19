/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library

@class UIImage, NSMutableDictionary, NSValue;

__attribute__((visibility("hidden")))
@interface _UISearchBarAppearanceStorage : NSObject {
	NSMutableDictionary *searchFieldBackgroundImages;	// 4 = 0x4
	NSValue *searchFieldPositionAdjustment;	// 8 = 0x8
	NSMutableDictionary *iconImages;	// 12 = 0xc
	UIImage *separatorImage;	// 16 = 0x10
}
@property(retain, nonatomic) NSValue *searchFieldPositionAdjustment;	// G=0x32d52ac5; S=0x32f1a0ad; @synthesize
@property(retain, nonatomic) UIImage *separatorImage;	// G=0x32d51c9d; S=0x32d51d75; @synthesize
- (void)dealloc;	// 0x32f1a021
- (id)imageForIcon:(int)icon state:(unsigned)state;	// 0x32d5186d
- (id)searchFieldBackgroundImageForState:(unsigned)state;	// 0x32d5163d
// declared property getter: - (id)searchFieldPositionAdjustment;	// 0x32d52ac5
// declared property getter: - (id)separatorImage;	// 0x32d51c9d
- (void)setImage:(id)image forIcon:(int)icon state:(unsigned)state;	// 0x32d5190d
- (void)setSearchFieldBackgroundImage:(id)image forState:(unsigned)state;	// 0x32d51689
// declared property setter: - (void)setSearchFieldPositionAdjustment:(id)adjustment;	// 0x32f1a0ad
// declared property setter: - (void)setSeparatorImage:(id)image;	// 0x32d51d75
@end
