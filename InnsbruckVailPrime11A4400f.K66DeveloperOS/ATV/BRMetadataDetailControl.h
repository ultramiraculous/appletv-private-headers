/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRControl.h"
#import "BRMetadataContainer.h"
#import "AppleTV-Structs.h"


__attribute__((visibility("hidden")))
@interface BRMetadataDetailControl : BRControl <BRMetadataContainer> {
}
- (id)accessibilityLabel;	// 0x326e89
- (void)addDetails:(id)details withLabel:(id)label;	// 0x326b9d
- (void)layoutSubcontrols;	// 0x326c51
- (void)setMetadata:(id)metadata withLabels:(id)labels;	// 0x326b4d
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x326d89
@end
