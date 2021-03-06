/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <NSData.h> // Unknown library
#import "CoreData-Structs.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface _PFExternalReferenceData : NSData {
@private
	NSData *_originalData;	// 4 = 0x4
	void *_bytesPtrForStore;	// 8 = 0x8
	unsigned _bytesLengthForStore;	// 12 = 0xc
	void *_bytesPtrForExternalReference;	// 16 = 0x10
	unsigned _bytesLengthForExternalReference;	// 20 = 0x14
	NSString *_externalReferenceLocation;	// 24 = 0x18
	NSString *_safeguardLocation;	// 28 = 0x1c
	id _ubiquitousLocation;	// 32 = 0x20
	externalDataFlags _externalDataFlags;	// 36 = 0x24
}
@property(retain) id ubiquitousLocation;	// G=0x3403746d; S=0x34037bfd; converted property
+ (BOOL)_releaseReservedMapFileDescriptor;	// 0x34037cc1
+ (BOOL)_reserveMapFileDescriptor;	// 0x34037ca9
+ (BOOL)_updateFileDescriptorsInUseReserveNew:(BOOL)useReserveNew;	// 0x34037fd5
- (id)initForExternalLocation:(id)externalLocation safeguardLocation:(id)location data:(id)data protectionLevel:(int)level;	// 0x34038e71
- (id)initForUbiquityDictionary:(id)ubiquityDictionary store:(id)store;	// 0x340390bd
- (id)initWithStoreBytes:(const void *)storeBytes length:(unsigned)length externalLocation:(id)location safeguardLocation:(id)location4 hardlink:(BOOL)hardlink protectionLevel:(int)level;	// 0x34038cbd
- (id)UUID;	// 0x34037bdd
- (BOOL)_attemptToMapData:(id *)mapData;	// 0x340387cd
- (unsigned)_bytesLengthForExternalReference;	// 0x34037449
- (unsigned)_bytesLengthForStore;	// 0x34037439
- (const void *)_bytesPtrForExternalReference;	// 0x34037ab5
- (const void *)_bytesPtrForStore;	// 0x34037429
- (void)_deleteExternalReferenceFromPermanentLocation;	// 0x340379a9
- (void)_doCleanup;	// 0x34038bd9
- (id)_exceptionForReadError:(id)readError;	// 0x3403784d
- (const char *)_externalReferenceLocation;	// 0x34037ac5
- (id)_externalReferenceLocationString;	// 0x34037ae5
- (BOOL)_isEqualHelper:(id)helper;	// 0x34038021
- (void)_moveExternalReferenceToPermanentLocation;	// 0x34038541
- (id)_originalData;	// 0x340373f5
- (const void *)_retrieveExternalData;	// 0x34038661
- (const char *)_safeguardLocation;	// 0x34037af5
- (id)_safeguardLocationString;	// 0x34037b15
- (void)_setBytesForExternalReference:(const void *)externalReference;	// 0x34037405
- (void)_writeExternalReferenceToInterimLocation;	// 0x3403796d
- (const void *)bytes;	// 0x34037a95
- (Class)classForCoder:(id)coder;	// 0x340377c9
- (id)copy;	// 0x340377e5
- (id)databaseValue;	// 0x34037b95
- (void)dealloc;	// 0x34037f3d
- (id)description;	// 0x340379e5
- (void)doCleanupOnDealloc;	// 0x3403747d
- (id)externalReferenceLocationString;	// 0x34037b4d
- (id)filename;	// 0x34037b85
- (void)finalize;	// 0x34038b99
- (void)getBytes:(void *)bytes length:(unsigned)length;	// 0x34037c45
- (void)getBytes:(void *)bytes range:(NSRange)range;	// 0x34038339
- (BOOL)hasExternalReferenceContent;	// 0x34037415
- (BOOL)isEqual:(id)equal;	// 0x34037c65
- (BOOL)isEqualToData:(id)data;	// 0x34037db5
- (unsigned)length;	// 0x34037aa5
- (id)mutableCopy;	// 0x340377f5
- (int)preferredProtectionLevel;	// 0x34037459
// converted property setter: - (void)setUbiquitousLocation:(id)location;	// 0x34037bfd
- (id)subdataWithRange:(NSRange)range;	// 0x3403816d
// converted property getter: - (id)ubiquitousLocation;	// 0x3403746d
@end

