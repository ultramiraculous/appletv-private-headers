/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DACalDAV.framework/DACalDAV
 */

#import <NSObject.h> // Unknown library

@class NSString, NSData, CalDAVScheduleChangesProperty, ICSDocument, ICSEvent;

@interface CaliTIPMessage : NSObject {
	NSData *_data;	// 4 = 0x4
	CalDAVScheduleChangesProperty *_scheduleChanges;	// 8 = 0x8
	NSString *_filename;	// 12 = 0xc
	ICSDocument *_document;	// 16 = 0x10
	ICSEvent *_event;	// 20 = 0x14
}
@property(readonly, retain) NSData *data;	// G=0x33158f95; converted property
@property(readonly, retain) ICSDocument *document;	// G=0x33158fc5; converted property
@property(readonly, retain) ICSEvent *event;	// G=0x33159051; converted property
@property(readonly, retain) NSString *filename;	// G=0x33158fb5; converted property
@property(readonly, retain) CalDAVScheduleChangesProperty *scheduleChanges;	// G=0x33158fa5; converted property
- (id)initWithData:(id)data filename:(id)filename;	// 0x33158ee1
- (id)initWithData:(id)data filename:(id)filename scheduleChanges:(id)changes;	// 0x33158f05
- (id)allOccurrences;	// 0x331593cd
- (id)calendar;	// 0x33159029
- (int)compare:(id)compare;	// 0x331594f5
// converted property getter: - (id)data;	// 0x33158f95
- (void)dealloc;	// 0x331596cd
- (id)description;	// 0x331595b5
// converted property getter: - (id)document;	// 0x33158fc5
// converted property getter: - (id)event;	// 0x33159051
// converted property getter: - (id)filename;	// 0x33158fb5
- (id)masterEvent;	// 0x33159391
- (id)occurrences;	// 0x33159481
// converted property getter: - (id)scheduleChanges;	// 0x33158fa5
@end

