/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <NSUserDefaults.h> // Unknown library


@interface NSUserDefaults (NSKeyValueCoding)
- (void)setValue:(id)value forKey:(id)key;	// 0x32476579
- (id)valueForKey:(id)key;	// 0x3243d641
@end

@interface NSUserDefaults (NSUserDefaults)
@property(retain) id searchList;	// G=0x3249faed; S=0x3249fac9; converted property
+ (void)resetStandardUserDefaults;	// 0x324a00d5
+ (void)setStandardUserDefaults:(id)defaults;	// 0x324a006d
+ (id)standardUserDefaults;	// 0x3240fc79
- (id)init;	// 0x3249f929
- (id)initWithUser:(id)user;	// 0x3242cadd
- (id)URLForKey:(id)key;	// 0x3249fd15
- (void)_adjustTimer:(id)timer;	// 0x32427441
- (void)_adjustTimerForAutosync;	// 0x3241d24d
- (void)addSuiteNamed:(id)named;	// 0x3249fddd
- (id)arrayForKey:(id)key;	// 0x3249fa75
- (BOOL)boolForKey:(id)key;	// 0x3240fe19
- (id)dataForKey:(id)key;	// 0x3249fa15
- (void)dealloc;	// 0x3249fe0d
- (id)dictionaryForKey:(id)key;	// 0x3249fa45
- (id)dictionaryRepresentation;	// 0x324a0229
- (double)doubleForKey:(id)key;	// 0x3244656d
- (float)floatForKey:(id)key;	// 0x32442b95
- (int)integerForKey:(id)key;	// 0x3243259d
- (long long)longForKey:(id)key;	// 0x3249fc71
- (id)objectForKey:(id)key;	// 0x3240ff0d
- (id)objectForKey:(id)key inDomain:(id)domain;	// 0x324a0141
- (BOOL)objectIsForcedForKey:(id)key;	// 0x324a0051
- (BOOL)objectIsForcedForKey:(id)key inDomain:(id)domain;	// 0x324a0041
- (id)persistentDomainForName:(id)name;	// 0x3244e52d
- (id)persistentDomainNames;	// 0x324a0289
- (void)registerDefaults:(id)defaults;	// 0x3243293d
- (void)removeObjectForKey:(id)key;	// 0x3241cf21
- (void)removeObjectForKey:(id)key inDomain:(id)domain;	// 0x3249faa5
- (void)removePersistentDomainForName:(id)name;	// 0x3249f911
- (void)removeSuiteNamed:(id)named;	// 0x3249fdf5
- (void)removeVolatileDomainForName:(id)name;	// 0x3249feb5
// converted property getter: - (id)searchList;	// 0x3249faed
- (void)setBool:(BOOL)aBool forKey:(id)key;	// 0x3241d349
- (void)setDouble:(double)aDouble forKey:(id)key;	// 0x324465c5
- (void)setFloat:(float)aFloat forKey:(id)key;	// 0x324465f9
- (void)setInteger:(int)integer forKey:(id)key;	// 0x32446631
- (void)setLong:(long long)aLong forKey:(id)key;	// 0x3249f9e1
- (void)setObject:(id)object forKey:(id)key;	// 0x3241cf79
- (void)setObject:(id)object forKey:(id)key inDomain:(id)domain;	// 0x3249fb15
- (void)setPersistentDomain:(id)domain forName:(id)name;	// 0x3249ff01
// converted property setter: - (void)setSearchList:(id)list;	// 0x3249fac9
- (void)setURL:(id)url forKey:(id)key;	// 0x3249f941
- (void)setVolatileDomain:(id)domain forName:(id)name;	// 0x3249fe69
- (id)stringArrayForKey:(id)key;	// 0x3243d329
- (id)stringForKey:(id)key;	// 0x32442b41
- (BOOL)synchronize;	// 0x324272f9
- (id)volatileDomainForName:(id)name;	// 0x324a0269
- (id)volatileDomainNames;	// 0x324a0249
@end

@interface NSUserDefaults (NSUserDefaults_NSURLExtras)
+ (void)_ensureAndLockPreferredLanguageLock;	// 0x324aea81
+ (void)_web_addDefaultsChangeObserver;	// 0x324ae7f1
+ (void)_web_defaultsDidChange;	// 0x324aea25
+ (id)_web_preferredLanguageCode;	// 0x324ae855
@end
