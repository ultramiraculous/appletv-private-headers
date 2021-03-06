/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/FactoryTest.framework/FactoryTest
 */

#import <NSObject.h> // Unknown library

@class NSLock, NSMutableDictionary;

@interface CLTMNotificationCenter : NSObject {
	BOOL _enabled;	// 4 = 0x4
	BOOL _supported;	// 5 = 0x5
	NSMutableDictionary *_observers;	// 8 = 0x8
	int _lastlevel;	// 12 = 0xc
	NSLock *_lock;	// 16 = 0x10
}
@property(readonly, assign, nonatomic) int currentLevel;	// G=0x33458bdd; 
@property(readonly, assign, nonatomic) BOOL isEnabled;	// G=0x33458c09; @synthesize=_enabled
@property(readonly, assign, nonatomic) BOOL isSupported;	// G=0x33458bf9; @synthesize=_supported
+ (id)defaultCenter;	// 0x3345842d
+ (void)initialize;	// 0x33458381
- (id)init;	// 0x3345843d
- (void)_handleNotification;	// 0x33457efd
- (void)_queryPrefsForCLTMStatus;	// 0x33458289
- (int)addObserver:(id)observer withSelector:(SEL)selector forThermalLevel:(int)thermalLevel;	// 0x33458845
// declared property getter: - (int)currentLevel;	// 0x33458bdd
- (void)dealloc;	// 0x334585fd
// declared property getter: - (BOOL)isEnabled;	// 0x33458c09
// declared property getter: - (BOOL)isSupported;	// 0x33458bf9
- (void)removeObserver:(id)observer forThermalLevel:(int)thermalLevel;	// 0x33458aa1
@end

