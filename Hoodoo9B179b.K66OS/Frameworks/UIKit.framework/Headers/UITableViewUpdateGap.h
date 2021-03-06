/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library

@class NSArray, NSMutableArray, UIUpdateItem;

__attribute__((visibility("hidden")))
@interface UITableViewUpdateGap : NSObject {
@private
	UIUpdateItem *_firstUpdateItem;	// 4 = 0x4
	UIUpdateItem *_lastUpdateItem;	// 8 = 0x8
	NSMutableArray *_deleteItems;	// 12 = 0xc
	NSMutableArray *_insertItems;	// 16 = 0x10
	struct {
		unsigned nonIndexedTitlesShownFirst : 1;
	} _gapFlags;	// 20 = 0x14
}
@property(readonly, assign, nonatomic) NSArray *deleteItems;	// G=0x331549f1; @synthesize=_deleteItems
@property(retain, nonatomic) UIUpdateItem *firstUpdateItem;	// G=0x33154989; S=0x33154999; @synthesize=_firstUpdateItem
@property(readonly, assign, nonatomic) BOOL hasAutomaticAnimationItems;	// G=0x33154975; 
@property(readonly, assign, nonatomic) BOOL hasInserts;	// G=0x331548f5; 
@property(readonly, assign, nonatomic) NSArray *insertItems;	// G=0x33154a01; @synthesize=_insertItems
@property(readonly, assign, nonatomic) BOOL isDeleteBasedGap;	// G=0x331548c5; 
@property(readonly, assign, nonatomic) BOOL isSectionBasedGap;	// G=0x33154951; 
@property(retain, nonatomic) UIUpdateItem *lastUpdateItem;	// G=0x331549bd; S=0x331549cd; @synthesize=_lastUpdateItem
@property(readonly, assign, nonatomic) NSArray *updateItems;	// G=0x33154925; 
+ (id)gapWithUpdateItem:(id)updateItem;	// 0x331545b5
- (id)init;	// 0x3315463d
- (void)addUpdateItem:(id)item;	// 0x331547a1
- (void)dealloc;	// 0x3315483d
// declared property getter: - (id)deleteItems;	// 0x331549f1
- (id)description;	// 0x331546c9
// declared property getter: - (id)firstUpdateItem;	// 0x33154989
// declared property getter: - (BOOL)hasAutomaticAnimationItems;	// 0x33154975
// declared property getter: - (BOOL)hasInserts;	// 0x331548f5
// declared property getter: - (id)insertItems;	// 0x33154a01
// declared property getter: - (BOOL)isDeleteBasedGap;	// 0x331548c5
// declared property getter: - (BOOL)isSectionBasedGap;	// 0x33154951
// declared property getter: - (id)lastUpdateItem;	// 0x331549bd
// declared property setter: - (void)setFirstUpdateItem:(id)item;	// 0x33154999
// declared property setter: - (void)setLastUpdateItem:(id)item;	// 0x331549cd
// declared property getter: - (id)updateItems;	// 0x33154925
@end

