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
+ (void)initialize;	// 0x31100671
- (id)init;	// 0x311006b1
- (unsigned)initFromDocument:(id)document;	// 0x31100b75
- (id)initFromElement:(id)element ofDocument:(id)document;	// 0x3110245d
- (id)initFromSerialized:(id)serialized;	// 0x31103bb1
- (unsigned)initUnixFile:(id)file;	// 0x31100b65
- (id)initWithCapacity:(unsigned)capacity;	// 0x31100839
- (id)initWithContentsOfFile:(id)file;	// 0x311007ed
- (id)initWithDataRepresentation:(id)dataRepresentation;	// 0x311014e1
- (id)initWithDictionary:(id)dictionary;	// 0x311007a1
- (id)initWithDictionary:(id)dictionary copyItems:(BOOL)items;	// 0x31100751
- (id)initWithObjects:(id *)objects forKeys:(id *)keys count:(unsigned)count;	// 0x311006f9
- (id)initWithPasteboardDataRepresentation:(id)pasteboardDataRepresentation;	// 0x31103c1d
- (id)_getDocInfoForKey:(id)key;	// 0x31101ae1
- (BOOL)_isLink:(id)link;	// 0x31103d05
- (id)addCommon:(id)common docInfo:(id)info value:(id)value zone:(NSZone *)zone;	// 0x31101a65
- (id)addData:(id)data name:(id)name;	// 0x31102115
- (unsigned)addDirNamed:(id)named lazy:(BOOL)lazy;	// 0x31102ab1
- (id)addFile:(id)file;	// 0x31101b11
- (unsigned)addFileNamed:(id)named fileAttributes:(id)attributes;	// 0x31102671
- (id)addLink:(id)link;	// 0x31101c09
- (id)copy;	// 0x31102101
- (id)copy:(id)copy into:(id)into;	// 0x31101e49
- (id)copyWithZone:(NSZone *)zone;	// 0x31101f59
- (unsigned)count;	// 0x311008d1
- (id)createRandomKey:(id)key;	// 0x311015a5
- (id)createUniqueKey:(id)key;	// 0x311016b5
- (id)dataForFile:(id)file;	// 0x31101d31
- (id)dataRepresentation;	// 0x31101385
- (void)dealloc;	// 0x31100885
- (id)freeSerialized:(void *)serialized length:(unsigned)length;	// 0x31103ae1
- (id)getDirInfo:(BOOL)info;	// 0x311025c5
- (id)getDocument:(id)document docInfo:(id)info;	// 0x31101735
- (unsigned)insertItem:(id)item path:(id)path dirInfo:(id)info zone:(NSZone *)zone plist:(id)plist;	// 0x311027b5
- (unsigned)internalSaveTo:(id)to removeBackup:(BOOL)backup errorHandler:(id)handler;	// 0x311012e1
- (unsigned)internalSaveTo:(id)to removeBackup:(BOOL)backup errorHandler:(id)handler temp:(id)temp backup:(id)backup5;	// 0x311010e5
- (unsigned)internalWritePath:(id)path errorHandler:(id)handler remapContents:(BOOL)contents hardLinkPath:(id)path4;	// 0x31100fe5
- (BOOL)isPackage;	// 0x31100a75
- (id)keyEnumerator;	// 0x31100911
- (id)nameFromPath:(id)path extra:(id)extra;	// 0x31101225
- (id)objectForKey:(id)key;	// 0x311008f1
- (id)pasteboardDataRepresentation;	// 0x31103bc1
- (unsigned)realAddDirNamed:(id)named;	// 0x3110291d
- (id)removeFile:(id)file;	// 0x31101dfd
- (void)removeObjectForKey:(id)key;	// 0x31100a55
- (id)replaceFile:(id)file data:(id)data;	// 0x31101885
- (id)replaceFile:(id)file path:(id)path;	// 0x31101901
- (unsigned)saveToDocument:(id)document removeBackup:(BOOL)backup errorHandler:(id)handler;	// 0x31101375
- (id)serialize:(void **)serialize length:(unsigned *)length;	// 0x31103949
- (void)setObject:(id)object forKey:(id)key;	// 0x31100931
- (id)setPackage:(BOOL)package;	// 0x31100aa1
- (id)tmpNameFromPath:(id)path;	// 0x311012c5
- (id)tmpNameFromPath:(id)path extension:(id)extension;	// 0x31101239
- (id)uniqueKey:(id)key;	// 0x31101725
- (int)validatePath:(id)path ignore:(id)ignore;	// 0x311021b9
- (unsigned)writePath:(id)path docInfo:(id)info errorHandler:(id)handler remapContents:(BOOL)contents hardLinkPath:(id)path5;	// 0x31100fad
- (unsigned)writePath:(id)path docInfo:(id)info errorHandler:(id)handler remapContents:(BOOL)contents markBusy:(BOOL)busy hardLinkPath:(id)path6;	// 0x31100c71
@end

