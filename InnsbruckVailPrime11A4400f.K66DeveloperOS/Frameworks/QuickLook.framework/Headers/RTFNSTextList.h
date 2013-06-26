/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

#import "QuickLook-Structs.h"
#import "NSCopying.h"
#import "NSCoding.h"
#import </libobjc.A.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface RTFNSTextList : NSObject <NSCoding, NSCopying> {
	NSString *_markerFormat;	// 4 = 0x4
	unsigned _listFlags;	// 8 = 0x8
	int _startIndex;	// 12 = 0xc
	void *_listSecondary;	// 16 = 0x10
}
@property(readonly, retain) NSString *markerFormat;	// G=0x2f3019e5; converted property
@property(assign) int startingItemNumber;	// G=0x2f301a29; S=0x2f301a15; converted property
+ (id)_standardMarkerAttributesForAttributes:(id)attributes;	// 0x2f303201
+ (void)initialize;	// 0x2f3018c9
- (id)initWithCoder:(id)coder;	// 0x2f301c41
- (id)initWithMarkerFormat:(id)markerFormat options:(unsigned)options;	// 0x2f301915
- (BOOL)_isOrdered;	// 0x2f302d85
- (id)_markerForMarkerFormat:(id)markerFormat itemNumber:(int)number isNumbered:(BOOL *)numbered substitutionStart:(unsigned *)start end:(unsigned *)end specifierStart:(unsigned *)start6 end:(unsigned *)end7;	// 0x2f301fa5
- (id)_markerPrefix;	// 0x2f302e79
- (id)_markerSpecifier;	// 0x2f302ee5
- (id)_markerSuffix;	// 0x2f303185
- (id)_markerTitle;	// 0x2f302dd1
- (id)_unaffixedMarkerForItemNumber:(int)itemNumber;	// 0x2f302fe1
- (id)_unaffixedMarkerFormat;	// 0x2f302f65
- (id)_unaffixedMarkerTitle;	// 0x2f303081
- (id)copyWithZone:(NSZone *)zone;	// 0x2f301a3d
- (void)dealloc;	// 0x2f301999
- (id)description;	// 0x2f301ebd
- (void)encodeWithCoder:(id)coder;	// 0x2f301ac1
- (unsigned)listOptions;	// 0x2f3019f5
- (id)markerForItemNumber:(int)itemNumber;	// 0x2f302d4d
// converted property getter: - (id)markerFormat;	// 0x2f3019e5
- (unsigned)options;	// 0x2f301a05
// converted property setter: - (void)setStartingItemNumber:(int)number;	// 0x2f301a15
// converted property getter: - (int)startingItemNumber;	// 0x2f301a29
@end
