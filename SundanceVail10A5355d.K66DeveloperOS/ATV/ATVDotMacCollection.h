/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ATVDotMacAuthentication.h"
#import "ATVInternetPhotosCollection.h"

@class NSString, ATVDotMacSecondaryAccount;

__attribute__((visibility("hidden")))
@interface ATVDotMacCollection : ATVInternetPhotosCollection <ATVDotMacAuthentication> {
	ATVDotMacSecondaryAccount *_secondaryAccount;	// 64 = 0x40
	BOOL _requiresAuthentication;	// 68 = 0x44
	NSString *_keyImageDotMacIdentifier;	// 72 = 0x48
	BOOL _initialAuthCheckComplete;	// 76 = 0x4c
}
@property(assign) BOOL initialAuthCheckComplete;	// G=0x184231; S=0x184241; converted property
@property(retain) NSString *keyImageDotMacIdentifier;	// G=0x1839a1; S=0x183a7d; converted property
@property(assign) BOOL requiresAuthentication;	// G=0x183fd1; S=0x183fe1; converted property
@property(retain) ATVDotMacSecondaryAccount *secondaryAccount;	// G=0x183ff1; S=0x1840cd; converted property
- (id)initWithCollectionInfo:(id)collectionInfo;	// 0x1836b1
- (id)archivableCollectionInfo;	// 0x183c89
- (void)dealloc;	// 0x1838c9
- (id)imageProxy;	// 0x183f09
// converted property getter: - (BOOL)initialAuthCheckComplete;	// 0x184231
- (BOOL)isAuthenticated;	// 0x183fb9
- (id)keyAsset;	// 0x183b65
// converted property getter: - (id)keyImageDotMacIdentifier;	// 0x1839a1
- (id)mediaTypes;	// 0x183e89
- (id)photoAssets;	// 0x18392d
// converted property getter: - (BOOL)requiresAuthentication;	// 0x183fd1
// converted property getter: - (id)secondaryAccount;	// 0x183ff1
// converted property setter: - (void)setInitialAuthCheckComplete:(BOOL)complete;	// 0x184241
// converted property setter: - (void)setKeyImageDotMacIdentifier:(id)identifier;	// 0x183a7d
// converted property setter: - (void)setRequiresAuthentication:(BOOL)authentication;	// 0x183fe1
// converted property setter: - (void)setSecondaryAccount:(id)account;	// 0x1840cd
@end

