/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import "MusicLibrary-Structs.h"
#import <NSObject.h> // Unknown library

@class NSString;

@interface MusicLibrary : NSObject {
@private
	NSString *_basePath;	// 4 = 0x4
	double _autoflushTargetTime;	// 8 = 0x8
	unsigned _autoflushScheduled : 1;	// 16 = 0x10
	unsigned _needsFlush : 1;	// 16 = 0x10
}
+ (BOOL)_isDBSyncActiveIncludePending;	// 0x317e55e1
+ (void)_setSharedMusicLibrary:(id)library;	// 0x317ea351
+ (id)_sharedMusicLibrary:(BOOL)library;	// 0x317e53e5
+ (void)beginDatabaseMigrationIfNecessary;	// 0x317dc441
+ (void)commitAllDeferredWork;	// 0x317f4a6d
+ (id)controlDirectoryPathWithBasePath:(id)basePath;	// 0x317dc179
+ (id)copyLocalizedStringForITTGLocString:(int)ittglocString;	// 0x317f54e1
+ (BOOL)databaseDataFilesExist;	// 0x317dc2ad
+ (id)dbModDate;	// 0x317f52b1
+ (void)disableFlush;	// 0x317f5355
+ (void)enableFlush;	// 0x317f5319
+ (int)filenameFormatResourceForPlaylistType:(int)playlistType;	// 0x317ecb51
+ (BOOL)flush;	// 0x317eb045
+ (void)flushPreparedStatementCache;	// 0x317f4bb5
+ (id)iTunesLibraryPackageDBTempFolder;	// 0x317f4db1
+ (BOOL)isDBSyncActive;	// 0x317dc865
+ (BOOL)isDatabaseSchemaUnsupported:(id *)unsupported;	// 0x317dc4c5
+ (BOOL)isFlushEnabled;	// 0x317f48fd
+ (BOOL)isTesting;	// 0x317f48e5
+ (void)jetsamMemory;	// 0x317f4b89
+ (id)mediaFolderRelativePath:(id)path;	// 0x317f5665
+ (void)noteSyncAlreadyActive;	// 0x317f4c85
+ (void)noteSyncDidEnd;	// 0x317f4be1
+ (void)noteSyncWillBegin;	// 0x317f4d11
+ (id)pathForResourceFileOrFolder:(int)resourceFileOrFolder;	// 0x317dbbd9
+ (id)pathForResourceFileOrFolder:(int)resourceFileOrFolder basePath:(id)path createParentFolderIfNecessary:(BOOL)necessary;	// 0x317ebaa5
+ (id)pathForResourceFileOrFolder:(int)resourceFileOrFolder basePath:(id)path relativeToBase:(BOOL)base;	// 0x317dbbf9
+ (id)pathForResourceFileOrFolder:(int)resourceFileOrFolder basePath:(id)path relativeToBase:(BOOL)base isFolder:(BOOL *)folder;	// 0x317dbc25
+ (BOOL)requiresPostProcessing;	// 0x317df645
+ (void)resetLibrary;	// 0x317f537d
+ (void)setIsTesting:(BOOL)testing;	// 0x317f48cd
+ (void)setSyncIsActive:(BOOL)active alreadyInTargetState:(BOOL)targetState withStateChangeHandlerBlock:(id)stateChangeHandlerBlock;	// 0x317f543d
+ (id)sharedMusicLibrary;	// 0x317e53cd
+ (Class)sharedMusicLibraryClass;	// 0x317dc2d1
+ (id)sharedMusicLibraryIfExists;	// 0x317e9b45
+ (unsigned long long)syncGenerationID;	// 0x317eae7d
- (id)initWithBasePath:(id)basePath;	// 0x317e5775
- (void)_autoflush;	// 0x317f4b19
- (void)_cancelAutoflush;	// 0x317f4b41
- (id)_debugGetTracksStartingAtTrackWithPersistentID:(unsigned long long)persistentID maxTracks:(unsigned)tracks stride:(int)stride;	// 0x317f4fb1
- (void)dealloc;	// 0x317f4e35
- (BOOL)flush;	// 0x317eb07d
- (void)flushPreparedStatementCacheImpl;	// 0x317f48f5
- (MLArtworkFormatSpec)formatSpecForArtworkFormatID:(unsigned)artworkFormatID;	// 0x317f528d
- (void)jetsamMemoryImpl;	// 0x317f48f9
- (id)localizedSectionHeaderForSectionHeader:(id)sectionHeader;	// 0x317ea3c1
- (id)localizedSectionIndexForSectionHeader:(id)sectionHeader;	// 0x317ea7f1
- (void)mainThread_scheduleFlushDatabase;	// 0x317f4e91
- (id)pathForResourceFileOrFolder:(int)resourceFileOrFolder;	// 0x317f491d
- (id)pathForResourceFileOrFolder:(int)resourceFileOrFolder createParentFolderIfNecessary:(BOOL)necessary;	// 0x317eba65
- (void)scheduleFlushDatabase;	// 0x317ed2e5
- (id)sectionIndexEllipsis;	// 0x317f4911
- (id)sectionIndexForSectionHeader:(id)sectionHeader;	// 0x317ea4e9
- (id)sectionIndices;	// 0x317ea499
@end

