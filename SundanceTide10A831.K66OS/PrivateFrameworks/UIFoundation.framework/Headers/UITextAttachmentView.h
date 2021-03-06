/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
 */

#import "NSTextAttachmentCell.h"
#import "UIFoundation-Structs.h"
#import <UIView.h> // Unknown library

@class UIImage, NSTextAttachment;

__attribute__((visibility("hidden")))
@interface UITextAttachmentView : UIView <NSTextAttachmentCell> {
	UIImage *_image;	// 84 = 0x54
	NSTextAttachment *_attachment;	// 88 = 0x58
}
@property(assign, nonatomic) NSTextAttachment *attachment;	// G=0x32ce2d69; S=0x32ce2d79; @synthesize=_attachment
@property(assign, nonatomic) CGRect drawingBounds;	// G=0x32ce2aed; S=0x32ce2ac9; 
@property(retain, nonatomic) UIImage *image;	// G=0x32ce2d59; S=0x32ce2cb9; 
+ (id)viewForData:(id)data ofType:(id)type;	// 0x32ce277d
+ (id)viewForImage:(id)image;	// 0x32ce28d9
- (id)initWithContentView:(id)contentView;	// 0x32ce2925
// declared property getter: - (id)attachment;	// 0x32ce2d69
- (CGPoint)cellBaselineOffset;	// 0x32ce2a91
- (CGSize)cellSize;	// 0x32ce2a59
- (id)contentView;	// 0x32ce2a31
- (void)dealloc;	// 0x32ce29e5
- (void)drawWithFrame:(CGRect)frame inView:(id)view characterIndex:(unsigned)index;	// 0x32ce2b11
- (void)drawWithFrame:(CGRect)frame inView:(id)view characterIndex:(unsigned)index layoutManager:(id)manager;	// 0x32ce2b49
// declared property getter: - (CGRect)drawingBounds;	// 0x32ce2aed
// declared property getter: - (id)image;	// 0x32ce2d59
// declared property setter: - (void)setAttachment:(id)attachment;	// 0x32ce2d79
// declared property setter: - (void)setDrawingBounds:(CGRect)bounds;	// 0x32ce2ac9
// declared property setter: - (void)setImage:(id)image;	// 0x32ce2cb9
@end

