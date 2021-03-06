/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreBookkeeper.framework/StoreBookkeeper
 */

#import </libobjc.A.h>


@interface SBKPreferences : NSObject {
}
+ (id)storeBookkeeperPreferences;	// 0x327b3f61
- (id)init;	// 0x327b3fdd
- (void)_preferencesDidChange;	// 0x327b40cd
- (BOOL)boolForKey:(id)key;	// 0x327b42b1
- (void)dealloc;	// 0x327b4089
- (id)objectForKey:(id)key withDefaultValue:(id)defaultValue;	// 0x327b41fd
- (void)registerDefaultsIfKeyNotSet:(id)set registrationBlock:(id)block;	// 0x327b4129
- (void)setBool:(BOOL)aBool forKey:(id)key;	// 0x327b4245
- (void)setObject:(id)object forKey:(id)key;	// 0x327b41c9
@end

