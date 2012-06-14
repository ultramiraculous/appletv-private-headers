/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "BRMediaShelfViewCell.h"
#import "BRPosterImageDataSource.h"
#import "BRContainerViewCell.h"
#import "BRControl.h"

@class NSString, BRPosterReflectionControl, BRAutoScrollingTextControl, BRWaitSpinnerControl, BRHorizontalSegmentedWidget, BRTextControl, BRImageControl, BRImage, BRAsyncTask;
@protocol BRImageProxy;

__attribute__((visibility("hidden")))
@interface BRPosterControl : BRControl <BRMediaShelfViewCell, BRContainerViewCell, BRPosterImageDataSource> {
	int _style;	// 80 = 0x50
	BRImageControl *_defaultImageControl;	// 84 = 0x54
	BRImage *_defaultImage;	// 88 = 0x58
	BRControl *_imageControl;	// 92 = 0x5c
	BRImage *_image;	// 96 = 0x60
	id<BRImageProxy> _imageProxy;	// 100 = 0x64
	int _imageSize;	// 104 = 0x68
	BRHorizontalSegmentedWidget *_numberBadge;	// 108 = 0x6c
	int _numberBadgeValue;	// 112 = 0x70
	CGColorRef _posterBorderColor;	// 116 = 0x74
	float _posterBorderWidth;	// 120 = 0x78
	BOOL _drawFakeAntialiasTopLine;	// 124 = 0x7c
	BOOL _imageRequested;	// 125 = 0x7d
	NSString *_artworkIdentifier;	// 128 = 0x80
	BRAsyncTask *_imageTask;	// 132 = 0x84
	BRPosterReflectionControl *_reflectionControl;	// 136 = 0x88
	float _reflectionAmount;	// 140 = 0x8c
	float _reflectionBaseline;	// 144 = 0x90
	BRTextControl *_ordinalTextControl;	// 148 = 0x94
	BRAutoScrollingTextControl *_autoScrollingTitleControl;	// 152 = 0x98
	BRTextControl *_subtitleTextControl;	// 156 = 0x9c
	float _titleWidthScale;	// 160 = 0xa0
	float _titleVerticalOffset;	// 164 = 0xa4
	float _subtitleVerticalOffset;	// 168 = 0xa8
	BOOL _alwaysShowTitles;	// 172 = 0xac
	BOOL _onlyShowSubtitlesWhenFocused;	// 173 = 0xad
	BRWaitSpinnerControl *_spinnerControl;	// 176 = 0xb0
	XXStruct_qlg9jA _cornerRadius;	// 180 = 0xb4
	float _cropAspectRatio;	// 184 = 0xb8
	BOOL _cropAndFill;	// 188 = 0xbc
	BOOL _deletterboxImage;	// 189 = 0xbd
	BRControl *_badgeControl;	// 192 = 0xc0
	float _badgeScale;	// 196 = 0xc4
	float _badgeOpacity;	// 200 = 0xc8
	float _badgeFocusedOpacity;	// 204 = 0xcc
	int _badgePosition;	// 208 = 0xd0
	BOOL _badgeUpdated;	// 212 = 0xd4
	BRImage *_borderImage;	// 216 = 0xd8
	CGRect _borderImageFocusRect;	// 220 = 0xdc
	CGRect _borderImagePhotoImageRect;	// 236 = 0xec
	NSString *_accessibilityLabel;	// 252 = 0xfc
	BOOL _decoratedImageCacheEnabled;	// 256 = 0x100
	BOOL _usingDecoratedImage;	// 257 = 0x101
	BOOL _imageEdgeAntialiasingEnabled;	// 258 = 0x102
	id _loadCompletionBlock;	// 260 = 0x104
	BOOL _readyToDisplay;	// 264 = 0x108
	BOOL _ignoreLoadAndDisplayOnDemand;	// 265 = 0x109
	BOOL _disableAnimations;	// 266 = 0x10a
}
@property(readonly, retain) NSString *accessibilityLabel;	// G=0x3029a5; converted property
@property(assign) BOOL alwaysShowTitles;	// G=0x3013b5; S=0x301355; converted property
@property(readonly, retain) BRControl *badgeControl;	// G=0x300cc9; converted property
@property(assign) float badgeOpacity;	// G=0x300d9d; S=0x300d31; converted property
@property(readonly, assign) int badgePosition;	// G=0x300cd9; converted property
@property(assign) float badgeScale;	// G=0x300d21; S=0x300ce9; converted property
@property(assign) XXStruct_qlg9jA cornerRadius;	// G=0x300b69; S=0x300b49; converted property
@property(assign) BOOL cropAndFill;	// G=0x300bcd; S=0x300b85; converted property
@property(assign) float cropAspectRatio;	// G=0x300c31; S=0x300bdd; converted property
@property(retain) BRImage *defaultImage;	// G=0x300151; S=0x3000f9; converted property
@property(assign) BOOL deletterboxImage;	// G=0x3015ed; S=0x3015dd; converted property
@property(assign) float focusedBadgeOpacity;	// G=0x300e19; S=0x300dad; converted property
@property(readonly, retain) BRImage *image;	// G=0x3015cd; converted property
@property(retain) id imageProxy;	// G=0x3006dd; S=0x300629; converted property
@property(assign) int numberBadgeValue;	// G=0x3010a9; S=0x300e29; converted property
@property(assign) BOOL onlyShowSubtitlesWhenFocused;	// G=0x3013d5; S=0x3013c5; converted property
@property(assign) int ordinal;	// G=0x3009d5; S=0x300861; converted property
@property(assign) CGColorRef posterBorderColor;	// G=0x3001a1; S=0x300161; converted property
@property(assign) float posterBorderWidth;	// G=0x3001e9; S=0x3001b1; converted property
@property(assign) int posterStyle;	// G=0x300619; S=0x300225; converted property
@property(assign) float reflectionAmount;	// G=0x300809; S=0x3007b9; converted property
@property(assign) float reflectionBaseline;	// G=0x300851; S=0x300819; converted property
@property(assign) BOOL spinnerEnabled;	// G=0x300b31; S=0x300a1d; converted property
@property(retain) id subtitle;	// G=0x3015ad; S=0x3013e5; converted property
@property(assign) float subtitleVerticalOffset;	// G=0x301345; S=0x30130d; converted property
@property(retain) id title;	// G=0x30121d; S=0x3010b9; converted property
@property(assign) float titleVerticalOffset;	// G=0x3012fd; S=0x3012c5; converted property
@property(assign) float titleWidthScale;	// G=0x301291; S=0x30124d; converted property
+ (void)initialize;	// 0x2ffbdd
+ (Class)layerClass;	// 0x2ffbc1
+ (id)polaroidPosterWithImageProxy:(id)imageProxy title:(id)title;	// 0x2ffb65
+ (id)posterButtonWithImageProxy:(id)imageProxy title:(id)title;	// 0x2ff9d9
+ (id)tilePosterWithImageProxy:(id)imageProxy title:(id)title subtitle:(id)subtitle;	// 0x2ffacd
+ (id)twoLinePosterButtonWithImageProxy:(id)imageProxy title:(id)title subtitle:(id)subtitle;	// 0x2ffa49
- (id)init;	// 0x2ffc4d
- (id)_addFadeAnimationToLayer:(id)layer forKey:(id)key;	// 0x303a29
- (id)_artworkIdentifier;	// 0x303d29
- (void)_clearCurrentImage;	// 0x303e31
- (void)_cropImage:(id)image;	// 0x304be9
- (id)_currentImage;	// 0x303199
- (CGRect)_currentImageRect;	// 0x303301
- (void)_decorateImage:(id)image;	// 0x304e81
- (id)_decoratedImageIdentifier:(id)identifier size:(CGSize)size;	// 0x304e25
- (void)_deletterboxImage:(id)image;	// 0x304b8d
- (id)_fetchImage;	// 0x3041f5
- (void)_focusWasChanged;	// 0x303b15
- (id)_getDecoratedImage:(id)image imageID:(id)anId toSize:(CGSize)size writeToDisk:(BOOL)disk;	// 0x304f89
- (id)_getImageFromCacheNamed:(id)cacheNamed withSize:(CGSize)size;	// 0x304119
- (BOOL)_imageIsCorrectSize:(id)size requiresTask:(BOOL *)task requiresDeletterBox:(BOOL *)box;	// 0x304535
- (void)_imageLoadFailed:(id)failed;	// 0x304459
- (BOOL)_imageRequiresCrop;	// 0x302f3d
- (int)_imageSize;	// 0x303e01
- (void)_imageTaskComplete:(id)complete;	// 0x3055c9
- (void)_imageUpdated:(id)updated;	// 0x3042b9
- (void)_lowMemoryNotification:(id)notification;	// 0x303eb9
- (CGRect)_mainImageRectFromMainImageUnitRect;	// 0x3033ad
- (CGRect)_maxImageRect;	// 0x3031c1
- (id)_numberBadgeAttributes;	// 0x303d7d
- (id)_ordinalAttributes;	// 0x303919
- (void)_performDeactivation;	// 0x303ef9
- (BOOL)_resizeImage:(id)image;	// 0x304689
- (void)_restartImageResizing;	// 0x303d39
- (void)_scaleImage:(id)image;	// 0x304d0d
- (void)_setArtworkIdentifier:(id)identifier;	// 0x303c01
- (void)_setAttributedTitle:(id)title withCrossfade:(BOOL)crossfade;	// 0x3037f1
- (void)_setFinalFormImage:(id)image;	// 0x3056cd
- (void)_startDeletterboxTaskForImage:(id)image;	// 0x304a21
- (void)_startImageProcessingTaskForImage:(id)image;	// 0x304701
- (id)_subtitleAttributes;	// 0x302e55
- (id)_titleAttributes;	// 0x302c51
- (void)_updateDefaultArtwork;	// 0x302f85
- (void)_updateDeferredArtwork;	// 0x303fed
- (void)_updateTextLayerOpacity;	// 0x303469
// converted property getter: - (id)accessibilityLabel;	// 0x3029a5
- (id)accessibilitySecondaryLabel;	// 0x302a29
// converted property getter: - (BOOL)alwaysShowTitles;	// 0x3013b5
- (id)badge;	// 0x302aa5
// converted property getter: - (id)badgeControl;	// 0x300cc9
// converted property getter: - (float)badgeOpacity;	// 0x300d9d
// converted property getter: - (int)badgePosition;	// 0x300cd9
// converted property getter: - (float)badgeScale;	// 0x300d21
- (void)cancelContainerViewLoad;	// 0x302b29
- (void)controlWasActivated;	// 0x2fff49
- (void)controlWasDeactivated;	// 0x300025
- (void)controlWasFocused;	// 0x3018ad
- (void)controlWasUnfocused;	// 0x3018ed
// converted property getter: - (XXStruct_qlg9jA)cornerRadius;	// 0x300b69
// converted property getter: - (BOOL)cropAndFill;	// 0x300bcd
// converted property getter: - (float)cropAspectRatio;	// 0x300c31
- (void)dealloc;	// 0x2ffd29
// converted property getter: - (id)defaultImage;	// 0x300151
// converted property getter: - (BOOL)deletterboxImage;	// 0x3015ed
- (id)description;	// 0x2ffed1
- (BOOL)drawsFakeAntiAliasTopLine;	// 0x300215
- (CGRect)focusCursorFrame;	// 0x3015fd
// converted property getter: - (float)focusedBadgeOpacity;	// 0x300e19
- (void)hideTextLayers;	// 0x30192d
// converted property getter: - (id)image;	// 0x3015cd
// converted property getter: - (id)imageProxy;	// 0x3006dd
- (BOOL)isAccessibilityElement;	// 0x3029a1
- (void)layoutSubcontrols;	// 0x3019b1
- (void)loadWithCompletionBlock:(id)completionBlock;	// 0x302ab5
// converted property getter: - (int)numberBadgeValue;	// 0x3010a9
// converted property getter: - (BOOL)onlyShowSubtitlesWhenFocused;	// 0x3013d5
// converted property getter: - (int)ordinal;	// 0x3009d5
// converted property getter: - (CGColorRef)posterBorderColor;	// 0x3001a1
// converted property getter: - (float)posterBorderWidth;	// 0x3001e9
- (id)posterImage;	// 0x302bc9
// converted property getter: - (int)posterStyle;	// 0x300619
- (float)preferredCursorRadius;	// 0x302a91
// converted property getter: - (float)reflectionAmount;	// 0x300809
// converted property getter: - (float)reflectionBaseline;	// 0x300851
// converted property setter: - (void)setAlwaysShowTitles:(BOOL)titles;	// 0x301355
- (void)setBadgeControl:(id)control atPosition:(int)position;	// 0x300c41
// converted property setter: - (void)setBadgeOpacity:(float)opacity;	// 0x300d31
// converted property setter: - (void)setBadgeScale:(float)scale;	// 0x300ce9
// converted property setter: - (void)setCornerRadius:(XXStruct_qlg9jA)radius;	// 0x300b49
// converted property setter: - (void)setCropAndFill:(BOOL)fill;	// 0x300b85
// converted property setter: - (void)setCropAspectRatio:(float)ratio;	// 0x300bdd
// converted property setter: - (void)setDefaultImage:(id)image;	// 0x3000f9
// converted property setter: - (void)setDeletterboxImage:(BOOL)image;	// 0x3015dd
- (void)setDrawsFakeAntialiasTopLine:(BOOL)line;	// 0x3001f9
- (BOOL)setEnableDecoratedImageCache:(BOOL)cache;	// 0x3006ed
// converted property setter: - (void)setFocusedBadgeOpacity:(float)opacity;	// 0x300dad
- (void)setIgnoreLoadAndDisplayOnDemand;	// 0x302b7d
- (void)setIgnoreLoadAndDisplayOnDemandDisableAnimations:(BOOL)animations;	// 0x302b9d
- (void)setImageEdgeAntialiasingEnabled:(BOOL)enabled;	// 0x300749
// converted property setter: - (void)setImageProxy:(id)proxy;	// 0x300629
- (void)setImageProxy:(id)proxy withSize:(int)size;	// 0x3006bd
- (void)setNonAttributedSubtitle:(id)subtitle;	// 0x3014f5
- (void)setNonAttributedTitle:(id)title;	// 0x3010e5
- (void)setNonAttributedTitleWithCrossfade:(id)crossfade;	// 0x30119d
// converted property setter: - (void)setNumberBadgeValue:(int)value;	// 0x300e29
// converted property setter: - (void)setOnlyShowSubtitlesWhenFocused:(BOOL)focused;	// 0x3013c5
// converted property setter: - (void)setOrdinal:(int)ordinal;	// 0x300861
// converted property setter: - (void)setPosterBorderColor:(CGColorRef)color;	// 0x300161
// converted property setter: - (void)setPosterBorderWidth:(float)width;	// 0x3001b1
// converted property setter: - (void)setPosterStyle:(int)style;	// 0x300225
- (void)setReadyToDisplay;	// 0x302b55
// converted property setter: - (void)setReflectionAmount:(float)amount;	// 0x3007b9
// converted property setter: - (void)setReflectionBaseline:(float)baseline;	// 0x300819
// converted property setter: - (void)setSpinnerEnabled:(BOOL)enabled;	// 0x300a1d
// converted property setter: - (void)setSubtitle:(id)subtitle;	// 0x3013e5
// converted property setter: - (void)setSubtitleVerticalOffset:(float)offset;	// 0x30130d
// converted property setter: - (void)setTitle:(id)title;	// 0x3010b9
// converted property setter: - (void)setTitleVerticalOffset:(float)offset;	// 0x3012c5
// converted property setter: - (void)setTitleWidthScale:(float)scale;	// 0x30124d
- (void)setTitleWithCrossfade:(id)crossfade;	// 0x3010cd
// converted property getter: - (BOOL)spinnerEnabled;	// 0x300b31
// converted property getter: - (id)subtitle;	// 0x3015ad
// converted property getter: - (float)subtitleVerticalOffset;	// 0x301345
// converted property getter: - (id)title;	// 0x30121d
- (id)titleControl;	// 0x30123d
// converted property getter: - (float)titleVerticalOffset;	// 0x3012fd
// converted property getter: - (float)titleWidthScale;	// 0x301291
- (void)windowMaxBoundsChanged;	// 0x300065
@end

