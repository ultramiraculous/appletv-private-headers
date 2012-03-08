/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRControl.h"
#import "AppleTV-Structs.h"


__attribute__((visibility("hidden")))
@interface BRTransitionControl : BRControl {
@private
	BRControl *_content;	// 48 = 0x30
	BOOL _transitionedIn;	// 52 = 0x34
}
@property(retain) BRControl *content;	// G=0x33ad027d; S=0x33ad0229; converted property
@property(assign) BOOL transitionedIn;	// G=0x33ad029d; S=0x33ad028d; converted property
- (id)init;	// 0x33ad0195
// converted property getter: - (id)content;	// 0x33ad027d
- (void)controlDidDisplayAsModalDialog;	// 0x33b1a46d
- (void)dealloc;	// 0x33ad01dd
// converted property setter: - (void)setContent:(id)content;	// 0x33ad0229
// converted property setter: - (void)setTransitionedIn:(BOOL)anIn;	// 0x33ad028d
// converted property getter: - (BOOL)transitionedIn;	// 0x33ad029d
@end
