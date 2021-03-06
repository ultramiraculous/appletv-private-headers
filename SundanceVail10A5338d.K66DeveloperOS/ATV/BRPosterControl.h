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

@class NSString, BRAutoScrollingTextControl, BRWaitSpinnerControl, BRHorizontalSegmentedWidget, BRTextControl, BRImageControl, BRImage, BRAsyncTask, BRPosterReflectionControl;
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
	CGSize _titleControlTypographicBounds;	// 148 = 0x94
	BRAutoScrollingTextControl *_autoScrollingTitleControl;	// 156 = 0x9c
	BRTextControl *_ordinalTextControl;	// 160 = 0xa0
	BRTextControl *_subtitleTextControl;	// 164 = 0xa4
	float _titleWidthScale;	// 168 = 0xa8
	float _titleVerticalOffset;	// 172 = 0xac
	float _subtitleVerticalOffset;	// 176 = 0xb0
	BOOL _alwaysShowTitles;	// 180 = 0xb4
	BOOL _onlyShowSubtitlesWhenFocused;	// 181 = 0xb5
	BRWaitSpinnerControl *_spinnerControl;	// 184 = 0xb8
	XXStruct_qlg9jA _cornerRadius;	// 188 = 0xbc
	float _cropAspectRatio;	// 192 = 0xc0
	BOOL _cropAndFill;	// 196 = 0xc4
	BOOL _deletterboxImage;	// 197 = 0xc5
	BRControl *_badgeControl;	// 200 = 0xc8
	float _badgeScale;	// 204 = 0xcc
	float _badgeOpacity;	// 208 = 0xd0
	float _badgeFocusedOpacity;	// 212 = 0xd4
	int _badgePosition;	// 216 = 0xd8
	BOOL _badgeUpdated;	// 220 = 0xdc
	BRImage *_borderImage;	// 224 = 0xe0
	CGRect _borderImageFocusRect;	// 228 = 0xe4
	CGRect _borderImagePhotoImageRect;	// 244 = 0xf4
	NSString *_accessibilityLabel;	// 260 = 0x104
	BOOL _decoratedImageCacheEnabled;	// 264 = 0x108
	BOOL _usingDecoratedImage;	// 265 = 0x109
	BOOL _imageEdgeAntialiasingEnabled;	// 266 = 0x10a
	id _loadCompletionBlock;	// 268 = 0x10c
	BOOL _readyToDisplay;	// 272 = 0x110
	BOOL _ignoreLoadAndDisplayOnDemand;	// 273 = 0x111
	BOOL _disableAnimations;	// 274 = 0x112
}
@property(readonly, retain) NSString *accessibilityLabel;	// G=0x3084c5; converted property
@property(assign) BOOL alwaysShowTitles;	// G=0x306e85; S=0x306e25; converted property
@property(readonly, retain) BRControl *badgeControl;	// G=0x306799; converted property
@property(assign) float badgeOpacity;	// G=0x30686d; S=0x306801; converted property
@property(readonly, assign) int badgePosition;	// G=0x3067a9; converted property
@property(assign) float badgeScale;	// G=0x3067f1; S=0x3067b9; converted property
@property(assign) XXStruct_qlg9jA cornerRadius;	// G=0x306639; S=0x306619; converted property
@property(assign) BOOL cropAndFill;	// G=0x30669d; S=0x306655; converted property
@property(assign) float cropAspectRatio;	// G=0x306701; S=0x3066ad; converted property
@property(retain) BRImage *defaultImage;	// G=0x305c21; S=0x305bc9; converted property
@property(assign) BOOL deletterboxImage;	// G=0x3070bd; S=0x3070ad; converted property
@property(assign) float focusedBadgeOpacity;	// G=0x3068e9; S=0x30687d; converted property
@property(readonly, retain) BRImage *image;	// G=0x30709d; converted property
@property(retain) id imageProxy;	// G=0x3061ad; S=0x3060f9; converted property
@property(assign) int numberBadgeValue;	// G=0x306b79; S=0x3068f9; converted property
@property(assign) BOOL onlyShowSubtitlesWhenFocused;	// G=0x306ea5; S=0x306e95; converted property
@property(assign) int ordinal;	// G=0x3064a5; S=0x306331; converted property
@property(assign) CGColorRef posterBorderColor;	// G=0x305c71; S=0x305c31; converted property
@property(assign) float posterBorderWidth;	// G=0x305cb9; S=0x305c81; converted property
@property(assign) int posterStyle;	// G=0x3060e9; S=0x305cf5; converted property
@property(assign) float reflectionAmount;	// G=0x3062d9; S=0x306289; converted property
@property(assign) float reflectionBaseline;	// G=0x306321; S=0x3062e9; converted property
@property(assign) BOOL spinnerEnabled;	// G=0x306601; S=0x3064ed; converted property
@property(retain) id subtitle;	// G=0x30707d; S=0x306eb5; converted property
@property(assign) float subtitleVerticalOffset;	// G=0x306e15; S=0x306ddd; converted property
@property(retain) id title;	// G=0x306ced; S=0x306b89; converted property
@property(assign) float titleVerticalOffset;	// G=0x306dcd; S=0x306d95; converted property
@property(assign) float titleWidthScale;	// G=0x306d61; S=0x306d1d; converted property
+ (void)initialize;	// 0x3056ad
+ (Class)layerClass;	// 0x305691
+ (id)polaroidPosterWithImageProxy:(id)imageProxy title:(id)title;	// 0x305635
+ (id)posterButtonWithImageProxy:(id)imageProxy title:(id)title;	// 0x3054a9
+ (id)tilePosterWithImageProxy:(id)imageProxy title:(id)title subtitle:(id)subtitle;	// 0x30559d
+ (id)twoLinePosterButtonWithImageProxy:(id)imageProxy title:(id)title subtitle:(id)subtitle;	// 0x305519
- (id)init;	// 0x30571d
- (id)_addFadeAnimationToLayer:(id)layer forKey:(id)key;	// 0x30956d
- (id)_artworkIdentifier;	// 0x30986d
- (void)_clearCurrentImage;	// 0x309975
- (void)_cropImage:(id)image;	// 0x30a72d
- (id)_currentImage;	// 0x308cb9
- (CGRect)_currentImageRect;	// 0x308e21
- (void)_decorateImage:(id)image;	// 0x30a9c5
- (id)_decoratedImageIdentifier:(id)identifier size:(CGSize)size;	// 0x30a969
- (void)_deletterboxImage:(id)image;	// 0x30a6d1
- (id)_fetchImage;	// 0x309d39
- (void)_focusWasChanged;	// 0x309659
- (id)_getDecoratedImage:(id)image imageID:(id)anId toSize:(CGSize)size writeToDisk:(BOOL)disk;	// 0x30aacd
- (id)_getImageFromCacheNamed:(id)cacheNamed withSize:(CGSize)size;	// 0x309c5d
- (BOOL)_imageIsCorrectSize:(id)size requiresTask:(BOOL *)task requiresDeletterBox:(BOOL *)box;	// 0x30a079
- (void)_imageLoadFailed:(id)failed;	// 0x309f9d
- (BOOL)_imageRequiresCrop;	// 0x308a5d
- (int)_imageSize;	// 0x309945
- (void)_imageTaskComplete:(id)complete;	// 0x30b10d
- (void)_imageUpdated:(id)updated;	// 0x309dfd
- (void)_lowMemoryNotification:(id)notification;	// 0x3099fd
- (CGRect)_mainImageRectFromMainImageUnitRect;	// 0x308ecd
- (CGRect)_maxImageRect;	// 0x308ce1
- (id)_numberBadgeAttributes;	// 0x3098c1
- (id)_ordinalAttributes;	// 0x30945d
- (void)_performDeactivation;	// 0x309a3d
- (BOOL)_resizeImage:(id)image;	// 0x30a1cd
- (void)_restartImageResizing;	// 0x30987d
- (void)_scaleImage:(id)image;	// 0x30a851
- (void)_setArtworkIdentifier:(id)identifier;	// 0x309745
- (void)_setAttributedTitle:(id)title withCrossfade:(BOOL)crossfade;	// 0x309311
- (void)_setFinalFormImage:(id)image;	// 0x30b211
- (void)_startDeletterboxTaskForImage:(id)image;	// 0x30a565
- (void)_startImageProcessingTaskForImage:(id)image;	// 0x30a245
- (id)_subtitleAttributes;	// 0x308975
- (id)_titleAttributes;	// 0x308771
- (void)_updateDefaultArtwork;	// 0x308aa5
- (void)_updateDeferredArtwork;	// 0x309b31
- (void)_updateTextLayerOpacity;	// 0x308f89
// converted property getter: - (id)accessibilityLabel;	// 0x3084c5
- (id)accessibilitySecondaryLabel;	// 0x308549
// converted property getter: - (BOOL)alwaysShowTitles;	// 0x306e85
- (id)badge;	// 0x3085c5
// converted property getter: - (id)badgeControl;	// 0x306799
// converted property getter: - (float)badgeOpacity;	// 0x30686d
// converted property getter: - (int)badgePosition;	// 0x3067a9
// converted property getter: - (float)badgeScale;	// 0x3067f1
- (void)cancelContainerViewLoad;	// 0x308649
- (void)controlWasActivated;	// 0x305a19
- (void)controlWasDeactivated;	// 0x305af5
- (void)controlWasFocused;	// 0x30737d
- (void)controlWasUnfocused;	// 0x3073bd
// converted property getter: - (XXStruct_qlg9jA)cornerRadius;	// 0x306639
// converted property getter: - (BOOL)cropAndFill;	// 0x30669d
// converted property getter: - (float)cropAspectRatio;	// 0x306701
- (void)dealloc;	// 0x3057f9
// converted property getter: - (id)defaultImage;	// 0x305c21
// converted property getter: - (BOOL)deletterboxImage;	// 0x3070bd
- (id)description;	// 0x3059a1
- (BOOL)drawsFakeAntiAliasTopLine;	// 0x305ce5
- (CGRect)focusCursorFrame;	// 0x3070cd
// converted property getter: - (float)focusedBadgeOpacity;	// 0x3068e9
- (void)hideTextLayers;	// 0x3073fd
// converted property getter: - (id)image;	// 0x30709d
// converted property getter: - (id)imageProxy;	// 0x3061ad
- (BOOL)isAccessibilityElement;	// 0x3084c1
- (void)layoutSubcontrols;	// 0x307481
- (void)loadWithCompletionBlock:(id)completionBlock;	// 0x3085d5
// converted property getter: - (int)numberBadgeValue;	// 0x306b79
// converted property getter: - (BOOL)onlyShowSubtitlesWhenFocused;	// 0x306ea5
// converted property getter: - (int)ordinal;	// 0x3064a5
// converted property getter: - (CGColorRef)posterBorderColor;	// 0x305c71
// converted property getter: - (float)posterBorderWidth;	// 0x305cb9
- (id)posterImage;	// 0x3086e9
// converted property getter: - (int)posterStyle;	// 0x3060e9
- (float)preferredCursorRadius;	// 0x3085b1
// converted property getter: - (float)reflectionAmount;	// 0x3062d9
// converted property getter: - (float)reflectionBaseline;	// 0x306321
// converted property setter: - (void)setAlwaysShowTitles:(BOOL)titles;	// 0x306e25
- (void)setBadgeControl:(id)control atPosition:(int)position;	// 0x306711
// converted property setter: - (void)setBadgeOpacity:(float)opacity;	// 0x306801
// converted property setter: - (void)setBadgeScale:(float)scale;	// 0x3067b9
// converted property setter: - (void)setCornerRadius:(XXStruct_qlg9jA)radius;	// 0x306619
// converted property setter: - (void)setCropAndFill:(BOOL)fill;	// 0x306655
// converted property setter: - (void)setCropAspectRatio:(float)ratio;	// 0x3066ad
// converted property setter: - (void)setDefaultImage:(id)image;	// 0x305bc9
// converted property setter: - (void)setDeletterboxImage:(BOOL)image;	// 0x3070ad
- (void)setDrawsFakeAntialiasTopLine:(BOOL)line;	// 0x305cc9
- (BOOL)setEnableDecoratedImageCache:(BOOL)cache;	// 0x3061bd
// converted property setter: - (void)setFocusedBadgeOpacity:(float)opacity;	// 0x30687d
- (void)setIgnoreLoadAndDisplayOnDemand;	// 0x30869d
- (void)setIgnoreLoadAndDisplayOnDemandDisableAnimations:(BOOL)animations;	// 0x3086bd
- (void)setImageEdgeAntialiasingEnabled:(BOOL)enabled;	// 0x306219
// converted property setter: - (void)setImageProxy:(id)proxy;	// 0x3060f9
- (void)setImageProxy:(id)proxy withSize:(int)size;	// 0x30618d
- (void)setNonAttributedSubtitle:(id)subtitle;	// 0x306fc5
- (void)setNonAttributedTitle:(id)title;	// 0x306bb5
- (void)setNonAttributedTitleWithCrossfade:(id)crossfade;	// 0x306c6d
// converted property setter: - (void)setNumberBadgeValue:(int)value;	// 0x3068f9
// converted property setter: - (void)setOnlyShowSubtitlesWhenFocused:(BOOL)focused;	// 0x306e95
// converted property setter: - (void)setOrdinal:(int)ordinal;	// 0x306331
// converted property setter: - (void)setPosterBorderColor:(CGColorRef)color;	// 0x305c31
// converted property setter: - (void)setPosterBorderWidth:(float)width;	// 0x305c81
// converted property setter: - (void)setPosterStyle:(int)style;	// 0x305cf5
- (void)setReadyToDisplay;	// 0x308675
// converted property setter: - (void)setReflectionAmount:(float)amount;	// 0x306289
// converted property setter: - (void)setReflectionBaseline:(float)baseline;	// 0x3062e9
// converted property setter: - (void)setSpinnerEnabled:(BOOL)enabled;	// 0x3064ed
// converted property setter: - (void)setSubtitle:(id)subtitle;	// 0x306eb5
// converted property setter: - (void)setSubtitleVerticalOffset:(float)offset;	// 0x306ddd
// converted property setter: - (void)setTitle:(id)title;	// 0x306b89
// converted property setter: - (void)setTitleVerticalOffset:(float)offset;	// 0x306d95
// converted property setter: - (void)setTitleWidthScale:(float)scale;	// 0x306d1d
- (void)setTitleWithCrossfade:(id)crossfade;	// 0x306b9d
// converted property getter: - (BOOL)spinnerEnabled;	// 0x306601
// converted property getter: - (id)subtitle;	// 0x30707d
// converted property getter: - (float)subtitleVerticalOffset;	// 0x306e15
// converted property getter: - (id)title;	// 0x306ced
- (id)titleControl;	// 0x306d0d
// converted property getter: - (float)titleVerticalOffset;	// 0x306dcd
// converted property getter: - (float)titleWidthScale;	// 0x306d61
- (void)windowMaxBoundsChanged;	// 0x305b35
@end

