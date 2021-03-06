/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ScreenReaderCore.framework/ScreenReaderCore
 */

#import <NSObject.h> // Unknown library


@interface NSObject (SCRCThread)
+ (double)performSelector:(SEL)selector withThreadKey:(id)threadKey count:(unsigned long)count objects:(id)objects;	// 0x34b86099
+ (double)performSelector:(SEL)selector withThreadKey:(id)threadKey waitTime:(double)time cancelMask:(unsigned long)mask count:(unsigned long)count objects:(id)objects;	// 0x34b88041
- (id)_getRetainedValueForKeyPath:(id)keyPath forThreadKey:(id)threadKey waitTime:(double)time copy:(BOOL)copy;	// 0x34b87b75
- (id)_getRetainedValueForKeyPathOnMainThread:(id)keyPathOnMainThread copy:(BOOL)copy;	// 0x34b86e65
- (void)_scr_safeGetValueForBlock:(id)block lock:(id)lock;	// 0x34b87ab9
- (void)_scr_safeGetValueForKeyPath:(id)keyPath;	// 0x34b86f71
- (void)_scr_safeGetValueForKeyPath:(id)keyPath lock:(id)lock;	// 0x34b86f85
- (void)_scr_safeGetValueForSelector:(id)selector lock:(id)lock;	// 0x34b88225
- (id)copyValueForKeyPath:(id)keyPath forThreadKey:(id)threadKey;	// 0x34b87d59
- (id)copyValueForKeyPath:(id)keyPath forThreadKey:(id)threadKey waitTime:(double)time;	// 0x34b87d81
- (id)copyValueForKeyPathOnMainThread:(id)keyPathOnMainThread;	// 0x34b872c9
- (id)performSelector:(SEL)selector withObjectsAsArray:(id)objectsAsArray;	// 0x34b87f29
- (double)performSelector:(SEL)selector withThreadKey:(id)threadKey count:(unsigned long)count objects:(id)objects;	// 0x34b848fd
- (double)performSelector:(SEL)selector withThreadKey:(id)threadKey waitTime:(double)time cancelMask:(unsigned long)mask count:(unsigned long)count objects:(id)objects;	// 0x34b869bd
- (id)threadDescription;	// 0x34b88209
- (id)valueForBlock:(id)block forThreadKey:(id)threadKey waitTime:(double)time;	// 0x34b87dad
- (id)valueForKeyPath:(id)keyPath forThreadKey:(id)threadKey;	// 0x34b87cf5
- (id)valueForKeyPath:(id)keyPath forThreadKey:(id)threadKey waitTime:(double)time;	// 0x34b87d1d
- (id)valueForKeyPathOnMainThread:(id)keyPathOnMainThread;	// 0x34b86e39
- (id)valueForSelector:(SEL)selector forThreadKey:(id)threadKey waitTime:(double)time copyValue:(BOOL)value withObjects:(id)objects;	// 0x34b88391
@end

