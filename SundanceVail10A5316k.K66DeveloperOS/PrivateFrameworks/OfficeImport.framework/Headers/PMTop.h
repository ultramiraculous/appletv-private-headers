/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "CMTop.h"
#import "OIProgressiveReaderDelegate.h"

@class CMArchiveManager, PMPresentationMapper, PMState;

__attribute__((visibility("hidden")))
@interface PMTop : CMTop <OIProgressiveReaderDelegate> {
@private
	CMArchiveManager *_archiver;	// 4 = 0x4
	PMState *_state;	// 8 = 0x8
	PMPresentationMapper *_mapper;	// 12 = 0xc
	BOOL _xml;	// 16 = 0x10
}
+ (void)fillHTMLArchiveForPowerPointData:(id)powerPointData fileName:(id)name xmlFlag:(BOOL)flag archiver:(id)archiver;	// 0x311ec179
+ (void)fillHTMLArchiveForPowerPointFile:(id)powerPointFile xmlFlag:(BOOL)flag archiver:(id)archiver;	// 0x30fff2a1
+ (void)fillHTMLArchiveForPowerPointFrom:(id)from inMemory:(BOOL)memory xmlFlag:(BOOL)flag archiver:(id)archiver;	// 0x30fff2d5
- (void)dealloc;	// 0x3108ec65
- (BOOL)isCancelled;	// 0x311ec1d5
- (void)readData:(id)data fileName:(id)name xmlFlag:(BOOL)flag archiver:(id)archiver;	// 0x311ec1ad
- (void)readFile:(id)file xmlFlag:(BOOL)flag archiver:(id)archiver;	// 0x30fff439
- (void)readFrom:(id)from inMemory:(BOOL)memory xmlFlag:(BOOL)flag archiver:(id)archiver;	// 0x30fff461
- (void)readerDidEndDocument:(id)reader;	// 0x3108a589
- (void)readerDidReadElement:(id)reader atIndex:(unsigned)index inDocument:(id)document isLastElement:(BOOL)element;	// 0x31079f7d
- (void)readerDidStartDocument:(id)reader withElementCount:(int)elementCount;	// 0x310769d1
@end

