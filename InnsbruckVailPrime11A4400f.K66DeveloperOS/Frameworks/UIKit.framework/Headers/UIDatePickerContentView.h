/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIView.h"
#import "UIKit-Structs.h"

@class UILabel;

__attribute__((visibility("hidden")))
@interface UIDatePickerContentView : UIView {
	struct {
		unsigned hasSetContents : 1;
	} _datePickerContentViewFlags;	// 98 = 0x62
	BOOL _isModern;	// 99 = 0x63
	UILabel *_titleLabel;	// 100 = 0x64
	float _titleLabelMaxX;	// 104 = 0x68
	int _titleAlignment;	// 108 = 0x6c
}
@property(assign, nonatomic) BOOL isAmPm;	// G=0x2f8074d9; S=0x2f8074ed; 
@property(assign, nonatomic) BOOL isModern;	// G=0x2f80755d; S=0x2f80756d; @synthesize=_isModern
@property(assign, nonatomic) int titleAlignment;	// G=0x2f80754d; S=0x2f569d11; @synthesize=_titleAlignment
@property(readonly, assign, nonatomic) UILabel *titleLabel;	// G=0x2f569c81; @synthesize=_titleLabel
@property(assign, nonatomic) float titleLabelMaxX;	// G=0x2f80753d; S=0x2f80751d; @synthesize=_titleLabelMaxX
- (id)initWithFrame:(CGRect)frame;	// 0x2f569b0d
- (void)dealloc;	// 0x2f56ddd9
// declared property getter: - (BOOL)isAmPm;	// 0x2f8074d9
// declared property getter: - (BOOL)isModern;	// 0x2f80755d
- (void)layoutSubviews;	// 0x2f56b279
// declared property setter: - (void)setIsAmPm:(BOOL)pm;	// 0x2f8074ed
// declared property setter: - (void)setIsModern:(BOOL)modern;	// 0x2f80756d
// declared property setter: - (void)setTitleAlignment:(int)alignment;	// 0x2f569d11
// declared property setter: - (void)setTitleLabelMaxX:(float)x;	// 0x2f80751d
// declared property getter: - (int)titleAlignment;	// 0x2f80754d
// declared property getter: - (id)titleLabel;	// 0x2f569c81
// declared property getter: - (float)titleLabelMaxX;	// 0x2f80753d
@end
