/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import <NSObject.h> // Unknown library

@class NSDictionary, ML3MusicLibrary;

@interface ML3TrackImporter : NSObject {
	NSDictionary *_nameOrders;	// 4 = 0x4
	ML3MusicLibrary *_library;	// 8 = 0x8
	BOOL _updateSmartPlaylists;	// 12 = 0xc
}
@property(retain, nonatomic) NSDictionary *nameOrders;	// G=0x33f1e641; S=0x33f1e651; @synthesize=_nameOrders
@property(assign, nonatomic) BOOL updateSmartPlaylists;	// G=0x33f1e679; S=0x33f1e689; @synthesize=_updateSmartPlaylists
- (id)initWithMusicLibrary:(id)musicLibrary;	// 0x33f1c5e1
- (void).cxx_destruct;	// 0x33f1e699
- (id)_addAlbumArtistForImportTrackProperties:(id)importTrackProperties;	// 0x33f1d1b5
- (id)_addAlbumForImportTrackProperties:(id)importTrackProperties;	// 0x33f1d525
- (id)_addArtistForImportTrackProperties:(id)importTrackProperties;	// 0x33f1d8c5
- (id)_addComposerForImportTrackProperties:(id)importTrackProperties;	// 0x33f1daf9
- (id)_addGenreForImportTrackProperties:(id)importTrackProperties;	// 0x33f1dcf9
- (id)_addStoreLinkForImportTrackProperties:(id)importTrackProperties;	// 0x33f1de79
- (id)_newTrackPropertiesByProcessingImportTrack:(id)track insertStringsIntoSortMap:(BOOL)map;	// 0x33f1dfad
- (BOOL)_shouldInsertITMediaKindIntoPurchasedPlaylist:(unsigned long)playlist;	// 0x33f1e619
- (void)importTrack:(id)track withCompletionBlock:(id)completionBlock;	// 0x33f1c6f1
// declared property getter: - (id)nameOrders;	// 0x33f1e641
// declared property setter: - (void)setNameOrders:(id)orders;	// 0x33f1e651
// declared property setter: - (void)setUpdateSmartPlaylists:(BOOL)playlists;	// 0x33f1e689
// declared property getter: - (BOOL)updateSmartPlaylists;	// 0x33f1e679
- (BOOL)updateTrack:(id)track withImportTrack:(id)importTrack;	// 0x33f1cc55
@end

