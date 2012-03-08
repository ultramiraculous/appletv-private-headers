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
@property(readonly, retain) NSData *data;	// G=0x35b58be5; converted property
@property(readonly, retain) ICSDocument *document;	// G=0x35b58c15; converted property
@property(readonly, retain) ICSEvent *event;	// G=0x35b58ca1; converted property
@property(readonly, retain) NSString *filename;	// G=0x35b58c05; converted property
@property(readonly, retain) CalDAVScheduleChangesProperty *scheduleChanges;	// G=0x35b58bf5; converted property
- (id)initWithData:(id)data filename:(id)filename;	// 0x35b58b31
- (id)initWithData:(id)data filename:(id)filename scheduleChanges:(id)changes;	// 0x35b58b55
- (id)allOccurrences;	// 0x35b5901d
- (id)calendar;	// 0x35b58c79
- (int)compare:(id)compare;	// 0x35b59145
// converted property getter: - (id)data;	// 0x35b58be5
- (void)dealloc;	// 0x35b5931d
- (id)description;	// 0x35b59205
// converted property getter: - (id)document;	// 0x35b58c15
// converted property getter: - (id)event;	// 0x35b58ca1
// converted property getter: - (id)filename;	// 0x35b58c05
- (id)masterEvent;	// 0x35b58fe1
- (id)occurrences;	// 0x35b590d1
// converted property getter: - (id)scheduleChanges;	// 0x35b58bf5
@end
