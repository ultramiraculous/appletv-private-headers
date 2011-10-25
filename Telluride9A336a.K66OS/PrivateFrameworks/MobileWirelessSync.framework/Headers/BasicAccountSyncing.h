/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MobileWirelessSync.framework/MobileWirelessSync
 */

#import "NSObject.h"


@protocol BasicAccountSyncing <NSObject>
- (id)defaultContainerIdentifierForDataclass:(id)dataclass;
@optional
- (BOOL)refreshContainerListForDataclass:(id)dataclass;
- (BOOL)refreshContainerListForDataclass:(id)dataclass isUserRequested:(BOOL)requested;
- (BOOL)refreshContainerWithIdentifier:(id)identifier forDataclass:(id)dataclass;
- (BOOL)refreshContainerWithIdentifier:(id)identifier forDataclass:(id)dataclass isUserRequested:(BOOL)requested;
- (BOOL)refreshContainersForDataclass:(id)dataclass;
- (BOOL)refreshContainersForDataclass:(id)dataclass isUserRequested:(BOOL)requested;
@end

