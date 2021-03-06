/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

#import "iWorkImport-Structs.h"
#import </libobjc.A.h>


@interface GQPProcessorFactory : NSObject {
}
+ (int)applicationForDocumentUti:(CFStringRef)documentUti;	// 0x33ce35f1
+ (CFStringRef)createUtiForDocument:(CFStringRef)document;	// 0x33ce3559
+ (BOOL)isTangierDocumentUti:(CFStringRef)uti;	// 0x33ce3399
+ (CFURLRef)newEmbeddedSageUrlForTangierDocumentUrl:(CFURLRef)tangierDocumentUrl uti:(CFStringRef)uti isBundle:(BOOL *)bundle;	// 0x33ce33d5
+ (id)retainedProcessorForDocument:(CFStringRef)document zipArchive:(id)archive uti:(CFStringRef)uti outputType:(int)type outputPath:(CFStringRef)path previewRequest:(QLPreviewRequestRef)request progressiveHelper:(id)helper cryptoKey:(id)key;	// 0x33ce37a1
+ (id)retainedProcessorForZipArchive:(id)zipArchive uti:(CFStringRef)uti outputType:(int)type outputPath:(CFStringRef)path previewRequest:(QLPreviewRequestRef)request progressiveHelper:(id)helper;	// 0x33ce390d
@end

