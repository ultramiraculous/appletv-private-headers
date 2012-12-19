/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSString;

__attribute__((visibility("hidden")))
@interface BRPreferences : XXUnknownSuperclass {
	NSString *_domain;	// 4 = 0x4
}
@property(readonly, retain) NSString *domain;	// G=0x3af42d; converted property
+ (id)sharedFrontRowPreferences;	// 0x3afa5d
- (id)initWithDomain:(id)domain;	// 0x3af389
- (BOOL)boolForKey:(id)key;	// 0x3af6ad
- (BOOL)boolForKey:(id)key withValueForMissingPrefs:(BOOL)missingPrefs;	// 0x3af6fd
- (BOOL)canSetPreferencesForKey:(id)key;	// 0x3af7dd
- (void)dealloc;	// 0x3af3e1
- (id)descriptionForKey:(id)key;	// 0x3af795
// converted property getter: - (id)domain;	// 0x3af42d
- (double)doubleForKey:(id)key;	// 0x3af609
- (double)doubleForKey:(id)key withValueForMissingPrefs:(double)missingPrefs;	// 0x3af659
- (float)floatForKey:(id)key;	// 0x3af569
- (float)floatForKey:(id)key withValueForMissingPrefs:(float)missingPrefs;	// 0x3af5b9
- (int)integerForKey:(id)key;	// 0x3af4c9
- (int)integerForKey:(id)key withValueForMissingPrefs:(int)missingPrefs;	// 0x3af519
- (BOOL)isLoggingEnabledForKey:(id)key;	// 0x3af9b9
- (id)logFilePathsForKey:(id)key;	// 0x3af9e5
- (id)objectForKey:(id)key;	// 0x3af481
- (BOOL)setBool:(BOOL)aBool forKey:(id)key;	// 0x3af919
- (BOOL)setDouble:(double)aDouble forKey:(id)key;	// 0x3af8c5
- (BOOL)setFloat:(float)aFloat forKey:(id)key;	// 0x3af875
- (BOOL)setInteger:(int)integer forKey:(id)key;	// 0x3af825
- (BOOL)setObject:(id)object forKey:(id)key;	// 0x3af969
- (id)stringForKey:(id)key;	// 0x3af74d
- (void)syncNow;	// 0x3af43d
@end
