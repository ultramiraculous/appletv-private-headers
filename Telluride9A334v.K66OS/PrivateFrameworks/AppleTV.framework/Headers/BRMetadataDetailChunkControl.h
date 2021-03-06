/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRMetadataContainer.h"
#import "BRControl.h"
#import "AppleTV-Structs.h"


__attribute__((visibility("hidden")))
@interface BRMetadataDetailChunkControl : BRControl <BRMetadataContainer> {
@private
	BOOL _leftAlignLabel;	// 46 = 0x2e
}
@property(assign, nonatomic) BOOL leftAlignLabel;	// G=0x331febf9; S=0x331fec09; @synthesize=_leftAlignLabel
- (id)accessibilityLabel;	// 0x331febdd
- (void)dealloc;	// 0x331fe709
- (void)layoutSubcontrols;	// 0x331fe835
// declared property getter: - (BOOL)leftAlignLabel;	// 0x331febf9
// declared property setter: - (void)setLeftAlignLabel:(BOOL)label;	// 0x331fec09
- (void)setMetadata:(id)metadata withLabels:(id)labels;	// 0x331fe735
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x331feaa1
@end

