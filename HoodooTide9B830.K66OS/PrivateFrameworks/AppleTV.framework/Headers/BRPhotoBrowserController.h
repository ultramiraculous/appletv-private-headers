/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import "BRController.h"
#import "BRFullScreenPhotoControllerDelegate.h"

@class BRPanelControl, BRCursorControl, NSDateFormatter, BRScrollControl, BRWaitSpinnerControl, NSTimer, NSString, BRPhotoBrowserBannerButton, BRPhotoBrowserHeaderControl, BRGridControl, BRTextControl;
@protocol BRProvider;

@interface BRPhotoBrowserController : BRController <BRFullScreenPhotoControllerDelegate> {
@private
	id<BRProvider> _provider;	// 88 = 0x58
	int _style;	// 92 = 0x5c
	NSString *_subtitleKey;	// 96 = 0x60
	NSDateFormatter *_formatter;	// 100 = 0x64
	long _providerDataCount;	// 104 = 0x68
	BRPhotoBrowserHeaderControl *_header;	// 108 = 0x6c
	BRGridControl *_grid;	// 112 = 0x70
	BRWaitSpinnerControl *_spinner;	// 116 = 0x74
	BRCursorControl *_cursorControl;	// 120 = 0x78
	BRScrollControl *_scroller;	// 124 = 0x7c
	BRPanelControl *_bannerControl;	// 128 = 0x80
	BRTextControl *_noContentMessageControl;	// 132 = 0x84
	NSTimer *_noContentMessageTimer;	// 136 = 0x88
	BOOL _isNetworkDependent;	// 140 = 0x8c
	BOOL _isValidWithZeroData;	// 141 = 0x8d
	BOOL _useCorkBoardBackground;	// 142 = 0x8e
	BRPhotoBrowserBannerButton *_slideshowButton;	// 144 = 0x90
	BRPhotoBrowserBannerButton *_settingsButton;	// 148 = 0x94
	id _screenSaverSetCollectionBlock;	// 152 = 0x98
	double noContentErrorDisplayDelay;	// 156 = 0x9c
}
@property(assign) int columnCount;	// G=0x32a42905; S=0x32a428b9; converted property
@property(assign) int cursorStyle;	// G=0x32a42879; S=0x32a42859; converted property
@property(assign) BOOL displaysCount;	// G=0x32a426bd; S=0x32a42681; converted property
@property(assign) float dividerBrightness;	// G=0x32a42991; S=0x32a42971; converted property
@property(assign) XXStruct_qlg9jA horizontalGap;	// G=0x32a428d9; S=0x32a42899; converted property
@property(retain) id icon;	// G=0x32a4271d; S=0x32a426e1; converted property
@property(assign) float iconVerticalOffset;	// G=0x32a42779; S=0x32a4273d; converted property
@property(assign) BOOL isNetworkDependent;	// G=0x32a42de5; S=0x32a42dd5; converted property
@property(assign) BOOL isValidWithZeroData;	// G=0x32a42e05; S=0x32a42df5; converted property
@property(assign, nonatomic) double noContentErrorDisplayDelay;	// G=0x32a43399; S=0x32a433b1; @synthesize
@property(copy, nonatomic) NSString *rightJustifiedText;	// G=0x32a42661; S=0x32a42641; 
@property(copy, nonatomic) id screenSaverSetCollectionBlock;	// G=0x32a43365; S=0x32a43375; @synthesize=_screenSaverSetCollectionBlock
@property(assign) int style;	// G=0x32a4245d; S=0x32a420fd; converted property
@property(retain) id subtitle;	// G=0x32a427d5; S=0x32a42799; converted property
@property(retain) NSString *subtitleKey;	// G=0x32a42849; S=0x32a427f5; converted property
@property(retain) id title;	// G=0x32a424f5; S=0x32a4246d; converted property
@property(assign) XXStruct_qlg9jA verticalGap;	// G=0x32a42945; S=0x32a42925; converted property
+ (id)controllerForProvider:(id)provider;	// 0x32a418c1
+ (id)controllerForProvider:(id)provider style:(int)style;	// 0x32a41921
- (id)initWithProvider:(id)provider;	// 0x32a4190d
- (id)initWithProvider:(id)provider style:(int)style;	// 0x32a41971
- (id)_containerCollection;	// 0x32a43a75
- (void)_focusChanged:(id)changed;	// 0x32a44485
- (void)_handleDeletePhotoStreamItemSelection:(id)selection;	// 0x32a44379
- (void)_handleProviderDataCountChange;	// 0x32a43d19
- (void)_handleSelection:(id)selection;	// 0x32a43f39
- (void)_handleSettingsSelection:(id)selection;	// 0x32a442b9
- (void)_handleSlideshowSelection:(id)selection;	// 0x32a441f5
- (void)_hideNoContentMessage;	// 0x32a43b85
- (void)_initiateSlideshowPlaybackAtIndex:(long)index inCollection:(id)collection withOptions:(id)options;	// 0x32a43c25
- (ATVMediaItemRef)_mediaItemInContainingControl:(id)containingControl;	// 0x32a43eb9
- (void)_noContentTimerFired:(id)fired;	// 0x32a43bc5
- (void)_playerStateChanged:(id)changed;	// 0x32a444d9
- (void)_providerUpdated:(id)updated;	// 0x32a444c9
- (void)_setupControls;	// 0x32a433c5
- (void)_showNoContentMessage;	// 0x32a43ac9
- (void)_slideshowPlayerAssetChanged:(id)changed;	// 0x32a44575
- (id)_subtitleStringForKey:(id)key;	// 0x32a43889
- (id)accessibilityLabel;	// 0x32a430c1
- (void)addBannerControl:(id)control;	// 0x32a429b1
- (BOOL)brEventAction:(id)action;	// 0x32a42e15
// converted property getter: - (int)columnCount;	// 0x32a42905
- (void)controlWasActivated;	// 0x32a41f81
- (void)controlWasDeactivated;	// 0x32a4206d
// converted property getter: - (int)cursorStyle;	// 0x32a42879
- (void)dealloc;	// 0x32a41d75
// converted property getter: - (BOOL)displaysCount;	// 0x32a426bd
// converted property getter: - (float)dividerBrightness;	// 0x32a42991
// converted property getter: - (XXStruct_qlg9jA)horizontalGap;	// 0x32a428d9
// converted property getter: - (id)icon;	// 0x32a4271d
// converted property getter: - (float)iconVerticalOffset;	// 0x32a42779
// converted property getter: - (BOOL)isNetworkDependent;	// 0x32a42de5
- (BOOL)isValidAfterDataUpdate;	// 0x32a420c1
// converted property getter: - (BOOL)isValidWithZeroData;	// 0x32a42e05
- (void)layoutSubcontrols;	// 0x32a42a49
// declared property getter: - (double)noContentErrorDisplayDelay;	// 0x32a43399
- (void)photoPlaybackWillStartForPlayer:(id)photoPlayback;	// 0x32a430f1
- (id)providersForContextMenu;	// 0x32a43185
// declared property getter: - (id)rightJustifiedText;	// 0x32a42661
// declared property getter: - (id)screenSaverSetCollectionBlock;	// 0x32a43365
// converted property setter: - (void)setColumnCount:(int)count;	// 0x32a428b9
// converted property setter: - (void)setCursorStyle:(int)style;	// 0x32a42859
// converted property setter: - (void)setDisplaysCount:(BOOL)count;	// 0x32a42681
// converted property setter: - (void)setDividerBrightness:(float)brightness;	// 0x32a42971
// converted property setter: - (void)setHorizontalGap:(XXStruct_qlg9jA)gap;	// 0x32a42899
// converted property setter: - (void)setIcon:(id)icon;	// 0x32a426e1
// converted property setter: - (void)setIconVerticalOffset:(float)offset;	// 0x32a4273d
- (void)setIndex:(unsigned)index;	// 0x32a42515
// converted property setter: - (void)setIsNetworkDependent:(BOOL)dependent;	// 0x32a42dd5
// converted property setter: - (void)setIsValidWithZeroData:(BOOL)zeroData;	// 0x32a42df5
- (void)setLastViewedSlideIndex:(int)index;	// 0x32a430e1
// declared property setter: - (void)setNoContentErrorDisplayDelay:(double)delay;	// 0x32a433b1
- (void)setProvider:(id)provider;	// 0x32a41c7d
// declared property setter: - (void)setRightJustifiedText:(id)text;	// 0x32a42641
// declared property setter: - (void)setScreenSaverSetCollectionBlock:(id)block;	// 0x32a43375
// converted property setter: - (void)setStyle:(int)style;	// 0x32a420fd
// converted property setter: - (void)setSubtitle:(id)subtitle;	// 0x32a42799
// converted property setter: - (void)setSubtitleKey:(id)key;	// 0x32a427f5
// converted property setter: - (void)setTitle:(id)title;	// 0x32a4246d
// converted property setter: - (void)setVerticalGap:(XXStruct_qlg9jA)gap;	// 0x32a42925
// converted property getter: - (int)style;	// 0x32a4245d
// converted property getter: - (id)subtitle;	// 0x32a427d5
// converted property getter: - (id)subtitleKey;	// 0x32a42849
// converted property getter: - (id)title;	// 0x32a424f5
// converted property getter: - (XXStruct_qlg9jA)verticalGap;	// 0x32a42945
- (void)wasBuried;	// 0x32a41ee1
- (void)wasExhumed;	// 0x32a41f31
@end
