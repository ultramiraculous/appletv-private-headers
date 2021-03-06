/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreMIDI.framework/CoreMIDI
 */

#import "CoreMIDI-Structs.h"
#import <NSObject.h> // Unknown library

@class NSString;

@interface MIDINetworkSession : NSObject {
@private
	MIDINetworkSessionImpl *_impl;	// 4 = 0x4
}
@property(assign, nonatomic) unsigned connectionPolicy;	// G=0x363d0545; S=0x363d0675; 
@property(assign, nonatomic, getter=isEnabled) BOOL enabled;	// G=0x363cfeb5; S=0x363cffe5; 
@property(readonly, assign, nonatomic) NSString *localName;	// G=0x363d0421; 
@property(readonly, assign, nonatomic) NSString *networkName;	// G=0x363d02dd; 
@property(readonly, assign, nonatomic) unsigned networkPort;	// G=0x363d01ad; 
+ (id)defaultSession;	// 0x363cf7e1
- (id)init;	// 0x363cfbb9
- (BOOL)addConnection:(id)connection;	// 0x363d0955
- (BOOL)addContact:(id)contact;	// 0x363d0c8d
- (BOOL)addOrRemoveConnection:(id)connection add:(BOOL)add;	// 0x363d08f1
// declared property getter: - (unsigned)connectionPolicy;	// 0x363d0545
- (id)connections;	// 0x363d07cd
- (id)contacts;	// 0x363d0b5d
- (void)contactsChanged;	// 0x363d0ed1
- (void)dealloc;	// 0x363cfdd5
- (OpaqueMIDIEndpoint *)destinationEndpoint;	// 0x363d0f29
// declared property getter: - (BOOL)isEnabled;	// 0x363cfeb5
// declared property getter: - (id)localName;	// 0x363d0421
// declared property getter: - (id)networkName;	// 0x363d02dd
// declared property getter: - (unsigned)networkPort;	// 0x363d01ad
- (void)refreshBonjourName;	// 0x363cfad9
- (BOOL)removeConnection:(id)connection;	// 0x363d0a59
- (BOOL)removeContact:(id)contact;	// 0x363d0d85
- (void)sessionChanged;	// 0x363d0e7d
// declared property setter: - (void)setConnectionPolicy:(unsigned)policy;	// 0x363d0675
// declared property setter: - (void)setEnabled:(BOOL)enabled;	// 0x363cffe5
- (void)setStateToEntity;	// 0x363cfa5d
- (OpaqueMIDIEndpoint *)sourceEndpoint;	// 0x363d0f15
- (void)updateFromEntity;	// 0x363cf99d
@end

