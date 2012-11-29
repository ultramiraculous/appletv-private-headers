/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSOperation.h> // Unknown library
#import "UIActivityItemSource.h"

@class NSString;

@interface UIActivityItemProvider : NSOperation <UIActivityItemSource> {
	float _progress;	// 12 = 0xc
	id _providedItem;	// 16 = 0x10
	id _placeholderItem;	// 20 = 0x14
	NSString *_status;	// 24 = 0x18
	NSString *_activityType;	// 28 = 0x1c
}
@property(readonly, assign, nonatomic) NSString *activityType;	// G=0x30a472f9; @synthesize=_activityType
@property(retain, nonatomic) id placeholderItem;	// G=0x30a413bd; S=0x30a40349; @synthesize=_placeholderItem
@property(assign, nonatomic) float progress;	// G=0x30cfc945; S=0x30cfc955; @synthesize=_progress
@property(retain, nonatomic) id providedItem;	// G=0x30a47911; S=0x30a40359; @synthesize=_providedItem
@property(copy, nonatomic) NSString *status;	// G=0x30cfc965; S=0x30cfc979; @synthesize=_status
- (id)initWithPlaceholderItem:(id)placeholderItem;	// 0x30a402ed
- (void)_setActivityType:(id)type;	// 0x30a4728d
// declared property getter: - (id)activityType;	// 0x30a472f9
- (id)activityViewController:(id)controller itemForActivityType:(id)activityType;	// 0x30a47901
- (id)activityViewControllerPlaceholderItem:(id)item;	// 0x30a413ad
- (void)dealloc;	// 0x30a532d9
- (id)item;	// 0x30cfc941
- (void)main;	// 0x30a472c9
// declared property getter: - (id)placeholderItem;	// 0x30a413bd
// declared property getter: - (float)progress;	// 0x30cfc945
// declared property getter: - (id)providedItem;	// 0x30a47911
// declared property setter: - (void)setPlaceholderItem:(id)item;	// 0x30a40349
// declared property setter: - (void)setProgress:(float)progress;	// 0x30cfc955
// declared property setter: - (void)setProvidedItem:(id)item;	// 0x30a40359
// declared property setter: - (void)setStatus:(id)status;	// 0x30cfc979
// declared property getter: - (id)status;	// 0x30cfc965
@end
