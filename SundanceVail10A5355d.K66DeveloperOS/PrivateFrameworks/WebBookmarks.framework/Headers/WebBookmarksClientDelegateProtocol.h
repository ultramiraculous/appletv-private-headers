/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebBookmarks.framework/WebBookmarks
 */

#import "NSObject.h"


@protocol WebBookmarksClientDelegateProtocol <NSObject>
@optional
- (void)didStartFetchingReadingListItem:(id)item;
- (void)didStopFetchingReadingListItem:(id)item;
- (void)didUpdateReadingListFetchingProgress:(id)progress;
@end

