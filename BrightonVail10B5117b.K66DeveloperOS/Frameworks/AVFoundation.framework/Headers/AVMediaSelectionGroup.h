/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <NSObject.h> // Unknown library
#import "NSCopying.h"
#import "AVFoundation-Structs.h"

@class NSArray, AVMediaSelectionGroupInternal;

@interface AVMediaSelectionGroup : NSObject <NSCopying> {
	AVMediaSelectionGroupInternal *_mediaSelectionGroup;	// 4 = 0x4
}
@property(readonly, assign, nonatomic) BOOL allowsEmptySelection;	// G=0x302d1131; 
@property(readonly, assign, nonatomic) NSArray *options;	// G=0x302d112d; 
+ (id)mediaSelectionGroupWithAsset:(id)asset dictionary:(id)dictionary;	// 0x302d0e7d
+ (id)mediaSelectionOptionsFromArray:(id)array filteredAndSortedAccordingToPreferredLanguages:(id)preferredLanguages;	// 0x302d178d
+ (id)mediaSelectionOptionsFromArray:(id)array withLocale:(id)locale;	// 0x302d16a1
+ (id)mediaSelectionOptionsFromArray:(id)array withMediaCharacteristics:(id)mediaCharacteristics;	// 0x302d1a9d
+ (id)mediaSelectionOptionsFromArray:(id)array withoutMediaCharacteristics:(id)characteristics;	// 0x302d1c19
+ (id)playableMediaSelectionOptionsFromArray:(id)array;	// 0x302d160d
- (id)init;	// 0x302d0eed
- (id)_defaultOption;	// 0x302d1279
- (id)_groupID;	// 0x302d1181
- (BOOL)_isAlternateTrackGroup;	// 0x302d1271
- (BOOL)_isKeyValueGroup;	// 0x302d1275
- (BOOL)_matchesGroupID:(id)anId mediaType:(id)type;	// 0x302d11f1
- (id)_mediaType;	// 0x302d11b9
- (id)_optionWithID:(id)anId displaysNonForcedSubtitles:(BOOL)subtitles;	// 0x302d127d
- (id)_weakReference;	// 0x302d0fa9
// declared property getter: - (BOOL)allowsEmptySelection;	// 0x302d1131
- (id)asset;	// 0x302d1129
- (id)copyWithZone:(NSZone *)zone;	// 0x302d1079
- (void)dealloc;	// 0x302d0fc9
- (id)description;	// 0x302d1089
- (id)dictionary;	// 0x302d117d
- (void)finalize;	// 0x302d1035
- (id)mediaSelectionOptionWithPropertyList:(id)propertyList;	// 0x302d1389
// declared property getter: - (id)options;	// 0x302d112d
@end

