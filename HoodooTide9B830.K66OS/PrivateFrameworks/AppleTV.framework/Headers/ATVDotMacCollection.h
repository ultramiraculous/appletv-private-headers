/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "ATVInternetPhotosCollection.h"
#import "ATVDotMacAuthentication.h"

@class ATVDotMacSecondaryAccount, NSString;

@interface ATVDotMacCollection : ATVInternetPhotosCollection <ATVDotMacAuthentication> {
@private
	ATVDotMacSecondaryAccount *_secondaryAccount;	// 64 = 0x40
	BOOL _requiresAuthentication;	// 68 = 0x44
	NSString *_keyImageDotMacIdentifier;	// 72 = 0x48
	BOOL _initialAuthCheckComplete;	// 76 = 0x4c
}
@property(assign) BOOL initialAuthCheckComplete;	// G=0x328a2339; S=0x328a2349; converted property
@property(retain) NSString *keyImageDotMacIdentifier;	// G=0x328a1b25; S=0x328a1bf1; converted property
@property(assign) BOOL requiresAuthentication;	// G=0x328a20fd; S=0x328a210d; converted property
@property(retain) ATVDotMacSecondaryAccount *secondaryAccount;	// G=0x328a211d; S=0x328a21e9; converted property
- (id)initWithCollectionInfo:(id)collectionInfo;	// 0x328a17ed
- (id)archivableCollectionInfo;	// 0x328a1dbd
- (void)dealloc;	// 0x328a1a51
- (id)imageProxy;	// 0x328a2035
// converted property getter: - (BOOL)initialAuthCheckComplete;	// 0x328a2339
- (BOOL)isAuthenticated;	// 0x328a20e5
- (id)keyAsset;	// 0x328a1cc1
// converted property getter: - (id)keyImageDotMacIdentifier;	// 0x328a1b25
- (id)mediaTypes;	// 0x328a1fb5
- (id)photoAssets;	// 0x328a1ab1
// converted property getter: - (BOOL)requiresAuthentication;	// 0x328a20fd
// converted property getter: - (id)secondaryAccount;	// 0x328a211d
// converted property setter: - (void)setInitialAuthCheckComplete:(BOOL)complete;	// 0x328a2349
// converted property setter: - (void)setKeyImageDotMacIdentifier:(id)identifier;	// 0x328a1bf1
// converted property setter: - (void)setRequiresAuthentication:(BOOL)authentication;	// 0x328a210d
// converted property setter: - (void)setSecondaryAccount:(id)account;	// 0x328a21e9
@end
