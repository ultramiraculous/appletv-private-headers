/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRSingleton.h"
#import "BRITunesUtilities.h"


__attribute__((visibility("hidden")))
@interface BRITunesLibraryUtilitiesAccess : BRSingleton <BRITunesUtilities> {
	id<BRITunesUtilities> _utilitiesDelegate;	// 4 = 0x4
}
+ (void)setSingleton:(id)singleton;	// 0x36fbe9
+ (id)singleton;	// 0x36fbd9
- (BOOL)attemptAuthorizationForAsset:(id)asset error:(id *)error;	// 0x36fc81
- (void)dealloc;	// 0x36fbf9
- (void)deauthorizeAssetIfNecessary:(id)necessary;	// 0x36fca9
- (void)deleteImportedKeybagData;	// 0x36fe45
- (id)iTunesCompareAscending:(BOOL)ascending withKey:(id)key;	// 0x36fd41
- (id)iTunesCompareAscending:(BOOL)ascending withKey:(id)key fallbackSortSelector:(SEL)selector;	// 0x36fcc9
- (int)iTunesCompareString:(id)string toString:(id)string2;	// 0x36fd85
- (void)importKeybagData:(id)data forDSID:(id)dsid;	// 0x36fe25
- (id)keyBagPathForMachineID:(unsigned long long)machineID;	// 0x36fde5
- (unsigned long)randomPlaylistIndex:(unsigned long)index;	// 0x36fdc5
- (id)rentalGUID;	// 0x36fe05
- (void)setITunesUtilitiesDelegate:(id)delegate;	// 0x36fc45
- (id)sortStringForString:(id)string;	// 0x36fd65
- (id)urlSuitableForPlayback:(id)playback;	// 0x36fda5
@end
