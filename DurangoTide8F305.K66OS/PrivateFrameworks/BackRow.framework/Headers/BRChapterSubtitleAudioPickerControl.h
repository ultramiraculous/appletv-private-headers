/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BackRow.framework/BackRow
 */

#import "BackRow-Structs.h"
#import "BRControl.h"
#import "BRTabControlDelegate.h"

@class BRReflectionControl, BRImageControl, BRTabControl, BRImage, BRTextControl, BRVideoChapterProvider, BRMediaPlayer, BRCoverArtPreviewControl, NSValue;

__attribute__((visibility("hidden")))
@interface BRChapterSubtitleAudioPickerControl : BRControl <BRTabControlDelegate> {
@private
	BRImage *_currentVideoFrame;	// 44 = 0x2c
	BRControl *_screenShotPreviewAndReflectionComboControl;	// 48 = 0x30
	BRImageControl *_screenShotPreviewControl;	// 52 = 0x34
	CGPoint _screenShotPreviewControlFullScreenPosition;	// 56 = 0x38
	BRReflectionControl *_reflectionToPreviewControl;	// 64 = 0x40
	NSValue *_previewTransform;	// 68 = 0x44
	NSValue *_reflectionTransform;	// 72 = 0x48
	BRVideoChapterProvider *_chapterProvider;	// 76 = 0x4c
	BRCoverArtPreviewControl *_preview;	// 80 = 0x50
	BRControl *_csaPicker;	// 84 = 0x54
	BRTabControl *_tabControl;	// 88 = 0x58
	BRTextControl *_titleControl;	// 92 = 0x5c
	BRMediaPlayer *_player;	// 96 = 0x60
	BRControl *_currentContentControl;	// 100 = 0x64
	BRControl *_chapterPicker;	// 104 = 0x68
	BOOL _inScreenShotMode;	// 108 = 0x6c
	BOOL _controlWasActivated;	// 109 = 0x6d
	BOOL _controlWasDeactivated;	// 110 = 0x6e
}
+ (id)controlWithPlayer:(id)player;	// 0x32964e9d
- (id)init;	// 0x32964e01
- (void)_addCSAPicker;	// 0x3296487d
- (void)_addFullScreenVideoSnapshot;	// 0x32964875
- (void)_animatePreviewBackToScreenshot;	// 0x329648b5
- (void)_animateScreenshotToPreview;	// 0x32964879
- (BOOL)_chapterPreviewsAvailable;	// 0x329657e9
- (void)_createCSAPicker;	// 0x329658c1
- (void)_endPositionForPreview:(CGPoint *)preview forReflection:(CGPoint *)reflection;	// 0x3296524d
- (void)_loadAudioList;	// 0x32965441
- (void)_loadChapters;	// 0x329648ed
- (void)_loadGraphicalChapterList;	// 0x32965d41
- (void)_loadListWithTitles:(id)titles forTrackIDs:(id)trackIDs withCurrentSelection:(long)currentSelection withSelectionHandler:(id)selectionHandler;	// 0x32965b01
- (void)_loadSubtitleList;	// 0x329655d5
- (void)_loadTextualChapterList;	// 0x32966001
- (void)_setAudioTrack:(id)track;	// 0x32964925
- (void)_setChapter:(id)chapter;	// 0x32964a35
- (void)_setSubtitleTrack:(id)track;	// 0x329649ad
- (id)_titleControlItemLabelAttributes;	// 0x329658a1
- (void)animationDidStop:(id)animation finished:(BOOL)finished;	// 0x32964b79
- (void)controlWasActivated;	// 0x32964c4d
- (void)dealloc;	// 0x32964ce1
- (void)layoutSubcontrols;	// 0x329652e9
- (void)orderOut;	// 0x32964c9d
- (void)setPlayer:(id)player;	// 0x32964eed
- (void)tabControl:(id)control didSelectTabItem:(id)item;	// 0x32964bf9
- (void)tabControl:(id)control willSelectTabItem:(id)item;	// 0x3296486d
- (void)tabControlDidChangeNumberOfTabItems:(id)tabControl;	// 0x32964871
@end

