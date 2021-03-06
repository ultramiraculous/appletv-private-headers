/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIActivityItemSource.h"
#import <NSOperation.h> // Unknown library

@class NSString;

@interface UIActivityItemProvider : NSOperation <UIActivityItemSource> {
@private
	NSString *_activityType;	// 12 = 0xc
	float _progress;	// 16 = 0x10
	id _providedItem;	// 20 = 0x14
	NSString *_status;	// 24 = 0x18
	id _placeholderItem;	// 28 = 0x1c
}
@property(readonly, assign, nonatomic) NSString *activityType;	// G=0x304b3535; @synthesize=_activityType
@property(retain, nonatomic) id placeholderItem;	// G=0x304b35a9; S=0x304b35b9; @synthesize=_placeholderItem
@property(assign, nonatomic) float progress;	// G=0x304b3545; S=0x304b3555; @synthesize=_progress
@property(retain, nonatomic) id providedItem;	// G=0x304b3565; S=0x304b3575; @synthesize=_providedItem
@property(copy, nonatomic) NSString *status;	// G=0x304b3585; S=0x304b3599; @synthesize=_status
- (id)initWithPlaceholderItem:(id)placeholderItem;	// 0x304b33bd
- (void)_setActivityType:(id)type;	// 0x304b34a5
// declared property getter: - (id)activityType;	// 0x304b3535
- (id)activityViewController:(id)controller itemForActivityType:(id)activityType;	// 0x304b3525
- (id)activityViewControllerPlaceholderItem:(id)item;	// 0x304b3515
- (void)dealloc;	// 0x304b3419
- (id)item;	// 0x304b34e1
- (void)main;	// 0x304b34e5
// declared property getter: - (id)placeholderItem;	// 0x304b35a9
// declared property getter: - (float)progress;	// 0x304b3545
// declared property getter: - (id)providedItem;	// 0x304b3565
// declared property setter: - (void)setPlaceholderItem:(id)item;	// 0x304b35b9
// declared property setter: - (void)setProgress:(float)progress;	// 0x304b3555
// declared property setter: - (void)setProvidedItem:(id)item;	// 0x304b3575
// declared property setter: - (void)setStatus:(id)status;	// 0x304b3599
// declared property getter: - (id)status;	// 0x304b3585
@end

