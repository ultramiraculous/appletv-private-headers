/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library

@class NSString;

@interface BRPreferences : NSObject {
@private
	NSString *_domain;	// 4 = 0x4
}
@property(readonly, retain) NSString *domain;	// G=0x332dbc6d; converted property
+ (id)sharedFrontRowPreferences;	// 0x332dc29d
- (id)initWithDomain:(id)domain;	// 0x332dbbc9
- (BOOL)boolForKey:(id)key;	// 0x332dbef1
- (BOOL)boolForKey:(id)key withValueForMissingPrefs:(BOOL)missingPrefs;	// 0x332dbf41
- (BOOL)canSetPreferencesForKey:(id)key;	// 0x332dc021
- (void)dealloc;	// 0x332dbc21
- (id)descriptionForKey:(id)key;	// 0x332dbfd9
// converted property getter: - (id)domain;	// 0x332dbc6d
- (double)doubleForKey:(id)key;	// 0x332dbe49
- (double)doubleForKey:(id)key withValueForMissingPrefs:(double)missingPrefs;	// 0x332dbe99
- (float)floatForKey:(id)key;	// 0x332dbda9
- (float)floatForKey:(id)key withValueForMissingPrefs:(float)missingPrefs;	// 0x332dbdf9
- (int)integerForKey:(id)key;	// 0x332dbd09
- (int)integerForKey:(id)key withValueForMissingPrefs:(int)missingPrefs;	// 0x332dbd59
- (BOOL)isLoggingEnabledForKey:(id)key;	// 0x332dc1fd
- (id)logFilePathsForKey:(id)key;	// 0x332dc22d
- (id)objectForKey:(id)key;	// 0x332dbcc1
- (BOOL)setBool:(BOOL)aBool forKey:(id)key;	// 0x332dc15d
- (BOOL)setDouble:(double)aDouble forKey:(id)key;	// 0x332dc109
- (BOOL)setFloat:(float)aFloat forKey:(id)key;	// 0x332dc0b9
- (BOOL)setInteger:(int)integer forKey:(id)key;	// 0x332dc069
- (BOOL)setObject:(id)object forKey:(id)key;	// 0x332dc1ad
- (id)stringForKey:(id)key;	// 0x332dbf91
- (void)syncNow;	// 0x332dbc7d
@end
