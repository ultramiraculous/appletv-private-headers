/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library
#import "OfficeImport-Structs.h"


__attribute__((visibility("hidden")))
@interface WBDocument : NSObject {
}
+ (void)addImageBullets:(id)bullets;	// 0x3574db6d
+ (id)imageBulletParagraph:(id)paragraph;	// 0x3574d9d1
+ (id)readFrom:(id)from;	// 0x355fbd69
+ (void)readNoteSeparatorFrom:(id)from type:(int)type separator:(id)separator;	// 0x35616231
+ (void)readProperties:(id)properties document:(id)document;	// 0x35603d75
+ (void)readSectionsFrom:(id)from document:(id)document;	// 0x3560fb89
+ (void)readTextBoxesFrom:(id)from;	// 0x35616191
+ (void)setTimeStamp:(WrdDocumentProperties *)stamp;	// 0x3574da41
+ (unsigned)setupZIndices:(id)indices document:(id)document escherType:(int)type;	// 0x3561a6f1
- (id)init;	// 0x3574d9a5
- (id)applicationName;	// 0x3574d999
@end

