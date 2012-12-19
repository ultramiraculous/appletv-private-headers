/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
 */

#import "NSCoding.h"
#import "BulletinBoard-Structs.h"
#import "NSCopying.h"
#import <NSObject.h> // Unknown library

@class NSArray;

@interface BBBehaviorOverride : NSObject <NSCopying, NSCoding> {
	unsigned _overrideType;	// 4 = 0x4
	unsigned _mode;	// 8 = 0x8
	NSArray *_effectiveIntervals;	// 12 = 0xc
}
@property(copy, nonatomic) NSArray *effectiveIntervals;	// G=0x33575641; S=0x33575655; @synthesize=_effectiveIntervals
@property(assign, nonatomic) unsigned mode;	// G=0x33575621; S=0x33575631; @synthesize=_mode
@property(assign, nonatomic) unsigned overrideType;	// G=0x33575601; S=0x33575611; @synthesize=_overrideType
- (id)initWithCoder:(id)coder;	// 0x335751ad
- (id)initWithEffectiveIntervals:(id)effectiveIntervals overrideType:(unsigned)type;	// 0x33575031
- (id)initWithOverrideType:(unsigned)overrideType mode:(unsigned)mode effectiveIntervals:(id)intervals;	// 0x33575051
- (id)copyWithZone:(NSZone *)zone;	// 0x3357532d
- (void)dealloc;	// 0x335750d1
- (id)description;	// 0x33575115
// declared property getter: - (id)effectiveIntervals;	// 0x33575641
- (void)encodeWithCoder:(id)coder;	// 0x33575291
- (BOOL)isActiveForDate:(id)date;	// 0x335753e1
// declared property getter: - (unsigned)mode;	// 0x33575621
- (id)nextOverrideTransitionDateAfterDate:(id)date;	// 0x335754e1
// declared property getter: - (unsigned)overrideType;	// 0x33575601
// declared property setter: - (void)setEffectiveIntervals:(id)intervals;	// 0x33575655
// declared property setter: - (void)setMode:(unsigned)mode;	// 0x33575631
// declared property setter: - (void)setOverrideType:(unsigned)type;	// 0x33575611
@end
