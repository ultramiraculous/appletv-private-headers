/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import </libobjc.A.h>
#import "OfficeImport-Structs.h"
#import "NSCopying.h"

@class OADColor;

@interface OADFontReference : NSObject <NSCopying> {
	int mIndex;	// 4 = 0x4
	OADColor *mColor;	// 8 = 0x8
}
@property(retain) id color;	// G=0x318efaa5; S=0x3180db89; converted property
@property(assign) int index;	// G=0x318efa95; S=0x3180db79; converted property
- (void)applyToParagraphProperties:(id)paragraphProperties;	// 0x3181061d
// converted property getter: - (id)color;	// 0x318efaa5
- (id)copyWithZone:(NSZone *)zone;	// 0x318539dd
- (void)dealloc;	// 0x3181086d
- (unsigned)hash;	// 0x318efab5
// converted property getter: - (int)index;	// 0x318efa95
- (BOOL)isEqual:(id)equal;	// 0x318efae9
// converted property setter: - (void)setColor:(id)color;	// 0x3180db89
// converted property setter: - (void)setIndex:(int)index;	// 0x3180db79
@end
