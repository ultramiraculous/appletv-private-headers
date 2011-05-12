/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DAVKit.framework/DAVKit
 */

#import "DAVKit-Structs.h"
#import "DAVRequest.h"


@interface DAVMove : DAVRequest {
}
+ (id)moveRequestWithSession:(id)session path:(id)path toPath:(id)path3;	// 0x3008a511
- (id)initMoveWithSession:(id)session path:(id)path toPath:(id)path3;	// 0x3008a4d1
- (void)addToHeader:(id)header;	// 0x3008a551
- (id)dependenciesList;	// 0x3008a409
@end
