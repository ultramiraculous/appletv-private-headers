/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "BRViewController.h"
#import "ATVAPNetworkSelectionDelegate.h"

@class NSString;
@protocol LTWirelessSetupResultDelegate;

__attribute__((visibility("hidden")))
@interface LTWirelessSetupController : BRViewController <ATVAPNetworkSelectionDelegate> {
	id<LTWirelessSetupResultDelegate> _delegate;	// 104 = 0x68
	BOOL _didJoinNetwork;	// 108 = 0x6c
	NSString *_networkName;	// 112 = 0x70
	NSString *_networkPassword;	// 116 = 0x74
}
@property(assign) id delegate;	// G=0x46fe01; S=0x46fdbd; converted property
- (id)init;	// 0x46fced
- (id)initWithNetworkName:(id)networkName password:(id)password;	// 0x46fd2d
- (void).cxx_destruct;	// 0x4700b1
- (void)_showNetworkMenu;	// 0x4700f9
// converted property getter: - (id)delegate;	// 0x46fe01
- (void)network:(id)network wasSelected:(BOOL)selected;	// 0x46ff31
// converted property setter: - (void)setDelegate:(id)delegate;	// 0x46fdbd
- (void)wasExhumed;	// 0x46fe81
- (void)wasPopped;	// 0x46fe55
- (void)wasPushed;	// 0x46fe15
@end

