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
	NSString *_serverIP;	// 116 = 0x74
	NSString *_dialogID;	// 120 = 0x78
	ATVIPv4AddressEntryControl *_editor;	// 124 = 0x7c
}
- (id)init;	// 0x301c5741
- (id)_defaultServerIPAddress;	// 0x301c5ce9
- (BOOL)_handleEventForAlertController:(id)alertController;	// 0x301c5d8d
- (BOOL)brEventAction:(id)action;	// 0x301c5c45
- (void)dealloc;	// 0x301c5995
- (void)layoutSubcontrols;	// 0x301c5a09
- (id)runModal;	// 0x301c5ca5
- (void)textDidChange:(id)text;	// 0x301c5ba1
- (void)textDidEndEditing:(id)text;	// 0x301c5ba5
@end
