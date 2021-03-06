/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
 */

#import <NSObject.h> // Unknown library

@class NSString;

@interface PTPInitCommandACKPacket : NSObject {
	unsigned _connectionNumber;	// 4 = 0x4
	unsigned char _responderGUID[16];	// 8 = 0x8
	NSString *_responderFriendlyName;	// 24 = 0x18
}
@property(assign) unsigned long connectionNumber;	// G=0x3551240d; S=0x3551241d; converted property
@property(retain) NSString *responderFriendlyName;	// G=0x3551243d; S=0x3551252d; converted property
- (id)initWithConnectionNumber:(unsigned long)connectionNumber responderGUID:(char *)guid responderFriendlyName:(id)name;	// 0x35512469
- (id)initWithTCPBuffer:(void *)tcpbuffer;	// 0x355128c5
// converted property getter: - (unsigned long)connectionNumber;	// 0x3551240d
- (id)contentForTCP;	// 0x355127a5
- (void)dealloc;	// 0x35512879
- (id)description;	// 0x3551265d
// converted property getter: - (id)responderFriendlyName;	// 0x3551243d
- (const char *)responderGUID;	// 0x3551242d
- (id)responderGUIDString;	// 0x355125a5
// converted property setter: - (void)setConnectionNumber:(unsigned long)number;	// 0x3551241d
// converted property setter: - (void)setResponderFriendlyName:(id)name;	// 0x3551252d
- (void)setResponderGUID:(char *)guid;	// 0x3551244d
@end

