/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "BRTabControlDelegate.h"
#import "BRControl.h"

@class BRCoverArtPreviewControl, BRReflectionControl, BRWaitPromptControl, BRMediaPlayer, BRTabControl, BRTextControl, BRImageControl, BRImage, BRVideoChapterProvider;

__attribute__((visibility("hidden")))
@interface BRChapterSubtitleAudioPickerControl : BRControl <BRTabControlDelegate> {
	BRImage *_currentVideoFrame;	// 80 = 0x50
	BRControl *_screenShotPreviewAndReflectionComboControl;	// 84 = 0x54
	BRImageControl *_screenShotPreviewControl;	// 88 = 0x58
	BRReflectionControl *_reflectionToPreviewControl;	// 92 = 0x5c
	BRVideoChapterProvider *_chapterProvider;	// 96 = 0x60
	BRCoverArtPreviewControl *_preview;	// 100 = 0x64
	BRControl *_csaPicker;	// 104 = 0x68
	BRTabControl *_tabControl;	// 108 = 0x6c
	BRTextControl *_titleControl;	// 112 = 0x70
	BRMediaPlayer *_player;	// 116 = 0x74
	BRControl *_currentContentControl;	// 120 = 0x78
	BRControl *_chapterPicker;	// 124 = 0x7c
	BRWaitPromptControl *_spinner;	// 128 = 0x80
	BOOL _controlWasActivated;	// 132 = 0x84
	BOOL _controlWasDeactivated;	// 133 = 0x85
}
+ (id)controlWithPlayer:(id)player;	// 0x28f809
- (id)init;	// 0x28f865
- (void)_addCSAPicker;	// 0x2911c1
- (void)_addFullScreenVideoSnapshot;	// 0x290f09
- (void)_animatePreviewBackToScreenshot;	// 0x290f11
- (void)_animateScreenshotToPreview;	// 0x290f0d
- (BOOL)_chapterPreviewsAvailable;	// 0x2905bd
- (void)_createCSAPicker;	// 0x290f55
- (void)_endPositionForPreview:(CGPoint *)preview forReflection:(CGPoint *)reflection;	// 0x291201
- (void)_loadAudioList;	// 0x290c05
- (void)_loadChapters;	// 0x290699
- (void)_loadGraphicalChapterList;	// 0x29084d
- (void)_loadMediaOptionList:(id)list selectedOption:(id)option selectionHandler:(id)handler;	// 0x290c91
- (void)_loadSubtitleList;	// 0x290b79
- (void)_loadTextualChapterList;	// 0x2906d9
- (void)_setAudioOption:(id)option;	// 0x290545
- (void)_setChapter:(id)chapter;	// 0x290219
- (void)_setSubtitleOption:(id)option;	// 0x29038d
- (id)_titleControlItemLabelAttributes;	// 0x2912c1
- (void)animationDidStop:(id)animation finished:(BOOL)finished;	// 0x290181
- (BOOL)brEventAction:(id)action;	// 0x29005d
- (void)controlWasActivated;	// 0x28fe21
- (void)dealloc;	// 0x28f905
- (void)layoutSubcontrols;	// 0x28fe79
- (void)orderOut;	// 0x28fdcd
- (void)setPlayer:(id)player;	// 0x28fa55
- (void)tabControl:(id)control didSelectTabItem:(id)item;	// 0x290115
- (void)tabControl:(id)control willSelectTabItem:(id)item;	// 0x290179
- (void)tabControlDidChangeNumberOfTabItems:(id)tabControl;	// 0x29017d
@end

