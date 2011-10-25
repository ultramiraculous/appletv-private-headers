/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRAlertController.h"
#import "BRTextFieldDelegate.h"

@class NSString, ATVIPv4AddressEntryControl;

__attribute__((visibility("hidden")))
@interface ATVSWUpdateServerIPController : BRAlertController <BRTextFieldDelegate> {
@private
	NSString *_serverIP;	// 112 = 0x70
	NSString *_dialogID;	// 116 = 0x74
	ATVIPv4AddressEntryControl *_editor;	// 120 = 0x78
}
- (id)init;	// 0x339aec35
- (id)_defaultServerIPAddress;	// 0x339af1dd
- (BOOL)_handleEventForAlertController:(id)alertController;	// 0x339af281
- (BOOL)brEventAction:(id)action;	// 0x339af139
- (void)dealloc;	// 0x339aee89
- (void)layoutSubcontrols;	// 0x339aeefd
- (id)runModal;	// 0x339af199
- (void)textDidChange:(id)text;	// 0x339af095
- (void)textDidEndEditing:(id)text;	// 0x339af099
@end

