/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library
#import "OfficeImport-Structs.h"


@interface WBTableRow : NSObject {
}
+ (void)collectCellProperties:(WrdTableProperties *)properties tracked:(WrdTableProperties *)tracked for:(id)aFor;	// 0x350ea409
+ (void)readCellsFrom:(id)from textRuns:(id)runs level:(int)level to:(id)to properties:(WrdTableProperties *)properties tracked:(WrdTableProperties *)tracked;	// 0x34fa718d
+ (void)readFrom:(id)from textRuns:(id)runs to:(id)to index:(int)index row:(id)row;	// 0x34fa6c0d
+ (void)writeCharacterProperties:(id)properties to:(id)to;	// 0x350ea275
+ (void)writeParagraphProperties:(id)properties to:(id)to;	// 0x350e9da9
+ (void)writeText:(id)text to:(id)to;	// 0x350e9cb1
@end
