/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DAVKit.framework/DAVKit
 */

#import "DAVKit-Structs.h"
#import "DAVRequest.h"


@interface DAVListMembers : DAVRequest {
	BOOL showHidden;	// 200 = 0xc8
}
+ (id)listMembersRequestWithSession:(id)session path:(id)path showHidden:(BOOL)hidden;	// 0x32da96f5
+ (id)listMembersRequestWithURL:(id)url showHidden:(BOOL)hidden;	// 0x32da9739
- (id)initListMembersWithSession:(id)session path:(id)path showHidden:(BOOL)hidden;	// 0x32da9659
- (id)initListMembersWithURL:(id)url showHidden:(BOOL)hidden;	// 0x32da96a9
- (void)finalizeOperation;	// 0x32da9879
- (id)members;	// 0x32da9639
@end

