/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "ATVAPNetworkSelectionDelegate.h"
#import "BRViewController.h"

@class NSString;
@protocol LTWirelessSetupResultDelegate;

__attribute__((visibility("hidden")))
@interface LTWirelessSetupController : BRViewController <ATVAPNetworkSelectionDelegate> {
	id<LTWirelessSetupResultDelegate> _delegate;	// 104 = 0x68
	BOOL _didJoinNetwork;	// 108 = 0x6c
	NSString *_networkName;	// 112 = 0x70
	NSString *_networkPassword;	// 116 = 0x74
}
@property(assign) id delegate;	// G=0x4ca019; S=0x4c9fd5; converted property
- (id)init;	// 0x4c9f05
- (id)initWithNetworkName:(id)networkName password:(id)password;	// 0x4c9f45
- (void).cxx_destruct;	// 0x4ca2c9
- (void)_showNetworkMenu;	// 0x4ca311
// converted property getter: - (id)delegate;	// 0x4ca019
- (void)network:(id)network wasSelected:(BOOL)selected;	// 0x4ca149
// converted property setter: - (void)setDelegate:(id)delegate;	// 0x4c9fd5
- (void)wasExhumed;	// 0x4ca099
- (void)wasPopped;	// 0x4ca06d
- (void)wasPushed;	// 0x4ca02d
@end

