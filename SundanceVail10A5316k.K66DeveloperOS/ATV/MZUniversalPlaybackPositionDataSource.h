/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "NSObject.h"


@protocol MZUniversalPlaybackPositionDataSource <NSObject>
- (id)beginTransactionWithItemsToSyncEnumerationBlock:(id)syncEnumerationBlock;
- (void)cancelUniversalPlaybackPositionTransaction:(id)transaction;
- (void)commitUniversalPlaybackPositionTransaction:(id)transaction domainVersion:(id)version metadataEnumerationBlock:(id)block;
@end

