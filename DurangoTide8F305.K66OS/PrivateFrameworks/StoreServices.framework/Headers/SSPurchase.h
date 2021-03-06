/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import "StoreServices-Structs.h"
#import "NSCopying.h"
#import "NSCoding.h"
#import <NSObject.h> // Unknown library

@class NSString, SSItem, NSNumber, SSItemOffer, SSDownloadMetadata;

@interface SSPurchase : NSObject <NSCoding, NSCopying> {
@private
	NSNumber *_accountIdentifier;	// 4 = 0x4
	NSString *_buyParameters;	// 8 = 0x8
	SSDownloadMetadata *_downloadMetadata;	// 12 = 0xc
	SSItem *_item;	// 16 = 0x10
	SSItemOffer *_itemOffer;	// 20 = 0x14
	NSString *_uniqueIdentifier;	// 24 = 0x18
}
@property(retain, nonatomic) NSNumber *accountIdentifier;	// G=0x324c64d1; S=0x324c7301; @synthesize=_accountIdentifier
@property(copy, nonatomic) NSString *buyParameters;	// G=0x324c64c1; S=0x324c7329; @synthesize=_buyParameters
@property(copy, nonatomic) SSDownloadMetadata *downloadMetadata;	// G=0x324c64b1; S=0x324c7355; @synthesize=_downloadMetadata
@property(readonly, assign, nonatomic) SSItem *item;	// G=0x324c64a1; @synthesize=_item
@property(readonly, assign, nonatomic) SSItemOffer *itemOffer;	// G=0x324c6491; @synthesize=_itemOffer
@property(readonly, assign, nonatomic) NSString *uniqueIdentifier;	// G=0x324c7291; 
+ (id)purchaseWithBuyParameters:(id)buyParameters;	// 0x324c688d
- (id)initWithCoder:(id)coder;	// 0x324c6ec9
- (id)initWithItem:(id)item;	// 0x324c6915
- (id)initWithItem:(id)item offer:(id)offer;	// 0x324c717d
- (id)initWithPropertyListEncoding:(id)propertyListEncoding;	// 0x324c6d11
// declared property getter: - (id)accountIdentifier;	// 0x324c64d1
// declared property getter: - (id)buyParameters;	// 0x324c64c1
- (id)copyPropertyListEncoding;	// 0x324c6511
- (id)copyWithZone:(NSZone *)zone;	// 0x324c664d
- (void)dealloc;	// 0x324c70d9
// declared property getter: - (id)downloadMetadata;	// 0x324c64b1
- (void)encodeWithCoder:(id)coder;	// 0x324c6719
// declared property getter: - (id)item;	// 0x324c64a1
// declared property getter: - (id)itemOffer;	// 0x324c6491
// declared property setter: - (void)setAccountIdentifier:(id)identifier;	// 0x324c7301
// declared property setter: - (void)setBuyParameters:(id)parameters;	// 0x324c7329
// declared property setter: - (void)setDownloadMetadata:(id)metadata;	// 0x324c7355
// declared property getter: - (id)uniqueIdentifier;	// 0x324c7291
@end

