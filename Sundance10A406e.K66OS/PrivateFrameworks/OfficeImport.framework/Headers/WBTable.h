/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library
#import "OfficeImport-Structs.h"


@interface WBTable : NSObject {
}
+ (void)initPropertiesFrom:(id)from to:(id)to in:(id)anIn;	// 0x34fa646d
+ (BOOL)isTableFloating:(const WrdTableProperties *)floating tracked:(const WrdTableProperties *)tracked;	// 0x34fa8441
+ (void)readFrom:(id)from textRuns:(id)runs table:(id)table;	// 0x34fa626d
+ (void)readRowFrom:(id)from textRuns:(id)runs to:(id)to;	// 0x34fa6ba5
+ (BOOL)tryToReadRowFrom:(id)from textRuns:(id)runs to:(id)to;	// 0x34fa7fb5
+ (void)writeCharacterProperties:(id)properties to:(id)to;	// 0x350e7c21
+ (void)writeParagraphProperties:(id)properties to:(id)to;	// 0x350e7b55
+ (void)writeText:(id)text to:(id)to;	// 0x350e7acd
@end

