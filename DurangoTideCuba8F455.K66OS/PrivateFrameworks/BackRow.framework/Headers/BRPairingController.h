/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BackRow.framework/BackRow
 */

#import "BRController.h"
#import "BackRow-Structs.h"

@class BRHeaderControl, NSString, BRPairingPinControl, BRTextControl;

@interface BRPairingController : BRController {
@private
	BRHeaderControl *_header;	// 60 = 0x3c
	BRPairingPinControl *_pinControl;	// 64 = 0x40
	BRTextControl *_requirementText;	// 68 = 0x44
	NSString *_pin;	// 72 = 0x48
	NSString *_startNotificationName;	// 76 = 0x4c
	NSString *_stopNotificationName;	// 80 = 0x50
	BOOL _pairingHappenedWhileBuried;	// 84 = 0x54
}
+ (id)iTunesPairingControllerForChangingSyncHost;	// 0x32fd7299
+ (id)iTunesPairingControllerForInitialSync;	// 0x32fd7549
+ (id)iTunesPairingControllerForStreaming;	// 0x32fd7169
+ (id)iTunesPairingControllerForSync;	// 0x32fd7419
- (CGRect)_centeredMenuHeaderFrameForMasterFrame:(CGRect)masterFrame;	// 0x32fd6f71
- (id)_generatePairingPINWithNumDigits:(int)numDigits;	// 0x32fd7f31
- (id)_initWithType:(int)type;	// 0x32fd7679
- (void)_setCancelText:(id)text;	// 0x32fd7e65
- (void)_setPrimaryInfoText:(id)text;	// 0x32fd7de9
- (void)_setRequirementsText:(id)text;	// 0x32fd7ee9
- (void)_setStartNotificationName:(id)name;	// 0x32fd7015
- (void)_setStopNotificationName:(id)name;	// 0x32fd6fdd
- (void)_setTitle:(id)title;	// 0x32fd7149
- (void)_syncStatusChangedNotification:(id)notification;	// 0x32fd704d
- (id)accessibilityLabel;	// 0x32fd7fc1
- (BOOL)brEventAction:(id)action;	// 0x32fd77f1
- (void)dealloc;	// 0x32fd7aad
- (void)layoutSubcontrols;	// 0x32fd7b65
- (void)wasExhumed;	// 0x32fd78d1
- (void)wasPopped;	// 0x32fd7939
- (void)wasPushed;	// 0x32fd7a0d
@end

