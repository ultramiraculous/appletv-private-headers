/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import <NSObject.h> // Unknown library

@class NSDate, NSString, ASEventUID;

@interface ASMeetingResponseItem : NSObject {
	NSString *_deliveryItemFolderId;	// 4 = 0x4
	NSString *_deliveryItemServerId;	// 8 = 0x8
	int _meetingResponse;	// 12 = 0xc
	ASEventUID *_eventUID;	// 16 = 0x10
	NSString *_instanceId;	// 20 = 0x14
	NSString *_calEventServerId;	// 24 = 0x18
	int _status;	// 28 = 0x1c
	id _context;	// 32 = 0x20
@private
	NSDate *_instanceDate;	// 36 = 0x24
}
@property(retain) NSString *calEventServerId;	// G=0x309492cd; S=0x309492e1; @synthesize=_calEventServerId
@property(retain) id context;	// G=0x3094931d; S=0x30949331; @synthesize=_context
@property(readonly, assign) NSString *deliveryItemFolderId;	// G=0x30949269; @synthesize=_deliveryItemFolderId
@property(readonly, assign) NSString *deliveryItemServerId;	// G=0x3094927d; @synthesize=_deliveryItemServerId
@property(readonly, assign) ASEventUID *eventUID;	// G=0x309492b9; @synthesize=_eventUID
@property(readonly, assign) NSDate *instanceDate;	// G=0x30949291; @synthesize=_instanceDate
@property(readonly, assign) int meetingResponse;	// G=0x309492a5; @synthesize=_meetingResponse
@property(assign) int status;	// G=0x309492f1; S=0x30949305; @synthesize=_status
- (id)initWithDeliveryItemFolderId:(id)deliveryItemFolderId deliveryItemServerId:(id)anId instanceDate:(id)date meetingResponse:(int)response eventUID:(id)uid;	// 0x3094901d
// declared property getter: - (id)calEventServerId;	// 0x309492cd
// declared property getter: - (id)context;	// 0x3094931d
- (void)dealloc;	// 0x309491b5
// declared property getter: - (id)deliveryItemFolderId;	// 0x30949269
// declared property getter: - (id)deliveryItemServerId;	// 0x3094927d
- (id)description;	// 0x309490d9
// declared property getter: - (id)eventUID;	// 0x309492b9
// declared property getter: - (id)instanceDate;	// 0x30949291
// declared property getter: - (int)meetingResponse;	// 0x309492a5
// declared property setter: - (void)setCalEventServerId:(id)anId;	// 0x309492e1
// declared property setter: - (void)setContext:(id)context;	// 0x30949331
// declared property setter: - (void)setStatus:(int)status;	// 0x30949305
// declared property getter: - (int)status;	// 0x309492f1
@end
