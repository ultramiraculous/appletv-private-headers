/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import <NSObject.h> // Unknown library

@class UICollectionViewUpdateItem, NSMutableArray, NSArray;

__attribute__((visibility("hidden")))
@interface UICollectionViewUpdateGap : NSObject {
	UICollectionViewUpdateItem *_firstUpdateItem;	// 4 = 0x4
	UICollectionViewUpdateItem *_lastUpdateItem;	// 8 = 0x8
	NSMutableArray *_deleteItems;	// 12 = 0xc
	NSMutableArray *_insertItems;	// 16 = 0x10
	CGRect _beginningRect;	// 20 = 0x14
	CGRect _endingRect;	// 36 = 0x24
}
@property(assign, nonatomic) CGRect beginningRect;	// G=0x30c9f94d; S=0x30c9f971; @synthesize=_beginningRect
@property(readonly, assign, nonatomic) NSArray *deleteItems;	// G=0x30c9f92d; @synthesize=_deleteItems
@property(assign, nonatomic) CGRect endingRect;	// G=0x30c9f98d; S=0x30c9f9b1; @synthesize=_endingRect
@property(retain, nonatomic) UICollectionViewUpdateItem *firstUpdateItem;	// G=0x30c9f8ed; S=0x30c9f8fd; @synthesize=_firstUpdateItem
@property(readonly, assign, nonatomic) BOOL hasInserts;	// G=0x30c9f871; 
@property(readonly, assign, nonatomic) NSArray *insertItems;	// G=0x30c9f93d; @synthesize=_insertItems
@property(readonly, assign, nonatomic) BOOL isDeleteBasedGap;	// G=0x30c9f845; 
@property(readonly, assign, nonatomic) BOOL isSectionBasedGap;	// G=0x30c9f8c9; 
@property(retain, nonatomic) UICollectionViewUpdateItem *lastUpdateItem;	// G=0x30c9f90d; S=0x30c9f91d; @synthesize=_lastUpdateItem
@property(readonly, assign, nonatomic) NSArray *updateItems;	// G=0x30c9f89d; 
+ (id)gapWithUpdateItem:(id)updateItem;	// 0x30c9f55d
- (id)init;	// 0x30c9f5e5
- (void)addUpdateItem:(id)item;	// 0x30c9f74d
// declared property getter: - (CGRect)beginningRect;	// 0x30c9f94d
- (void)dealloc;	// 0x30c9f7b9
// declared property getter: - (id)deleteItems;	// 0x30c9f92d
- (id)description;	// 0x30c9f675
// declared property getter: - (CGRect)endingRect;	// 0x30c9f98d
// declared property getter: - (id)firstUpdateItem;	// 0x30c9f8ed
// declared property getter: - (BOOL)hasInserts;	// 0x30c9f871
// declared property getter: - (id)insertItems;	// 0x30c9f93d
// declared property getter: - (BOOL)isDeleteBasedGap;	// 0x30c9f845
// declared property getter: - (BOOL)isSectionBasedGap;	// 0x30c9f8c9
// declared property getter: - (id)lastUpdateItem;	// 0x30c9f90d
// declared property setter: - (void)setBeginningRect:(CGRect)rect;	// 0x30c9f971
// declared property setter: - (void)setEndingRect:(CGRect)rect;	// 0x30c9f9b1
// declared property setter: - (void)setFirstUpdateItem:(id)item;	// 0x30c9f8fd
// declared property setter: - (void)setLastUpdateItem:(id)item;	// 0x30c9f91d
// declared property getter: - (id)updateItems;	// 0x30c9f89d
@end
