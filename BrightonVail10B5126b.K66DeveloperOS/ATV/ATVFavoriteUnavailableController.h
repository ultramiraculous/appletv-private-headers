/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BROptionDialog.h"

@class ATVStoreFavorite;

__attribute__((visibility("hidden")))
@interface ATVFavoriteUnavailableController : BROptionDialog {
	ATVStoreFavorite *_favorite;	// 168 = 0xa8
}
- (id)initWithStoreFavorite:(id)storeFavorite;	// 0x14b515
- (void)_optionSelected:(id)selected;	// 0x14b73d
- (id)_textForFavoriteType:(int)favoriteType;	// 0x14b6fd
- (void)dealloc;	// 0x14b6b1
@end
