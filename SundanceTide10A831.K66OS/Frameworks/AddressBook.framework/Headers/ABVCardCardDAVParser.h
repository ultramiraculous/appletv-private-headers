/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AddressBook.framework/AddressBook
 */

#import "ABVCardParser.h"

@class NSData, NSMutableDictionary;

@interface ABVCardCardDAVParser : ABVCardParser {
	NSMutableDictionary *_unknownAttributes;	// 160 = 0xa0
	BOOL _removeExistingProperties;	// 164 = 0xa4
	BOOL _localRecordHasAdditionalProperties;	// 165 = 0xa5
	int _lastCropRectX;	// 168 = 0xa8
	int _lastCropRectY;	// 172 = 0xac
	int _lastCropRectWidth;	// 176 = 0xb0
	int _lastCropRectHeight;	// 180 = 0xb4
	NSData *_lastCropRectChecksum;	// 184 = 0xb8
}
@property(readonly, assign) NSData *lastCropRectChecksum;	// G=0x313e76cd; @synthesize=_lastCropRectChecksum
@property(readonly, assign) int lastCropRectHeight;	// G=0x313e76b9; @synthesize=_lastCropRectHeight
@property(readonly, assign) int lastCropRectWidth;	// G=0x313e76a5; @synthesize=_lastCropRectWidth
@property(readonly, assign) int lastCropRectX;	// G=0x313e767d; @synthesize=_lastCropRectX
@property(readonly, assign) int lastCropRectY;	// G=0x313e7691; @synthesize=_lastCropRectY
@property(readonly, assign) BOOL localRecordHasAdditionalProperties;	// G=0x313e7665; @synthesize=_localRecordHasAdditionalProperties
- (id)initWithData:(id)data;	// 0x313e6f4d
- (BOOL)_handleUnknownTag:(id)tag withValue:(id)value;	// 0x313e7095
- (void)cleanUpCardState;	// 0x313e7589
- (void *)createRecordInSource:(void *)source outRecordType:(unsigned *)type;	// 0x313e735d
- (void)dealloc;	// 0x313e6fb9
- (id)defaultADRLabel;	// 0x313e7035
- (id)defaultLabel;	// 0x313e7031
- (id)defaultURLLabel;	// 0x313e7039
- (id)genericLabel;	// 0x313e7021
- (BOOL)importToGroup:(void *)group removeExistingProperties:(BOOL)properties;	// 0x313e727d
- (BOOL)importToPerson:(void *)person removeExistingProperties:(BOOL)properties;	// 0x313e719d
// declared property getter: - (id)lastCropRectChecksum;	// 0x313e76cd
// declared property getter: - (int)lastCropRectHeight;	// 0x313e76b9
// declared property getter: - (int)lastCropRectWidth;	// 0x313e76a5
// declared property getter: - (int)lastCropRectX;	// 0x313e767d
// declared property getter: - (int)lastCropRectY;	// 0x313e7691
// declared property getter: - (BOOL)localRecordHasAdditionalProperties;	// 0x313e7665
- (void)noteLackOfValueForImageData;	// 0x313e7521
- (void)noteLackOfValueForProperty:(unsigned)property;	// 0x313e746d
- (BOOL)parseUID;	// 0x313e703d
- (void)setLocalRecordHasAdditionalProperties:(BOOL)properties;	// 0x313e6f3d
@end

