/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRController.h"

@class BRScrollControl, BRPanelControl, BRCursorControl, BRAlertControl, BRWaitPromptControl, BRMovieTrailersProvider, NSArray;

__attribute__((visibility("hidden")))
@interface ATVMovieTrailersController : BRController {
	NSArray *_trailers;	// 100 = 0x64
	BRPanelControl *_panel;	// 104 = 0x68
	BRMovieTrailersProvider *_trailersProvider;	// 108 = 0x6c
	BRWaitPromptControl *_loadingControl;	// 112 = 0x70
	BRScrollControl *_scroller;	// 116 = 0x74
	BRCursorControl *_cursor;	// 120 = 0x78
	BRAlertControl *_errorControl;	// 124 = 0x7c
}
- (id)init;	// 0xb7e35
- (void)_addErrorControlWithError:(id)error;	// 0xb8a45
- (void)_addLoadingControl;	// 0xb84cd
- (void)_addTrailersMediaControl;	// 0xb85e9
- (id)_movieTrailers:(id *)trailers;	// 0xb83f9
- (void)_movieTrailersLoadFailed:(id)failed;	// 0xb8de1
- (void)_movieTrailersLoaded:(id)loaded;	// 0xb8ba9
- (void)_movieTrailersLoading:(id)loading;	// 0xb8d71
- (id)_movieTrailersTitle;	// 0xb83d9
- (void)_objectSelected:(id)selected;	// 0xb8e95
- (void)_passErrorControlWithError:(id)error;	// 0xb8ac5
- (void)_passLoadingControl:(id)control;	// 0xb85d9
- (void)_passRemoveControls:(id)controls;	// 0xb84b9
- (void)_passTrailersMediaControl:(id)control;	// 0xb8a35
- (id)_providers;	// 0xb8ad5
- (void)_removeControls;	// 0xb8409
- (id)accessibilityLabel;	// 0xb83e9
- (BOOL)brEventAction:(id)action;	// 0xb8261
- (void)controlWasActivated;	// 0xb808d
- (void)dealloc;	// 0xb7f79
- (BOOL)isNetworkDependent;	// 0xb80f5
- (void)layoutSubcontrols;	// 0xb80f9
@end

