/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library
#import "AppleTV-Structs.h"

@class BRListControl;

@interface BRListControlMonitor : NSObject {
@private
	BRListControl *_listControl;	// 4 = 0x4
	NSRange _loadingRange;	// 8 = 0x8
	long _dataCount;	// 16 = 0x10
}
- (void)_cancelLoads;	// 0x332d655d
- (void)_listSelectionFinalized:(id)finalized;	// 0x332d6635
- (void)_loadImagesForOnScreenRows;	// 0x332d6645
- (void)cancelCurrentLoads;	// 0x332d654d
- (void)dealloc;	// 0x332d6425
- (void)setListControl:(id)control;	// 0x332d6481
@end

