/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIGestureRecognizer.h"
#import "UIKit-Structs.h"

@class UITouch, NSMutableArray;

__attribute__((visibility("hidden")))
@interface UIKeyboardWipeGestureRecognizer : UIGestureRecognizer {
@private
	NSMutableArray *_endPoints;	// 56 = 0x38
	UITouch *candidateEndpoint;	// 60 = 0x3c
}
@property(retain, nonatomic) UITouch *candidateEndpoint;	// G=0x30397ead; S=0x30397ebd; @synthesize
- (id)initWithTarget:(id)target action:(SEL)action;	// 0x303978c9
// declared property getter: - (id)candidateEndpoint;	// 0x30397ead
- (void)dealloc;	// 0x30397935
- (void)reset;	// 0x30397e71
- (BOOL)segmentsLookLikeAWipe:(id)wipe;	// 0x30397981
// declared property setter: - (void)setCandidateEndpoint:(id)endpoint;	// 0x30397ebd
- (void)touchesBegan:(id)began withEvent:(id)event;	// 0x30397bc5
- (void)touchesCancelled:(id)cancelled withEvent:(id)event;	// 0x30397e5d
- (void)touchesEnded:(id)ended withEvent:(id)event;	// 0x30397e49
- (void)touchesMoved:(id)moved withEvent:(id)event;	// 0x30397c0d
@end

