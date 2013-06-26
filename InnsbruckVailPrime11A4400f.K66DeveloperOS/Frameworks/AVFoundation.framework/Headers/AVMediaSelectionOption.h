/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVFoundation-Structs.h"
#import "NSCopying.h"
#import <NSObject.h> // Unknown library

@class NSLocale, NSString, NSArray, AVMediaSelectionOptionInternal;

@interface AVMediaSelectionOption : NSObject <NSCopying> {
	AVMediaSelectionOptionInternal *_mediaSelectionOption;	// 4 = 0x4
}
@property(readonly, assign, nonatomic) NSArray *availableMetadataFormats;	// G=0x2c303c99; 
@property(readonly, assign, nonatomic) NSArray *commonMetadata;	// G=0x2c303bb5; 
@property(readonly, assign, nonatomic) NSString *displayName;	// G=0x2c3043c1; 
@property(readonly, assign, nonatomic) NSString *extendedLanguageTag;	// G=0x2c303ac9; 
@property(readonly, assign, nonatomic) NSLocale *locale;	// G=0x2c303ac5; 
@property(readonly, assign, nonatomic) NSArray *mediaSubTypes;	// G=0x2c303a75; 
@property(readonly, assign, nonatomic) NSString *mediaType;	// G=0x2c303a71; 
@property(readonly, assign, nonatomic, getter=isPlayable) BOOL playable;	// G=0x2c303a7d; 
+ (id)mediaSelectionOptionForAsset:(id)asset group:(id)group dictionary:(id)dictionary hasUnderlyingTrack:(BOOL)track;	// 0x2c3032cd
- (id)init;	// 0x2c303341
- (id)_ancillaryDescription;	// 0x2c3034e1
- (id)_groupID;	// 0x2c303a69
- (id)_groupMediaType;	// 0x2c303a6d
- (BOOL)_isDesignatedDefault;	// 0x2c303a81
- (id)_title;	// 0x2c303bb9
- (id)associatedExtendedLanguageTag;	// 0x2c303b01
- (id)associatedMediaSelectionOptionInMediaSelectionGroup:(id)mediaSelectionGroup;	// 0x2c303ca1
- (id)associatedPersistentIDs;	// 0x2c303b39
// declared property getter: - (id)availableMetadataFormats;	// 0x2c303c99
// declared property getter: - (id)commonMetadata;	// 0x2c303bb5
- (id)copyWithZone:(NSZone *)zone;	// 0x2c30343d
- (void)dealloc;	// 0x2c3033c1
- (id)description;	// 0x2c30344d
- (id)dictionary;	// 0x2c303a29
// declared property getter: - (id)displayName;	// 0x2c3043c1
- (id)displayNameWithLocale:(id)locale;	// 0x2c303e15
- (BOOL)displaysNonForcedSubtitles;	// 0x2c303b71
// declared property getter: - (id)extendedLanguageTag;	// 0x2c303ac9
- (id)group;	// 0x2c303a65
- (BOOL)hasMediaCharacteristic:(id)characteristic;	// 0x2c303a79
// declared property getter: - (BOOL)isPlayable;	// 0x2c303a7d
// declared property getter: - (id)locale;	// 0x2c303ac5
// declared property getter: - (id)mediaSubTypes;	// 0x2c303a75
// declared property getter: - (id)mediaType;	// 0x2c303a71
- (id)metadataForFormat:(id)format;	// 0x2c303c9d
- (id)optionID;	// 0x2c303a2d
- (id)propertyList;	// 0x2c303ca5
@end
