/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BackRow.framework/BackRow
 */

#import "BackRow-Structs.h"
#import "BROptionDialog.h"

@class BRMediaHost;

__attribute__((visibility("hidden")))
@interface BRMediaHostDisconnectedDialog : BROptionDialog {
@private
	BRMediaHost *_mediaHost;	// 128 = 0x80
	unsigned _timerSatisfied : 1;	// 132 = 0x84
}
@property(retain) BRMediaHost *mediaHost;	// G=0x329a7f99; S=0x329a800d; converted property
- (id)initWithHost:(id)host;	// 0x329a8125
- (void)_checkHostStatus:(id)status;	// 0x329a8295
- (void)dealloc;	// 0x329a80dd
- (void)goToSources;	// 0x329a8045
// converted property getter: - (id)mediaHost;	// 0x329a7f99
// converted property setter: - (void)setMediaHost:(id)host;	// 0x329a800d
- (void)wasPushed;	// 0x329a7fa9
@end
