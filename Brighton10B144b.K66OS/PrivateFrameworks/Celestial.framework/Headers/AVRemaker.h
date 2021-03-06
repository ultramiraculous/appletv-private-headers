/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import "Celestial-Structs.h"
#import <NSObject.h> // Unknown library


@interface AVRemaker : NSObject {
	AVRemakerPrivate *_priv;	// 4 = 0x4
}
@property(readonly, assign) long long approximateByteSize;	// G=0x335ed3e1; 
@property(readonly, assign) double maxDurationWithinLimits;	// G=0x335ed2b1; 
@property(readonly, assign) double progress;	// G=0x335ed621; 
@property(readonly, assign) double sourceDuration;	// G=0x335ed211; 
+ (long long)approximateByteSizeForMode:(id)mode duration:(double)duration options:(id)options;	// 0x335ece31
+ (id)figRemakerNotificationNames;	// 0x335ea501
+ (double)maximumDurationWithinLimitsForMode:(id)mode options:(id)options;	// 0x335ec92d
+ (id)settingForMode:(id)mode;	// 0x335eb49d
- (id)initWithSource:(id)source dest:(id)dest mode:(id)mode options:(id)options;	// 0x335ecfd1
- (void)addListeners;	// 0x335ea82d
// declared property getter: - (long long)approximateByteSize;	// 0x335ed3e1
- (id)audioPropertiesForTrackReader:(OpaqueFigTrackReader *)trackReader;	// 0x335eaa11
- (CGSize)calculateDimensionsOfSource;	// 0x335eb0c1
- (BOOL)canPassThroughAudio:(id)audio;	// 0x335eb5f1
- (BOOL)canPassThroughVideo:(id)video;	// 0x335eb839
- (void)cancel;	// 0x335ed5c5
- (OpaqueFigRemaker *)createFigRemaker;	// 0x335ebe6d
- (void)dealloc;	// 0x335ed105
- (void)discoverSourceProperties;	// 0x335eaf3d
- (id)fileFormatForURL:(id)url;	// 0x335eb199
// declared property getter: - (double)maxDurationWithinLimits;	// 0x335ed2b1
- (BOOL)multipleNonEmptyEditsInTrackReader:(OpaqueFigTrackReader *)trackReader;	// 0x335ea925
// declared property getter: - (double)progress;	// 0x335ed621
- (void)removeListeners;	// 0x335ea579
- (id)retrieveAudioSettingForNumChannels:(id)numChannels;	// 0x335ebdc1
- (void)setRangeStartTime:(double)time endTime:(double)time2;	// 0x335ed461
- (id)settingForFigRemaker;	// 0x335eb4d9
// declared property getter: - (double)sourceDuration;	// 0x335ed211
- (BOOL)sourceHasPortraitOrientationVideo;	// 0x335eb14d
- (id)start;	// 0x335ed545
- (id)videoPropertiesForTrackReader:(OpaqueFigTrackReader *)trackReader;	// 0x335eac35
@end

