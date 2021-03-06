/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRControl.h"
#import "AppleTV-Structs.h"

@class NSString, BRAsyncImageControl;

__attribute__((visibility("hidden")))
@interface ATVFlagstaffPosterHeader : BRControl {
@private
	BRAsyncImageControl *_leftImageControl;	// 48 = 0x30
	BRAsyncImageControl *_rightImageControl;	// 52 = 0x34
	NSString *_separatorText;	// 56 = 0x38
	NSString *_bottomLabel;	// 60 = 0x3c
}
@property(copy, nonatomic) NSString *bottomLabel;	// G=0x32ffb3b9; S=0x32ffb3c9; @synthesize=_bottomLabel
@property(retain, nonatomic) BRAsyncImageControl *leftImageControl;	// G=0x32ffb365; S=0x32ffb25d; @synthesize=_leftImageControl
@property(retain, nonatomic) BRAsyncImageControl *rightImageControl;	// G=0x32ffb375; S=0x32ffb2e1; @synthesize=_rightImageControl
@property(copy, nonatomic) NSString *separatorText;	// G=0x32ffb385; S=0x32ffb395; @synthesize=_separatorText
- (id)init;	// 0x32ffaead
// declared property getter: - (id)bottomLabel;	// 0x32ffb3b9
- (void)dealloc;	// 0x32ffaf51
- (void)drawInContext:(CGContextRef)context;	// 0x32ffafd9
- (void)layoutSubcontrols;	// 0x32ffb1f1
// declared property getter: - (id)leftImageControl;	// 0x32ffb365
// declared property getter: - (id)rightImageControl;	// 0x32ffb375
// declared property getter: - (id)separatorText;	// 0x32ffb385
// declared property setter: - (void)setBottomLabel:(id)label;	// 0x32ffb3c9
// declared property setter: - (void)setLeftImageControl:(id)control;	// 0x32ffb25d
// declared property setter: - (void)setRightImageControl:(id)control;	// 0x32ffb2e1
// declared property setter: - (void)setSeparatorText:(id)text;	// 0x32ffb395
@end

