/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import "StoreServices-Structs.h"
#import <NSObject.h> // Unknown library
#import "NSCopying.h"

@class NSString, NSIndexSet;

@interface SSPurchaseValidationContext : NSObject <NSCopying> {
	NSIndexSet *_allowedDeviceIdentifiers;	// 4 = 0x4
	id _sizeLimitBlock;	// 8 = 0x8
	NSString *_systemName;	// 12 = 0xc
	NSString *_systemVersion;	// 16 = 0x10
}
@property(copy, nonatomic) NSIndexSet *allowedDeviceIdentifiers;	// G=0x32358179; S=0x3235818d; @synthesize=_allowedDeviceIdentifiers
@property(copy, nonatomic) id sizeLimitBlock;	// G=0x3235819d; S=0x323581b1; @synthesize=_sizeLimitBlock
@property(copy, nonatomic) NSString *systemName;	// G=0x323581c1; S=0x323581d5; @synthesize=_systemName
@property(copy, nonatomic) NSString *systemVersion;	// G=0x323581e5; S=0x323581f9; @synthesize=_systemVersion
- (id)_supportedDeviceForOffer:(id)offer;	// 0x32358079
// declared property getter: - (id)allowedDeviceIdentifiers;	// 0x32358179
- (id)copyWithZone:(NSZone *)zone;	// 0x32357fc9
- (void)dealloc;	// 0x32357f3d
// declared property setter: - (void)setAllowedDeviceIdentifiers:(id)identifiers;	// 0x3235818d
// declared property setter: - (void)setSizeLimitBlock:(id)block;	// 0x323581b1
// declared property setter: - (void)setSystemName:(id)name;	// 0x323581d5
// declared property setter: - (void)setSystemVersion:(id)version;	// 0x323581f9
// declared property getter: - (id)sizeLimitBlock;	// 0x3235819d
// declared property getter: - (id)systemName;	// 0x323581c1
// declared property getter: - (id)systemVersion;	// 0x323581e5
@end
