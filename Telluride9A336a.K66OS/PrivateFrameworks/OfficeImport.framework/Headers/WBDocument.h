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
+ (void)addImageBullets:(id)bullets;	// 0x34deab6d
+ (id)imageBulletParagraph:(id)paragraph;	// 0x34dea9d1
+ (id)readFrom:(id)from;	// 0x34c98d69
+ (void)readNoteSeparatorFrom:(id)from type:(int)type separator:(id)separator;	// 0x34cb3231
+ (void)readProperties:(id)properties document:(id)document;	// 0x34ca0d75
+ (void)readSectionsFrom:(id)from document:(id)document;	// 0x34cacb89
+ (void)readTextBoxesFrom:(id)from;	// 0x34cb3191
+ (void)setTimeStamp:(WrdDocumentProperties *)stamp;	// 0x34deaa41
+ (unsigned)setupZIndices:(id)indices document:(id)document escherType:(int)type;	// 0x34cb76f1
- (id)init;	// 0x34dea9a5
- (id)applicationName;	// 0x34dea999
@end

