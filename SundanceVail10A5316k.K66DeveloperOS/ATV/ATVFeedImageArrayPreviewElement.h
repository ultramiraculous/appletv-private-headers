/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ATVFeedElement.h"

@class NSArray;

__attribute__((visibility("hidden")))
@interface ATVFeedImageArrayPreviewElement : ATVFeedElement {
	BOOL _inOrder;	// 4 = 0x4
	BOOL _shuffle;	// 5 = 0x5
	NSArray *_images;	// 8 = 0x8
}
@property(retain, nonatomic) NSArray *images;	// G=0x139ee5; S=0x139ef5; @synthesize=_images
@property(assign, nonatomic) BOOL inOrder;	// G=0x139ea5; S=0x139eb5; @synthesize=_inOrder
@property(assign, nonatomic) BOOL shuffle;	// G=0x139ec5; S=0x139ed5; @synthesize=_shuffle
- (id)initWithXMLElement:(id)xmlelement merchant:(id)merchant parent:(id)parent;	// 0x139c6d
- (void)dealloc;	// 0x139e59
// declared property getter: - (id)images;	// 0x139ee5
// declared property getter: - (BOOL)inOrder;	// 0x139ea5
// declared property setter: - (void)setImages:(id)images;	// 0x139ef5
// declared property setter: - (void)setInOrder:(BOOL)order;	// 0x139eb5
// declared property setter: - (void)setShuffle:(BOOL)shuffle;	// 0x139ed5
// declared property getter: - (BOOL)shuffle;	// 0x139ec5
@end

