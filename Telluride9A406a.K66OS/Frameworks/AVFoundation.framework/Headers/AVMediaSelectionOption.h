/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <NSObject.h> // Unknown library
#import "NSCopying.h"
#import "AVFoundation-Structs.h"

@class AVMediaSelectionOptionInternal, NSLocale, NSArray, NSString;

@interface AVMediaSelectionOption : NSObject <NSCopying> {
	AVMediaSelectionOptionInternal *_mediaSelectionOption;	// 4 = 0x4
}
@property(readonly, assign, nonatomic) NSArray *availableMetadataFormats;	// G=0x30eea351; 
@property(readonly, assign, nonatomic) NSArray *commonMetadata;	// G=0x30eea34d; 
@property(readonly, assign, nonatomic) NSLocale *locale;	// G=0x30eea349; 
@property(readonly, assign, nonatomic) NSArray *mediaSubTypes;	// G=0x30eea339; 
@property(readonly, assign, nonatomic) NSString *mediaType;	// G=0x30eea335; 
@property(readonly, assign, nonatomic, getter=isPlayable) BOOL playable;	// G=0x30eea341; 
+ (id)mediaSelectionOptionWithAssetTrack:(id)assetTrack group:(id)group;	// 0x30eeb2c5
+ (id)mediaSelectionOptionWithAssetTrack:(id)assetTrack group:(id)group displaysNonForcedSubtitles:(BOOL)subtitles;	// 0x30eeb271
+ (id)mediaSelectionOptionWithDictionary:(id)dictionary group:(id)group;	// 0x30eeb225
- (id)init;	// 0x30eeb601
- (id)_ancillaryDescription;	// 0x30eea329
- (BOOL)_isDesignatedDefault;	// 0x30eea345
- (id)_title;	// 0x30eeb311
- (id)associatedMediaSelectionOptionInMediaSelectionGroup:(id)mediaSelectionGroup;	// 0x30eea359
// declared property getter: - (id)availableMetadataFormats;	// 0x30eea351
// declared property getter: - (id)commonMetadata;	// 0x30eea34d
- (id)copyWithZone:(NSZone *)zone;	// 0x30eeb5a1
- (void)dealloc;	// 0x30eeb5b1
- (id)description;	// 0x30eeb4e5
- (BOOL)hasMediaCharacteristic:(id)characteristic;	// 0x30eea33d
// declared property getter: - (BOOL)isPlayable;	// 0x30eea341
// declared property getter: - (id)locale;	// 0x30eea349
// declared property getter: - (id)mediaSubTypes;	// 0x30eea339
// declared property getter: - (id)mediaType;	// 0x30eea335
- (id)metadataForFormat:(id)format;	// 0x30eea355
- (id)propertyList;	// 0x30eea35d
@end
