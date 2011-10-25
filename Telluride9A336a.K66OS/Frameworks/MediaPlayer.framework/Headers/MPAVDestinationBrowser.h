/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <NSObject.h> // Unknown library


@interface MPAVDestinationBrowser : NSObject {
@private
	BOOL _scansForDestinationsWhenEnteringForeground;	// 4 = 0x4
	BOOL _isScanning;	// 5 = 0x5
	int _retainCount;	// 8 = 0x8
}
@property(assign, nonatomic) BOOL scansForDestinationsWhenEnteringForeground;	// G=0x35bb6cd1; S=0x35bb6ce1; 
- (id)init;	// 0x35bb6a91
- (void)_beginScanningForDestinationsNotification:(id)destinationsNotification;	// 0x35bb6d4d
- (void)_endScanningForDestinationsNotification:(id)destinationsNotification;	// 0x35bb6d79
- (BOOL)_isDeallocating;	// 0x35bb6a65
- (BOOL)_tryRetain;	// 0x35bb6a09
- (void)beginScanningForDestinations;	// 0x35bb6c51
- (void)dealloc;	// 0x35bb6b89
- (void)endScanningForDestinations;	// 0x35bb6c91
- (oneway void)release;	// 0x35bb6955
- (id)retain;	// 0x35bb691d
- (unsigned)retainCount;	// 0x35bb69f5
// declared property getter: - (BOOL)scansForDestinationsWhenEnteringForeground;	// 0x35bb6cd1
// declared property setter: - (void)setScansForDestinationsWhenEnteringForeground:(BOOL)destinationsWhenEnteringForeground;	// 0x35bb6ce1
@end

