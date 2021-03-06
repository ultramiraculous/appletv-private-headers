/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import "CoreDAVContainer.h"

@class NSString, NSURL;

@interface CardDAVAddressBookContainer : CoreDAVContainer {
	NSString *_maxResourceSize;	// 64 = 0x40
	NSString *_maxImageSize;	// 68 = 0x44
	NSURL *_meCardURL;	// 72 = 0x48
}
@property(readonly, assign) BOOL isAddressBook;	// G=0x35f4eae1; 
@property(readonly, assign) BOOL isSearchAddressBook;	// G=0x35f4eb25; 
@property(readonly, assign) BOOL isSharedAddressBook;	// G=0x35f4eba5; 
@property(retain) NSString *maxImageSize;	// G=0x35f4eca1; S=0x35f4ecb5; @synthesize=_maxImageSize
@property(retain) NSString *maxResourceSize;	// G=0x35f4ec7d; S=0x35f4ec91; @synthesize=_maxResourceSize
@property(retain) NSURL *meCardURL;	// G=0x35f4ecc5; S=0x35f4ecd9; @synthesize=_meCardURL
+ (id)copyPropertyMappingsForParser;	// 0x35f4e7c5
- (void)applyParsedProperties:(id)properties;	// 0x35f4e9c1
- (void)dealloc;	// 0x35f4ec05
- (id)description;	// 0x35f4e8d5
// declared property getter: - (BOOL)isAddressBook;	// 0x35f4eae1
// declared property getter: - (BOOL)isSearchAddressBook;	// 0x35f4eb25
// declared property getter: - (BOOL)isSharedAddressBook;	// 0x35f4eba5
// declared property getter: - (id)maxImageSize;	// 0x35f4eca1
// declared property getter: - (id)maxResourceSize;	// 0x35f4ec7d
// declared property getter: - (id)meCardURL;	// 0x35f4ecc5
// declared property setter: - (void)setMaxImageSize:(id)size;	// 0x35f4ecb5
// declared property setter: - (void)setMaxResourceSize:(id)size;	// 0x35f4ec91
// declared property setter: - (void)setMeCardURL:(id)url;	// 0x35f4ecd9
@end

