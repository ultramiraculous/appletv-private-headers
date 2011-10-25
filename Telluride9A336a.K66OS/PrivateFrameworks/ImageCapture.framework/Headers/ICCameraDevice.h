/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
 */

#import "ImageCapture-Structs.h"
#import "ICDevice.h"

@class NSString, NSArray;

@interface ICCameraDevice : ICDevice {
@private
	void *_cameraProperties;	// 8 = 0x8
}
@property(assign, getter=isAccessRestrictedAppleDevice) BOOL accessRestrictedAppleDevice;	// G=0x301a4759; S=0x301a477d; 
@property(assign) BOOL allowsSyncingClock;	// G=0x301a44c1; S=0x301a44e5; 
@property(readonly, assign) unsigned batteryLevel;	// G=0x301a452d; 
@property(readonly, assign) BOOL batteryLevelAvailable;	// G=0x301a4509; 
@property(assign) BOOL beingEjected;	// G=0x301a4431; S=0x301a4455; 
@property(assign) unsigned contentCatalogPercentCompleted;	// G=0x301a4715; S=0x301a4735; 
@property(readonly, assign) NSArray *contents;	// G=0x301a481d; 
@property(assign, getter=isEjectable) BOOL ejectable;	// G=0x301a43e9; S=0x301a440d; 
@property(assign) unsigned estimatedNumberOfDownloadableItems;	// G=0x301a458d; S=0x301a45ad; 
@property(assign, getter=isLocked) BOOL locked;	// G=0x301a4479; S=0x301a449d; 
@property(readonly, assign) NSArray *mediaFiles;	// G=0x301a66f5; 
@property(assign) unsigned numberOfDownloadableItems;	// G=0x301a4651; S=0x301a4671; 
@property(readonly, assign) double timeOffset;	// G=0x301a454d; 
@property(copy) NSString *volumePath;	// G=0x301a43a5; S=0x301a43c5; 
+ (BOOL)automaticallyNotifiesObserversForKey:(id)key;	// 0x301a4fc5
- (id)init;	// 0x301a6cdd
- (void)addFolder:(id)folder;	// 0x301a49d9
- (void)addToMetadataFetchQ:(id)metadataFetchQ;	// 0x301a504d
- (void)addToThumbnailFetchQ:(id)thumbnailFetchQ;	// 0x301a50b9
// declared property getter: - (BOOL)allowsSyncingClock;	// 0x301a44c1
// declared property getter: - (unsigned)batteryLevel;	// 0x301a452d
// declared property getter: - (BOOL)batteryLevelAvailable;	// 0x301a4509
// declared property getter: - (BOOL)beingEjected;	// 0x301a4431
- (void)cancelDownload;	// 0x301a5125
// declared property getter: - (unsigned)contentCatalogPercentCompleted;	// 0x301a4715
// declared property getter: - (id)contents;	// 0x301a481d
- (void)dealloc;	// 0x301a6b79
- (void)decrementEstimatedNumberOfDownloadableItems;	// 0x301a45d1
- (void)decrementNumberOfDownloadableItems;	// 0x301a4695
- (id)description;	// 0x301a4e21
- (dispatch_semaphore_s *)deviceQSemaphore;	// 0x301a47c1
- (double)downloadCancelTimestamp;	// 0x301a456d
// declared property getter: - (unsigned)estimatedNumberOfDownloadableItems;	// 0x301a458d
- (id)filesOfType:(id)type;	// 0x301a65cd
- (void)finalize;	// 0x301a6a15
- (dispatch_queue_s *)generalQ;	// 0x301a47a1
- (void)handleCommandCompletionNotification:(id)notification;	// 0x301a6091
- (void)handleImageCaptureEventNotification:(id)notification;	// 0x301a5715
- (void)incrementEstimatedNumberOfDownloadableItems;	// 0x301a4611
- (void)incrementNumberOfDownloadableItems;	// 0x301a46d5
// declared property getter: - (BOOL)isAccessRestrictedAppleDevice;	// 0x301a4759
// declared property getter: - (BOOL)isEjectable;	// 0x301a43e9
// declared property getter: - (BOOL)isLocked;	// 0x301a4479
// declared property getter: - (id)mediaFiles;	// 0x301a66f5
- (void)notifyDelegateOfAddedItem:(id)addedItem;	// 0x301a68d1
// declared property getter: - (unsigned)numberOfDownloadableItems;	// 0x301a4651
- (void)pendNotifyingDelegateOfAddedItem:(id)addedItem;	// 0x301a47e1
- (void)receivedDeviceCommandCompletion;	// 0x301a5021
- (void)removeFolder:(id)folder;	// 0x301a4a7d
- (void)requestCloseSession;	// 0x301a483d
- (void)requestDeleteFiles:(id)files;	// 0x301a53d1
- (void)requestDownloadFile:(id)file options:(id)options downloadDelegate:(id)delegate didDownloadSelector:(SEL)selector contextInfo:(void *)info;	// 0x301a516d
- (void)requestEject;	// 0x301a5319
- (void)requestOpenSession;	// 0x301a5515
- (void)requestSyncClock;	// 0x301a4979
// declared property setter: - (void)setAccessRestrictedAppleDevice:(BOOL)device;	// 0x301a477d
// declared property setter: - (void)setAllowsSyncingClock:(BOOL)clock;	// 0x301a44e5
// declared property setter: - (void)setBeingEjected:(BOOL)ejected;	// 0x301a4455
// declared property setter: - (void)setContentCatalogPercentCompleted:(unsigned)completed;	// 0x301a4735
// declared property setter: - (void)setEjectable:(BOOL)ejectable;	// 0x301a440d
// declared property setter: - (void)setEstimatedNumberOfDownloadableItems:(unsigned)downloadableItems;	// 0x301a45ad
// declared property setter: - (void)setLocked:(BOOL)locked;	// 0x301a449d
// declared property setter: - (void)setNumberOfDownloadableItems:(unsigned)downloadableItems;	// 0x301a4671
// declared property setter: - (void)setVolumePath:(id)path;	// 0x301a43c5
// declared property getter: - (double)timeOffset;	// 0x301a454d
// declared property getter: - (id)volumePath;	// 0x301a43a5
@end

