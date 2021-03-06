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
@property(assign) int cap;	// G=0x3556a0f5; S=0x3555dfed; converted property
@property(retain) id color;	// G=0x35569d99; S=0x3555d701; converted property
@property(assign) int compoundType;	// G=0x3556a161; S=0x3555e095; converted property
@property(retain) id dash;	// G=0x35569e05; S=0x3555da81; converted property
@property(retain) id fill;	// G=0x354e4551; S=0x3555d8b9; converted property
@property(retain, nonatomic) OADLineEnd *head;	// G=0x3555d06d; S=0x35787a8d; @synthesize=mHead
@property(retain) id join;	// G=0x35569f91; S=0x3555db81; converted property
@property(assign) int penAlignment;	// G=0x35787835; S=0x3559f1d9; converted property
@property(retain, nonatomic) OADLineEnd *tail;	// G=0x3555d07d; S=0x35787ab5; @synthesize=mTail
@property(assign) float width;	// G=0x3556a089; S=0x3555df51; converted property
+ (id)blackStroke;	// 0x35787a1d
+ (id)defaultProperties;	// 0x3555ce35
+ (id)nullStroke;	// 0x356454f9
- (id)init;	// 0x3555cda1
- (id)initWithDefaults;	// 0x3559ef91
// converted property getter: - (int)cap;	// 0x3556a0f5
// converted property getter: - (id)color;	// 0x35569d99
// converted property getter: - (int)compoundType;	// 0x3556a161
- (id)copyWithZone:(NSZone *)zone;	// 0x3564b895
// converted property getter: - (id)dash;	// 0x35569e05
- (void)dealloc;	// 0x3556abed
// converted property getter: - (id)fill;	// 0x354e4551
- (unsigned)hash;	// 0x35787865
// declared property getter: - (id)head;	// 0x3555d06d
- (BOOL)isCapOverridden;	// 0x3556a0b9
- (BOOL)isColorOverridden;	// 0x35569d5d
- (BOOL)isCompoundTypeOverridden;	// 0x3556a125
- (BOOL)isDashOverridden;	// 0x35569dc9
- (BOOL)isEqual:(id)equal;	// 0x355698e5
- (BOOL)isFillOverridden;	// 0x354e4581
- (BOOL)isJoinOverridden;	// 0x35569f55
- (BOOL)isPenAlignmentOverridden;	// 0x3556a191
- (BOOL)isWidthOverridden;	// 0x3556a04d
// converted property getter: - (id)join;	// 0x35569f91
// converted property getter: - (int)penAlignment;	// 0x35787835
// converted property setter: - (void)setCap:(int)cap;	// 0x3555dfed
// converted property setter: - (void)setColor:(id)color;	// 0x3555d701
// converted property setter: - (void)setCompoundType:(int)type;	// 0x3555e095
// converted property setter: - (void)setDash:(id)dash;	// 0x3555da81
// converted property setter: - (void)setFill:(id)fill;	// 0x3555d8b9
// declared property setter: - (void)setHead:(id)head;	// 0x35787a8d
// converted property setter: - (void)setJoin:(id)join;	// 0x3555db81
- (void)setParent:(id)parent;	// 0x3555ce7d
// converted property setter: - (void)setPenAlignment:(int)alignment;	// 0x3559f1d9
- (void)setStyleColor:(id)color;	// 0x3569ac25
// declared property setter: - (void)setTail:(id)tail;	// 0x35787ab5
// converted property setter: - (void)setWidth:(float)width;	// 0x3555df51
// declared property getter: - (id)tail;	// 0x3555d07d
// converted property getter: - (float)width;	// 0x3556a089
@end

