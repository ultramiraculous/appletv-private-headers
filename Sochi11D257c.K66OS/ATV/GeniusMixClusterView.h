/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRControl.h"
#import "AppleTV-Structs.h"

@class BRImageControl, BRReflectionControl, NSString;
@protocol BRImageProxy;

__attribute__((visibility("hidden")))
@interface GeniusMixClusterView : BRControl {
	id<BRImageProxy> _geniusMixCollectionProxy;	// 84 = 0x54
	BOOL _artworkRequestPending;	// 88 = 0x58
	BOOL _needToRestartImageRequest;	// 89 = 0x59
	BRImageControl *_defaultImageControl;	// 92 = 0x5c
	BRReflectionControl *_reflectionControl;	// 96 = 0x60
	BRImageControl *_playImageControl;	// 100 = 0x64
	NSString *_geniusMixName;	// 104 = 0x68
	NSString *_geniusMixBasedOnArtists;	// 108 = 0x6c
}
@property(retain, nonatomic) NSString *geniusMixBasedOnArtists;	// G=0x1bb765; S=0x1bb775; @synthesize=_geniusMixBasedOnArtists
@property(retain, nonatomic) NSString *geniusMixName;	// G=0x1bb745; S=0x1bb755; @synthesize=_geniusMixName
+ (id)clusterControlWithGeniusMix:(id)geniusMix;	// 0x1ba9a5
- (id)initWithGeniusMix:(id)geniusMix;	// 0x1ba9f1
- (CGSize)_clusterImageSize;	// 0x1bb719
- (void)_imageUnavailable:(id)unavailable;	// 0x1bb589
- (void)_imageUpdated:(id)updated;	// 0x1bb3b9
- (id)_loadArtwork;	// 0x1bb17d
- (void)_setImageControlFrames;	// 0x1bb669
- (id)accessibilityLabel;	// 0x1bb141
- (void)controlWasActivated;	// 0x1bae69
- (void)controlWasDeactivated;	// 0x1baebd
- (void)controlWasFocused;	// 0x1bada1
- (void)controlWasUnfocused;	// 0x1bae05
- (void)dealloc;	// 0x1bacad
- (CGRect)focusCursorFrame;	// 0x1baf59
// declared property getter: - (id)geniusMixBasedOnArtists;	// 0x1bb765
// declared property getter: - (id)geniusMixName;	// 0x1bb745
- (BOOL)isAccessibilityElement;	// 0x1bb13d
- (void)layoutSubcontrols;	// 0x1bb001
// declared property setter: - (void)setGeniusMixBasedOnArtists:(id)artists;	// 0x1bb775
// declared property setter: - (void)setGeniusMixName:(id)name;	// 0x1bb755
@end

