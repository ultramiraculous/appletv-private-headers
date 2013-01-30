/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UICollectionViewLayout.h"

@class NSDictionary, NSMutableDictionary;

@interface UICollectionViewFlowLayout : UICollectionViewLayout {
	docFlags _gridLayoutFlags;	// 44 = 0x2c
	float _interitemSpacing;	// 48 = 0x30
	float _lineSpacing;	// 52 = 0x34
	CGSize _itemSize;	// 56 = 0x38
	CGSize _headerReferenceSize;	// 64 = 0x40
	CGSize _footerReferenceSize;	// 72 = 0x48
	UIEdgeInsets _sectionInset;	// 80 = 0x50
	id _data;	// 96 = 0x60
	CGSize _currentLayoutSize;	// 100 = 0x64
	NSMutableDictionary *_insertedItemsAttributesDict;	// 108 = 0x6c
	NSMutableDictionary *_insertedSectionHeadersAttributesDict;	// 112 = 0x70
	NSMutableDictionary *_insertedSectionFootersAttributesDict;	// 116 = 0x74
	NSMutableDictionary *_deletedItemsAttributesDict;	// 120 = 0x78
	NSMutableDictionary *_deletedSectionHeadersAttributesDict;	// 124 = 0x7c
	NSMutableDictionary *_deletedSectionFootersAttributesDict;	// 128 = 0x80
	int _scrollDirection;	// 132 = 0x84
	NSDictionary *_rowAlignmentsOptionsDictionary;	// 136 = 0x88
	CGRect _visibleBounds;	// 140 = 0x8c
}
@property(retain, nonatomic, setter=_setRowAlignmentsOptions:) NSDictionary *_rowAlignmentOptions;	// G=0x32f0c9bd; S=0x32f0c981; 
@property(assign, nonatomic) CGSize footerReferenceSize;	// G=0x32f0b891; S=0x32f0b5f9; @synthesize=_footerReferenceSize
@property(assign, nonatomic) CGSize headerReferenceSize;	// G=0x32f0b879; S=0x32f0b511; @synthesize=_headerReferenceSize
@property(assign, nonatomic) CGSize itemSize;	// G=0x32f0b861; S=0x32f0b429; @synthesize=_itemSize
@property(assign, nonatomic) float minimumInteritemSpacing;	// G=0x32f0b851; S=0x32f0b2f9; @synthesize=_interitemSpacing
@property(assign, nonatomic) float minimumLineSpacing;	// G=0x32f0b841; S=0x32f0b391; @synthesize=_lineSpacing
@property(assign, nonatomic) int scrollDirection;	// G=0x32f0b2e9; S=0x32f0b275; 
@property(assign, nonatomic) UIEdgeInsets sectionInset;	// G=0x32f0b8a9; S=0x32f0b6e1; @synthesize=_sectionInset
- (id)init;	// 0x32f08f5d
- (id)initWithCoder:(id)coder;	// 0x32f090c1
- (void)_fetchItemsInfo;	// 0x32f0c30d
- (CGRect)_frameForFooterInSection:(int)section usingData:(id)data;	// 0x32f0c5fd
- (CGRect)_frameForHeaderInSection:(int)section usingData:(id)data;	// 0x32f0c545
- (CGRect)_frameForItemAtSection:(int)section andRow:(int)row usingData:(id)data;	// 0x32f0c41d
- (void)_getSizingInfos;	// 0x32f0ba21
- (void)_invalidateButKeepAllInfo;	// 0x32f0c935
- (void)_invalidateButKeepDelegateInfo;	// 0x32f0c8fd
- (void)_invalidateLayout;	// 0x32f096b5
- (id)_layoutAttributesForItemsInRect:(CGRect)rect;	// 0x32f0a601
// declared property getter: - (id)_rowAlignmentOptions;	// 0x32f0c9bd
// declared property setter: - (void)_setRowAlignmentsOptions:(id)options;	// 0x32f0c981
- (void)_updateDelegateFlags;	// 0x32f0b8cd
- (void)_updateItemsLayout;	// 0x32f0c0b9
- (CGSize)collectionViewContentSize;	// 0x32f09829
- (void)dealloc;	// 0x32f095d9
- (void)encodeWithCoder:(id)coder;	// 0x32f09365
- (id)finalLayoutAttributesForDeletedItemAtIndexPath:(id)indexPath;	// 0x32f0c825
- (id)finalLayoutAttributesForFooterInDeletedSection:(int)deletedSection;	// 0x32f0c895
- (id)finalLayoutAttributesForHeaderInDeletedSection:(int)deletedSection;	// 0x32f0c845
- (void)finalizeCollectionViewUpdates;	// 0x32f0c6b5
// declared property getter: - (CGSize)footerReferenceSize;	// 0x32f0b891
// declared property getter: - (CGSize)headerReferenceSize;	// 0x32f0b879
- (id)indexPathForItemAtPoint:(CGPoint)point;	// 0x32f09e8d
- (id)indexPathsForItemsInRect:(CGRect)rect usingData:(id)data;	// 0x32f09bed
- (id)indexesForSectionFootersInRect:(CGRect)rect;	// 0x32f09e89
- (id)indexesForSectionFootersInRect:(CGRect)rect usingData:(id)data;	// 0x32f09a25
- (id)indexesForSectionHeadersInRect:(CGRect)rect;	// 0x32f09e85
- (id)indexesForSectionHeadersInRect:(CGRect)rect usingData:(id)data;	// 0x32f0985d
- (id)initialLayoutAttributesForFooterInInsertedSection:(int)insertedSection;	// 0x32f0c7d5
- (id)initialLayoutAttributesForHeaderInInsertedSection:(int)insertedSection;	// 0x32f0c785
- (id)initialLayoutAttributesForInsertedItemAtIndexPath:(id)indexPath;	// 0x32f0c765
- (void)invalidateLayout;	// 0x32f09719
// declared property getter: - (CGSize)itemSize;	// 0x32f0b861
- (id)layoutAttributesForElementsInRect:(CGRect)rect;	// 0x32f0b015
- (id)layoutAttributesForFooterInSection:(int)section;	// 0x32f0a159
- (id)layoutAttributesForFooterInSection:(int)section usingData:(id)data;	// 0x32f09f75
- (id)layoutAttributesForHeaderInSection:(int)section;	// 0x32f0a139
- (id)layoutAttributesForHeaderInSection:(int)section usingData:(id)data;	// 0x32f09e91
- (id)layoutAttributesForItemAtIndexPath:(id)indexPath;	// 0x32f0a179
- (id)layoutAttributesForItemAtIndexPath:(id)indexPath usingData:(id)data;	// 0x32f0a059
- (id)layoutAttributesForSupplementaryViewOfKind:(id)kind atIndexPath:(id)indexPath;	// 0x32f0a541
// declared property getter: - (float)minimumInteritemSpacing;	// 0x32f0b851
// declared property getter: - (float)minimumLineSpacing;	// 0x32f0b841
- (void)prepareLayout;	// 0x32f09759
// declared property getter: - (int)scrollDirection;	// 0x32f0b2e9
// declared property getter: - (UIEdgeInsets)sectionInset;	// 0x32f0b8a9
// declared property setter: - (void)setFooterReferenceSize:(CGSize)size;	// 0x32f0b5f9
// declared property setter: - (void)setHeaderReferenceSize:(CGSize)size;	// 0x32f0b511
// declared property setter: - (void)setItemSize:(CGSize)size;	// 0x32f0b429
// declared property setter: - (void)setMinimumInteritemSpacing:(float)spacing;	// 0x32f0b2f9
// declared property setter: - (void)setMinimumLineSpacing:(float)spacing;	// 0x32f0b391
// declared property setter: - (void)setScrollDirection:(int)direction;	// 0x32f0b275
// declared property setter: - (void)setSectionInset:(UIEdgeInsets)inset;	// 0x32f0b6e1
- (BOOL)shouldInvalidateLayoutForBoundsChange:(CGRect)boundsChange;	// 0x32f097d9
- (CGSize)synchronizeLayout;	// 0x32f0c8e5
@end
