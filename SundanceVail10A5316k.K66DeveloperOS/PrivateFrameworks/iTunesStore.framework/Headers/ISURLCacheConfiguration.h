/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

#import "NSCopying.h"
#import "iTunesStore-Structs.h"
#import <NSObject.h> // Unknown library

@class NSString;

@interface ISURLCacheConfiguration : NSObject <NSCopying> {
@private
	unsigned _diskCapacity;	// 4 = 0x4
	unsigned _memoryCapacity;	// 8 = 0x8
	NSString *_persistentIdentifier;	// 12 = 0xc
}
@property(assign, nonatomic) unsigned diskCapacity;	// G=0x3353cec5; S=0x3353ced5; @synthesize=_diskCapacity
@property(assign, nonatomic) unsigned memoryCapacity;	// G=0x3353cee5; S=0x3353cef5; @synthesize=_memoryCapacity
@property(copy, nonatomic) NSString *persistentIdentifier;	// G=0x3353cf05; S=0x3353cf19; @synthesize=_persistentIdentifier
- (id)copyWithZone:(NSZone *)zone;	// 0x3353ce39
- (void)dealloc;	// 0x3353cded
// declared property getter: - (unsigned)diskCapacity;	// 0x3353cec5
// declared property getter: - (unsigned)memoryCapacity;	// 0x3353cee5
// declared property getter: - (id)persistentIdentifier;	// 0x3353cf05
// declared property setter: - (void)setDiskCapacity:(unsigned)capacity;	// 0x3353ced5
// declared property setter: - (void)setMemoryCapacity:(unsigned)capacity;	// 0x3353cef5
// declared property setter: - (void)setPersistentIdentifier:(id)identifier;	// 0x3353cf19
@end

