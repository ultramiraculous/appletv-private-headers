/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DACalDAV.framework/DACalDAV
 */

#import <NSObject.h> // Unknown library

@class NSError;

@interface CalDAVRefreshContext : NSObject {
	BOOL _isForced;	// 4 = 0x4
	BOOL _wasUserRequested;	// 5 = 0x5
	BOOL _isCalendarsOnly;	// 6 = 0x6
	BOOL _didDownloadEvents;	// 7 = 0x7
	BOOL _didSaveDatabase;	// 8 = 0x8
	BOOL _shouldSave;	// 9 = 0x9
	BOOL _shouldSaveAccounts;	// 10 = 0xa
	BOOL _calendarFailedToSync;	// 11 = 0xb
	double _startTime;	// 12 = 0xc
	int _numDownloadedElements;	// 20 = 0x14
	BOOL _shouldRetry;	// 24 = 0x18
	int _retryTime;	// 28 = 0x1c
	NSError *_error;	// 32 = 0x20
	unsigned _localItems;	// 36 = 0x24
}
@property(assign, nonatomic) BOOL calendarFailedToSync;	// G=0x33b88199; S=0x33b881a9; @synthesize=_calendarFailedToSync
@property(assign, nonatomic) BOOL didDownloadEvents;	// G=0x33b880cd; S=0x33b880dd; @synthesize=_didDownloadEvents
@property(assign, nonatomic) BOOL didSaveDatabase;	// G=0x33b880ed; S=0x33b880fd; @synthesize=_didSaveDatabase
@property(retain, nonatomic) NSError *error;	// G=0x33b881f9; S=0x33b88209; @synthesize=_error
@property(assign, nonatomic) BOOL isCalendarsOnly;	// G=0x33b880ad; S=0x33b880bd; @synthesize=_isCalendarsOnly
@property(assign, nonatomic) BOOL isForced;	// G=0x33b8806d; S=0x33b8807d; @synthesize=_isForced
@property(assign, nonatomic) unsigned localItems;	// G=0x33b88219; S=0x33b88229; @synthesize=_localItems
@property(assign, nonatomic) int numDownloadedElements;	// G=0x33b88179; S=0x33b88189; @synthesize=_numDownloadedElements
@property(assign, nonatomic) int retryTime;	// G=0x33b881d9; S=0x33b881e9; @synthesize=_retryTime
@property(assign, nonatomic) BOOL shouldRetry;	// G=0x33b881b9; S=0x33b881c9; @synthesize=_shouldRetry
@property(assign, nonatomic) BOOL shouldSave;	// G=0x33b8810d; S=0x33b8811d; @synthesize=_shouldSave
@property(assign, nonatomic) BOOL shouldSaveAccounts;	// G=0x33b8812d; S=0x33b8813d; @synthesize=_shouldSaveAccounts
@property(assign, nonatomic) double startTime;	// G=0x33b8814d; S=0x33b88165; @synthesize=_startTime
@property(assign, nonatomic) BOOL wasUserRequested;	// G=0x33b8808d; S=0x33b8809d; @synthesize=_wasUserRequested
+ (id)defaultContext;	// 0x33b87fdd
// declared property getter: - (BOOL)calendarFailedToSync;	// 0x33b88199
- (void)dealloc;	// 0x33b88021
// declared property getter: - (BOOL)didDownloadEvents;	// 0x33b880cd
// declared property getter: - (BOOL)didSaveDatabase;	// 0x33b880ed
// declared property getter: - (id)error;	// 0x33b881f9
// declared property getter: - (BOOL)isCalendarsOnly;	// 0x33b880ad
// declared property getter: - (BOOL)isForced;	// 0x33b8806d
// declared property getter: - (unsigned)localItems;	// 0x33b88219
// declared property getter: - (int)numDownloadedElements;	// 0x33b88179
// declared property getter: - (int)retryTime;	// 0x33b881d9
// declared property setter: - (void)setCalendarFailedToSync:(BOOL)sync;	// 0x33b881a9
// declared property setter: - (void)setDidDownloadEvents:(BOOL)downloadEvents;	// 0x33b880dd
// declared property setter: - (void)setDidSaveDatabase:(BOOL)saveDatabase;	// 0x33b880fd
// declared property setter: - (void)setError:(id)error;	// 0x33b88209
// declared property setter: - (void)setIsCalendarsOnly:(BOOL)only;	// 0x33b880bd
// declared property setter: - (void)setIsForced:(BOOL)forced;	// 0x33b8807d
// declared property setter: - (void)setLocalItems:(unsigned)items;	// 0x33b88229
// declared property setter: - (void)setNumDownloadedElements:(int)elements;	// 0x33b88189
// declared property setter: - (void)setRetryTime:(int)time;	// 0x33b881e9
// declared property setter: - (void)setShouldRetry:(BOOL)retry;	// 0x33b881c9
// declared property setter: - (void)setShouldSave:(BOOL)save;	// 0x33b8811d
// declared property setter: - (void)setShouldSaveAccounts:(BOOL)saveAccounts;	// 0x33b8813d
// declared property setter: - (void)setStartTime:(double)time;	// 0x33b88165
// declared property setter: - (void)setWasUserRequested:(BOOL)requested;	// 0x33b8809d
// declared property getter: - (BOOL)shouldRetry;	// 0x33b881b9
// declared property getter: - (BOOL)shouldSave;	// 0x33b8810d
// declared property getter: - (BOOL)shouldSaveAccounts;	// 0x33b8812d
// declared property getter: - (double)startTime;	// 0x33b8814d
// declared property getter: - (BOOL)wasUserRequested;	// 0x33b8808d
@end

