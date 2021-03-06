/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ATVInternetPhotosCollection.h"
#import "ATVDotMacAuthentication.h"

@class ATVDotMacSecondaryAccount, NSString;

__attribute__((visibility("hidden")))
@interface ATVDotMacCollection : ATVInternetPhotosCollection <ATVDotMacAuthentication> {
	ATVDotMacSecondaryAccount *_secondaryAccount;	// 64 = 0x40
	BOOL _requiresAuthentication;	// 68 = 0x44
	NSString *_keyImageDotMacIdentifier;	// 72 = 0x48
	BOOL _initialAuthCheckComplete;	// 76 = 0x4c
}
@property(assign) BOOL initialAuthCheckComplete;	// G=0x195f39; S=0x195f49; converted property
@property(retain) NSString *keyImageDotMacIdentifier;	// G=0x1956a9; S=0x195785; converted property
@property(assign) BOOL requiresAuthentication;	// G=0x195cd9; S=0x195ce9; converted property
@property(retain) ATVDotMacSecondaryAccount *secondaryAccount;	// G=0x195cf9; S=0x195dd5; converted property
- (id)initWithCollectionInfo:(id)collectionInfo;	// 0x1953b9
- (id)archivableCollectionInfo;	// 0x195991
- (void)dealloc;	// 0x1955d1
- (id)imageProxy;	// 0x195c11
// converted property getter: - (BOOL)initialAuthCheckComplete;	// 0x195f39
- (BOOL)isAuthenticated;	// 0x195cc1
- (id)keyAsset;	// 0x19586d
// converted property getter: - (id)keyImageDotMacIdentifier;	// 0x1956a9
- (id)mediaTypes;	// 0x195b91
- (id)photoAssets;	// 0x195635
// converted property getter: - (BOOL)requiresAuthentication;	// 0x195cd9
// converted property getter: - (id)secondaryAccount;	// 0x195cf9
// converted property setter: - (void)setInitialAuthCheckComplete:(BOOL)complete;	// 0x195f49
// converted property setter: - (void)setKeyImageDotMacIdentifier:(id)identifier;	// 0x195785
// converted property setter: - (void)setRequiresAuthentication:(BOOL)authentication;	// 0x195ce9
// converted property setter: - (void)setSecondaryAccount:(id)account;	// 0x195dd5
@end

