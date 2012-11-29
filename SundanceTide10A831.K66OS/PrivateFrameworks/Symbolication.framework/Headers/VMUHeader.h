/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

#import <NSObject.h> // Unknown library


@interface VMUHeader : NSObject {
}
+ (id)extractMachOHeadersFromHeader:(id)header matchingArchitecture:(id)architecture considerArchives:(BOOL)archives;	// 0x379b0b55
+ (id)headerWithMemory:(id)memory address:(unsigned long long)address name:(id)name path:(id)path timestamp:(id)timestamp;	// 0x379b0ce9
+ (id)headerWithUniverse:(id)universe memory:(id)memory name:(id)name path:(id)path timestamp:(id)timestamp;	// 0x379b0d69
- (BOOL)isArchive;	// 0x379b0f21
- (BOOL)isFat;	// 0x379b0f11
- (BOOL)isMachO;	// 0x379b0f15
- (BOOL)isMachO32;	// 0x379b0f19
- (BOOL)isMachO64;	// 0x379b0f1d
- (id)signature;	// 0x379b0f25
@end
