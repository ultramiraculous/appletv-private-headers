/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import "CoreDAVItem.h"

@class CoreDAVItemWithNoChildren, CoreDAVLeafItem;

@interface CoreDAVErrorItem : CoreDAVItem {
	CoreDAVItemWithNoChildren *_numberOfMatchesWithinLimits;	// 28 = 0x1c
	CoreDAVItemWithNoChildren *_validSyncToken;	// 32 = 0x20
	CoreDAVItemWithNoChildren *_noUIDConflict;	// 36 = 0x24
	CoreDAVItemWithNoChildren *_validAddressData;	// 40 = 0x28
	CoreDAVItemWithNoChildren *_maxResourceSize;	// 44 = 0x2c
	CoreDAVItemWithNoChildren *_uid;	// 48 = 0x30
	CoreDAVItemWithNoChildren *_ctagOkay;	// 52 = 0x34
	CoreDAVItemWithNoChildren *_maxImageSize;	// 56 = 0x38
	CoreDAVItemWithNoChildren *_invalidImageType;	// 60 = 0x3c
	CoreDAVItemWithNoChildren *_imageError;	// 64 = 0x40
	CoreDAVItemWithNoChildren *_maxAttendees;	// 68 = 0x44
	CoreDAVLeafItem *_status;	// 72 = 0x48
}
@property(retain) CoreDAVItemWithNoChildren *ctagOkay;	// G=0x33409b21; S=0x33409b35; @synthesize=_ctagOkay
@property(retain) CoreDAVItemWithNoChildren *imageError;	// G=0x33409b8d; S=0x33409ba1; @synthesize=_imageError
@property(retain) CoreDAVItemWithNoChildren *invalidImageType;	// G=0x33409b69; S=0x33409b7d; @synthesize=_invalidImageType
@property(retain) CoreDAVItemWithNoChildren *maxAttendees;	// G=0x33409bb1; S=0x33409bc5; @synthesize=_maxAttendees
@property(retain) CoreDAVItemWithNoChildren *maxImageSize;	// G=0x33409b45; S=0x33409b59; @synthesize=_maxImageSize
@property(retain) CoreDAVItemWithNoChildren *maxResourceSize;	// G=0x33409ad9; S=0x33409aed; @synthesize=_maxResourceSize
@property(retain) CoreDAVItemWithNoChildren *noUIDConflict;	// G=0x33409a91; S=0x33409aa5; @synthesize=_noUIDConflict
@property(retain) CoreDAVItemWithNoChildren *numberOfMatchesWithinLimits;	// G=0x33409a49; S=0x33409a5d; @synthesize=_numberOfMatchesWithinLimits
@property(retain) CoreDAVLeafItem *status;	// G=0x33409bd5; S=0x33409be9; @synthesize=_status
@property(retain) CoreDAVItemWithNoChildren *uid;	// G=0x33409afd; S=0x33409b11; @synthesize=_uid
@property(retain) CoreDAVItemWithNoChildren *validAddressData;	// G=0x33409ab5; S=0x33409ac9; @synthesize=_validAddressData
@property(retain) CoreDAVItemWithNoChildren *validSyncToken;	// G=0x33409a6d; S=0x33409a81; @synthesize=_validSyncToken
+ (id)copyParseRules;	// 0x33409369
- (id)init;	// 0x33408ec1
// declared property getter: - (id)ctagOkay;	// 0x33409b21
- (void)dealloc;	// 0x33408eed
- (id)description;	// 0x33409019
// declared property getter: - (id)imageError;	// 0x33409b8d
// declared property getter: - (id)invalidImageType;	// 0x33409b69
// declared property getter: - (id)maxAttendees;	// 0x33409bb1
// declared property getter: - (id)maxImageSize;	// 0x33409b45
// declared property getter: - (id)maxResourceSize;	// 0x33409ad9
// declared property getter: - (id)noUIDConflict;	// 0x33409a91
// declared property getter: - (id)numberOfMatchesWithinLimits;	// 0x33409a49
// declared property setter: - (void)setCtagOkay:(id)okay;	// 0x33409b35
// declared property setter: - (void)setImageError:(id)error;	// 0x33409ba1
// declared property setter: - (void)setInvalidImageType:(id)type;	// 0x33409b7d
// declared property setter: - (void)setMaxAttendees:(id)attendees;	// 0x33409bc5
// declared property setter: - (void)setMaxImageSize:(id)size;	// 0x33409b59
// declared property setter: - (void)setMaxResourceSize:(id)size;	// 0x33409aed
// declared property setter: - (void)setNoUIDConflict:(id)conflict;	// 0x33409aa5
// declared property setter: - (void)setNumberOfMatchesWithinLimits:(id)matchesWithinLimits;	// 0x33409a5d
// declared property setter: - (void)setStatus:(id)status;	// 0x33409be9
// declared property setter: - (void)setUid:(id)uid;	// 0x33409b11
// declared property setter: - (void)setValidAddressData:(id)data;	// 0x33409ac9
// declared property setter: - (void)setValidSyncToken:(id)token;	// 0x33409a81
// declared property getter: - (id)status;	// 0x33409bd5
// declared property getter: - (id)uid;	// 0x33409afd
// declared property getter: - (id)validAddressData;	// 0x33409ab5
// declared property getter: - (id)validSyncToken;	// 0x33409a6d
@end

