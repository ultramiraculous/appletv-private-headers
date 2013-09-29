/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"

@class NSArray, ATVFadeLayer, NSObject;
@protocol OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface ATVScrollingCommentsView : BRControl {
	BOOL __shouldAnimateWithConstVelocity;	// 84 = 0x54
	NSArray *_commentViews;	// 88 = 0x58
	int _currentIndex;	// 92 = 0x5c
	XXStruct_qlg9jA _pageOverlap;	// 96 = 0x60
	float __snapOffset;	// 100 = 0x64
	NSArray *__activeCommentViews;	// 104 = 0x68
	ATVFadeLayer *__topFade;	// 108 = 0x6c
	ATVFadeLayer *__bottomFade;	// 112 = 0x70
	NSObject<OS_dispatch_source> *_axScrollingCommentTimer;	// 116 = 0x74
}
@property(copy, nonatomic) NSArray *_activeCommentViews;	// G=0xfe05d; S=0xfe071; @synthesize=__activeCommentViews
@property(retain, nonatomic) ATVFadeLayer *_bottomFade;	// G=0xfe0b9; S=0xfe0c9; @synthesize=__bottomFade
@property(assign, nonatomic) BOOL _shouldAnimateWithConstVelocity;	// G=0xfe03d; S=0xfe04d; @synthesize=__shouldAnimateWithConstVelocity
@property(assign, nonatomic) float _snapOffset;	// G=0xfe01d; S=0xfe02d; @synthesize=__snapOffset
@property(retain, nonatomic) ATVFadeLayer *_topFade;	// G=0xfe081; S=0xfe091; @synthesize=__topFade
@property(retain, nonatomic) NSObject<OS_dispatch_source> *axScrollingCommentTimer;	// G=0xfe0f1; S=0xfe101; @synthesize=_axScrollingCommentTimer
@property(retain, nonatomic) NSArray *commentViews;	// G=0xfdf99; S=0xfdfa9; @synthesize=_commentViews
@property(assign, nonatomic) int currentIndex;	// G=0xfdfd1; S=0xfdfe1; @synthesize=_currentIndex
@property(assign, nonatomic) XXStruct_qlg9jA pageOverlap;	// G=0xfdff1; S=0xfe00d; @synthesize=_pageOverlap
+ (id)commentsViewWithCommentViews:(id)commentViews initialIndex:(int)index;	// 0xfcbb9
- (id)init;	// 0xfcc0d
- (id)initWithCommentViews:(id)commentViews initialIndex:(int)index;	// 0xfcc25
- (void).cxx_destruct;	// 0xfe129
- (void)_accessibilityAnnounceCommentChanges;	// 0xfe66d
// declared property getter: - (id)_activeCommentViews;	// 0xfe05d
// declared property getter: - (id)_bottomFade;	// 0xfe0b9
- (BOOL)_goBackward;	// 0xfe4c9
- (BOOL)_goForward;	// 0xfe209
- (CGSize)_maxCommentSize;	// 0xfe199
// declared property getter: - (BOOL)_shouldAnimateWithConstVelocity;	// 0xfe03d
// declared property getter: - (float)_snapOffset;	// 0xfe01d
// declared property getter: - (id)_topFade;	// 0xfe081
- (id)accessibilityControls;	// 0xfdf89
- (id)accessibilityLabel;	// 0xfddc5
// declared property getter: - (id)axScrollingCommentTimer;	// 0xfe0f1
- (BOOL)brEventAction:(id)action;	// 0xfdce1
// declared property getter: - (id)commentViews;	// 0xfdf99
// declared property getter: - (int)currentIndex;	// 0xfdfd1
- (void)layoutSubcontrols;	// 0xfcf31
// declared property getter: - (XXStruct_qlg9jA)pageOverlap;	// 0xfdff1
// declared property setter: - (void)setAxScrollingCommentTimer:(id)timer;	// 0xfe101
// declared property setter: - (void)setCommentViews:(id)views;	// 0xfdfa9
// declared property setter: - (void)setCurrentIndex:(int)index;	// 0xfdfe1
// declared property setter: - (void)setPageOverlap:(XXStruct_qlg9jA)overlap;	// 0xfe00d
// declared property setter: - (void)set_activeCommentViews:(id)views;	// 0xfe071
// declared property setter: - (void)set_bottomFade:(id)fade;	// 0xfe0c9
// declared property setter: - (void)set_shouldAnimateWithConstVelocity:(BOOL)constVelocity;	// 0xfe04d
// declared property setter: - (void)set_snapOffset:(float)offset;	// 0xfe02d
// declared property setter: - (void)set_topFade:(id)fade;	// 0xfe091
@end
