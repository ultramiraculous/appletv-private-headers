/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library

@class NSString, NSDictionary;

__attribute__((visibility("hidden")))
@interface BRStateMachineEventTuple : NSObject {
@private
	NSString *_event;	// 4 = 0x4
	id _context;	// 8 = 0x8
	NSDictionary *_userInfo;	// 12 = 0xc
}
@property(retain) id context;	// G=0x342c238d; S=0x342c23a1; @synthesize=_context
@property(retain) NSString *event;	// G=0x342c2355; S=0x342c2369; @synthesize=_event
@property(retain) NSDictionary *userInfo;	// G=0x342c23c5; S=0x342c23d9; @synthesize=_userInfo
// declared property getter: - (id)context;	// 0x342c238d
- (void)dealloc;	// 0x342c22e9
// declared property getter: - (id)event;	// 0x342c2355
// declared property setter: - (void)setContext:(id)context;	// 0x342c23a1
// declared property setter: - (void)setEvent:(id)event;	// 0x342c2369
// declared property setter: - (void)setUserInfo:(id)info;	// 0x342c23d9
// declared property getter: - (id)userInfo;	// 0x342c23c5
@end

