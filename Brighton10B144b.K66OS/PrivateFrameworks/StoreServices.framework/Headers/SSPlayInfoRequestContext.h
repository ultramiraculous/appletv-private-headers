/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <NSObject.h> // Unknown library
#import "SSXPCCoding.h"
#import "StoreServices-Structs.h"
#import "NSCopying.h"

@class NSData, NSArray, NSString;

@interface SSPlayInfoRequestContext : NSObject <SSXPCCoding, NSCopying> {
	NSString *_playerGUID;	// 4 = 0x4
	NSData *_sic;	// 8 = 0x8
	NSArray *_sinfs;	// 12 = 0xc
}
@property(copy, nonatomic) NSData *SICData;	// G=0x354e0519; S=0x354e052d; @synthesize=_sic
@property(copy, nonatomic) NSString *playerGUID;	// G=0x354e04f5; S=0x354e0509; @synthesize=_playerGUID
@property(copy, nonatomic) NSArray *sinfs;	// G=0x354e053d; S=0x354e0551; @synthesize=_sinfs
- (id)initWithXPCEncoding:(id)xpcencoding;	// 0x354e03ed
// declared property getter: - (id)SICData;	// 0x354e0519
- (id)copyWithZone:(NSZone *)zone;	// 0x354e02e9
- (id)copyXPCEncoding;	// 0x354e037d
- (void)dealloc;	// 0x354e0271
// declared property getter: - (id)playerGUID;	// 0x354e04f5
// declared property setter: - (void)setPlayerGUID:(id)guid;	// 0x354e0509
// declared property setter: - (void)setSICData:(id)data;	// 0x354e052d
// declared property setter: - (void)setSinfs:(id)sinfs;	// 0x354e0551
// declared property getter: - (id)sinfs;	// 0x354e053d
@end

