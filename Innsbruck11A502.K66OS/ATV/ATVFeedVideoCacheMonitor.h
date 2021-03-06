/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSAttributedString, BRMenuItem, NSArray, BRPosterControl;

__attribute__((visibility("hidden")))
@interface ATVFeedVideoCacheMonitor : XXUnknownSuperclass {
	NSAttributedString *_posterOriginalText;	// 4 = 0x4
	BOOL _posterAlwaysShowTitlesOriginal;	// 8 = 0x8
	BRMenuItem *_menuItem;	// 12 = 0xc
	BRPosterControl *_poster;	// 16 = 0x10
	NSArray *_assetIDs;	// 20 = 0x14
}
@property(readonly, assign) NSArray *assetIDs;	// G=0x11fb51; @synthesize=_assetIDs
@property(readonly, assign) BRMenuItem *menuItem;	// G=0x11fb29; @synthesize=_menuItem
@property(readonly, assign) BRPosterControl *poster;	// G=0x11fb3d; @synthesize=_poster
- (id)initWithMenuItem:(id)menuItem assetIDs:(id)ids;	// 0x11f951
- (id)initWithPoster:(id)poster assetIDs:(id)ids;	// 0x11f9cd
- (BOOL)_assetWithAssetIDIsLoading;	// 0x11fe35
- (void)_cacheManagerStateChanged:(id)changed;	// 0x11ff51
- (id)_initWithObject:(id)object assetIDs:(id)ids;	// 0x11fb65
- (void)_itemUpdated:(id)updated;	// 0x11ff85
- (void)_updateMenuItemText;	// 0x11fc6d
- (void)_updatePosterText;	// 0x11fd09
// declared property getter: - (id)assetIDs;	// 0x11fb51
- (void)dealloc;	// 0x11fa99
// declared property getter: - (id)menuItem;	// 0x11fb29
// declared property getter: - (id)poster;	// 0x11fb3d
@end

