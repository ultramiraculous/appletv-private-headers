/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

#import "DataAccess-Structs.h"
#import <NSObject.h> // Unknown library

@class NoteContext;

@interface DALocalDBWatcher : NSObject {
	int _lastSavedCalSequenceNumber;	// 4 = 0x4
	int _lastSavedABSequenceNumber;	// 8 = 0x8
	void *_abWatcher;	// 12 = 0xc
	CalDatabase *_calWatcher;	// 16 = 0x10
	NoteContext *_noteWatcher;	// 20 = 0x14
	CFDictionaryRef _concernedABPartyToBlockMap;	// 24 = 0x18
	CFDictionaryRef _concernedCalPartyToBlockMap;	// 28 = 0x1c
	CFDictionaryRef _concernedNotePartyToBlockMap;	// 32 = 0x20
	BOOL _watchingBookmarks;	// 36 = 0x24
	CFDictionaryRef _concernedBookmarkPartyToBlockMap;	// 40 = 0x28
}
@property(assign) int lastSavedABSequenceNumber;	// G=0x3396f179; S=0x3396f18d; @synthesize=_lastSavedABSequenceNumber
@property(assign) int lastSavedCalSequenceNumber;	// G=0x3396f1a5; S=0x3396f1b9; @synthesize=_lastSavedCalSequenceNumber
+ (id)sharedDBWatcher;	// 0x3396da8d
- (id)init;	// 0x3396db7d
- (void)_handleABChangeNotificationWithInfo:(id)info;	// 0x3396dd11
- (void)_handleBookmarkChangeNotification;	// 0x3396e615
- (void)_handleCalChangeNotification;	// 0x3396e1bd
- (void)_notesChangedExternally:(id)externally;	// 0x3396e9bd
- (void)dealloc;	// 0x3396dc35
// declared property getter: - (int)lastSavedABSequenceNumber;	// 0x3396f179
// declared property getter: - (int)lastSavedCalSequenceNumber;	// 0x3396f1a5
- (void)noteABDBDirChanged;	// 0x3396ee75
- (void)noteCalDBDirChanged;	// 0x3396f015
- (void)registerConcernedABParty:(id)party withChangedBlock:(id)changedBlock;	// 0x3396de29
- (void)registerConcernedBookmarkParty:(id)party withChangedBlock:(id)changedBlock;	// 0x3396e6c5
- (void)registerConcernedCalParty:(id)party withChangedBlock:(id)changedBlock;	// 0x3396e2b1
- (void)registerConcernedNoteParty:(id)party withChangedBlock:(id)changedBlock;	// 0x3396eadd
- (void)removeConcernedABParty:(id)party;	// 0x3396e089
- (void)removeConcernedBookmarkParty:(id)party;	// 0x3396e8a9
- (void)removeConcernedCalParty:(id)party;	// 0x3396e4d9
- (void)removeConcernedNoteParty:(id)party;	// 0x3396ed2d
// declared property setter: - (void)setLastSavedABSequenceNumber:(int)number;	// 0x3396f18d
// declared property setter: - (void)setLastSavedCalSequenceNumber:(int)number;	// 0x3396f1b9
@end

