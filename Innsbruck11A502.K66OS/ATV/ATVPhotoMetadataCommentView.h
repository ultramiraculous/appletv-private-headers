/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRControl.h"


__attribute__((visibility("hidden")))
@interface ATVPhotoMetadataCommentView : BRControl {
	BOOL _displayDisabled;	// 84 = 0x54
	BRControl *_commentsView;	// 88 = 0x58
}
@property(retain, nonatomic) BRControl *commentsView;	// G=0xcd62d; S=0xcd47d; @synthesize=_commentsView
@property(assign, nonatomic) BOOL displayDisabled;	// G=0xcd63d; S=0xcd3e1; @synthesize=_displayDisabled
- (id)init;	// 0xcd385
- (void).cxx_destruct;	// 0xcd64d
- (BOOL)brEventAction:(id)action;	// 0xcd5dd
// declared property getter: - (id)commentsView;	// 0xcd62d
// declared property getter: - (BOOL)displayDisabled;	// 0xcd63d
- (void)layoutSubcontrols;	// 0xcd51d
// declared property setter: - (void)setCommentsView:(id)view;	// 0xcd47d
// declared property setter: - (void)setDisplayDisabled:(BOOL)disabled;	// 0xcd3e1
@end
