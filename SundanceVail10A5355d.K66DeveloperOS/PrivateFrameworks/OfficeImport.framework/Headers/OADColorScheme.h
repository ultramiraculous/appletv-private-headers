/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library

@class NSMutableDictionary;

@interface OADColorScheme : NSObject {
	NSMutableDictionary *mColors;	// 4 = 0x4
}
- (id)init;	// 0x31b9b6a9
- (void)addColor:(id)color index:(int)index;	// 0x31ba3925
- (void)addDefaultColors;	// 0x31dccdd9
- (unsigned)colorCount;	// 0x31c8ba0d
- (id)colorForIndex:(int)index;	// 0x31bfaedd
- (void)dealloc;	// 0x31c0c181
- (BOOL)isEqual:(id)equal;	// 0x31dccfa5
- (void)setColor:(id)color index:(int)index;	// 0x31dccd89
@end
