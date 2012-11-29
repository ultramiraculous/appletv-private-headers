/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library
#import "OfficeImport-Structs.h"


@interface ECPackedDataUtils : NSObject {
}
+ (id)dumpDataToHexadecimalString:(char *)hexadecimalString start:(unsigned)start stop:(unsigned)stop nicelyFormatted:(bool)formatted;	// 0x31da8401
+ (char *)prepareForDataOfLength:(unsigned)length atIndex:(unsigned)index withPreviousLength:(unsigned)previousLength inPackedData:(CFDataRef)packedData packedDataSize:(unsigned)size;	// 0x31d0b4a5
+ (id)readStringFromData:(char *)data atOffset:(unsigned)offset withLength:(unsigned)length;	// 0x31d21c05
+ (bool)setData:(char *)data ofLength:(unsigned)length atIndex:(unsigned)index withPreviousLength:(unsigned)previousLength inPackedData:(CFDataRef)packedData packedDataSize:(unsigned)size;	// 0x31da83c1
+ (void)writeString:(id)string toPackedData:(CFDataRef)packedData packedDataSize:(unsigned)size atIndex:(unsigned)index withPreviousLength:(unsigned short)previousLength outLength:(unsigned short *)length;	// 0x31d0b425
@end
