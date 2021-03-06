/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <NSObject.h> // Unknown library

@class NSSet;

@interface MPAVDestinationBrowser : NSObject {
@private
	BOOL _scansForDestinationsWhenEnteringForeground;	// 4 = 0x4
	BOOL _isScanning;	// 5 = 0x5
}
@property(readonly, assign, nonatomic) NSSet *availableDestinations;	// G=0x3363e399; 
@property(assign, nonatomic) BOOL scansForDestinationsWhenEnteringForeground;	// G=0x3363e39d; S=0x3363e609; 
- (id)init;	// 0x3363e5c9
// declared property getter: - (id)availableDestinations;	// 0x3363e399
- (void)beginScanningForDestinations;	// 0x3363e4d9
- (void)dealloc;	// 0x3363e511
- (void)endScanningForDestinations;	// 0x3363e4a1
// declared property getter: - (BOOL)scansForDestinationsWhenEnteringForeground;	// 0x3363e39d
// declared property setter: - (void)setScansForDestinationsWhenEnteringForeground:(BOOL)destinationsWhenEnteringForeground;	// 0x3363e609
@end

