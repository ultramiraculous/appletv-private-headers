/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DACalDAV.framework/DACalDAV
 */

#import <NSObject.h> // Unknown library

@class NSString;

@interface CalDAVMove : NSObject {
	int _sourceCalendarID;	// 4 = 0x4
	int _itemID;	// 8 = 0x8
	NSString *_oldExternalID;	// 12 = 0xc
	int _changeID;	// 16 = 0x10
}
@property(assign) int changeID;	// G=0x340439a5; S=0x340439b9; @synthesize=_changeID
@property(assign) int itemID;	// G=0x34043955; S=0x34043969; @synthesize=_itemID
@property(retain) NSString *oldExternalID;	// G=0x34043981; S=0x34043995; @synthesize=_oldExternalID
@property(assign) int sourceCalendarID;	// G=0x34043929; S=0x3404393d; @synthesize=_sourceCalendarID
- (id)initWithSourceCalendarID:(int)sourceCalendarID itemID:(int)anId oldExternalID:(id)anId3 changeID:(int)anId4;	// 0x34043845
// declared property getter: - (int)changeID;	// 0x340439a5
- (void)dealloc;	// 0x340438dd
// declared property getter: - (int)itemID;	// 0x34043955
// declared property getter: - (id)oldExternalID;	// 0x34043981
// declared property setter: - (void)setChangeID:(int)anId;	// 0x340439b9
// declared property setter: - (void)setItemID:(int)anId;	// 0x34043969
// declared property setter: - (void)setOldExternalID:(id)anId;	// 0x34043995
// declared property setter: - (void)setSourceCalendarID:(int)anId;	// 0x3404393d
// declared property getter: - (int)sourceCalendarID;	// 0x34043929
@end

