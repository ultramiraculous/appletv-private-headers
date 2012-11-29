/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library

@class NSArray;
@protocol UIWebSelectedItemPrivate;

__attribute__((visibility("hidden")))
@interface UIWebOptGroup : NSObject {
	id<UIWebSelectedItemPrivate> _group;	// 4 = 0x4
	NSArray *_options;	// 8 = 0x8
	int _offset;	// 12 = 0xc
}
@property(retain, nonatomic) id<UIWebSelectedItemPrivate> group;	// G=0x3477c6b1; S=0x3477c6c1; @synthesize=_group
@property(readonly, assign, nonatomic) int offset;	// G=0x3477c6a1; @synthesize=_offset
@property(retain, nonatomic) NSArray *options;	// G=0x3477c6d1; S=0x3477c6e1; @synthesize=_options
- (id)initWithGroup:(id)group itemOffset:(int)offset;	// 0x3477c5ed
- (void)dealloc;	// 0x3477c649
// declared property getter: - (id)group;	// 0x3477c6b1
// declared property getter: - (int)offset;	// 0x3477c6a1
// declared property getter: - (id)options;	// 0x3477c6d1
// declared property setter: - (void)setGroup:(id)group;	// 0x3477c6c1
// declared property setter: - (void)setOptions:(id)options;	// 0x3477c6e1
@end
