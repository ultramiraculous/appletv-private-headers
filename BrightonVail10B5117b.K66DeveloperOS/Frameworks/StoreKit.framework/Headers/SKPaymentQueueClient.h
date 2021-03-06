/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/StoreKit.framework/StoreKit
 */

#import "NSCopying.h"
#import <NSObject.h> // Unknown library
#import "StoreKit-Structs.h"

@class NSString, NSNumber;

@interface SKPaymentQueueClient : NSObject <NSCopying> {
	NSString *_bundleIdentifier;	// 4 = 0x4
	NSString *_bundleVersion;	// 8 = 0x8
	NSNumber *_storeExternalVersion;	// 12 = 0xc
	NSNumber *_storeItemIdentifier;	// 16 = 0x10
	NSString *_vendorIdentifier;	// 20 = 0x14
}
@property(copy, nonatomic) NSString *bundleIdentifier;	// G=0x32c40ca9; S=0x32c40cbd; @synthesize=_bundleIdentifier
@property(copy, nonatomic) NSString *bundleVersion;	// G=0x32c40ccd; S=0x32c40ce1; @synthesize=_bundleVersion
@property(copy, nonatomic) NSNumber *storeExternalVersion;	// G=0x32c40cf1; S=0x32c40d05; @synthesize=_storeExternalVersion
@property(copy, nonatomic) NSNumber *storeItemIdentifier;	// G=0x32c40d15; S=0x32c40d29; @synthesize=_storeItemIdentifier
@property(copy, nonatomic) NSString *vendorIdentifier;	// G=0x32c40d39; S=0x32c40d4d; @synthesize=_vendorIdentifier
- (id)initWithXPCEncoding:(id)xpcencoding;	// 0x32c409b9
// declared property getter: - (id)bundleIdentifier;	// 0x32c40ca9
// declared property getter: - (id)bundleVersion;	// 0x32c40ccd
- (id)copyWithZone:(NSZone *)zone;	// 0x32c40bc5
- (id)copyXPCEncoding;	// 0x32c40b19
- (void)dealloc;	// 0x32c40919
// declared property setter: - (void)setBundleIdentifier:(id)identifier;	// 0x32c40cbd
// declared property setter: - (void)setBundleVersion:(id)version;	// 0x32c40ce1
// declared property setter: - (void)setStoreExternalVersion:(id)version;	// 0x32c40d05
// declared property setter: - (void)setStoreItemIdentifier:(id)identifier;	// 0x32c40d29
// declared property setter: - (void)setVendorIdentifier:(id)identifier;	// 0x32c40d4d
// declared property getter: - (id)storeExternalVersion;	// 0x32c40cf1
// declared property getter: - (id)storeItemIdentifier;	// 0x32c40d15
// declared property getter: - (id)vendorIdentifier;	// 0x32c40d39
@end

