/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import <NSMutableDictionary.h> // Unknown library


@interface NSRTFD : NSMutableDictionary {
@private
	NSMutableDictionary *dict;	// 4 = 0x4
}
+ (void)initialize;	// 0x33746681
- (id)init;	// 0x337466c1
- (unsigned)initFromDocument:(id)document;	// 0x33746b85
- (id)initFromElement:(id)element ofDocument:(id)document;	// 0x3374846d
- (id)initFromSerialized:(id)serialized;	// 0x33749bc1
- (unsigned)initUnixFile:(id)file;	// 0x33746b75
- (id)initWithCapacity:(unsigned)capacity;	// 0x33746849
- (id)initWithContentsOfFile:(id)file;	// 0x337467fd
- (id)initWithDataRepresentation:(id)dataRepresentation;	// 0x337474f1
- (id)initWithDictionary:(id)dictionary;	// 0x337467b1
- (id)initWithDictionary:(id)dictionary copyItems:(BOOL)items;	// 0x33746761
- (id)initWithObjects:(id *)objects forKeys:(id *)keys count:(unsigned)count;	// 0x33746709
- (id)initWithPasteboardDataRepresentation:(id)pasteboardDataRepresentation;	// 0x33749c2d
- (id)_getDocInfoForKey:(id)key;	// 0x33747af1
- (BOOL)_isLink:(id)link;	// 0x33749d15
- (id)addCommon:(id)common docInfo:(id)info value:(id)value zone:(NSZone *)zone;	// 0x33747a75
- (id)addData:(id)data name:(id)name;	// 0x33748125
- (unsigned)addDirNamed:(id)named lazy:(BOOL)lazy;	// 0x33748ac1
- (id)addFile:(id)file;	// 0x33747b21
- (unsigned)addFileNamed:(id)named fileAttributes:(id)attributes;	// 0x33748681
- (id)addLink:(id)link;	// 0x33747c19
- (id)copy;	// 0x33748111
- (id)copy:(id)copy into:(id)into;	// 0x33747e59
- (id)copyWithZone:(NSZone *)zone;	// 0x33747f69
- (unsigned)count;	// 0x337468e1
- (id)createRandomKey:(id)key;	// 0x337475b5
- (id)createUniqueKey:(id)key;	// 0x337476c5
- (id)dataForFile:(id)file;	// 0x33747d41
- (id)dataRepresentation;	// 0x33747395
- (void)dealloc;	// 0x33746895
- (id)freeSerialized:(void *)serialized length:(unsigned)length;	// 0x33749af1
- (id)getDirInfo:(BOOL)info;	// 0x337485d5
- (id)getDocument:(id)document docInfo:(id)info;	// 0x33747745
- (unsigned)insertItem:(id)item path:(id)path dirInfo:(id)info zone:(NSZone *)zone plist:(id)plist;	// 0x337487c5
- (unsigned)internalSaveTo:(id)to removeBackup:(BOOL)backup errorHandler:(id)handler;	// 0x337472f1
- (unsigned)internalSaveTo:(id)to removeBackup:(BOOL)backup errorHandler:(id)handler temp:(id)temp backup:(id)backup5;	// 0x337470f5
- (unsigned)internalWritePath:(id)path errorHandler:(id)handler remapContents:(BOOL)contents hardLinkPath:(id)path4;	// 0x33746ff5
- (BOOL)isPackage;	// 0x33746a85
- (id)keyEnumerator;	// 0x33746921
- (id)nameFromPath:(id)path extra:(id)extra;	// 0x33747235
- (id)objectForKey:(id)key;	// 0x33746901
- (id)pasteboardDataRepresentation;	// 0x33749bd1
- (unsigned)realAddDirNamed:(id)named;	// 0x3374892d
- (id)removeFile:(id)file;	// 0x33747e0d
- (void)removeObjectForKey:(id)key;	// 0x33746a65
- (id)replaceFile:(id)file data:(id)data;	// 0x33747895
- (id)replaceFile:(id)file path:(id)path;	// 0x33747911
- (unsigned)saveToDocument:(id)document removeBackup:(BOOL)backup errorHandler:(id)handler;	// 0x33747385
- (id)serialize:(void **)serialize length:(unsigned *)length;	// 0x33749959
- (void)setObject:(id)object forKey:(id)key;	// 0x33746941
- (id)setPackage:(BOOL)package;	// 0x33746ab1
- (id)tmpNameFromPath:(id)path;	// 0x337472d5
- (id)tmpNameFromPath:(id)path extension:(id)extension;	// 0x33747249
- (id)uniqueKey:(id)key;	// 0x33747735
- (int)validatePath:(id)path ignore:(id)ignore;	// 0x337481c9
- (unsigned)writePath:(id)path docInfo:(id)info errorHandler:(id)handler remapContents:(BOOL)contents hardLinkPath:(id)path5;	// 0x33746fbd
- (unsigned)writePath:(id)path docInfo:(id)info errorHandler:(id)handler remapContents:(BOOL)contents markBusy:(BOOL)busy hardLinkPath:(id)path6;	// 0x33746c81
@end

