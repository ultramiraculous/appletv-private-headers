/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library

@class ODIState;

@interface ODILinear : NSObject {
	BOOL mIsHorizontal;	// 4 = 0x4
	BOOL mWithConnectors;	// 5 = 0x5
	BOOL mStretch;	// 6 = 0x6
	float mPointHeight;	// 8 = 0x8
	float mConnectorWidth;	// 12 = 0xc
	float mPadding;	// 16 = 0x10
	BOOL mIsTextCenteredHorizontally;	// 20 = 0x14
	BOOL mIsTextCenteredVertically;	// 21 = 0x15
	unsigned mMaxPointCount;	// 24 = 0x18
	ODIState *mState;	// 28 = 0x1c
}
+ (BOOL)mapIdentifier:(id)identifier state:(id)state;	// 0x34aef451
+ (void)mapUnknownWithState:(id)state;	// 0x34af0589
- (id)initWithState:(id)state;	// 0x34af05a5
- (void)map;	// 0x34af071d
- (void)mapPoint:(id)point bounds:(CGRect)bounds;	// 0x34af0b75
- (void)mapStyleFromPoint:(id)point shape:(id)shape;	// 0x34af0c49
- (void)mapStyleFromTransition:(id)transition shape:(id)shape;	// 0x34af0df5
- (void)mapTransition:(id)transition pointBounds:(CGRect)bounds;	// 0x34af0c89
- (void)nextPointBounds:(CGRect *)bounds;	// 0x34af0ae1
- (void)setConnectorWidth:(float)width;	// 0x34af06ad
- (void)setIsHorizontal:(BOOL)horizontal;	// 0x34af066d
- (void)setIsTextCentered:(BOOL)centered;	// 0x34af06cd
- (void)setIsTextCenteredHorizontally:(BOOL)horizontally;	// 0x34af06ed
- (void)setIsTextCenteredVertically:(BOOL)vertically;	// 0x34af06fd
- (void)setLogicalBounds;	// 0x34af08d5
- (void)setMaxPointCount:(unsigned)count;	// 0x34af070d
- (void)setPadding:(float)padding;	// 0x34af06bd
- (void)setPointHeight:(float)height;	// 0x34af069d
- (void)setStretch:(BOOL)stretch;	// 0x34af068d
- (void)setWithConnectors:(BOOL)connectors;	// 0x34af067d
@end

