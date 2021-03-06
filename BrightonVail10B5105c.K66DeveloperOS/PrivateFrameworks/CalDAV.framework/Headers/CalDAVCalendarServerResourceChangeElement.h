/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

#import <CoreDAVItemWithHrefChildItem.h> // Unknown library

@class NSURL, CalDAVUpdateOwnerItem;

@interface CalDAVCalendarServerResourceChangeElement : CoreDAVItemWithHrefChildItem {
	CalDAVUpdateOwnerItem *_changedBy;	// 32 = 0x20
}
@property(retain) CalDAVUpdateOwnerItem *changedBy;	// G=0x34237aa5; S=0x34237ab9; @synthesize=_changedBy
@property(readonly, assign) NSURL *fullHrefURL;	// G=0x342378c5; 
- (id)init;	// 0x342377fd
// declared property getter: - (id)changedBy;	// 0x34237aa5
- (id)copyParseRules;	// 0x34237901
- (void)dealloc;	// 0x34237879
// declared property getter: - (id)fullHrefURL;	// 0x342378c5
// declared property setter: - (void)setChangedBy:(id)by;	// 0x34237ab9
@end

