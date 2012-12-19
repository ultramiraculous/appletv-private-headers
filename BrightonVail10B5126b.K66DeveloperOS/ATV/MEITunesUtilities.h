/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "BRITunesUtilities.h"


__attribute__((visibility("hidden")))
@interface MEITunesUtilities : XXUnknownSuperclass <BRITunesUtilities> {
}
+ (void)_writeJournal:(id)journal;	// 0xc6c5
+ (void)checkInJournaledEntries;	// 0xb521
+ (void)initialize;	// 0xb301
+ (id)journalObjectForAsset:(id)asset;	// 0xb7a5
+ (void)removeJournalForRentalID:(unsigned long long)rentalID;	// 0xbbdd
- (BOOL)attemptAuthorizationForAsset:(id)asset error:(id *)error;	// 0xbe91
- (void)deauthorizeAssetIfNecessary:(id)necessary;	// 0xc0b5
- (void)deleteImportedKeybagData;	// 0xc5f1
- (id)iTunesCompareAscending:(BOOL)ascending withKey:(id)key;	// 0xc195
- (int)iTunesCompareString:(id)string toString:(id)string2;	// 0xc28d
- (void)importKeybagData:(id)data forDSID:(id)dsid;	// 0xc4fd
- (id)keyBagPathForMachineID:(unsigned long long)machineID;	// 0xc4bd
- (unsigned long)randomPlaylistIndex:(unsigned long)index;	// 0xc4b5
- (id)rentalGUID;	// 0xbe59
- (id)sortStringForString:(id)string;	// 0xc34d
- (id)urlSuitableForPlayback:(id)playback;	// 0xc4a1
@end
