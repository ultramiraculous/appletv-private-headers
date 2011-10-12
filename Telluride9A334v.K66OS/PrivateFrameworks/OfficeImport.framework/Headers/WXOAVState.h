/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OAVState.h"

@class NSMutableDictionary, WDParagraph, WXState;

__attribute__((visibility("hidden")))
@interface WXOAVState : OAVState {
@private
	WXState *mWxState;	// 28 = 0x1c
	WDParagraph *mParagraph;	// 32 = 0x20
	NSMutableDictionary *mNextVmlShapeIdToTextBoxMap;	// 36 = 0x24
}
@property(retain) id currentParagraph;	// G=0x35767795; S=0x3567b301; converted property
- (id)initWithWXState:(id)wxstate;	// 0x35667855
// converted property getter: - (id)currentParagraph;	// 0x35767795
- (void)dealloc;	// 0x3568132d
- (id)nextVmlShapeIdToTextBoxMap;	// 0x35680d2d
// converted property setter: - (void)setCurrentParagraph:(id)paragraph;	// 0x3567b301
- (id)wxState;	// 0x3567ff75
@end

