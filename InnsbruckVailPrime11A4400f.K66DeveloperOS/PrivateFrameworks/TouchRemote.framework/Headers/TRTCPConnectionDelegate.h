/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/TouchRemote.framework/TouchRemote
 */

#import "NSObject.h"


@protocol TRTCPConnectionDelegate <NSObject>
@optional
- (void)connection:(id)connection didReceivePacketEvent:(id)event;
- (void)connectionDidClose:(id)connection;
@end
