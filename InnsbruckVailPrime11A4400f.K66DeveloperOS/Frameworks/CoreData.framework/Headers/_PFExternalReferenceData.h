/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <Foundation/NSData.h>
#import "CoreData-Structs.h"

@class NSString;

@interface _PFExternalReferenceData : NSData {
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
+ (BOOL)_releaseReservedMapFileDescriptor;	// 0x2d14eef1
+ (BOOL)_reserveMapFileDescriptor;	// 0x2d14eed9
+ (BOOL)_updateFileDescriptorsInUseReserveNew:(BOOL)useReserveNew;	// 0x2d14ee91
- (id)initForExternalLocation:(id)externalLocation safeguardLocation:(id)location data:(id)data protectionLevel:(int)level;	// 0x2d14f2b1
- (id)initForUbiquityDictionary:(id)ubiquityDictionary store:(id)store;	// 0x2d14ef49
- (id)initWithStoreBytes:(const void *)storeBytes length:(unsigned)length externalLocation:(id)location safeguardLocation:(id)location4 protectionLevel:(int)level;	// 0x2d14f4e5
- (id)initWithStoreBytes:(const void *)storeBytes length:(unsigned)length externalLocation:(id)location safeguardLocation:(id)location4 protectionLevel:(int)level ubiquitousLocation:(id)location6;	// 0x2d14f71d
- (id)UUID;	// 0x2d15076d
- (BOOL)_attemptToMapData:(id *)mapData;	// 0x2d14fb25
- (unsigned)_bytesLengthForExternalReference;	// 0x2d15063d
- (unsigned)_bytesLengthForStore;	// 0x2d15061d
- (const void *)_bytesPtrForExternalReference;	// 0x2d15062d
- (const void *)_bytesPtrForStore;	// 0x2d15060d
- (BOOL)_createdByUbiquityImport;	// 0x2d150e0d
- (void)_deleteExternalReferenceFromPermanentLocation;	// 0x2d1504fd
- (void)_doCleanup;	// 0x2d14f8ad
- (id)_exceptionForReadError:(id)readError;	// 0x2d150021
- (const char *)_externalReferenceLocation;	// 0x2d15064d
- (id)_externalReferenceLocationString;	// 0x2d15066d
- (BOOL)_isEqualHelper:(id)helper;	// 0x2d150b7d
- (void)_moveExternalReferenceToPermanentLocation;	// 0x2d1503dd
- (id)_originalData;	// 0x2d14fb05
- (const void *)_retrieveExternalData;	// 0x2d150249
- (const char *)_safeguardLocation;	// 0x2d15067d
- (id)_safeguardLocationString;	// 0x2d15069d
- (void)_setBytesForExternalReference:(const void *)externalReference;	// 0x2d14fb15
- (void)_writeExternalReferenceToInterimLocation;	// 0x2d1503a5
- (const void *)bytes;	// 0x2d1505ed
- (Class)classForArchiver;	// 0x2d14f9a1
- (Class)classForCoder;	// 0x2d14f985
- (id)constructSafeguardStringFromString:(id)string;	// 0x2d14ef09
- (id)copy;	// 0x2d14fa99
- (id)databaseValue;	// 0x2d150731
- (void)dealloc;	// 0x2d14f9bd
- (id)description;	// 0x2d150545
- (void)doCleanupOnDealloc;	// 0x2d15078d
- (id)externalReferenceLocationString;	// 0x2d1506e9
- (id)filename;	// 0x2d150721
- (void)finalize;	// 0x2d14fa59
- (void)getBytes:(void *)bytes length:(unsigned)length;	// 0x2d1507a5
- (void)getBytes:(void *)bytes range:(NSRange)range;	// 0x2d1507c5
- (BOOL)hasExternalReferenceContent;	// 0x2d150531
- (BOOL)isEqual:(id)equal;	// 0x2d150cfd
- (BOOL)isEqualToData:(id)data;	// 0x2d150d41
- (unsigned)length;	// 0x2d1505fd
- (id)mutableCopy;	// 0x2d14faa9
- (int)preferredProtectionLevel;	// 0x2d1506d5
- (id)subdataWithRange:(NSRange)range;	// 0x2d1509d1
@end

