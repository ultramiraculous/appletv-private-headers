/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRControl.h"


__attribute__((visibility("hidden")))
@interface ATVPhotoMetadataCommentView : BRControl {
	BRControl *_commentsView;	// 84 = 0x54
	BOOL _disableDisplay;	// 88 = 0x58
}
@property(retain, nonatomic) BRControl *commentsView;	// G=0x12585d; S=0x1256b9; @synthesize=_commentsView
@property(assign, nonatomic) BOOL disableDisplay;	// G=0x12586d; S=0x12561d; @synthesize=_disableDisplay
- (id)init;	// 0x1255b9
- (void).cxx_destruct;	// 0x12587d
- (BOOL)brEventAction:(id)action;	// 0x12580d
// declared property getter: - (id)commentsView;	// 0x12585d
// declared property getter: - (BOOL)disableDisplay;	// 0x12586d
- (void)layoutSubcontrols;	// 0x125759
// declared property setter: - (void)setCommentsView:(id)view;	// 0x1256b9
// declared property setter: - (void)setDisableDisplay:(BOOL)display;	// 0x12561d
@end
