/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library

@class NSString, NSDate;

__attribute__((visibility("hidden")))
@interface InstallableResourceRecord : NSObject {
@private
	NSString *name;	// 4 = 0x4
	NSString *version;	// 8 = 0x8
	NSString *path;	// 12 = 0xc
	NSDate *lastAccessed;	// 16 = 0x10
	unsigned long long totalBytes;	// 20 = 0x14
}
@property(retain, nonatomic) NSDate *lastAccessed;	// G=0x3319dadd; S=0x3319daed; @synthesize
@property(copy, nonatomic) NSString *name;	// G=0x3319da41; S=0x3319da51; @synthesize
@property(copy, nonatomic) NSString *path;	// G=0x3319daa9; S=0x3319dab9; @synthesize
@property(assign, nonatomic) unsigned long long totalBytes;	// G=0x3319db11; S=0x3319db29; @synthesize
@property(copy, nonatomic) NSString *version;	// G=0x3319da75; S=0x3319da85; @synthesize
+ (id)resourceRecordFromResourcePath:(id)resourcePath;	// 0x3319d775
+ (id)resourceRecordFromResourcePath:(id)resourcePath withVersion:(id)version withLastAccessed:(id)lastAccessed;	// 0x3319d419
- (void)dealloc;	// 0x3319d845
// declared property getter: - (id)lastAccessed;	// 0x3319dadd
// declared property getter: - (id)name;	// 0x3319da41
// declared property getter: - (id)path;	// 0x3319daa9
- (void)remove;	// 0x3319d9d1
- (void)save;	// 0x3319d8cd
// declared property setter: - (void)setLastAccessed:(id)accessed;	// 0x3319daed
// declared property setter: - (void)setName:(id)name;	// 0x3319da51
// declared property setter: - (void)setPath:(id)path;	// 0x3319dab9
// declared property setter: - (void)setTotalBytes:(unsigned long long)bytes;	// 0x3319db29
// declared property setter: - (void)setVersion:(id)version;	// 0x3319da85
// declared property getter: - (unsigned long long)totalBytes;	// 0x3319db11
// declared property getter: - (id)version;	// 0x3319da75
@end

