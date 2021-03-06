/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVMediaSelectionOption.h"

@class AVWeakReference, NSDictionary, NSString;

@interface AVMediaSelectionKeyValueOption : AVMediaSelectionOption {
	id _groupID;	// 8 = 0x8
	NSString *_mediaType;	// 12 = 0xc
	NSDictionary *_dictionary;	// 16 = 0x10
	AVWeakReference *_weakReferenceToGroup;	// 20 = 0x14
}
@property(readonly, retain) NSDictionary *dictionary;	// G=0x35e8ce15; converted property
@property(readonly, retain) id groupID;	// G=0x35e8ce25; converted property
@property(readonly, retain) NSString *mediaType;	// G=0x35e8ce61; converted property
- (id)initWithDictionary:(id)dictionary group:(id)group;	// 0x35e8caa9
- (id)_ancillaryDescription;	// 0x35e8cd79
- (BOOL)_isDesignatedDefault;	// 0x35e8cfdd
- (id)associatedMediaSelectionOptionInMediaSelectionGroup:(id)mediaSelectionGroup;	// 0x35e8d231
- (id)availableMetadataFormats;	// 0x35e8d1f9
- (id)commonMetadata;	// 0x35e8d09d
- (void)dealloc;	// 0x35e8cb9d
// converted property getter: - (id)dictionary;	// 0x35e8ce15
- (id)group;	// 0x35e8cdf5
// converted property getter: - (id)groupID;	// 0x35e8ce25
- (BOOL)hasMediaCharacteristic:(id)characteristic;	// 0x35e8ce8d
- (unsigned)hash;	// 0x35e8cd21
- (BOOL)isEqual:(id)equal;	// 0x35e8cc11
- (BOOL)isPlayable;	// 0x35e8cfd9
- (id)locale;	// 0x35e8d021
- (id)mediaSubTypes;	// 0x35e8ce71
// converted property getter: - (id)mediaType;	// 0x35e8ce61
- (id)metadataForFormat:(id)format;	// 0x35e8d215
- (id)optionID;	// 0x35e8ce35
- (id)propertyList;	// 0x35e8d235
@end

