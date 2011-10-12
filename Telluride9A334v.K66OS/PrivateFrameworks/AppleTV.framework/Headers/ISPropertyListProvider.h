/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "NSCopying.h"
#import "ISDataProvider.h"
#import "AppleTV-Structs.h"


__attribute__((visibility("hidden")))
@interface ISPropertyListProvider : ISDataProvider <NSCopying> {
@private
	BOOL _shouldPostFooterSectionChanged;	// 36 = 0x24
	BOOL _shouldProcessAccount;	// 37 = 0x25
	BOOL _shouldProcessAuthenticationDialogs;	// 38 = 0x26
	BOOL _shouldProcessDialogs;	// 39 = 0x27
	BOOL _shouldProcessProtocol;	// 40 = 0x28
	BOOL _shouldTriggerDownloads;	// 41 = 0x29
}
@property(assign) BOOL shouldPostFooterSectionChanged;	// G=0x33351049; S=0x33351059; @synthesize=_shouldPostFooterSectionChanged
@property(assign) BOOL shouldProcessAccount;	// G=0x33351069; S=0x33351079; @synthesize=_shouldProcessAccount
@property(assign) BOOL shouldProcessAuthenticationDialogs;	// G=0x33351089; S=0x33351099; @synthesize=_shouldProcessAuthenticationDialogs
@property(assign) BOOL shouldProcessDialogs;	// G=0x333510a9; S=0x333510b9; @synthesize=_shouldProcessDialogs
@property(assign) BOOL shouldProcessProtocol;	// G=0x333510c9; S=0x333510d9; @synthesize=_shouldProcessProtocol
@property(assign) BOOL shouldTriggerDownloads;	// G=0x333510e9; S=0x333510f9; @synthesize=_shouldTriggerDownloads
- (id)init;	// 0x3334fc75
- (void)_checkDownloadQueues;	// 0x33350999
- (void)_performActionsForResponse:(id)response;	// 0x3335099d
- (BOOL)_processFailureTypeFromPropertyList:(id)propertyList error:(id *)error;	// 0x33350dfd
- (BOOL)_runAuthorizationDialog:(id)dialog returningError:(id *)error;	// 0x33350eb5
- (void)_selectFooterSection:(id)section;	// 0x33350db1
- (BOOL)_verifyAccountInfo;	// 0x3334fdf5
- (id)copyWithZone:(NSZone *)zone;	// 0x3334fd01
- (BOOL)parseData:(id)data returningError:(id *)error;	// 0x333508ad
- (BOOL)processDialogFromPropertyList:(id)propertyList returningError:(id *)error;	// 0x33350379
- (BOOL)processPropertyList:(id)list returningError:(id *)error;	// 0x33350661
// declared property setter: - (void)setShouldPostFooterSectionChanged:(BOOL)postFooterSectionChanged;	// 0x33351059
// declared property setter: - (void)setShouldProcessAccount:(BOOL)processAccount;	// 0x33351079
// declared property setter: - (void)setShouldProcessAuthenticationDialogs:(BOOL)processAuthenticationDialogs;	// 0x33351099
// declared property setter: - (void)setShouldProcessDialogs:(BOOL)processDialogs;	// 0x333510b9
// declared property setter: - (void)setShouldProcessProtocol:(BOOL)processProtocol;	// 0x333510d9
// declared property setter: - (void)setShouldTriggerDownloads:(BOOL)triggerDownloads;	// 0x333510f9
// declared property getter: - (BOOL)shouldPostFooterSectionChanged;	// 0x33351049
// declared property getter: - (BOOL)shouldProcessAccount;	// 0x33351069
// declared property getter: - (BOOL)shouldProcessAuthenticationDialogs;	// 0x33351089
// declared property getter: - (BOOL)shouldProcessDialogs;	// 0x333510a9
// declared property getter: - (BOOL)shouldProcessProtocol;	// 0x333510c9
// declared property getter: - (BOOL)shouldTriggerDownloads;	// 0x333510e9
@end

