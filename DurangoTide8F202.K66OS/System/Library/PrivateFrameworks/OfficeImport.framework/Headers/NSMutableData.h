/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSMutableData.h> // Unknown library
#import "OfficeImport-Structs.h"


@interface NSMutableData (OCMutableDataAdditions)
- (void)appendLELong:(long)aLong;	// 0x31b1bc1d
- (void)appendLEShort:(short)aShort;	// 0x31b1bc49
- (void)appendString:(id)string encoding:(unsigned)encoding;	// 0x31b1bba9
- (void)replaceBytesInRange:(NSRange)range withLELong:(long)lelong;	// 0x31b1bbd9
@end
