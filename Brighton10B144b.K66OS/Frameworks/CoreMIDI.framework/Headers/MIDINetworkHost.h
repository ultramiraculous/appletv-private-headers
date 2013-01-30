/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreMIDI.framework/CoreMIDI
 */

#import <NSObject.h> // Unknown library
#import "CoreMIDI-Structs.h"

@class NSString;

@interface MIDINetworkHost : NSObject {
	MIDINetworkHostImpl *_impl;	// 4 = 0x4
}
@property(readonly, assign, nonatomic) NSString *address;	// G=0x3162528d; 
@property(readonly, assign, nonatomic) NSString *name;	// G=0x31625279; 
@property(readonly, assign, nonatomic) NSString *netServiceDomain;	// G=0x316252cd; 
@property(readonly, assign, nonatomic) NSString *netServiceName;	// G=0x316252b9; 
@property(readonly, assign, nonatomic) unsigned port;	// G=0x316252a1; 
+ (id)fromAddressAsText:(id)addressAsText withName:(id)name;	// 0x31625465
+ (id)hostWithName:(id)name address:(id)address port:(unsigned)port;	// 0x31624f89
+ (id)hostWithName:(id)name netService:(id)service;	// 0x316250a1
+ (id)hostWithName:(id)name netServiceName:(id)name2 netServiceDomain:(id)domain;	// 0x31625011
- (id)init;	// 0x31624f35
// declared property getter: - (id)address;	// 0x3162528d
- (id)addressAsText;	// 0x316255b1
- (void)dealloc;	// 0x31625101
- (id)description;	// 0x316251e1
- (id)displayName;	// 0x3162560d
- (BOOL)hasSameAddressAs:(id)as;	// 0x31625325
- (id)host;	// 0x316252b5
// declared property getter: - (id)name;	// 0x31625279
// declared property getter: - (id)netServiceDomain;	// 0x316252cd
// declared property getter: - (id)netServiceName;	// 0x316252b9
// declared property getter: - (unsigned)port;	// 0x316252a1
- (void)setName:(id)name;	// 0x316252e1
@end
