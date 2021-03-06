/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
 */

#import "IMFoundation-Structs.h"
#import <NSObject.h> // Unknown library
#import "NSCopying.h"


@interface IMPair : NSObject <NSCopying> {
	id _first;	// 4 = 0x4
	id _second;	// 8 = 0x8
}
@property(retain) id first;	// G=0x34199435; S=0x34199449; @synthesize=_first
@property(retain) id second;	// G=0x34199459; S=0x3419946d; @synthesize=_second
+ (id)pairWithFirst:(id)first second:(id)second;	// 0x3419929d
- (id)initWithFirst:(id)first second:(id)second;	// 0x3419923d
- (id)copyWithZone:(NSZone *)zone;	// 0x34199335
- (void)dealloc;	// 0x341992dd
// declared property getter: - (id)first;	// 0x34199435
- (unsigned)hash;	// 0x34199345
- (BOOL)isEqual:(id)equal;	// 0x3419938d
// declared property getter: - (id)second;	// 0x34199459
// declared property setter: - (void)setFirst:(id)first;	// 0x34199449
// declared property setter: - (void)setSecond:(id)second;	// 0x3419946d
@end

