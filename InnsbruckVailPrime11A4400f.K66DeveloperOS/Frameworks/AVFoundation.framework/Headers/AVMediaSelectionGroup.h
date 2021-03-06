/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVFoundation-Structs.h"
#import "NSCopying.h"
#import <NSObject.h> // Unknown library

@class AVMediaSelectionGroupInternal, NSArray;

@interface AVMediaSelectionGroup : NSObject <NSCopying> {
	AVMediaSelectionGroupInternal *_mediaSelectionGroup;	// 4 = 0x4
}
@property(readonly, assign, nonatomic) BOOL allowsEmptySelection;	// G=0x2c301dbd; 
@property(readonly, assign, nonatomic) NSArray *options;	// G=0x2c301db9; 
+ (id)mediaSelectionGroupWithAsset:(id)asset dictionary:(id)dictionary;	// 0x2c301af9
+ (id)mediaSelectionOptionsFromArray:(id)array filteredAndSortedAccordingToPreferredLanguages:(id)preferredLanguages;	// 0x2c30240d
+ (id)mediaSelectionOptionsFromArray:(id)array withLocale:(id)locale;	// 0x2c302321
+ (id)mediaSelectionOptionsFromArray:(id)array withMediaCharacteristics:(id)mediaCharacteristics;	// 0x2c302701
+ (id)mediaSelectionOptionsFromArray:(id)array withoutMediaCharacteristics:(id)characteristics;	// 0x2c30287d
+ (id)playableMediaSelectionOptionsFromArray:(id)array;	// 0x2c30228d
- (id)init;	// 0x2c301b75
- (id)_defaultOption;	// 0x2c301f05
- (id)_groupID;	// 0x2c301e0d
- (id)_groupMediaType;	// 0x2c301e45
- (BOOL)_isAlternateTrackGroup;	// 0x2c301efd
- (BOOL)_isKeyValueGroup;	// 0x2c301f01
- (BOOL)_matchesGroupID:(id)anId mediaType:(id)type;	// 0x2c301e7d
- (id)_optionWithID:(id)anId displaysNonForcedSubtitles:(BOOL)subtitles;	// 0x2c301f09
- (id)_weakReference;	// 0x2c301c35
// declared property getter: - (BOOL)allowsEmptySelection;	// 0x2c301dbd
- (id)asset;	// 0x2c301db5
- (id)copyWithZone:(NSZone *)zone;	// 0x2c301d05
- (void)dealloc;	// 0x2c301c55
- (id)description;	// 0x2c301d15
- (id)dictionary;	// 0x2c301e09
- (void)finalize;	// 0x2c301cc1
- (id)mediaSelectionOptionWithPropertyList:(id)propertyList;	// 0x2c302015
// declared property getter: - (id)options;	// 0x2c301db9
@end

