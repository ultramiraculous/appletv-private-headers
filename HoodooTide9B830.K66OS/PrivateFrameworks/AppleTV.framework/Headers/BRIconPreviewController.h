/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"

@class BRTextControl, BRImageControl;

@interface BRIconPreviewController : BRControl {
@private
	BRTextControl *_message;	// 48 = 0x30
	BRTextControl *_instruction;	// 52 = 0x34
	BRImageControl *_image;	// 56 = 0x38
	float _iconHeightFactor;	// 60 = 0x3c
	float _horizontalPosition;	// 64 = 0x40
	float _verticalPosition;	// 68 = 0x44
	float _messageVerticalPosition;	// 72 = 0x48
}
- (id)init;	// 0x32a2cf31
- (id)accessibilityLabel;	// 0x32a2d745
- (void)dealloc;	// 0x32a2d051
- (void)layoutSubcontrols;	// 0x32a2d0c5
- (void)setIconHeightFactor:(float)factor;	// 0x32a2d6e5
- (void)setIconHorizontalPosition:(float)position;	// 0x32a2d705
- (void)setIconVerticalPosition:(float)position;	// 0x32a2d725
- (void)setImage:(id)image;	// 0x32a2d629
- (void)setInstructions:(id)instructions;	// 0x32a2d649
- (void)setMessage:(id)message;	// 0x32a2d56d
- (void)setMessageVerticalPosition:(float)position;	// 0x32a2d609
@end

