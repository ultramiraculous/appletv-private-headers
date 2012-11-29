/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <NSObject.h> // Unknown library


@interface NSPortNameServer : NSObject {
}
+ (id)defaultPortNameServer;	// 0x34e09109
+ (id)systemDefaultPortNameServer;	// 0x34e090d1
- (id)portForName:(id)name;	// 0x34e09125
- (id)portForName:(id)name host:(id)host;	// 0x34e09149
- (id)portForName:(id)name onHost:(id)host;	// 0x34e091cd
- (BOOL)registerPort:(id)port forName:(id)name;	// 0x34e091b5
- (BOOL)registerPort:(id)port name:(id)name;	// 0x34e0916d
- (BOOL)removePortForName:(id)name;	// 0x34e09191
@end
