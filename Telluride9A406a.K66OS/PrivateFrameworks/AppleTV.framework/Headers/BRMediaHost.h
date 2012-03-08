/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library

@class BRMediaHostEvent, NSMutableArray, BRMediaHostState, NSTimer, NSDictionary, NSSet;
@protocol BRUnresolvedMediaProviderHandler;

@interface BRMediaHost : NSObject {
@private
	NSDictionary *_hostInfo;	// 4 = 0x4
	NSMutableArray *_providers;	// 8 = 0x8
	int _hostType;	// 12 = 0xc
	NSMutableArray *_eventQueue;	// 16 = 0x10
	NSSet *_eventFilter;	// 20 = 0x14
	BRMediaHostEvent *_filterEvent;	// 24 = 0x18
	BRMediaHostState *_state;	// 28 = 0x1c
	NSTimer *_eventTimer;	// 32 = 0x20
	BOOL _supportsPhotos;	// 36 = 0x24
	BOOL _supportsPhotoThumbnails;	// 37 = 0x25
	id<BRUnresolvedMediaProviderHandler> _unresolvedProviderHandler;	// 40 = 0x28
}
@property(readonly, retain) NSDictionary *hostInfo;	// G=0x33114599; converted property
@property(readonly, assign) int hostType;	// G=0x33115421; converted property
@property(retain) id hostname;	// G=0x33114771; S=0x3311415d; converted property
@property(retain) BRMediaHostState *state;	// G=0x33115411; S=0x33115211; converted property
@property(assign) BOOL supportsPhotoThumbnails;	// G=0x331154a5; S=0x33115495; converted property
@property(assign) BOOL supportsPhotos;	// G=0x33115451; S=0x33115485; converted property
+ (void)_addHostToMounts:(id)mounts;	// 0x33115e35
+ (void)_hostsChanged;	// 0x33115e5d
+ (id)_mediaProviderAdvertisingMediaTypes:(id)types forceLocalResolution:(BOOL)resolution;	// 0x33115b85
+ (id)_mediaProvidersAdvertisingMediaTypes:(id)types forceLocalResolution:(BOOL)resolution;	// 0x33115cb1
+ (void)_removeHostFromMounts:(id)mounts;	// 0x33115e0d
+ (void)_updateTo3_0:(id)a3_0;	// 0x33116229
+ (void)addMediaHost:(id)host;	// 0x331138ed
+ (id)allRentalAssets;	// 0x33113d61
+ (id)currentHost;	// 0x33113251
+ (id)daapHosts;	// 0x331137fd
+ (id)daapMediaHostWithHostInfo:(id)hostInfo;	// 0x33113151
+ (void)initialize;	// 0x33112bd9
+ (BOOL)isPairedForSyncing:(BOOL *)syncing;	// 0x33113c09
+ (id)localHost;	// 0x33113305
+ (id)localMediaProviderAdvertisingMediaTypes:(id)types;	// 0x33113d4d
+ (id)mediaHost;	// 0x33112f01
+ (id)mediaHostForMediaProvider:(id)mediaProvider;	// 0x331135a1
+ (id)mediaHostMatchingHostInfo:(id)info;	// 0x331133e1
+ (id)mediaHosts;	// 0x33113629
+ (id)mediaProviderAdvertisingMediaTypes:(id)types;	// 0x33113d25
+ (id)mediaProvidersAdvertisingMediaTypes:(id)types;	// 0x33113d39
+ (id)mountedMediaHosts;	// 0x33113c61
+ (id)pairedHost;	// 0x331136ed
+ (void)removeMediaHost:(id)host;	// 0x33113a21
+ (void)removeMediaHost:(id)host supressingRemoveNotification:(BOOL)notification;	// 0x33113a41
+ (void)setCurrentHost:(id)host;	// 0x33113369
+ (id)streamingHosts;	// 0x3311370d
+ (id)streamingMediaHostWithHostInfo:(id)hostInfo;	// 0x3311304d
+ (id)syncingHost;	// 0x331136fd
+ (id)syncingMediaHostWithHostInfo:(id)hostInfo;	// 0x33112f49
+ (void)unmountAllHosts;	// 0x33112dd1
+ (void)unmountInactiveStreamingHosts;	// 0x33112e59
- (id)init;	// 0x33113f81
- (int)_codingVersion;	// 0x33115ec1
- (void)_mediaProviderLoadFailed:(id)failed;	// 0x33116131
- (void)_mediaProviderLoaded:(id)loaded;	// 0x331160f5
- (void)_mediaProviderUnloaded:(id)unloaded;	// 0x331161ed
- (void)_mediaProviderUnloading:(id)unloading;	// 0x3311616d
- (void)_mount;	// 0x331147a5
- (void)_processEvent:(id)event;	// 0x33116045
- (void)_processNextEvent;	// 0x33115ec5
- (void)_unmount;	// 0x331148b1
- (void)abandonEvent:(id)event;	// 0x331144d5
- (void)addMediaProvider:(id)provider;	// 0x33114a41
- (void)addMediaProvider:(id)provider checkForDuplicates:(BOOL)duplicates;	// 0x33114a55
- (BOOL)containsPasswordedProvider;	// 0x331154d9
- (void)dealloc;	// 0x33114041
- (id)hostID;	// 0x3311410d
// converted property getter: - (id)hostInfo;	// 0x33114599
// converted property getter: - (int)hostType;	// 0x33115421
// converted property getter: - (id)hostname;	// 0x33114771
- (BOOL)isLocal;	// 0x33115431
- (id)lastAccessedDate;	// 0x33115539
- (id)mediaProviderAdvertisingMediaTypes:(id)types;	// 0x3311504d
- (id)mediaProviderWithID:(id)anId andMachineID:(id)anId2;	// 0x33114e49
- (id)mediaProviders;	// 0x33114979
- (id)mediaProvidersAdvertisingMediaTypes:(id)types;	// 0x33114f39
- (void)postEvent:(id)event;	// 0x331142f9
- (id)registeredMediaProviderForMediaTypes:(id)mediaTypes;	// 0x33115101
- (void)removeAllMediaProviders;	// 0x33115181
- (void)removeMediaProvider:(id)provider;	// 0x33114cc5
- (void)removeMediaProviderWithID:(id)anId andMachineID:(id)anId2;	// 0x33114e15
// converted property setter: - (void)setHostname:(id)hostname;	// 0x3311415d
// converted property setter: - (void)setState:(id)state;	// 0x33115211
// converted property setter: - (void)setSupportsPhotoThumbnails:(BOOL)thumbnails;	// 0x33115495
// converted property setter: - (void)setSupportsPhotos:(BOOL)photos;	// 0x33115485
- (void)setUnresolvedMediaProviderHandler:(id)handler;	// 0x33114119
// converted property getter: - (id)state;	// 0x33115411
// converted property getter: - (BOOL)supportsPhotoThumbnails;	// 0x331154a5
// converted property getter: - (BOOL)supportsPhotos;	// 0x33115451
- (void)waitForEvent:(id)event toProcessEvent:(id)processEvent;	// 0x33114265
@end
