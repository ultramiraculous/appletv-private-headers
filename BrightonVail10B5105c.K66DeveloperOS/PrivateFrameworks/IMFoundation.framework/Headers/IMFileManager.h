/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
 */

#import <NSFileManager.h> // Unknown library


@interface IMFileManager : NSFileManager {
}
+ (id)defaultHFSFileManager;	// 0x365c496d
+ (id)defaultManager;	// 0x365c495d
- (id)MIMETypeOfPath:(id)path;	// 0x365c4bd5
- (id)MIMETypeOfPathExtension:(id)pathExtension;	// 0x365c4b6d
- (id)UTITypeOfMimeType:(id)mimeType;	// 0x365c4b39
- (id)UTITypeOfPath:(id)path;	// 0x365c4cb1
- (id)UTITypeOfPathExtension:(id)pathExtension;	// 0x365c4d75
- (id)attributesOfItemAtPath:(id)path error:(id *)error;	// 0x365c4a19
- (id)displayNameOfFileWithName:(id)name hfsFlags:(unsigned short)flags;	// 0x365c4a49
- (id)pathExtensionForMIMEType:(id)mimetype;	// 0x365c4aa1
- (id)pathExtensionForUTIType:(id)utitype;	// 0x365c4c59
@end
