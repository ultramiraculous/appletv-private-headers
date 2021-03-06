/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSNumber;

__attribute__((visibility("hidden")))
@interface BRMarimbaSlideshowMusicSetting : XXUnknownSuperclass {
	id _serverID;	// 4 = 0x4
	unsigned _clientType;	// 8 = 0x8
	NSNumber *_playlistID;	// 12 = 0xc
}
@property(assign, nonatomic) unsigned clientType;	// G=0x22ba7d; S=0x22ba8d; @synthesize=_clientType
@property(retain, nonatomic) NSNumber *playlistID;	// G=0x22ba9d; S=0x22baad; @synthesize=_playlistID
@property(retain, nonatomic) id serverID;	// G=0x22ba5d; S=0x22ba6d; @synthesize=_serverID
- (id)initWithServer:(id)server playlistID:(id)anId;	// 0x22b869
- (id)initWithServerID:(id)serverID clientType:(unsigned)type playlistID:(id)anId;	// 0x22b905
// declared property getter: - (unsigned)clientType;	// 0x22ba7d
- (void)dealloc;	// 0x22b985
- (id)description;	// 0x22b9dd
// declared property getter: - (id)playlistID;	// 0x22ba9d
// declared property getter: - (id)serverID;	// 0x22ba5d
// declared property setter: - (void)setClientType:(unsigned)type;	// 0x22ba8d
// declared property setter: - (void)setPlaylistID:(id)anId;	// 0x22baad
// declared property setter: - (void)setServerID:(id)anId;	// 0x22ba6d
@end

