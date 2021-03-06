/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"

@class NSArray, NSMutableDictionary, BRWaitSpinnerControl, BRImage;

__attribute__((visibility("hidden")))
@interface BRTransportLayer : BRControl {
	BOOL _zeroDuration;	// 77 = 0x4d
	BOOL _drawsBetweenLeftEdgeAndBufferEdge;	// 78 = 0x4e
	BOOL _useWideLeftEndCap;	// 79 = 0x4f
	BOOL _playerStateHidden;	// 80 = 0x50
	float _percentComplete;	// 84 = 0x54
	NSRange _downloadedRange;	// 88 = 0x58
	int _currentState;	// 96 = 0x60
	NSMutableDictionary *_cachedImages;	// 100 = 0x64
	CGRect _leftEndCapBounds;	// 104 = 0x68
	CGRect _rightEndCapBounds;	// 120 = 0x78
	CGRect _leftEndCapExtensionBounds;	// 136 = 0x88
	BRImage *_leftEndCap;	// 152 = 0x98
	BRImage *_leftEndCapPiece;	// 156 = 0x9c
	BRImage *_rightEndCap;	// 160 = 0xa0
	CGRect _leftProgressEndCapBounds;	// 164 = 0xa4
	CGRect _rightProgressEndCapBounds;	// 180 = 0xb4
	BRImage *_leftProgressEndCap;	// 196 = 0xc4
	BRImage *_rightProgressEndCap;	// 200 = 0xc8
	BRImage *_leftProgressUnbufferedEndCap;	// 204 = 0xcc
	CGRect _leftGrayBarBounds;	// 208 = 0xd0
	CGRect _rightGrayBarBounds;	// 224 = 0xe0
	BRImage *_grayBarPiece;	// 240 = 0xf0
	CGRect _rightGrayEndCapBounds;	// 244 = 0xf4
	BRImage *_rightGrayEndCap;	// 260 = 0x104
	CGRect _leftWhiteBarBounds;	// 264 = 0x108
	CGRect _rightWhiteBarBounds;	// 280 = 0x118
	BRImage *_whiteBarPiece;	// 296 = 0x128
	CGRect _blueAlreadyPlayedBounds;	// 300 = 0x12c
	BRImage *_blueAlreadyPlayed;	// 316 = 0x13c
	CGRect _chapterMarkerBounds;	// 320 = 0x140
	NSArray *_chapterMarkers;	// 336 = 0x150
	NSArray *_interstitialMarkers;	// 340 = 0x154
	BRImage *_interstitialOnImage;	// 344 = 0x158
	BRImage *_interstitialOffImage;	// 348 = 0x15c
	long _currentInterstitialIndex;	// 352 = 0x160
	float _temporaryMarkerPositionPercentage;	// 356 = 0x164
	BOOL _showChapterMarkers;	// 360 = 0x168
	CGRect _playheadBounds;	// 364 = 0x16c
	BRImage *_playhead;	// 380 = 0x17c
	CGSize _dynamicBounds;	// 384 = 0x180
	CGSize _staticBounds;	// 392 = 0x188
	BRWaitSpinnerControl *_spinner;	// 400 = 0x190
}
@property(assign) BOOL showChapterMarks;	// G=0x2f3db5; S=0x2f3d95; converted property
- (id)initWithSpinner:(BOOL)spinner;	// 0x2f33e1
- (id)_cachedImageForName:(id)name;	// 0x2f4241
- (void)_drawChapterMarkersInContext:(CGContextRef)context;	// 0x2f4c35
- (void)_drawInterstitialMarkersInContext:(CGContextRef)context;	// 0x2f4fa9
- (id)_loadImageForName:(id)name;	// 0x2f42ad
- (void)_updateDynamicFrames;	// 0x2f46f9
- (void)_updateLeftEnd;	// 0x2f4111
- (void)_updateStaticFrames;	// 0x2f4321
- (void)dealloc;	// 0x2f3695
- (void)drawRect:(CGRect)rect;	// 0x2f3df5
- (void)layoutSubcontrols;	// 0x2f3dc5
- (CGRect)leftEndCapRenderableArea;	// 0x2f3a11
- (float)playheadPosition;	// 0x2f3bf1
- (CGRect)rightEndCapFrame;	// 0x2f3971
- (void)setChapterMarkers:(id)markers withTemporaryMarker:(float)temporaryMarker;	// 0x2f3c95
- (void)setCurrentInterstitialIndex:(long)index;	// 0x2f3d75
- (void)setDownloadedRange:(NSRange)range;	// 0x2f3921
- (void)setDrawsBetweenLeftEdgeAndBufferEdge:(BOOL)edge;	// 0x2f37f1
- (void)setInterstitialMarkers:(id)markers;	// 0x2f3d11
- (void)setPercentComplete:(float)complete;	// 0x2f377d
- (void)setPlayerStateHidden:(BOOL)hidden;	// 0x2f3891
// converted property setter: - (void)setShowChapterMarks:(BOOL)marks;	// 0x2f3d95
- (void)setState:(int)state;	// 0x2f3721
- (void)setUseWideLeftEndCap:(BOOL)cap;	// 0x2f3839
- (void)setZeroDuration:(BOOL)duration;	// 0x2f38d9
// converted property getter: - (BOOL)showChapterMarks;	// 0x2f3db5
@end

