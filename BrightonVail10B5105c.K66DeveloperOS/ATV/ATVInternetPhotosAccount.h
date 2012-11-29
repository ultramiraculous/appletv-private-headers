/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class ATVInternetPhotosCollection, NSString, NSArray, NSDate;

__attribute__((visibility("hidden")))
@interface ATVInternetPhotosAccount : XXUnknownSuperclass {
	NSString *_accountName;	// 4 = 0x4
	NSString *_accountID;	// 8 = 0x8
	NSString *_displayName;	// 12 = 0xc
	NSArray *_mediaAssets;	// 16 = 0x10
	NSArray *_subAccounts;	// 20 = 0x14
	NSArray *_mediaCollections;	// 24 = 0x18
	ATVInternetPhotosCollection *_lastModifiedCollection;	// 28 = 0x1c
	NSDate *_modDate;	// 32 = 0x20
	NSDate *_lastCheckedDate;	// 36 = 0x24
	NSString *_accountIconPath;	// 40 = 0x28
}
@property(retain) NSString *accountID;	// G=0x1b6ac5; S=0x1b6ba1; converted property
@property(retain) NSString *accountIconPath;	// G=0x1b7759; S=0x1b7835; converted property
@property(retain) NSString *accountName;	// G=0x1b6901; S=0x1b69dd; converted property
@property(retain) NSString *displayName;	// G=0x1b6c89; S=0x1b6d65; converted property
@property(retain) NSDate *lastCheckedDate;	// G=0x1b7595; S=0x1b7671; converted property
@property(retain) ATVInternetPhotosCollection *lastModifiedCollection;	// G=0x1b6e85; S=0x1b6f61; converted property
@property(retain) NSArray *mediaCollections;	// G=0x1b720d; S=0x1b72e9; converted property
@property(retain) NSDate *modDate;	// G=0x1b73d1; S=0x1b74ad; converted property
@property(retain) NSArray *subAccounts;	// G=0x1b7049; S=0x1b7125; converted property
+ (id)account;	// 0x1b67b9
// converted property getter: - (id)accountID;	// 0x1b6ac5
// converted property getter: - (id)accountIconPath;	// 0x1b7759
// converted property getter: - (id)accountName;	// 0x1b6901
- (void)dealloc;	// 0x1b67fd
// converted property getter: - (id)displayName;	// 0x1b6c89
// converted property getter: - (id)lastCheckedDate;	// 0x1b7595
// converted property getter: - (id)lastModifiedCollection;	// 0x1b6e85
// converted property getter: - (id)mediaCollections;	// 0x1b720d
// converted property getter: - (id)modDate;	// 0x1b73d1
// converted property setter: - (void)setAccountID:(id)anId;	// 0x1b6ba1
// converted property setter: - (void)setAccountIconPath:(id)path;	// 0x1b7835
// converted property setter: - (void)setAccountName:(id)name;	// 0x1b69dd
// converted property setter: - (void)setDisplayName:(id)name;	// 0x1b6d65
// converted property setter: - (void)setLastCheckedDate:(id)date;	// 0x1b7671
// converted property setter: - (void)setLastModifiedCollection:(id)collection;	// 0x1b6f61
// converted property setter: - (void)setMediaCollections:(id)collections;	// 0x1b72e9
// converted property setter: - (void)setModDate:(id)date;	// 0x1b74ad
// converted property setter: - (void)setSubAccounts:(id)accounts;	// 0x1b7125
// converted property getter: - (id)subAccounts;	// 0x1b7049
@end
