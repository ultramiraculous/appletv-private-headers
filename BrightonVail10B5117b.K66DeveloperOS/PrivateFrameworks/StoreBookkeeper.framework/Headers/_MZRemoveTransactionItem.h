/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreBookkeeper.framework/StoreBookkeeper
 */

#import <NSObject.h> // Unknown library

@class NSString;

@interface _MZRemoveTransactionItem : NSObject {
	NSString *_key;	// 4 = 0x4
	NSString *_version;	// 8 = 0x8
}
@property(copy, nonatomic) NSString *key;	// G=0x35677a6d; S=0x35677a81; @synthesize=_key
@property(copy, nonatomic) NSString *version;	// G=0x35677a91; S=0x35677aa5; @synthesize=_version
- (void)dealloc;	// 0x3567789d
- (id)description;	// 0x356778f5
- (unsigned)hash;	// 0x35677995
- (BOOL)isEqual:(id)equal;	// 0x356779bd
// declared property getter: - (id)key;	// 0x35677a6d
// declared property setter: - (void)setKey:(id)key;	// 0x35677a81
// declared property setter: - (void)setVersion:(id)version;	// 0x35677aa5
// declared property getter: - (id)version;	// 0x35677a91
@end

