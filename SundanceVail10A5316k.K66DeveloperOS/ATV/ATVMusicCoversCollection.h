/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRPhotoMediaCollection.h"

@class ATVDataClient, NSArray;

__attribute__((visibility("hidden")))
@interface ATVMusicCoversCollection : BRPhotoMediaCollection {
	ATVDataClient *_dataClient;	// 44 = 0x2c
	unsigned long _dataClientType;	// 48 = 0x30
	NSArray *_albums;	// 52 = 0x34
	NSArray *_assets;	// 56 = 0x38
}
@property(retain, nonatomic) NSArray *albums;	// G=0x1ab9b9; S=0x1ab741; @synthesize=_albums
@property(retain, nonatomic) NSArray *assets;	// G=0x1ab9c9; S=0x1ab9d9; @synthesize=_assets
@property(retain, nonatomic) ATVDataClient *dataClient;	// G=0x1ab601; S=0x1ab989; @synthesize=_dataClient
@property(assign, nonatomic) unsigned long dataClientType;	// G=0x1ab999; S=0x1ab9a9; @synthesize=_dataClientType
- (id)initWithDataClient:(id)dataClient;	// 0x1ab549
// declared property getter: - (id)albums;	// 0x1ab9b9
// declared property getter: - (id)assets;	// 0x1ab9c9
- (id)collectionID;	// 0x1ab731
// declared property getter: - (id)dataClient;	// 0x1ab601
// declared property getter: - (unsigned long)dataClientType;	// 0x1ab999
- (void)dealloc;	// 0x1ab5bd
- (id)mediaAssets;	// 0x1ab7a5
- (id)mediaTypes;	// 0x1ab945
- (id)newAlbumsQuery;	// 0x1ab611
- (id)photoAssets;	// 0x1ab795
// declared property setter: - (void)setAlbums:(id)albums;	// 0x1ab741
// declared property setter: - (void)setAssets:(id)assets;	// 0x1ab9d9
// declared property setter: - (void)setDataClient:(id)client;	// 0x1ab989
// declared property setter: - (void)setDataClientType:(unsigned long)type;	// 0x1ab9a9
- (id)title;	// 0x1ab6d5
@end

