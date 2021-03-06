/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "NSCopying.h"
#import "UIKit-Structs.h"
#import <NSObject.h> // Unknown library

@class NSString, NSIndexPath;

@interface UICollectionViewLayoutAttributes : NSObject <NSCopying> {
	NSString *_elementKind;	// 4 = 0x4
	NSString *_reuseIdentifer;	// 8 = 0x8
	CGPoint _center;	// 12 = 0xc
	CGSize _size;	// 20 = 0x14
	CGRect _frame;	// 28 = 0x1c
	float _alpha;	// 44 = 0x2c
	CATransform3D _transform;	// 48 = 0x30
	NSIndexPath *_indexPath;	// 112 = 0x70
	struct {
		unsigned clearsSelectionOnViewWillAppear : 1;
		unsigned insetsApplied : 1;
		unsigned adjustingInsets : 1;
	} _layoutFlags;	// 116 = 0x74
	int _zIndex;	// 120 = 0x78
}
@property(assign, nonatomic) float alpha;	// G=0x31ff40f1; S=0x31ff4101; @synthesize=_alpha
@property(assign, nonatomic) CGPoint center;	// G=0x31ff405d; S=0x31ff3691; @synthesize=_center
@property(assign, nonatomic) CGRect frame;	// G=0x31ff33f1; S=0x31ff35a5; 
@property(assign, nonatomic, getter=isHidden) BOOL hidden;	// G=0x31ff3001; S=0x31ff2fe1; 
@property(retain, nonatomic) NSIndexPath *indexPath;	// G=0x31ff30bd; S=0x31ff4131; @synthesize=_indexPath
@property(readonly, assign, nonatomic) unsigned representedElementCategory;	// G=0x31ff3fe9; 
@property(readonly, assign, nonatomic) NSString *representedElementKind;	// G=0x31ff400d; 
@property(assign, nonatomic) CGSize size;	// G=0x31ff4075; S=0x31ff3619; @synthesize=_size
@property(assign, nonatomic) CATransform3D transform3D;	// G=0x31ff408d; S=0x31ff371d; @synthesize=_transform
@property(assign, nonatomic) int zIndex;	// G=0x31ff4111; S=0x31ff4121; @synthesize=_zIndex
+ (id)layoutAttributesForCellWithIndexPath:(id)indexPath;	// 0x31ff2cd5
+ (id)layoutAttributesForDecorationViewOfKind:(id)kind withIndexPath:(id)indexPath;	// 0x31ff2de5
+ (id)layoutAttributesForSupplementaryViewOfKind:(id)kind withIndexPath:(id)indexPath;	// 0x31ff2d65
- (id)init;	// 0x31ff2e91
- (id)_elementKind;	// 0x31ff3059
- (BOOL)_isCell;	// 0x31ff3fa1
- (BOOL)_isDecorationView;	// 0x31ff3fb5
- (BOOL)_isEquivalentTo:(id)to;	// 0x31ff3c41
- (BOOL)_isSupplementaryView;	// 0x31ff3fc9
- (id)_reuseIdentifier;	// 0x31ff30ad
- (void)_setElementKind:(id)kind;	// 0x31ff3015
- (void)_setReuseIdentifier:(id)identifier;	// 0x31ff3069
// declared property getter: - (float)alpha;	// 0x31ff40f1
// declared property getter: - (CGPoint)center;	// 0x31ff405d
- (id)copyWithZone:(NSZone *)zone;	// 0x31ff313d
- (void)dealloc;	// 0x31ff2f69
- (id)description;	// 0x31ff388d
// declared property getter: - (CGRect)frame;	// 0x31ff33f1
- (unsigned)hash;	// 0x31ff3f61
// declared property getter: - (id)indexPath;	// 0x31ff30bd
- (id)initialLayoutAttributesForInsertedDecorationElementOfKind:(id)kind atIndexPath:(id)indexPath;	// 0x31ff35a1
- (BOOL)isEqual:(id)equal;	// 0x31ff3ba1
// declared property getter: - (BOOL)isHidden;	// 0x31ff3001
// declared property getter: - (unsigned)representedElementCategory;	// 0x31ff3fe9
// declared property getter: - (id)representedElementKind;	// 0x31ff400d
// declared property setter: - (void)setAlpha:(float)alpha;	// 0x31ff4101
// declared property setter: - (void)setCenter:(CGPoint)center;	// 0x31ff3691
// declared property setter: - (void)setFrame:(CGRect)frame;	// 0x31ff35a5
// declared property setter: - (void)setHidden:(BOOL)hidden;	// 0x31ff2fe1
// declared property setter: - (void)setIndexPath:(id)path;	// 0x31ff4131
// declared property setter: - (void)setSize:(CGSize)size;	// 0x31ff3619
// declared property setter: - (void)setTransform3D:(CATransform3D)d;	// 0x31ff371d
// declared property setter: - (void)setZIndex:(int)index;	// 0x31ff4121
// declared property getter: - (CGSize)size;	// 0x31ff4075
// declared property getter: - (CATransform3D)transform3D;	// 0x31ff408d
// declared property getter: - (int)zIndex;	// 0x31ff4111
@end

