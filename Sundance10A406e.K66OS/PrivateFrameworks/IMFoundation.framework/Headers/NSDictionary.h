/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
 */

#import <NSDictionary.h> // Unknown library


@interface NSDictionary (FezAdditions)
+ (id)_dictionaryWithData:(id)data isPlist:(BOOL)plist allowedClasses:(id)classes;	// 0x36870695
+ (id)dictionaryWithArchiveData:(id)archiveData;	// 0x3687065d
+ (id)dictionaryWithArchiveData:(id)archiveData allowedClasses:(id)classes;	// 0x36870675
+ (id)dictionaryWithPlistData:(id)plistData;	// 0x36875dd5
- (id)__imDeepCopy;	// 0x36875f99
- (BOOL)__imIsMutable;	// 0x36875d81
- (id)archiveData;	// 0x36870559
- (id)dictionaryFromChanges:(id)changes;	// 0x36875e29
- (id)keysOfChangedEntriesComparedTo:(id)to;	// 0x368702b1
- (id)plistData;	// 0x36875df5
@end

@interface NSDictionary (DictionaryTypeChecking)
- (id)_arrayForKey:(id)key;	// 0x36877e95
- (id)_dataForKey:(id)key;	// 0x36877f91
- (id)_dictionaryForKey:(id)key;	// 0x36877e41
- (id)_numberForKey:(id)key;	// 0x36877ee9
- (id)_stringForKey:(id)key;	// 0x36877f3d
@end

@interface NSDictionary (HFSFileAttributes)
@property(readonly, assign, nonatomic) unsigned short fileHFSFlags;	// G=0x3687adc1; 
@property(readonly, assign, nonatomic) unsigned long long fileHFSResourceForkSize;	// G=0x36873fe5; 
// declared property getter: - (unsigned short)fileHFSFlags;	// 0x3687adc1
// declared property getter: - (unsigned long long)fileHFSResourceForkSize;	// 0x36873fe5
@end
