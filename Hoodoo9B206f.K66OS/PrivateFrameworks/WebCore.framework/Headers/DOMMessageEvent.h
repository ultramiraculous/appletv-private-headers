/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

#import "DOMEvent.h"

@class DOMMessagePort, DOMAbstractView, NSString;

__attribute__((visibility("hidden")))
@interface DOMMessageEvent : DOMEvent {
}
@property(readonly, retain) NSString *data;	// G=0x334b5c99; 
@property(readonly, copy) NSString *lastEventId;	// G=0x334b5bd1; 
@property(readonly, retain) DOMMessagePort *messagePort;	// G=0x334b5ea1; 
@property(readonly, copy) NSString *origin;	// G=0x334b5b09; 
@property(readonly, retain) DOMAbstractView *source;	// G=0x334b5de5; 
- (void)initMessageEvent:(id)event canBubbleArg:(BOOL)arg cancelableArg:(BOOL)arg3 dataArg:(id)arg4 originArg:(id)arg5 lastEventIdArg:(id)arg6 sourceArg:(id)arg7 messagePort:(id)port;	// 0x334b5f65
// declared property getter: - (id)data;	// 0x334b5c99
// declared property getter: - (id)lastEventId;	// 0x334b5bd1
// declared property getter: - (id)messagePort;	// 0x334b5ea1
// declared property getter: - (id)origin;	// 0x334b5b09
// declared property getter: - (id)source;	// 0x334b5de5
@end

