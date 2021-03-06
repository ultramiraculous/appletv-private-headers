/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MobileBackup.framework/MobileBackup
 */

#import "NSCopying.h"
#import "NSCoding.h"
#import "MobileBackup-Structs.h"
#import <NSObject.h> // Unknown library

@class NSDictionary, NSString;

@interface MBFileInfo : NSObject <NSCopying, NSCoding> {
	NSString *_path;	// 4 = 0x4
	BOOL _isDirectory;	// 8 = 0x8
	int _priority;	// 12 = 0xc
	NSDictionary *_extendedAttributes;	// 16 = 0x10
}
@property(copy, nonatomic) NSDictionary *extendedAttributes;	// G=0x30463f9d; S=0x30463fb1; @synthesize=_extendedAttributes
@property(assign, nonatomic) BOOL isDirectory;	// G=0x30463f5d; S=0x30463f6d; @synthesize=_isDirectory
@property(copy, nonatomic) NSString *path;	// G=0x30463f39; S=0x30463f4d; @synthesize=_path
@property(assign, nonatomic) int priority;	// G=0x30463f7d; S=0x30463f8d; @synthesize=_priority
+ (id)fileInfoWithPath:(id)path extendedAttributes:(id)attributes;	// 0x30463bd9
- (id)initWithCoder:(id)coder;	// 0x30463c9d
- (id)initWithPath:(id)path extendedAttributes:(id)attributes;	// 0x30463c25
- (id)copyWithZone:(NSZone *)zone;	// 0x30463ea5
- (void)dealloc;	// 0x30463e41
- (void)encodeWithCoder:(id)coder;	// 0x30463d95
// declared property getter: - (id)extendedAttributes;	// 0x30463f9d
// declared property getter: - (BOOL)isDirectory;	// 0x30463f5d
// declared property getter: - (id)path;	// 0x30463f39
// declared property getter: - (int)priority;	// 0x30463f7d
// declared property setter: - (void)setExtendedAttributes:(id)attributes;	// 0x30463fb1
// declared property setter: - (void)setIsDirectory:(BOOL)directory;	// 0x30463f6d
// declared property setter: - (void)setPath:(id)path;	// 0x30463f4d
// declared property setter: - (void)setPriority:(int)priority;	// 0x30463f8d
@end

