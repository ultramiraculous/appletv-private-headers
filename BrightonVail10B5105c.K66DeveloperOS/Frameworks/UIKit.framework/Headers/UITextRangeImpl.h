/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UITextRange.h"

@class DOMRange;

__attribute__((visibility("hidden")))
@interface UITextRangeImpl : UITextRange {
	DOMRange *_domRange;	// 4 = 0x4
	int _affinityIfCollapsed;	// 8 = 0x8
}
@property(assign, nonatomic) int affinity;	// G=0x3462f4a5; S=0x3462dd15; @synthesize=_affinityIfCollapsed
@property(retain, nonatomic) DOMRange *domRange;	// G=0x3462f22d; S=0x3462dd05; @synthesize=_domRange
+ (id)wrapDOMRange:(id)range;	// 0x345c50b5
+ (id)wrapDOMRange:(id)range withAffinity:(int)affinity;	// 0x345c50c9
- (void)adjustAffinityOfPosition:(id)position isStart:(BOOL)start;	// 0x3462f435
// declared property getter: - (int)affinity;	// 0x3462f4a5
- (void)dealloc;	// 0x34647c49
- (id)description;	// 0x34848b01
// declared property getter: - (id)domRange;	// 0x3462f22d
- (id)end;	// 0x3465ba6d
- (BOOL)isEmpty;	// 0x3462f1f9
- (BOOL)isEqual:(id)equal;	// 0x3465bf71
// declared property setter: - (void)setAffinity:(int)affinity;	// 0x3462dd15
// declared property setter: - (void)setDomRange:(id)range;	// 0x3462dd05
- (id)start;	// 0x3462f389
@end
