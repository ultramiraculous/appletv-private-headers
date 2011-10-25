/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import "CoreDAVGetAccountPropertiesTaskGroup.h"

@class NSSet;

@interface CardDAVGetAccountPropertiesTaskGroup : CoreDAVGetAccountPropertiesTaskGroup {
	NSSet *_addressBookHomes;	// 76 = 0x4c
	NSSet *_directoryGatewayURLs;	// 80 = 0x50
}
@property(readonly, assign) NSSet *addressBookHomes;	// G=0x32c2f519; @synthesize=_addressBookHomes
@property(readonly, assign) NSSet *directoryGatewayURLs;	// G=0x32c2f529; @synthesize=_directoryGatewayURLs
- (id)_copyAccountPropertiesPropFindElements;	// 0x32c2f259
- (void)_setPropertiesFromParsedResponses:(id)parsedResponses;	// 0x32c2f341
// declared property getter: - (id)addressBookHomes;	// 0x32c2f519
- (void)dealloc;	// 0x32c2f15d
- (id)description;	// 0x32c2f1bd
- (id)directoryGatewayURL;	// 0x32c2f4f9
// declared property getter: - (id)directoryGatewayURLs;	// 0x32c2f529
- (id)homeSet;	// 0x32c2f331
@end

