/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
 */

#import <NSObject.h> // Unknown library

@class NSString;

@interface PTPInitCommandRequestPacket : NSObject {
	unsigned char _initiatorGUID[16];	// 4 = 0x4
	NSString *_initiatorFriendlyName;	// 20 = 0x14
}
@property(retain) NSString *initiatorFriendlyName;	// G=0x30d93095; S=0x30d930a5; converted property
- (id)initWithInitiatorGUID:(char *)initiatorGUID initiatorFriendlyName:(id)name;	// 0x30d92d11
- (id)initWithTCPBuffer:(void *)tcpbuffer;	// 0x30d92db5
- (id)contentForTCP;	// 0x30d92e81
- (void)dealloc;	// 0x30d92e35
- (id)description;	// 0x30d92f51
// converted property getter: - (id)initiatorFriendlyName;	// 0x30d93095
- (const char *)initiatorGUID;	// 0x30d93069
// converted property setter: - (void)setInitiatorFriendlyName:(id)name;	// 0x30d930a5
- (void)setInitiatorGUID:(char *)guid;	// 0x30d93079
@end

