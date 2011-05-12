/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BackRow.framework/BackRow
 */

#import "BackRow-Structs.h"
#import "BRControl.h"

@class BRTextControl;

__attribute__((visibility("hidden")))
@interface BRMetadataLineLayer : BRControl {
@private
	BRTextControl *_labelLayer;	// 44 = 0x2c
	BRControl *_valueLayer;	// 48 = 0x30
	float _maxLabelWidth;	// 52 = 0x34
}
- (id)initWithLabel:(id)label value:(id)value;	// 0x32976c2d
- (id)accessibilityLabel;	// 0x32976d45
- (void)dealloc;	// 0x3293c199
- (id)label;	// 0x3293c155
- (void)layoutSubcontrols;	// 0x32976d95
- (void)setMaxLabelWidth:(float)width;	// 0x3293c175
- (id)value;	// 0x32976c1d
@end
