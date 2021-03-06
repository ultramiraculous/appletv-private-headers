/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"

@class NSArray;

__attribute__((visibility("hidden")))
@interface ATVPhotoBatchView : BRControl {
	id _photoSizeHandler;	// 84 = 0x54
	id _photoControlHandler;	// 88 = 0x58
	NSArray *_items;	// 92 = 0x5c
	int _selectedIndex;	// 96 = 0x60
	BRControl *_descriptionView;	// 100 = 0x64
	NSArray *_photoViews;	// 104 = 0x68
	int _initialSelectedIndex;	// 108 = 0x6c
	NSArray *_photoFramesFraction;	// 112 = 0x70
	XXStruct_40SSZC _singleBlockSize;	// 116 = 0x74
	CGSize _calculatedSizeFraction;	// 124 = 0x7c
	NSRange _presentedBlocksRange;	// 132 = 0x84
	CGRect _activeRect;	// 140 = 0x8c
}
@property(assign, nonatomic) CGRect activeRect;	// G=0xd7625; S=0xd763d; @synthesize=_activeRect
@property(readonly, assign, nonatomic) CGRect calculatedFocusRect;	// G=0xd58f1; @dynamic
@property(assign, nonatomic) CGSize calculatedSizeFraction;	// G=0xd7595; S=0xd75ad; @synthesize=_calculatedSizeFraction
@property(readonly, assign, nonatomic) CGSize descriptionArea;	// G=0xd5ac5; @dynamic
@property(retain, nonatomic) BRControl *descriptionView;	// G=0xd7519; S=0xd7529; @synthesize=_descriptionView
@property(assign, nonatomic) int initialSelectedIndex;	// G=0xd7575; S=0xd7585; @synthesize=_initialSelectedIndex
@property(copy, nonatomic) NSArray *items;	// G=0xd74f5; S=0xd56b5; @synthesize=_items
@property(copy, nonatomic) id photoControlHandler;	// G=0xd74d1; S=0xd74e5; @synthesize=_photoControlHandler
@property(retain, nonatomic) NSArray *photoFramesFraction;	// G=0xd75c1; S=0xd75d1; @synthesize=_photoFramesFraction
@property(copy, nonatomic) id photoSizeHandler;	// G=0xd74ad; S=0xd74c1; @synthesize=_photoSizeHandler
@property(copy, nonatomic) NSArray *photoViews;	// G=0xd7551; S=0xd7565; @synthesize=_photoViews
@property(assign, nonatomic) NSRange presentedBlocksRange;	// G=0xd75f9; S=0xd7611; @synthesize=_presentedBlocksRange
@property(assign, nonatomic) int selectedIndex;	// G=0xd7509; S=0xd57f1; @synthesize=_selectedIndex
@property(assign, nonatomic) XXStruct_40SSZC singleBlockSize;	// G=0xd7495; S=0xd5691; @synthesize=_singleBlockSize
- (id)init;	// 0xd5561
- (void).cxx_destruct;	// 0xd7661
- (BOOL)_calculatePhotoFrames;	// 0xd6975
- (id)_photoFramesFractionWithItemsInRange:(NSRange)range blockIndex:(int)index offset:(float)offset width:(float *)width;	// 0xd6da1
- (void)_resetSelectedIndexWithControl:(id)control;	// 0xd7315
- (void)_selfFocusChanged:(id)changed;	// 0xd7439
- (id)accessibilityControls;	// 0xd68b5
- (BOOL)accessibilityIgnoresControlReload;	// 0xd68d1
- (id)accessibilityLabel;	// 0xd686d
- (void)activateBlocksInRect:(CGRect)rect;	// 0xd5b51
// declared property getter: - (CGRect)activeRect;	// 0xd7625
// declared property getter: - (CGRect)calculatedFocusRect;	// 0xd58f1
// declared property getter: - (CGSize)calculatedSizeFraction;	// 0xd7595
- (void)controlWasDeactivated;	// 0xd5c49
- (unsigned)countOfPhotos;	// 0xd68d5
- (void)dealloc;	// 0xd5625
// declared property getter: - (CGSize)descriptionArea;	// 0xd5ac5
// declared property getter: - (id)descriptionView;	// 0xd7519
- (unsigned)indexInPhotosOfObject:(id)object;	// 0xd6911
// declared property getter: - (int)initialSelectedIndex;	// 0xd7575
// declared property getter: - (id)items;	// 0xd74f5
- (void)layoutSubcontrols;	// 0xd5e15
- (id)objectInPhotosAtIndex:(unsigned)index;	// 0xd6971
// declared property getter: - (id)photoControlHandler;	// 0xd74d1
// declared property getter: - (id)photoFramesFraction;	// 0xd75c1
// declared property getter: - (id)photoSizeHandler;	// 0xd74ad
// declared property getter: - (id)photoViews;	// 0xd7551
// declared property getter: - (NSRange)presentedBlocksRange;	// 0xd75f9
// declared property getter: - (int)selectedIndex;	// 0xd7509
// declared property setter: - (void)setActiveRect:(CGRect)rect;	// 0xd763d
// declared property setter: - (void)setCalculatedSizeFraction:(CGSize)fraction;	// 0xd75ad
// declared property setter: - (void)setDescriptionView:(id)view;	// 0xd7529
- (void)setFocusedControl:(id)control;	// 0xd5bdd
// declared property setter: - (void)setInitialSelectedIndex:(int)index;	// 0xd7585
// declared property setter: - (void)setItems:(id)items;	// 0xd56b5
// declared property setter: - (void)setPhotoControlHandler:(id)handler;	// 0xd74e5
// declared property setter: - (void)setPhotoFramesFraction:(id)fraction;	// 0xd75d1
// declared property setter: - (void)setPhotoSizeHandler:(id)handler;	// 0xd74c1
// declared property setter: - (void)setPhotoViews:(id)views;	// 0xd7565
// declared property setter: - (void)setPresentedBlocksRange:(NSRange)range;	// 0xd7611
// declared property setter: - (void)setSelectedIndex:(int)index;	// 0xd57f1
// declared property setter: - (void)setSingleBlockSize:(XXStruct_40SSZC)size;	// 0xd5691
// declared property getter: - (XXStruct_40SSZC)singleBlockSize;	// 0xd7495
- (CGSize)sizeThatFits:(CGSize)fits;	// 0xd5cc5
@end

