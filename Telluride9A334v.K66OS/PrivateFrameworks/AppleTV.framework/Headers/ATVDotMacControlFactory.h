/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRPhotoControlFactory.h"


__attribute__((visibility("hidden")))
@interface ATVDotMacControlFactory : BRPhotoControlFactory {
}
+ (id)mainMenuFactory;	// 0x330cb095
+ (id)standardFactory;	// 0x330cb049
- (id)initForMainMenu:(BOOL)mainMenu;	// 0x330cb0e1
- (id)_dividerForData:(id)data;	// 0x330cb9b5
- (id)_durationStringFromLong:(long)aLong;	// 0x330cbd55
- (id)_menuItemForDotMacData:(id)dotMacData currentControl:(id)control;	// 0x330cb361
- (id)_posterControlForDotMacData:(id)dotMacData currentControl:(id)control requestedBy:(id)by;	// 0x330cbb01
- (id)_previewControlForDotMacData:(id)dotMacData;	// 0x330cba65
- (id)controlForData:(id)data currentControl:(id)control requestedBy:(id)by;	// 0x330cb16d
- (float)heightForControlForData:(id)data requestedBy:(id)by;	// 0x330cb295
@end

