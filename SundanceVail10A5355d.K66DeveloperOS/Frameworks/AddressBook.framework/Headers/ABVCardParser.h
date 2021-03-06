/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AddressBook.framework/AddressBook
 */

#import "AddressBook-Structs.h"
#import <NSObject.h> // Unknown library

@class ABVCardValueSetter, NSMutableArray, NSMutableString, NSString, NSMutableDictionary, ABVCardLexer, NSData;

@interface ABVCardParser : NSObject {
	ABVCardValueSetter *_valueSetter;	// 4 = 0x4
	void *_source;	// 8 = 0x8
	ABVCardLexer *_lexer;	// 12 = 0xc
	NSData *_data;	// 16 = 0x10
	unsigned _defaultEncoding;	// 20 = 0x14
	BOOL _hasImportErrors;	// 24 = 0x18
	BOOL _30vCard;	// 25 = 0x19
	NSString *_first;	// 28 = 0x1c
	NSString *_last;	// 32 = 0x20
	NSString *_org;	// 36 = 0x24
	NSString *_formattedName;	// 40 = 0x28
	NSMutableArray *_emails;	// 44 = 0x2c
	NSMutableArray *_dates;	// 48 = 0x30
	NSMutableArray *_phones;	// 52 = 0x34
	NSMutableArray *_addresses;	// 56 = 0x38
	NSMutableArray *_aims;	// 60 = 0x3c
	NSMutableArray *_jabbers;	// 64 = 0x40
	NSMutableArray *_msns;	// 68 = 0x44
	NSMutableArray *_yahoos;	// 72 = 0x48
	NSMutableArray *_icqs;	// 76 = 0x4c
	NSMutableArray *_untypedIMs;	// 80 = 0x50
	NSMutableArray *_instantMessengers;	// 84 = 0x54
	NSMutableArray *_socialProfiles;	// 88 = 0x58
	NSMutableArray *_relatedNames;	// 92 = 0x5c
	NSMutableArray *_urls;	// 96 = 0x60
	NSMutableString *_notes;	// 100 = 0x64
	NSMutableString *_otherNotes;	// 104 = 0x68
	NSMutableDictionary *_extensions;	// 108 = 0x6c
	NSString *_uid;	// 112 = 0x70
	NSData *_imageData;	// 116 = 0x74
	NSString *_imageURI;	// 120 = 0x78
	int _cropRectX;	// 124 = 0x7c
	int _cropRectY;	// 128 = 0x80
	int _cropRectWidth;	// 132 = 0x84
	int _cropRectHeight;	// 136 = 0x88
	NSData *_cropRectChecksum;	// 140 = 0x8c
	NSMutableArray *_itemParameters;	// 144 = 0x90
	NSString *_grouping;	// 148 = 0x94
	unsigned _encoding;	// 152 = 0x98
	BOOL _quotedPrintable;	// 156 = 0x9c
	BOOL _base64;	// 157 = 0x9d
}
@property(readonly, assign) BOOL hasImportErrors;	// G=0x361f3095; converted property
@property(assign, nonatomic) void *source;	// G=0x361f9131; S=0x361f3341; @synthesize=_source
+ (CFArrayRef)supportedProperties;	// 0x361f2e35
- (id)initWithData:(id)data;	// 0x361f2e51
- (int)_addIMHandles:(id)handles toService:(CFStringRef)service multiValue:(void *)value uniquenessCheckingMultiValue:(void *)value4;	// 0x361f3a59
- (int)_addIMPPProfiles:(id)profiles multiValue:(void *)value uniquenessCheckingMultiValue:(void *)value3;	// 0x361f3cb5
- (id)_genericLabel;	// 0x361f47ad
- (BOOL)_handleUnknownTag:(id)tag withValue:(id)value;	// 0x361f6e89
- (BOOL)_setDataValueOrNoteIfNull:(id)null forProperty:(unsigned)property;	// 0x361f4151
- (BOOL)_setIntValueOrNoteIfNull:(int)null forProperty:(int)property;	// 0x361f4105
- (BOOL)_setMultiValuesOrNoteIfNull:(id)null forProperty:(unsigned)property valueComparator:(id)comparator;	// 0x361f4211
- (BOOL)_setStringValueOrNoteIfNull:(id)null forProperty:(unsigned)property;	// 0x361f41b1
- (id)_socialProfileDisplayName;	// 0x361f5c3d
- (id)_socialProfileService;	// 0x361f5d55
- (id)_socialProfileUserId;	// 0x361f5a0d
- (id)_socialProfileUsername;	// 0x361f5b25
- (id)_valueSetter;	// 0x361f9121
- (void)addAddressMultiValues;	// 0x361f35d5
- (BOOL)addIMValueTo:(id)to;	// 0x361f642d
- (void)addInstantMessageMultiValues;	// 0x361f3e75
- (void)addMultiValues:(id)values toProperty:(unsigned)property valueComparator:(id)comparator;	// 0x361f3375
- (void)addSocialProfileMultiValues;	// 0x361f3841
- (void)cleanUpCardState;	// 0x361f30a5
- (void *)copyNextPersonWithLength:(int *)length foundProperties:(const CFArrayRef *)properties;	// 0x361f8edd
- (id)dateFromISO8601String:(id)iso8601String;	// 0x361f6609
- (void)dealloc;	// 0x361f2fc9
- (id)defaultADRLabel;	// 0x361f4901
- (id)defaultLabel;	// 0x361f48f1
- (id)defaultURLLabel;	// 0x361f4911
- (void)finalize;	// 0x361f3069
- (id)genericLabel;	// 0x361f48c5
// converted property getter: - (BOOL)hasImportErrors;	// 0x361f3095
- (BOOL)importToPerson:(void *)person foundProperties:(const CFArrayRef *)properties;	// 0x361f85b1
- (BOOL)importToValueSetter:(id)valueSetter;	// 0x361f8641
- (void)noteLackOfValueForImageData;	// 0x361f40fd
- (void)noteLackOfValueForProperty:(unsigned)property;	// 0x361f40f9
- (BOOL)parseABDATE;	// 0x361f6a7d
- (BOOL)parseABExtensionType:(id)type;	// 0x361f5911
- (BOOL)parseABMaiden;	// 0x361f4531
- (void)parseABOrder;	// 0x361f6d29
- (void)parseABPhoto;	// 0x361f6c39
- (BOOL)parseABReleatedNames;	// 0x361f6d2d
- (void)parseABShowAs;	// 0x361f6c3d
- (BOOL)parseABUID;	// 0x361f4b99
- (BOOL)parseADD;	// 0x361f5481
- (BOOL)parseADR;	// 0x361f4f15
- (BOOL)parseBDAY;	// 0x361f68cd
- (BOOL)parseEMAIL;	// 0x361f4bdd
- (BOOL)parseIMPP;	// 0x361f62d5
- (id)parseInstantMessengerProfile:(id)profile;	// 0x361f6031
- (BOOL)parseItem;	// 0x361f6e8d
- (BOOL)parseN;	// 0x361f424d
- (BOOL)parseNICKNAME;	// 0x361f4471
- (BOOL)parseORG;	// 0x361f4585
- (BOOL)parsePhoto:(id)photo;	// 0x361f6bf5
- (id)parseSingleValue;	// 0x361f4685
- (BOOL)parseSocialProfiles;	// 0x361f5e6d
- (BOOL)parseTEL;	// 0x361f4d79
- (BOOL)parseUID;	// 0x361f4bd9
- (id)parseURL;	// 0x361f4719
- (BOOL)parseVERSION;	// 0x361f4089
- (CFArrayRef)peopleAndProperties:(const CFArrayRef *)properties;	// 0x361f8f9d
- (id)phoneLabel;	// 0x361f4921
- (void)setLocalRecordHasAdditionalProperties:(BOOL)properties;	// 0x361f4101
// declared property setter: - (void)setSource:(void *)source;	// 0x361f3341
- (id)sortedPeopleAndProperties:(const CFArrayRef *)properties;	// 0x361f909d
// declared property getter: - (void *)source;	// 0x361f9131
@end

