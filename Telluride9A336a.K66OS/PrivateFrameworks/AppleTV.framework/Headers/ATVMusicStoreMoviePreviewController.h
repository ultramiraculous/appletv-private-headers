/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRController.h"

@class BRWaitPromptControl, NSTimer, NSDictionary, ATVURLDocument;

@interface ATVMusicStoreMoviePreviewController : BRController {
@private
	BRWaitPromptControl *_waitPrompt;	// 80 = 0x50
	NSTimer *_timer;	// 84 = 0x54
	NSDictionary *_dictionary;	// 88 = 0x58
	ATVURLDocument *_document;	// 92 = 0x5c
}
+ (id)previewControllerWithDictionary:(id)dictionary;	// 0x339b9be5
- (id)init;	// 0x339b9c31
- (id)initWithStoreDictionary:(id)storeDictionary;	// 0x339b9c35
- (void)_movieDataFetchRequestProcessed:(id)processed;	// 0x339ba1ed
- (void)_showPromptTimer:(id)timer;	// 0x339ba521
- (BOOL)brEventAction:(id)action;	// 0x339ba559
- (void)controlWasActivated;	// 0x339b9fad
- (void)controlWasDeactivated;	// 0x339ba4ad
- (void)dealloc;	// 0x339b9f09
@end

