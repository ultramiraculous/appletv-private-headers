/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <NSObject.h> // Unknown library

@class NSMutableSet, NSMutableArray;

@interface MPVolumeHUDController : NSObject {
	NSMutableArray *_contexts;	// 4 = 0x4
	NSMutableSet *_categories;	// 8 = 0x8
}
@property(readonly, assign, nonatomic) id mainContext;	// G=0x35bd2241; 
+ (id)sharedInstance;	// 0x35bd20fd
- (id)init;	// 0x35bd2145
- (BOOL)_sliderIsVisible:(id)visible;	// 0x35bd2479
- (void)_updateVisibility;	// 0x35bd250d
- (void)dealloc;	// 0x35bd21e1
// declared property getter: - (id)mainContext;	// 0x35bd2241
- (void)popContext;	// 0x35bd22bd
- (id)pushContext;	// 0x35bd2261
- (void)registerView:(id)view inContext:(id)context;	// 0x35bd238d
- (void)setNeedsUpdate;	// 0x35bd241d
- (void)unregisterView:(id)view inContext:(id)context;	// 0x35bd23ed
@end

