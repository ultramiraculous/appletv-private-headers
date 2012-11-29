/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
 */

#import <NSObject.h> // Unknown library
#import "ImageCapture-Structs.h"

@class NSString, NSMutableArray;

@interface ICCameraProperties : NSObject {
	NSString *_volumePath;	// 4 = 0x4
	BOOL _ejectable;	// 8 = 0x8
	BOOL _beingEjected;	// 9 = 0x9
	BOOL _locked;	// 10 = 0xa
	BOOL _allowsSyncingClock;	// 11 = 0xb
	unsigned _contentCatalogPercentCompleted;	// 12 = 0xc
	BOOL _batteryLevelAvailable;	// 16 = 0x10
	unsigned _batteryLevel;	// 20 = 0x14
	NSMutableArray *_contents;	// 24 = 0x18
	NSMutableArray *_mediaFiles;	// 28 = 0x1c
	NSMutableArray *_toBeNotifiedAddedItems;	// 32 = 0x20
	int _contentsLock;	// 36 = 0x24
	int _mediaFilesLock;	// 40 = 0x28
	double _timeOffset;	// 44 = 0x2c
	unsigned _estimatedNumberOfDownloadableItems;	// 52 = 0x34
	unsigned _numberOfDownloadableItems;	// 56 = 0x38
	BOOL _contentReceived;	// 60 = 0x3c
	double _downloadCancelTimestamp;	// 64 = 0x40
	dispatch_queue_s *_thumbnailFetchQ;	// 72 = 0x48
	dispatch_queue_s *_metadataFetchQ;	// 76 = 0x4c
	dispatch_queue_s *_downloadQ;	// 80 = 0x50
	dispatch_queue_s *_generalQ;	// 84 = 0x54
	dispatch_semaphore_s *_deviceQSemaphore;	// 88 = 0x58
	BOOL _accessRestrictedAppleDevice;	// 92 = 0x5c
}
@property(assign) BOOL accessRestrictedAppleDevice;	// G=0x33e3bd6d; S=0x33e3bd85; @synthesize=_accessRestrictedAppleDevice
@property(assign) BOOL allowsSyncingClock;	// G=0x33e3b981; S=0x33e3b999; @synthesize=_allowsSyncingClock
@property(assign) unsigned batteryLevel;	// G=0x33e3ba0d; S=0x33e3ba21; @synthesize=_batteryLevel
@property(assign) BOOL batteryLevelAvailable;	// G=0x33e3b9dd; S=0x33e3b9f5; @synthesize=_batteryLevelAvailable
@property(assign) BOOL beingEjected;	// G=0x33e3b921; S=0x33e3b939; @synthesize=_beingEjected
@property(assign) unsigned contentCatalogPercentCompleted;	// G=0x33e3b9b1; S=0x33e3b9c5; @synthesize=_contentCatalogPercentCompleted
@property(assign) BOOL contentReceived;	// G=0x33e3bbf9; S=0x33e3bc11; @synthesize=_contentReceived
@property(retain) NSMutableArray *contents;	// G=0x33e3ba39; S=0x33e3ba4d; @synthesize=_contents
@property(assign) int contentsLock;	// G=0x33e3bb0d; S=0x33e3bb21; @synthesize=_contentsLock
@property(assign) dispatch_semaphore_s *deviceQSemaphore;	// G=0x33e3bd41; S=0x33e3bd55; @synthesize=_deviceQSemaphore
@property(assign) double downloadCancelTimestamp;	// G=0x33e3bc29; S=0x33e3bc5d; @synthesize=_downloadCancelTimestamp
@property(assign) dispatch_queue_s *downloadQ;	// G=0x33e3bce9; S=0x33e3bcfd; @synthesize=_downloadQ
@property(assign) BOOL ejectable;	// G=0x33e3b8f1; S=0x33e3b909; @synthesize=_ejectable
@property(assign) unsigned estimatedNumberOfDownloadableItems;	// G=0x33e3bba1; S=0x33e3bbb5; @synthesize=_estimatedNumberOfDownloadableItems
@property(assign) dispatch_queue_s *generalQ;	// G=0x33e3bd15; S=0x33e3bd29; @synthesize=_generalQ
@property(assign) BOOL locked;	// G=0x33e3b951; S=0x33e3b969; @synthesize=_locked
@property(retain) NSMutableArray *mediaFiles;	// G=0x33e3ba71; S=0x33e3ba85; @synthesize=_mediaFiles
@property(assign) int mediaFilesLock;	// G=0x33e3bae1; S=0x33e3baf5; @synthesize=_mediaFilesLock
@property(assign) dispatch_queue_s *metadataFetchQ;	// G=0x33e3bcbd; S=0x33e3bcd1; @synthesize=_metadataFetchQ
@property(assign) unsigned numberOfDownloadableItems;	// G=0x33e3bbcd; S=0x33e3bbe1; @synthesize=_numberOfDownloadableItems
@property(assign) dispatch_queue_s *thumbnailFetchQ;	// G=0x33e3bc91; S=0x33e3bca5; @synthesize=_thumbnailFetchQ
@property(assign) double timeOffset;	// G=0x33e3bb39; S=0x33e3bb6d; @synthesize=_timeOffset
@property(retain) NSMutableArray *toBeNotifiedAddedItems;	// G=0x33e3baa9; S=0x33e3babd; @synthesize=_toBeNotifiedAddedItems
@property(retain) NSString *volumePath;	// G=0x33e3b8b9; S=0x33e3b8cd; @synthesize=_volumePath
// declared property getter: - (BOOL)accessRestrictedAppleDevice;	// 0x33e3bd6d
// declared property getter: - (BOOL)allowsSyncingClock;	// 0x33e3b981
// declared property getter: - (unsigned)batteryLevel;	// 0x33e3ba0d
// declared property getter: - (BOOL)batteryLevelAvailable;	// 0x33e3b9dd
// declared property getter: - (BOOL)beingEjected;	// 0x33e3b921
// declared property getter: - (unsigned)contentCatalogPercentCompleted;	// 0x33e3b9b1
// declared property getter: - (BOOL)contentReceived;	// 0x33e3bbf9
// declared property getter: - (id)contents;	// 0x33e3ba39
// declared property getter: - (int)contentsLock;	// 0x33e3bb0d
- (void)dealloc;	// 0x33e3b7b9
// declared property getter: - (dispatch_semaphore_s *)deviceQSemaphore;	// 0x33e3bd41
// declared property getter: - (double)downloadCancelTimestamp;	// 0x33e3bc29
// declared property getter: - (dispatch_queue_s *)downloadQ;	// 0x33e3bce9
// declared property getter: - (BOOL)ejectable;	// 0x33e3b8f1
// declared property getter: - (unsigned)estimatedNumberOfDownloadableItems;	// 0x33e3bba1
- (void)finalize;	// 0x33e3b839
// declared property getter: - (dispatch_queue_s *)generalQ;	// 0x33e3bd15
- (void)lockContents;	// 0x33e3b791
- (void)lockMediaFiles;	// 0x33e3b769
// declared property getter: - (BOOL)locked;	// 0x33e3b951
// declared property getter: - (id)mediaFiles;	// 0x33e3ba71
// declared property getter: - (int)mediaFilesLock;	// 0x33e3bae1
// declared property getter: - (dispatch_queue_s *)metadataFetchQ;	// 0x33e3bcbd
// declared property getter: - (unsigned)numberOfDownloadableItems;	// 0x33e3bbcd
// declared property setter: - (void)setAccessRestrictedAppleDevice:(BOOL)device;	// 0x33e3bd85
// declared property setter: - (void)setAllowsSyncingClock:(BOOL)clock;	// 0x33e3b999
// declared property setter: - (void)setBatteryLevel:(unsigned)level;	// 0x33e3ba21
// declared property setter: - (void)setBatteryLevelAvailable:(BOOL)available;	// 0x33e3b9f5
// declared property setter: - (void)setBeingEjected:(BOOL)ejected;	// 0x33e3b939
// declared property setter: - (void)setContentCatalogPercentCompleted:(unsigned)completed;	// 0x33e3b9c5
// declared property setter: - (void)setContentReceived:(BOOL)received;	// 0x33e3bc11
// declared property setter: - (void)setContents:(id)contents;	// 0x33e3ba4d
// declared property setter: - (void)setContentsLock:(int)lock;	// 0x33e3bb21
// declared property setter: - (void)setDeviceQSemaphore:(dispatch_semaphore_s *)semaphore;	// 0x33e3bd55
// declared property setter: - (void)setDownloadCancelTimestamp:(double)timestamp;	// 0x33e3bc5d
// declared property setter: - (void)setDownloadQ:(dispatch_queue_s *)q;	// 0x33e3bcfd
// declared property setter: - (void)setEjectable:(BOOL)ejectable;	// 0x33e3b909
// declared property setter: - (void)setEstimatedNumberOfDownloadableItems:(unsigned)downloadableItems;	// 0x33e3bbb5
// declared property setter: - (void)setGeneralQ:(dispatch_queue_s *)q;	// 0x33e3bd29
// declared property setter: - (void)setLocked:(BOOL)locked;	// 0x33e3b969
// declared property setter: - (void)setMediaFiles:(id)files;	// 0x33e3ba85
// declared property setter: - (void)setMediaFilesLock:(int)lock;	// 0x33e3baf5
// declared property setter: - (void)setMetadataFetchQ:(dispatch_queue_s *)q;	// 0x33e3bcd1
// declared property setter: - (void)setNumberOfDownloadableItems:(unsigned)downloadableItems;	// 0x33e3bbe1
// declared property setter: - (void)setThumbnailFetchQ:(dispatch_queue_s *)q;	// 0x33e3bca5
// declared property setter: - (void)setTimeOffset:(double)offset;	// 0x33e3bb6d
// declared property setter: - (void)setToBeNotifiedAddedItems:(id)beNotifiedAddedItems;	// 0x33e3babd
// declared property setter: - (void)setVolumePath:(id)path;	// 0x33e3b8cd
// declared property getter: - (dispatch_queue_s *)thumbnailFetchQ;	// 0x33e3bc91
// declared property getter: - (double)timeOffset;	// 0x33e3bb39
// declared property getter: - (id)toBeNotifiedAddedItems;	// 0x33e3baa9
- (void)unlockContents;	// 0x33e3b7a5
- (void)unlockMediaFiles;	// 0x33e3b77d
// declared property getter: - (id)volumePath;	// 0x33e3b8b9
@end
