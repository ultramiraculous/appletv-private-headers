/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRDataStore.h"

@protocol BRMediaCollection;

@interface BRPlaylistDataStore : BRDataStore {
@private
	id<BRMediaCollection> _playlist;	// 40 = 0x28
}
- (id)initWithPlaylist:(id)playlist mediaTypes:(id)types;	// 0x32a844e5
- (void)addObject:(id)object;	// 0x32a84835
- (void)dealloc;	// 0x32a84545
- (id)loadData;	// 0x32a845e5
- (void)objectModified:(id)modified;	// 0x32a84839
- (id)playlist;	// 0x32a84591
- (void)removeObject:(id)object;	// 0x32a84889
- (BOOL)storeAppliesToObject:(id)object;	// 0x32a845a1
@end
