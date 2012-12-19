/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UICollectionViewDelegate.h"
#import "UICollectionViewDataSource.h"
#import "UIViewController.h"

@class UICollectionView, UICollectionViewLayout;

@interface UICollectionViewController : UIViewController <UICollectionViewDelegate, UICollectionViewDataSource> {
	UICollectionViewLayout *_layout;	// 196 = 0xc4
	UICollectionView *_collectionView;	// 200 = 0xc8
	struct {
		unsigned hasAutomaticAnimationItems : 1;
	} _collectionViewControllerFlags;	// 204 = 0xcc
}
@property(assign, nonatomic) BOOL clearsSelectionOnViewWillAppear;	// G=0x32f08841; S=0x32f08821; 
@property(retain, nonatomic) UICollectionView *collectionView;	// G=0x32f08d69; S=0x32f08d91; 
- (id)initWithCoder:(id)coder;	// 0x32f086d9
- (id)initWithCollectionViewLayout:(id)collectionViewLayout;	// 0x32f0866d
- (id)_newCollectionViewWithFrame:(CGRect)frame collectionViewLayout:(id)layout;	// 0x32f08f11
- (id)_wrappingView;	// 0x32f08855
// declared property getter: - (BOOL)clearsSelectionOnViewWillAppear;	// 0x32f08841
// declared property getter: - (id)collectionView;	// 0x32f08d69
- (id)collectionView:(id)view cellForItemAtIndexPath:(id)indexPath;	// 0x32f08f0d
- (int)collectionView:(id)view numberOfItemsInSection:(int)section;	// 0x32f08f09
- (void)dealloc;	// 0x32f087d5
- (void)encodeWithCoder:(id)coder;	// 0x32f08771
- (void)loadView;	// 0x32f08911
// declared property setter: - (void)setClearsSelectionOnViewWillAppear:(BOOL)appear;	// 0x32f08821
// declared property setter: - (void)setCollectionView:(id)view;	// 0x32f08d91
- (void)viewWillAppear:(BOOL)view;	// 0x32f08cbd
- (void)viewWillUnload;	// 0x32f08c35
@end
