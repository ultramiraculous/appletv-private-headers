/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import "OADProperties.h"
#import "NSCopying.h"

@class OADDash, OADColor, OADLineJoin, OADLineEnd, OADFill;

__attribute__((visibility("hidden")))
@interface OADStroke : OADProperties <NSCopying> {
@private
	OADColor *mColor;	// 12 = 0xc
	OADFill *mFill;	// 16 = 0x10
	OADDash *mDash;	// 20 = 0x14
	OADLineJoin *mJoin;	// 24 = 0x18
	OADLineEnd *mHead;	// 28 = 0x1c
	OADLineEnd *mTail;	// 32 = 0x20
	float mWidth;	// 36 = 0x24
	unsigned char mCap;	// 40 = 0x28
	unsigned char mCompoundType;	// 41 = 0x29
	unsigned char mPenAlignment;	// 42 = 0x2a
	unsigned mIsColorOverridden : 1;	// 43 = 0x2b
	unsigned mIsCompoundTypeOverridden : 1;	// 43 = 0x2b
	unsigned mIsCapOverridden : 1;	// 43 = 0x2b
	unsigned mIsWidthOverridden : 1;	// 43 = 0x2b
	unsigned mIsJoinOverridden : 1;	// 43 = 0x2b
	unsigned mIsDashOverridden : 1;	// 43 = 0x2b
	unsigned mIsFillOverridden : 1;	// 43 = 0x2b
	unsigned mIsPenAlignmentOverridden : 1;	// 43 = 0x2b
}
@property(assign) int cap;	// G=0x34c070f5; S=0x34bfafed; converted property
@property(retain) id color;	// G=0x34c06d99; S=0x34bfa701; converted property
@property(assign) int compoundType;	// G=0x34c07161; S=0x34bfb095; converted property
@property(retain) id dash;	// G=0x34c06e05; S=0x34bfaa81; converted property
@property(retain) id fill;	// G=0x34b81551; S=0x34bfa8b9; converted property
@property(retain, nonatomic) OADLineEnd *head;	// G=0x34bfa06d; S=0x34e24a8d; @synthesize=mHead
@property(retain) id join;	// G=0x34c06f91; S=0x34bfab81; converted property
@property(assign) int penAlignment;	// G=0x34e24835; S=0x34c3c1d9; converted property
@property(retain, nonatomic) OADLineEnd *tail;	// G=0x34bfa07d; S=0x34e24ab5; @synthesize=mTail
@property(assign) float width;	// G=0x34c07089; S=0x34bfaf51; converted property
+ (id)blackStroke;	// 0x34e24a1d
+ (id)defaultProperties;	// 0x34bf9e35
+ (id)nullStroke;	// 0x34ce24f9
- (id)init;	// 0x34bf9da1
- (id)initWithDefaults;	// 0x34c3bf91
// converted property getter: - (int)cap;	// 0x34c070f5
// converted property getter: - (id)color;	// 0x34c06d99
// converted property getter: - (int)compoundType;	// 0x34c07161
- (id)copyWithZone:(NSZone *)zone;	// 0x34ce8895
// converted property getter: - (id)dash;	// 0x34c06e05
- (void)dealloc;	// 0x34c07bed
// converted property getter: - (id)fill;	// 0x34b81551
- (unsigned)hash;	// 0x34e24865
// declared property getter: - (id)head;	// 0x34bfa06d
- (BOOL)isCapOverridden;	// 0x34c070b9
- (BOOL)isColorOverridden;	// 0x34c06d5d
- (BOOL)isCompoundTypeOverridden;	// 0x34c07125
- (BOOL)isDashOverridden;	// 0x34c06dc9
- (BOOL)isEqual:(id)equal;	// 0x34c068e5
- (BOOL)isFillOverridden;	// 0x34b81581
- (BOOL)isJoinOverridden;	// 0x34c06f55
- (BOOL)isPenAlignmentOverridden;	// 0x34c07191
- (BOOL)isWidthOverridden;	// 0x34c0704d
// converted property getter: - (id)join;	// 0x34c06f91
// converted property getter: - (int)penAlignment;	// 0x34e24835
// converted property setter: - (void)setCap:(int)cap;	// 0x34bfafed
// converted property setter: - (void)setColor:(id)color;	// 0x34bfa701
// converted property setter: - (void)setCompoundType:(int)type;	// 0x34bfb095
// converted property setter: - (void)setDash:(id)dash;	// 0x34bfaa81
// converted property setter: - (void)setFill:(id)fill;	// 0x34bfa8b9
// declared property setter: - (void)setHead:(id)head;	// 0x34e24a8d
// converted property setter: - (void)setJoin:(id)join;	// 0x34bfab81
- (void)setParent:(id)parent;	// 0x34bf9e7d
// converted property setter: - (void)setPenAlignment:(int)alignment;	// 0x34c3c1d9
- (void)setStyleColor:(id)color;	// 0x34d37c25
// declared property setter: - (void)setTail:(id)tail;	// 0x34e24ab5
// converted property setter: - (void)setWidth:(float)width;	// 0x34bfaf51
// declared property getter: - (id)tail;	// 0x34bfa07d
// converted property getter: - (float)width;	// 0x34c07089
@end

