/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import <ImageIO/NSObject.h>
#import "NSCoding.h"

@class NSMutableIndexSet, NSMutableDictionary, UIDynamicAnimator, UICollectionView, UICollectionViewLayoutInvalidationContext;

@interface UICollectionViewLayout : NSObject <NSCoding> {
	UICollectionView *_collectionView;	// 4 = 0x4
	CGSize _collectionViewBoundsSize;	// 8 = 0x8
	NSMutableDictionary *_initialAnimationLayoutAttributesDict;	// 16 = 0x10
	NSMutableDictionary *_finalAnimationLayoutAttributesDict;	// 20 = 0x14
	NSMutableDictionary *_deletedSupplementaryIndexPathsDict;	// 24 = 0x18
	NSMutableDictionary *_insertedSupplementaryIndexPathsDict;	// 28 = 0x1c
	NSMutableIndexSet *_deletedSectionsSet;	// 32 = 0x20
	NSMutableIndexSet *_insertedSectionsSet;	// 36 = 0x24
	NSMutableDictionary *_decorationViewClassDict;	// 40 = 0x28
	NSMutableDictionary *_decorationViewNibDict;	// 44 = 0x2c
	NSMutableDictionary *_decorationViewExternalObjectsTables;	// 48 = 0x30
	UICollectionViewLayout *_transitioningFromLayout;	// 52 = 0x34
	UICollectionViewLayout *_transitioningToLayout;	// 56 = 0x38
	UIDynamicAnimator *_animator;	// 60 = 0x3c
	UICollectionViewLayoutInvalidationContext *_invalidationContext;	// 64 = 0x40
}
@property(readonly, assign, nonatomic) UICollectionView *collectionView;	// G=0x2f8c2279; @synthesize=_collectionView
+ (Class)invalidationContextClass;	// 0x2f8c0e49
+ (Class)layoutAttributesClass;	// 0x2f8c0e2d
- (id)init;	// 0x2f8c0e65
- (id)initWithCoder:(id)coder;	// 0x2f8c0f91
- (id)_animationForReusableView:(id)reusableView toLayoutAttributes:(id)layoutAttributes;	// 0x2f8c1331
- (id)_animationForReusableView:(id)reusableView toLayoutAttributes:(id)layoutAttributes type:(unsigned)type;	// 0x2f8c1321
- (id)_decorationViewForLayoutAttributes:(id)layoutAttributes;	// 0x2f8c3695
- (void)_didFinishLayoutTransitionAnimations:(BOOL)animations;	// 0x2f8c225d
- (id)_dynamicAnimator;	// 0x2f8c22c5
- (void)_finalizeCollectionViewItemAnimations;	// 0x2f8c3655
- (void)_finalizeLayoutTransition;	// 0x2f8c21a1
- (id)_indexPathsToDeleteForDecorationViewOfKind:(id)kind;	// 0x2f8c3531
- (id)_indexPathsToDeleteForSupplementaryViewOfKind:(id)kind;	// 0x2f8c34e5
- (id)_indexPathsToInsertForDecorationViewOfKind:(id)kind;	// 0x2f8c35c9
- (id)_indexPathsToInsertForSupplementaryViewOfKind:(id)kind;	// 0x2f8c357d
- (void)_invalidateLayoutUsingContext:(id)context;	// 0x2f8c3b2d
- (void)_prepareForTransitionFromLayout:(id)layout;	// 0x2f8c2161
- (void)_prepareForTransitionToLayout:(id)layout;	// 0x2f8c2101
- (void)_prepareToAnimateFromCollectionViewItems:(id)collectionViewItems atContentOffset:(CGPoint)contentOffset toItems:(id)items atContentOffset:(CGPoint)contentOffset4;	// 0x2f8c22d5
- (void)_setCollectionView:(id)view;	// 0x2f8c2289
- (void)_setCollectionViewBoundsSize:(CGSize)size;	// 0x2f8c2299
- (void)_setDynamicAnimator:(id)animator;	// 0x2f8c22b5
- (void)_setExternalObjectTable:(id)table forNibLoadingOfDecorationViewOfKind:(id)kind;	// 0x2f8c3ab9
- (BOOL)_supportsAdvancedTransitionAnimations;	// 0x2f8c3b29
- (CGRect)bounds;	// 0x2f8c134d
// declared property getter: - (id)collectionView;	// 0x2f8c2279
- (CGSize)collectionViewContentSize;	// 0x2f8c1335
- (void)dealloc;	// 0x2f8c10bd
- (void)encodeWithCoder:(id)coder;	// 0x2f8c102d
- (id)finalLayoutAttributesForDisappearingDecorationElementOfKind:(id)kind atIndexPath:(id)indexPath;	// 0x2f8c32e9
- (id)finalLayoutAttributesForDisappearingItemAtIndexPath:(id)indexPath;	// 0x2f8c2c45
- (id)finalLayoutAttributesForDisappearingSupplementaryElementOfKind:(id)kind atIndexPath:(id)indexPath;	// 0x2f8c2f25
- (void)finalizeAnimatedBoundsChange;	// 0x2f8c22b1
- (void)finalizeCollectionViewUpdates;	// 0x2f8c1f19
- (void)finalizeLayoutTransition;	// 0x2f8c2259
- (id)indexPathsToDeleteForDecorationViewOfKind:(id)kind;	// 0x2f8c3625
- (id)indexPathsToDeleteForSupplementaryViewOfKind:(id)kind;	// 0x2f8c3615
- (id)indexPathsToInsertForDecorationViewOfKind:(id)kind;	// 0x2f8c3645
- (id)indexPathsToInsertForSupplementaryViewOfKind:(id)kind;	// 0x2f8c3635
- (id)initialLayoutAttributesForAppearingDecorationElementOfKind:(id)kind atIndexPath:(id)indexPath;	// 0x2f8c3121
- (id)initialLayoutAttributesForAppearingItemAtIndexPath:(id)indexPath;	// 0x2f8c2b5d
- (id)initialLayoutAttributesForAppearingSupplementaryElementOfKind:(id)kind atIndexPath:(id)indexPath;	// 0x2f8c2d5d
- (void)invalidateLayout;	// 0x2f8c120d
- (void)invalidateLayoutWithContext:(id)context;	// 0x2f8c128d
- (id)invalidationContextForBoundsChange:(CGRect)boundsChange;	// 0x2f8c12b1
- (id)layoutAttributesForDecorationViewOfKind:(id)kind atIndexPath:(id)indexPath;	// 0x2f8c1205
- (id)layoutAttributesForElementsInRect:(CGRect)rect;	// 0x2f8c11f9
- (id)layoutAttributesForItemAtIndexPath:(id)indexPath;	// 0x2f8c11fd
- (id)layoutAttributesForSupplementaryViewOfKind:(id)kind atIndexPath:(id)indexPath;	// 0x2f8c1201
- (void)prepareForAnimatedBoundsChange:(CGRect)animatedBoundsChange;	// 0x2f8c22ad
- (void)prepareForCollectionViewUpdates:(id)collectionViewUpdates;	// 0x2f8c1399
- (void)prepareForTransitionFromLayout:(id)layout;	// 0x2f8c2255
- (void)prepareForTransitionToLayout:(id)layout;	// 0x2f8c2251
- (void)prepareLayout;	// 0x2f8c1209
- (void)registerClass:(Class)aClass forDecorationViewOfKind:(id)kind;	// 0x2f8c1fb9
- (void)registerNib:(id)nib forDecorationViewOfKind:(id)kind;	// 0x2f8c205d
- (BOOL)shouldInvalidateLayoutForBoundsChange:(CGRect)boundsChange;	// 0x2f8c12ad
- (id)snapshottedLayoutAttributeForItemAtIndexPath:(id)indexPath;	// 0x2f8c1fb5
- (CGPoint)targetContentOffsetForProposedContentOffset:(CGPoint)proposedContentOffset;	// 0x2f8c1315
- (CGPoint)targetContentOffsetForProposedContentOffset:(CGPoint)proposedContentOffset withScrollingVelocity:(CGPoint)scrollingVelocity;	// 0x2f8c1309
- (CGPoint)transitionContentOffsetForProposedContentOffset:(CGPoint)proposedContentOffset keyItemIndexPath:(id)path;	// 0x2f8c2261
- (CGPoint)updatesContentOffsetForProposedContentOffset:(CGPoint)proposedContentOffset;	// 0x2f8c226d
@end
