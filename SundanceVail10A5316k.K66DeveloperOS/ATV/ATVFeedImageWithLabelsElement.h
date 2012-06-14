/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ATVFeedElement.h"

@class ATVFeedImageElement, NSArray;

__attribute__((visibility("hidden")))
@interface ATVFeedImageWithLabelsElement : ATVFeedElement {
	ATVFeedImageElement *_image;	// 4 = 0x4
	NSArray *_labels;	// 8 = 0x8
}
@property(retain, nonatomic) ATVFeedImageElement *image;	// G=0x13a8f5; S=0x13a905; @synthesize=_image
@property(retain, nonatomic) NSArray *labels;	// G=0x13a915; S=0x13a925; @synthesize=_labels
- (id)initWithXMLElement:(id)xmlelement merchant:(id)merchant parent:(id)parent;	// 0x13a6fd
- (void)dealloc;	// 0x13a891
// declared property getter: - (id)image;	// 0x13a8f5
// declared property getter: - (id)labels;	// 0x13a915
// declared property setter: - (void)setImage:(id)image;	// 0x13a905
// declared property setter: - (void)setLabels:(id)labels;	// 0x13a925
@end

