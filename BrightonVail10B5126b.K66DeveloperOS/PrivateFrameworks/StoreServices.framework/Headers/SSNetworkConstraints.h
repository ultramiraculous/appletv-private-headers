/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <NSObject.h> // Unknown library
#import "SSXPCCoding.h"
#import "StoreServices-Structs.h"
#import "NSCoding.h"
#import "NSCopying.h"

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface SSNetworkConstraints : NSObject <NSCoding, SSXPCCoding, NSCopying> {
	NSObject<OS_dispatch_queue> *_dispatchQueue;	// 4 = 0x4
	NSMutableDictionary *_sizeLimits;	// 8 = 0x8
}
@property(readonly, assign, getter=isAnyNetworkTypeEnabled) BOOL anyNetworkTypeEnabled;	// G=0x354cd5e5; 
+ (void)_addNetworkConstraintsToDictionary:(id)dictionary forNetworkType:(int)networkType legacyDictionary:(id)dictionary3;	// 0x354ce4bd
+ (id)_newLegacyNetworkConstraintsWithDictionary:(id)dictionary;	// 0x354ce7b9
+ (id)_newModernNetworkConstraintsWithArray:(id)array;	// 0x354ce879
+ (id)newNetworkConstraintsByDownloadKindFromURLBag:(id)urlbag;	// 0x354ce0dd
- (id)init;	// 0x354cd309
- (id)initWithCoder:(id)coder;	// 0x354cf029
- (id)initWithXPCEncoding:(id)xpcencoding;	// 0x354cf2c9
- (id)_copySizeLimits;	// 0x354ceb91
- (void)_disableAllNetworkTypes;	// 0x354cec95
- (void)_setSizeLimit:(long long)limit forNetworkType:(int)networkType;	// 0x354cee1d
- (long long)_sizeLimitForNetworkType:(int)networkType;	// 0x354cef09
- (id)copyWithZone:(NSZone *)zone;	// 0x354cf1c5
- (id)copyXPCEncoding;	// 0x354cf38d
- (void)dealloc;	// 0x354cd379
- (id)description;	// 0x354cd9c1
- (void)disableCellularNetworkTypes;	// 0x354cd3dd
- (void)encodeWithCoder:(id)coder;	// 0x354cf101
- (BOOL)hasSizeLimitForNetworkType:(int)networkType;	// 0x354cd4a5
// declared property getter: - (BOOL)isAnyNetworkTypeEnabled;	// 0x354cd5e5
- (BOOL)isEqual:(id)equal;	// 0x354cded5
- (void)setAllNetworkTypesDisabled;	// 0x354cd7a9
- (void)setSizeLimit:(long long)limit forNetworkType:(int)networkType;	// 0x354cd825
- (void)setSizeLimitsWithStoreConstraintDictionary:(id)storeConstraintDictionary;	// 0x354ce1ad
- (long long)sizeLimitForNetworkType:(int)networkType;	// 0x354cd8d1
@end

