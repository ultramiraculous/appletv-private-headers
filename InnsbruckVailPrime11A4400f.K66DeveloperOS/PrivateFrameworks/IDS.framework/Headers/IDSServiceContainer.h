/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/IDS.framework/IDS
 */

#import <NSObject.h> // Unknown library

@class NSMutableSet, IDSServiceMonitor;

__attribute__((visibility("hidden")))
@interface IDSServiceContainer : NSObject {
	IDSServiceMonitor *_monitor;	// 4 = 0x4
	NSMutableSet *_listeners;	// 8 = 0x8
}
@property(readonly, assign, nonatomic) NSMutableSet *listeners;	// G=0x3115af79; @synthesize=_listeners
@property(retain, nonatomic) IDSServiceMonitor *monitor;	// G=0x3115af59; S=0x3115af69; @synthesize=_monitor
- (id)initWithService:(id)service;	// 0x3115ada5
- (BOOL)addListenerID:(id)anId;	// 0x3115aedd
- (void)dealloc;	// 0x3115ae49
- (BOOL)hasListenerID:(id)anId;	// 0x3115aead
// declared property getter: - (id)listeners;	// 0x3115af79
// declared property getter: - (id)monitor;	// 0x3115af59
- (BOOL)removeListenerID:(id)anId;	// 0x3115af29
// declared property setter: - (void)setMonitor:(id)monitor;	// 0x3115af69
@end
