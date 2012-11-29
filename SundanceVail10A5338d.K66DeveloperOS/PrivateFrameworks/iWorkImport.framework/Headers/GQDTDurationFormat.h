/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

#import "iWorkImport-Structs.h"
#import "GQDNameMappable.h"
#import <NSObject.h> // Unknown library


@interface GQDTDurationFormat : NSObject <GQDNameMappable> {
	CFStringRef mFormatString;	// 4 = 0x4
}
+ (const StateSpec *)stateForReading;	// 0x350c5ddd
- (id)initWithFormatString:(CFStringRef)formatString;	// 0x350c5de9
- (void)dealloc;	// 0x350c5e35
- (CFStringRef)formatString;	// 0x350c5e79
- (int)readAttributesFromReader:(xmlTextReader *)reader;	// 0x350c5e89
@end
