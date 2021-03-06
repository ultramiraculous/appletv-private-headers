/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

#import "iWorkImport-Structs.h"
#import <NSObject.h> // Unknown library


__attribute__((visibility("hidden")))
@interface GQPProcessorFactory : NSObject {
}
+ (int)applicationForDocumentUti:(CFStringRef)documentUti;	// 0x304bc1cd
+ (CFStringRef)createUtiForDocument:(CFStringRef)document;	// 0x304bc131
+ (id)retainedProcessorForDocument:(CFStringRef)document uti:(CFStringRef)uti outputType:(int)type outputPath:(CFStringRef)path previewRequest:(QLPreviewRequestRef)request progressiveHelper:(id)helper;	// 0x304bc469
+ (id)retainedProcessorForZipArchive:(id)zipArchive uti:(CFStringRef)uti outputType:(int)type outputPath:(CFStringRef)path previewRequest:(QLPreviewRequestRef)request progressiveHelper:(id)helper;	// 0x304bc345
@end

