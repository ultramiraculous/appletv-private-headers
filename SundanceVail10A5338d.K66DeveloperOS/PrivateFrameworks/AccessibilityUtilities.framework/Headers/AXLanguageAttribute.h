/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
 */

#import <NSObject.h> // Unknown library
#import "AccessibilityUtilities-Structs.h"


@interface AXLanguageAttribute : NSObject {
	id _value;	// 4 = 0x4
	NSRange _range;	// 8 = 0x8
}
@property(assign, nonatomic) NSRange range;	// G=0x350622d1; S=0x350622e9; @synthesize=_range
@property(retain, nonatomic) id value;	// G=0x350622b1; S=0x350622c1; @synthesize=_value
+ (id)attributeWithValue:(id)value range:(NSRange)range;	// 0x35062089
- (void)dealloc;	// 0x3506215d
- (id)description;	// 0x35062101
- (BOOL)isEqual:(id)equal;	// 0x350621a1
// declared property getter: - (NSRange)range;	// 0x350622d1
// declared property setter: - (void)setRange:(NSRange)range;	// 0x350622e9
// declared property setter: - (void)setValue:(id)value;	// 0x350622c1
// declared property getter: - (id)value;	// 0x350622b1
@end
