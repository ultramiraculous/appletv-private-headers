/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library


__attribute__((visibility("hidden")))
@interface WBSection : NSObject {
}
+ (void)mapSection:(id)section toSectionProperties:(WrdSectionProperties *)sectionProperties;	// 0x34deb69d
+ (void)mapSectionProperties:(WrdSectionProperties *)properties toSection:(id)section;	// 0x34cb280d
+ (void)readFrom:(id)from textRun:(WrdSectionTextRun *)run document:(id)document index:(int)index section:(id)section;	// 0x34cae29d
+ (void)readHeaderFrom:(id)from type:(int)type index:(int)index header:(id)header;	// 0x34cb2649
@end

