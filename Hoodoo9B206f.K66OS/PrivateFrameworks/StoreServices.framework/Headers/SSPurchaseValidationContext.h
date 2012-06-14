/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <NSObject.h> // Unknown library
#import "StoreServices-Structs.h"
#import "NSCopying.h"

@class NSString, NSIndexSet;

@interface SSPurchaseValidationContext : NSObject <NSCopying> {
@private
	NSIndexSet *_allowedDeviceIdentifiers;	// 4 = 0x4
	long long _diskSpaceAvailable;	// 8 = 0x8
	id _sizeLimitBlock;	// 16 = 0x10
	NSString *_systemName;	// 20 = 0x14
	NSString *_systemVersion;	// 24 = 0x18
}
@property(copy, nonatomic) NSIndexSet *allowedDeviceIdentifiers;	// G=0x327d6125; S=0x327d6135; @synthesize=_allowedDeviceIdentifiers
@property(assign, nonatomic) long long diskSpaceAvailable;	// G=0x327d6159; S=0x327d6171; @synthesize=_diskSpaceAvailable
@property(copy, nonatomic) id sizeLimitBlock;	// G=0x327d6185; S=0x327d6195; @synthesize=_sizeLimitBlock
@property(copy, nonatomic) NSString *systemName;	// G=0x327d61b9; S=0x327d61c9; @synthesize=_systemName
@property(copy, nonatomic) NSString *systemVersion;	// G=0x327d61ed; S=0x327d61fd; @synthesize=_systemVersion
- (BOOL)_isAnyIPad;	// 0x327d5fd5
- (BOOL)_isAnyIPod;	// 0x327d5ffd
- (id)_supportedDeviceForOffer:(id)offer;	// 0x327d6049
// declared property getter: - (id)allowedDeviceIdentifiers;	// 0x327d6125
- (id)copyWithZone:(NSZone *)zone;	// 0x327d5ef9
- (void)dealloc;	// 0x327d5e71
// declared property getter: - (long long)diskSpaceAvailable;	// 0x327d6159
// declared property setter: - (void)setAllowedDeviceIdentifiers:(id)identifiers;	// 0x327d6135
// declared property setter: - (void)setDiskSpaceAvailable:(long long)available;	// 0x327d6171
// declared property setter: - (void)setSizeLimitBlock:(id)block;	// 0x327d6195
// declared property setter: - (void)setSystemName:(id)name;	// 0x327d61c9
// declared property setter: - (void)setSystemVersion:(id)version;	// 0x327d61fd
// declared property getter: - (id)sizeLimitBlock;	// 0x327d6185
// declared property getter: - (id)systemName;	// 0x327d61b9
// declared property getter: - (id)systemVersion;	// 0x327d61ed
@end
