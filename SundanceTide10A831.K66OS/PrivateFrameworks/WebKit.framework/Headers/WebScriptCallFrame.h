/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

#import "WebKit-Structs.h"
#import <NSObject.h> // Unknown library

@class WebScriptCallFramePrivate;

@interface WebScriptCallFrame : NSObject {
	WebScriptCallFramePrivate *_private;	// 4 = 0x4
	id _userInfo;	// 8 = 0x8
}
@property(retain) id userInfo;	// G=0x350a8549; S=0x350a8505; converted property
- (void)_clearDebuggerCallFrame;	// 0x350a83ad
- (id)_convertValueToObjcValue:(JSValue)objcValue;	// 0x350a83e1
- (id)_initWithGlobalObject:(id)globalObject debugger:(WebScriptDebugger *)debugger caller:(id)caller debuggerCallFrame:(const DebuggerCallFrame *)frame;	// 0x350a8299
- (void)_setDebuggerCallFrame:(const DebuggerCallFrame *)frame;	// 0x350a8351
- (id)caller;	// 0x350a8559
- (void)dealloc;	// 0x350a84a1
- (id)evaluateWebScript:(id)script;	// 0x350a8859
- (id)exception;	// 0x350a8819
- (id)functionName;	// 0x350a87e5
- (id)scopeChain;	// 0x350a8579
// converted property setter: - (void)setUserInfo:(id)info;	// 0x350a8505
// converted property getter: - (id)userInfo;	// 0x350a8549
@end

