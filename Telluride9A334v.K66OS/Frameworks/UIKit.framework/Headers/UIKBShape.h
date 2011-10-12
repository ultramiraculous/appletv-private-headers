/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import <NSObject.h> // Unknown library
#import "NSCoding.h"
#import "NSCopying.h"

@class UIKBGeometry;

@interface UIKBShape : NSObject <NSCoding, NSCopying> {
	UIKBGeometry *m_geometry;	// 4 = 0x4
	CGRect m_originalFrame;	// 8 = 0x8
	CGRect m_frame;	// 24 = 0x18
	CGRect m_paddedFrame;	// 40 = 0x28
	unsigned m_uid;	// 56 = 0x38
}
@property(assign, nonatomic) CGRect frame;	// G=0x3011a6fd; S=0x3011bb5d; @synthesize=m_frame
@property(retain, nonatomic) UIKBGeometry *geometry;	// G=0x3011bb29; S=0x3011bb39; @synthesize=m_geometry
@property(readonly, assign, nonatomic) CGRect originalFrame;	// G=0x302d6c61; 
@property(assign, nonatomic) CGRect paddedFrame;	// G=0x3011bbf5; S=0x3011bc19; @synthesize=m_paddedFrame
@property(readonly, assign, nonatomic) unsigned uid;	// G=0x302d70c1; @synthesize=m_uid
+ (id)shape;	// 0x302d65e5
+ (id)shapeByCombining:(id)combining withShape:(id)shape;	// 0x302d6f65
- (id)init;	// 0x3011ba79
- (id)initWithCoder:(id)coder;	// 0x302d662d
- (id)initWithGeometry:(id)geometry frame:(CGRect)frame paddedFrame:(CGRect)frame3;	// 0x301186d9
- (void)addRectFrom:(id)from;	// 0x3011bc49
- (void)addRectFrom:(id)from widthFraction:(float)fraction adjustOrigin:(BOOL)origin;	// 0x302d6e69
- (id)copyWithZone:(NSZone *)zone;	// 0x3011b959
- (void)dealloc;	// 0x30147291
- (id)description;	// 0x302d6d8d
- (void)encodeWithCoder:(id)coder;	// 0x302d6779
// declared property getter: - (CGRect)frame;	// 0x3011a6fd
// declared property getter: - (id)geometry;	// 0x3011bb29
- (unsigned)hash;	// 0x302d6ad5
- (BOOL)isEmpty;	// 0x302d6cbd
- (BOOL)isEqual:(id)equal;	// 0x302d6af1
- (void)makeLikeOther:(id)other;	// 0x302d68cd
// declared property getter: - (CGRect)originalFrame;	// 0x302d6c61
// declared property getter: - (CGRect)paddedFrame;	// 0x3011bbf5
- (void)scaleWidth:(float)width;	// 0x302d6f15
// declared property setter: - (void)setFrame:(CGRect)frame;	// 0x3011bb5d
- (void)setFrame:(CGRect)frame resetOriginalFrame:(BOOL)frame2;	// 0x3011bb89
- (void)setFrameOnly:(CGRect)only;	// 0x302d6c45
// declared property setter: - (void)setGeometry:(id)geometry;	// 0x3011bb39
// declared property setter: - (void)setPaddedFrame:(CGRect)frame;	// 0x3011bc19
// declared property getter: - (unsigned)uid;	// 0x302d70c1
@end

