/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h> // Unknown library

@class NSMutableArray, NSArray, NSString;
@protocol GEOResourceLoaderDelegate;

__attribute__((visibility("hidden")))
@interface GEOResourceLoader : NSObject {
	unsigned _tileGroupIdentifier;	// 4 = 0x4
	NSString *_uniqueTileGroupIdentifier;	// 8 = 0x8
	NSString *_directory;	// 12 = 0xc
	NSMutableArray *_resourcesToLoad;	// 16 = 0x10
	id _completionHandler;	// 20 = 0x14
	id _progressHandler;	// 24 = 0x18
	int _numberOfDownloadsInProgress;	// 28 = 0x1c
	NSMutableArray *_loadedResources;	// 32 = 0x20
	BOOL _canceled;	// 36 = 0x24
	NSString *_baseURLString;	// 40 = 0x28
	unsigned _maxConcurrentLoads;	// 44 = 0x2c
	id<GEOResourceLoaderDelegate> _delegate;	// 48 = 0x30
}
@property(assign, nonatomic) id<GEOResourceLoaderDelegate> delegate;	// G=0x339738b1; S=0x339738c1; @synthesize=_delegate
@property(readonly, assign, nonatomic) NSArray *loadedResources;	// G=0x339738d1; @synthesize=_loadedResources
@property(readonly, assign, nonatomic) unsigned tileGroupIdentifier;	// G=0x33973891; @synthesize=_tileGroupIdentifier
@property(readonly, assign, nonatomic) NSString *uniqueTileGroupIdentifier;	// G=0x339738a1; @synthesize=_uniqueTileGroupIdentifier
- (id)initWithTileGroupIdentifier:(unsigned)tileGroupIdentifier uniqueIdentifier:(id)identifier targetDirectory:(id)directory baseURLString:(id)string isFirstLoad:(BOOL)load;	// 0x33972b61
- (void)_addNecessaryResourcesForType:(int)type;	// 0x33972d3d
- (void)_cleanup;	// 0x33972ced
- (void)_loadNextResource;	// 0x339730c5
- (BOOL)_writeResourceToDisk:(id)disk;	// 0x33973709
- (void)cancel;	// 0x33973871
- (void)dealloc;	// 0x33972c25
// declared property getter: - (id)delegate;	// 0x339738b1
// declared property getter: - (id)loadedResources;	// 0x339738d1
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x339738c1
- (void)startWithProgressHandler:(id)progressHandler completionHandler:(id)handler;	// 0x33972fd9
// declared property getter: - (unsigned)tileGroupIdentifier;	// 0x33973891
// declared property getter: - (id)uniqueTileGroupIdentifier;	// 0x339738a1
@end
