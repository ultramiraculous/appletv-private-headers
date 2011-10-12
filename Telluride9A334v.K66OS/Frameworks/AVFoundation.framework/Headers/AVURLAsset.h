/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVFoundation-Structs.h"
#import "AVAsset.h"

@class AVAssetCache, AVURLAssetInternal, NSURL, NSString;
@protocol AVURLAssetFailedURLRequestHandling;

@interface AVURLAsset : AVAsset {
@private
	AVURLAssetInternal *_asset;	// 8 = 0x8
}
@property(readonly, copy, nonatomic) NSURL *URL;	// G=0x354354e5; 
@property(readonly, assign, nonatomic) AVAssetCache *assetCache;	// G=0x35437cc1; 
@property(readonly, assign, nonatomic) NSString *cacheKey;	// G=0x354397f1; 
@property(assign, nonatomic, setter=setFailedURLRequestDelegate:) id<AVURLAssetFailedURLRequestHandling> failedURLRequestDelegate;	// G=0x35435505; S=0x35439865; 
@property(readonly, assign, nonatomic) BOOL shouldMatchDataInCacheByURLPathComponentOnly;	// G=0x35437ced; 
@property(readonly, assign, nonatomic) BOOL shouldMatchDataInCacheByURLWithoutQueryComponent;	// G=0x35437d21; 
+ (id)URLAssetWithURL:(id)url options:(id)options;	// 0x35437289
+ (id)_avfValidationPlist;	// 0x354354b5
+ (void)_ensureAudiovisualTypes;	// 0x35437381
+ (id)audiovisualMIMETypes;	// 0x35437321
+ (id)audiovisualTypes;	// 0x35437351
+ (void)initialize;	// 0x354373ad
+ (BOOL)isPlayableExtendedMIMEType:(id)type;	// 0x354372d5
- (id)init;	// 0x35437cad
- (id)initWithURL:(id)url options:(id)options;	// 0x35437b35
// declared property getter: - (id)URL;	// 0x354354e5
- (CFURLRef)_URL;	// 0x354374a5
- (unsigned)_addChapterMetadataItem:(id)item withDuration:(XXStruct_pwHToB)duration timeRange:(XXStruct_yD8eWC)range toChapters:(id)chapters fromIndex:(unsigned)index;	// 0x354387bd
- (void)_addFigAssetNotifications;	// 0x354379d1
- (id)_assetInspector;	// 0x354376b1
- (id)_assetInspectorLoader;	// 0x354354c5
- (id)_chapterGroupInfo;	// 0x35437dad
- (id)_errorForFigNotificationPayload:(CFDictionaryRef)figNotificationPayload key:(CFStringRef)key;	// 0x35437ad5
- (OpaqueFigFormatReader *)_formatReader;	// 0x35437685
- (void)_removeFigAssetNotifications;	// 0x354378cd
- (void)_setAssetInspectorLoader:(id)loader;	// 0x354376dd
- (void)_tracksDidChange;	// 0x354374b5
// declared property getter: - (id)assetCache;	// 0x35437cc1
- (id)availableChapterLocales;	// 0x35438035
// declared property getter: - (id)cacheKey;	// 0x354397f1
- (void)cancelLoading;	// 0x35437479
- (id)chapterMetadataGroupsWithTitleLocale:(id)titleLocale containingItemsWithCommonKeys:(id)commonKeys;	// 0x35438a61
- (void)dealloc;	// 0x354377fd
- (id)description;	// 0x35437739
- (id)downloadDestinationURL;	// 0x35437d81
// declared property getter: - (id)failedURLRequestDelegate;	// 0x35435505
- (void)finalize;	// 0x354377a5
- (void)finishHandlingFailedURLRequestWithResponseProperties:(id)responseProperties;	// 0x35439941
- (id)lyrics;	// 0x3543744d
- (id)resolvedURL;	// 0x35437d55
// declared property setter: - (void)setFailedURLRequestDelegate:(id)delegate;	// 0x35439865
// declared property getter: - (BOOL)shouldMatchDataInCacheByURLPathComponentOnly;	// 0x35437ced
// declared property getter: - (BOOL)shouldMatchDataInCacheByURLWithoutQueryComponent;	// 0x35437d21
- (id)tracks;	// 0x354374f5
@end

