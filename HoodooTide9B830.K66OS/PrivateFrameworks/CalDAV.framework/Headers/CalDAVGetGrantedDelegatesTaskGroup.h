/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

#import "CalDAVGetDelegatesBaseTaskGroup.h"


@interface CalDAVGetGrantedDelegatesTaskGroup : CalDAVGetDelegatesBaseTaskGroup {
	int _state;	// 68 = 0x44
	BOOL _fetchPrincipalDetails;	// 72 = 0x48
}
@property(assign) BOOL fetchPrincipalDetails;	// G=0x3148b655; S=0x3148b665; @synthesize=_fetchPrincipalDetails
@property(assign) int state;	// G=0x3148b675; S=0x3148b685; @synthesize=_state
- (id)initWithAccountInfoProvider:(id)accountInfoProvider principalURL:(id)url taskManager:(id)manager;	// 0x3148b695
- (void)_expandPropertiesWithAllowWrite:(BOOL)allowWrite;	// 0x3148bde5
- (void)_fetchOnlyHrefs;	// 0x3148bf7d
- (void)_finishWithError:(id)error state:(int)state;	// 0x3148c119
- (void)_getChildProperties;	// 0x3148bd31
- (id)_urlAppendingSegmentWithAllowWrite:(BOOL)allowWrite;	// 0x3148bf2d
// declared property getter: - (BOOL)fetchPrincipalDetails;	// 0x3148b655
// declared property setter: - (void)setFetchPrincipalDetails:(BOOL)details;	// 0x3148b665
// declared property setter: - (void)setState:(int)state;	// 0x3148b685
- (void)startTaskGroup;	// 0x3148bcbd
// declared property getter: - (int)state;	// 0x3148b675
- (void)task:(id)task didFinishWithError:(id)error;	// 0x3148b7e9
- (void)taskGroup:(id)group didFinishWithError:(id)error;	// 0x3148b6fd
@end

