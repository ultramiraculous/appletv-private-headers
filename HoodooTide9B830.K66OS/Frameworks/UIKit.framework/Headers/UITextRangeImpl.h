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
@private
	DOMRange *_domRange;	// 4 = 0x4
	int _affinityIfCollapsed;	// 8 = 0x8
}
@property(assign, nonatomic) int affinity;	// G=0x300ff01d; S=0x300fede9; @synthesize=_affinityIfCollapsed
@property(retain, nonatomic) DOMRange *domRange;	// G=0x300fef05; S=0x300fedc5; @synthesize=_domRange
+ (id)wrapDOMRange:(id)range;	// 0x30105c39
+ (id)wrapDOMRange:(id)range withAffinity:(int)affinity;	// 0x300fed49
- (void)adjustAffinityOfPosition:(id)position isStart:(BOOL)start;	// 0x300fefb1
// declared property getter: - (int)affinity;	// 0x300ff01d
- (void)dealloc;	// 0x30113139
- (id)description;	// 0x30310c65
// declared property getter: - (id)domRange;	// 0x300fef05
- (id)end;	// 0x3013727d
- (BOOL)isEmpty;	// 0x300feed5
- (BOOL)isEqual:(id)equal;	// 0x3011d165
// declared property setter: - (void)setAffinity:(int)affinity;	// 0x300fede9
// declared property setter: - (void)setDomRange:(id)range;	// 0x300fedc5
- (id)start;	// 0x300fef15
@end
