/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"

@class ATVImage, NSString, BRAsyncTask, BRWaitSpinnerControl, NSMutableDictionary;
@protocol BRImageProxy;

__attribute__((visibility("hidden")))
@interface BRAsyncImageControl : BRControl {
	id<BRImageProxy> _imageProxy;	// 84 = 0x54
	BRWaitSpinnerControl *_spinner;	// 88 = 0x58
	ATVImage *_image;	// 92 = 0x5c
	ATVImage *_defaultImage;	// 96 = 0x60
	BRAsyncTask *_imageProcessingTask;	// 100 = 0x64
	NSString *_imageID;	// 104 = 0x68
	BOOL _cropAndFill;	// 108 = 0x6c
	BOOL _useLoadingSpinner;	// 109 = 0x6d
	BOOL _loadFailure;	// 110 = 0x6e
	BOOL _imageLoadRequested;	// 111 = 0x6f
	BOOL _useLoadFailureImage;	// 112 = 0x70
	BOOL _loadOnActivation;	// 113 = 0x71
	BOOL _okToLoadImage;	// 114 = 0x72
	BOOL _useFadeInAnimation;	// 115 = 0x73
	int _requestedSize;	// 116 = 0x74
	NSMutableDictionary *_badges;	// 120 = 0x78
	float _badgeUnfocusedOpacity;	// 124 = 0x7c
	float _badgeFocusedOpacity;	// 128 = 0x80
	BRControl *_textControl;	// 132 = 0x84
	XXStruct_40SSZC _textInset;	// 136 = 0x88
	BOOL _imageAlignsToBottom;	// 144 = 0x90
	int _imageContentMode;	// 148 = 0x94
	XXStruct_40SSZC _preferredImageSize;	// 152 = 0x98
	CGRect _currentImageRect;	// 160 = 0xa0
	CGRect _focusCursorFrame;	// 176 = 0xb0
}
@property(assign, nonatomic) CGRect currentImageRect;	// G=0x3226a5; S=0x3226bd; @synthesize=_currentImageRect
@property(assign, nonatomic) CGRect focusCursorFrame;	// G=0x32271d; S=0x3214a5; @synthesize=_focusCursorFrame
@property(assign) float focusedBadgeOpacity;	// G=0x3213ed; S=0x3212c1; converted property
@property(retain) ATVImage *image;	// G=0x320b25; S=0x320b15; converted property
@property(assign, nonatomic) BOOL imageAlignsToBottom;	// G=0x3226e1; S=0x320a61; @synthesize=_imageAlignsToBottom
@property(assign, nonatomic) int imageContentMode;	// G=0x322685; S=0x322695; @synthesize=_imageContentMode
@property(retain) id imageProxy;	// G=0x320add; S=0x320aa1; converted property
@property(assign, nonatomic) XXStruct_40SSZC preferredImageSize;	// G=0x3226f1; S=0x322709; @synthesize=_preferredImageSize
@property(assign) float unfocusedBadgeOpacity;	// G=0x3212b1; S=0x321185; converted property
+ (id)imageControlWithImage:(id)image;	// 0x320851
+ (id)imageControlWithImageProxy:(id)imageProxy;	// 0x3207c5
- (id)init;	// 0x3208e1
- (id)initWithImage:(id)image;	// 0x3208a9
- (id)initWithImageProxy:(id)imageProxy;	// 0x32080d
- (id)_badgeKeyForBadgePosition:(int)badgePosition;	// 0x3238fd
- (id)_badgeKeys;	// 0x32392d
- (void)_checkImageSize:(id)size;	// 0x322ae1
- (void)_cropImage:(id)image;	// 0x323021
- (void)_enableFadeInAnimation;	// 0x322735
- (void)_enableSpinner;	// 0x3227fd
- (void)_fetchCachedThumbnailImage;	// 0x322839
- (void)_fetchPreferredSizeImage;	// 0x32298d
- (id)_getImageFromImageManagerNamed:(id)imageManagerNamed withSize:(CGSize)size;	// 0x3232bd
- (id)_imageOfSize:(int)size;	// 0x322eb1
- (void)_imageTaskComplete:(id)complete;	// 0x323205
- (void)_imageUnavailable:(id)unavailable;	// 0x3233f5
- (void)_imageUpdated:(id)updated;	// 0x323325
- (void)_performActivation;	// 0x3237cd
- (void)_performDeactivation;	// 0x323885
- (CGSize)_preferredImageSize;	// 0x322e29
- (void)_scaleImage:(id)image;	// 0x323115
- (void)_setImage:(id)image;	// 0x3234d1
- (void)_setImageID:(id)anId;	// 0x3235a1
- (void)_startImageProcessingTaskForImage:(id)image;	// 0x322be9
- (void)_updateContents;	// 0x3235dd
- (void)_updateImageRect;	// 0x322135
- (id)accessibilityLabel;	// 0x321c85
- (id)accessibilitySecondaryLabel;	// 0x321fb9
- (id)accessibilityTraitsList;	// 0x321c55
- (void)cancelImageLoading;	// 0x320b65
- (void)controlWasActivated;	// 0x320c21
- (void)controlWasDeactivated;	// 0x320c71
- (void)controlWasFocused;	// 0x320d4d
- (void)controlWasUnfocused;	// 0x320e69
// declared property getter: - (CGRect)currentImageRect;	// 0x3226a5
- (void)dealloc;	// 0x320981
// declared property getter: - (CGRect)focusCursorFrame;	// 0x32271d
// converted property getter: - (float)focusedBadgeOpacity;	// 0x3213ed
// converted property getter: - (id)image;	// 0x320b25
// declared property getter: - (BOOL)imageAlignsToBottom;	// 0x3226e1
// declared property getter: - (int)imageContentMode;	// 0x322685
// converted property getter: - (id)imageProxy;	// 0x320add
- (BOOL)isAccessibilityElement;	// 0x321c81
- (void)layoutSubcontrols;	// 0x321515
- (void)loadImage;	// 0x320b45
// declared property getter: - (XXStruct_40SSZC)preferredImageSize;	// 0x3226f1
- (void)setBadgeControl:(id)control badgePosition:(int)position badgeInset:(XXStruct_40SSZC)inset;	// 0x321015
- (void)setCropAndFill:(BOOL)fill;	// 0x320fe5
// declared property setter: - (void)setCurrentImageRect:(CGRect)rect;	// 0x3226bd
- (void)setDefaultImage:(id)image;	// 0x320f85
// declared property setter: - (void)setFocusCursorFrame:(CGRect)frame;	// 0x3214a5
// converted property setter: - (void)setFocusedBadgeOpacity:(float)opacity;	// 0x3212c1
// converted property setter: - (void)setImage:(id)image;	// 0x320b15
// declared property setter: - (void)setImageAlignsToBottom:(BOOL)bottom;	// 0x320a61
// declared property setter: - (void)setImageContentMode:(int)mode;	// 0x322695
// converted property setter: - (void)setImageProxy:(id)proxy;	// 0x320aa1
- (void)setLoadImageOnActivation:(BOOL)activation;	// 0x320b35
// declared property setter: - (void)setPreferredImageSize:(XXStruct_40SSZC)size;	// 0x322709
- (void)setTextControl:(id)control textInset:(XXStruct_40SSZC)inset;	// 0x3213fd
// converted property setter: - (void)setUnfocusedBadgeOpacity:(float)opacity;	// 0x321185
- (void)setUseFadeInAnimation:(BOOL)animation;	// 0x321005
- (void)setUseLoadFailureImage:(BOOL)image;	// 0x320ff5
- (void)setUseLoadingSpinner:(BOOL)spinner;	// 0x320fd5
// converted property getter: - (float)unfocusedBadgeOpacity;	// 0x3212b1
- (void)windowMaxBoundsChanged;	// 0x320cb1
@end

