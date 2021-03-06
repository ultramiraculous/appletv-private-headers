/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AddressBook.framework/AddressBook
 */

#import "AddressBook-Structs.h"
#import <NSObject.h> // Unknown library


@interface ABVCardRecord : NSObject {
	void *_record;	// 4 = 0x4
	CFArrayRef _properties;	// 8 = 0x8
}
@property(readonly, assign) void *record;	// G=0x308a3d9d; converted property
+ (void)clearPrivateFields;	// 0x308a4199
+ (BOOL)includeABClipRectInVCardPhotos;	// 0x308a42f5
+ (BOOL)includeImageURIInVCards;	// 0x308a42f1
+ (BOOL)includeNotesInVCards;	// 0x308a4251
+ (BOOL)includePhotosInVCards;	// 0x308a4339
+ (BOOL)includeREVInVCards;	// 0x308a42c1
+ (BOOL)privateVCardEnabled;	// 0x308a4039
+ (void)setIncludeNotesInVCards:(BOOL)vcards;	// 0x308a4211
+ (void)setIncludePhotosInVCards:(BOOL)vcards;	// 0x308a42f9
+ (void)setIncludeREVInVCards:(BOOL)vcards;	// 0x308a4281
+ (void)setPrivateVCardEnabled:(BOOL)enabled;	// 0x308a405d
+ (void)setVCardField:(id)field isPrivate:(BOOL)aPrivate;	// 0x308a409d
+ (CFArrayRef)supportedProperties;	// 0x308a3dad
+ (BOOL)vcardFieldisPrivate:(id)aPrivate;	// 0x308a41b5
- (id)init;	// 0x308a3b25
- (id)initWithRecord:(void *)record;	// 0x308a3ab9
- (id)initWithVCardRepresentation:(id)vcardRepresentation;	// 0x308a3b8d
- (id)ISO8061StringFromDate:(id)date;	// 0x308a4915
- (id)ISO8061StringFromDateTime:(id)dateTime;	// 0x308a493d
- (id)_21vCardRepresentationAsData;	// 0x308a678d
- (void)_appendPropValue:(id)value forExternalPropKey:(id)externalPropKey toOutString:(id)outString usingDelimiter:(id)delimiter;	// 0x308a7d31
- (id)_copyGroupVCardRepresentationAsStringIncludeExternalProperties:(BOOL)properties;	// 0x308a9f95
- (id)_copyVCardRepresentationAsStringIncludeExternalProperties:(BOOL)properties withPhoto:(id)photo extraPhotoParameters:(id)parameters;	// 0x308a7e91
- (id)_fullName;	// 0x308a661d
- (id)_fullNameIncludingAuxiliaryElements:(BOOL)elements;	// 0x308a6325
- (BOOL)_isCompany;	// 0x308a65dd
- (id)_prodID;	// 0x308a7c45
- (id)_realCompositeName;	// 0x308a66cd
- (BOOL)_showField:(unsigned)field;	// 0x308a4369
- (BOOL)_showField:(unsigned)field identifier:(int)identifier;	// 0x308a436d
- (BOOL)_usesArrayForExternalPropKey:(id)externalPropKey;	// 0x308a7d01
- (id)_vCardKeyForAddressLabel:(id)addressLabel vCard3:(BOOL)a3;	// 0x308a4371
- (CFStringRef)_vCardKeyForEmailLabel:(id)emailLabel;	// 0x308a4749
- (CFStringRef)_vCardKeyForGenericLabel:(id)genericLabel;	// 0x308a4429
- (id)_vCardKeysForPhoneLabel:(id)phoneLabel;	// 0x308a4491
- (id)alternateName;	// 0x308a6631
- (void)appendLabel:(id)label toVCardRep:(id)vcardRep inGroup:(id)group;	// 0x308a47b1
- (void *)copyValueForProperty:(unsigned)property;	// 0x308a49d9
- (id)dataForInstantMessageProperties;	// 0x308a5a39
- (id)dataForSocialProfileProperty:(void *)socialProfileProperty groupCount:(int *)count;	// 0x308a5601
- (void)dealloc;	// 0x308a3cc5
- (id)encodedDataForValue:(id)value charsetName:(id *)name;	// 0x308a6209
- (id)encodedLineForValue:(id)value;	// 0x308a5eb5
- (id)imageData;	// 0x308a7be5
- (id)newISO8061StringFromDate:(id)date;	// 0x308a482d
- (id)propertyLineForGenericABProperty21:(unsigned)genericABProperty21 vCardProperty:(id)property;	// 0x308a53c9
- (id)propertyLineForGenericABProperty:(unsigned)genericABProperty vCardProperty:(id)property is21:(BOOL)a21 groupCount:(int *)count;	// 0x308a4a15
- (id)propertyLineForIMHandles:(id)imhandles labels:(id)labels vCardProperty:(id)property;	// 0x308a58b1
- (id)propertyLineForIMPPProperty:(id)imppproperty groupCount:(int *)count;	// 0x308a5041
- (id)propertyLineForInstantMessageHandles:(id)instantMessageHandles groupCount:(int *)count;	// 0x308a4c8d
// converted property getter: - (void *)record;	// 0x308a3d9d
- (BOOL)setValue:(void *)value forProperty:(unsigned)property;	// 0x308a3fb1
- (BOOL)useThumbnailImageFormatIfAvailable;	// 0x308a7be1
- (id)vCardRepresentationForMode:(int)mode;	// 0x308a3d21
- (void *)valueForProperty:(unsigned)property;	// 0x308a49ed
@end

