/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface BRStateMachineEventTuple : XXUnknownSuperclass {
	NSString *_event;	// 4 = 0x4
	id _context;	// 8 = 0x8
	NSDictionary *_userInfo;	// 12 = 0xc
}
@property(retain) id context;	// G=0x414da1; S=0x414db5; @synthesize=_context
@property(retain) NSString *event;	// G=0x414d7d; S=0x414d91; @synthesize=_event
@property(retain) NSDictionary *userInfo;	// G=0x414dc5; S=0x414dd9; @synthesize=_userInfo
// declared property getter: - (id)context;	// 0x414da1
- (void)dealloc;	// 0x414d11
// declared property getter: - (id)event;	// 0x414d7d
// declared property setter: - (void)setContext:(id)context;	// 0x414db5
// declared property setter: - (void)setEvent:(id)event;	// 0x414d91
// declared property setter: - (void)setUserInfo:(id)info;	// 0x414dd9
// declared property getter: - (id)userInfo;	// 0x414dc5
@end

