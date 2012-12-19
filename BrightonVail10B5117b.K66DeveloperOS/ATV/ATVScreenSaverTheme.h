/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSString;

__attribute__((visibility("hidden")))
@interface ATVScreenSaverTheme : XXUnknownSuperclass {
	BOOL _hasExtraSetupInfo;	// 4 = 0x4
	NSString *_localizableKey;	// 8 = 0x8
	BOOL _usableForAlbumArtwork;	// 12 = 0xc
	BOOL _usableForPhotos;	// 13 = 0xd
	NSString *_slideShowKey;	// 16 = 0x10
	NSString *_screensaverIdentifier;	// 20 = 0x14
}
@property(assign, nonatomic) BOOL hasExtraSetupInfo;	// G=0x24b8d5; S=0x24b8e5; @synthesize=_hasExtraSetupInfo
@property(copy, nonatomic) NSString *localizableKey;	// G=0x24b8f5; S=0x24b909; @synthesize=_localizableKey
@property(copy, nonatomic) NSString *screensaverIdentifier;	// G=0x24b97d; S=0x24b991; @synthesize=_screensaverIdentifier
@property(copy, nonatomic) NSString *slideShowKey;	// G=0x24b959; S=0x24b96d; @synthesize=_slideShowKey
@property(assign, nonatomic) BOOL usableForAlbumArtwork;	// G=0x24b919; S=0x24b929; @synthesize=_usableForAlbumArtwork
@property(assign, nonatomic) BOOL usableForPhotos;	// G=0x24b939; S=0x24b949; @synthesize=_usableForPhotos
- (void)dealloc;	// 0x24b85d
// declared property getter: - (BOOL)hasExtraSetupInfo;	// 0x24b8d5
// declared property getter: - (id)localizableKey;	// 0x24b8f5
// declared property getter: - (id)screensaverIdentifier;	// 0x24b97d
// declared property setter: - (void)setHasExtraSetupInfo:(BOOL)info;	// 0x24b8e5
// declared property setter: - (void)setLocalizableKey:(id)key;	// 0x24b909
// declared property setter: - (void)setScreensaverIdentifier:(id)identifier;	// 0x24b991
// declared property setter: - (void)setSlideShowKey:(id)key;	// 0x24b96d
// declared property setter: - (void)setUsableForAlbumArtwork:(BOOL)albumArtwork;	// 0x24b929
// declared property setter: - (void)setUsableForPhotos:(BOOL)photos;	// 0x24b949
// declared property getter: - (id)slideShowKey;	// 0x24b959
// declared property getter: - (BOOL)usableForAlbumArtwork;	// 0x24b919
// declared property getter: - (BOOL)usableForPhotos;	// 0x24b939
@end
