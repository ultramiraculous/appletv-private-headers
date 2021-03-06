/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
 */

#import "IMFoundation-Structs.h"
#import <NSObject.h> // Unknown library

@class NSMutableDictionary;

@interface IMUserNotificationCenter : NSObject {
	NSMutableDictionary *_identifierToIMUserNotificationQueueMap;	// 4 = 0x4
	NSMutableDictionary *_identifierToListenerQueueMap;	// 8 = 0x8
	NSMutableDictionary *_identifierToBlockQueueMap;	// 12 = 0xc
	NSMutableDictionary *_identifierToRunLoopSourcesMap;	// 16 = 0x10
	NSMutableDictionary *_identifierToCFUserNotificationMap;	// 20 = 0x14
}
@property(retain, nonatomic) NSMutableDictionary *identifierToBlockQueueMap;	// G=0x341adbdd; S=0x341adbed; @synthesize=_identifierToBlockQueueMap
@property(retain, nonatomic) NSMutableDictionary *identifierToCFUserNotificationMap;	// G=0x341adc1d; S=0x341adc2d; @synthesize=_identifierToCFUserNotificationMap
@property(retain, nonatomic) NSMutableDictionary *identifierToIMUserNotificationQueueMap;	// G=0x341adb9d; S=0x341adbad; @synthesize=_identifierToIMUserNotificationQueueMap
@property(retain, nonatomic) NSMutableDictionary *identifierToListenerQueueMap;	// G=0x341adbbd; S=0x341adbcd; @synthesize=_identifierToListenerQueueMap
@property(retain, nonatomic) NSMutableDictionary *identifierToRunLoopSourcesMap;	// G=0x341adbfd; S=0x341adc0d; @synthesize=_identifierToRunLoopSourcesMap
+ (id)sharedInstance;	// 0x341ac99d
- (void)_cancelActiveUserNotificationForIdentifier:(id)identifier;	// 0x341ad115
- (id)_dequeueBlockForIdentifier:(id)identifier;	// 0x341acd1d
- (id)_dequeueListenerForIdentifier:(id)identifier;	// 0x341acc69
- (id)_dequeueUserNotificationForIdentifier:(id)identifier;	// 0x341acb91
- (void)_displayNextUserNotificationForIdentifier:(id)identifier;	// 0x341ad22d
- (void)_enqueueBlock:(id)block forIdentifier:(id)identifier;	// 0x341acfdd
- (void)_enqueueListener:(id)listener forIdentifier:(id)identifier;	// 0x341acef9
- (void)_enqueueUserNotification:(id)notification forIdentifier:(id)identifier;	// 0x341ace25
- (id)_frontBlockForIdentifier:(id)identifier;	// 0x341acb59
- (id)_frontListenerForIdentifier:(id)identifier;	// 0x341acb21
- (id)_frontUserNotificationForIdentifier:(id)identifier;	// 0x341acae9
- (void)_handleUserNotification:(CFUserNotificationRef)notification responseFlags:(unsigned long)flags;	// 0x341ad3d9
- (void)addUserNotification:(id)notification listener:(id)listener;	// 0x341ad595
- (void)addUserNotification:(id)notification listener:(id)listener completionHandler:(id)handler;	// 0x341ad5b9
- (unsigned)countForIdentifier:(id)identifier;	// 0x341ad665
- (void)dealloc;	// 0x341aca49
// declared property getter: - (id)identifierToBlockQueueMap;	// 0x341adbdd
// declared property getter: - (id)identifierToCFUserNotificationMap;	// 0x341adc1d
// declared property getter: - (id)identifierToIMUserNotificationQueueMap;	// 0x341adb9d
// declared property getter: - (id)identifierToListenerQueueMap;	// 0x341adbbd
// declared property getter: - (id)identifierToRunLoopSourcesMap;	// 0x341adbfd
- (void)removeAllListeners;	// 0x341ad9fd
- (void)removeListener:(id)listener;	// 0x341ad69d
// declared property setter: - (void)setIdentifierToBlockQueueMap:(id)blockQueueMap;	// 0x341adbed
// declared property setter: - (void)setIdentifierToCFUserNotificationMap:(id)cfuserNotificationMap;	// 0x341adc2d
// declared property setter: - (void)setIdentifierToIMUserNotificationQueueMap:(id)imuserNotificationQueueMap;	// 0x341adbad
// declared property setter: - (void)setIdentifierToListenerQueueMap:(id)listenerQueueMap;	// 0x341adbcd
// declared property setter: - (void)setIdentifierToRunLoopSourcesMap:(id)runLoopSourcesMap;	// 0x341adc0d
@end

