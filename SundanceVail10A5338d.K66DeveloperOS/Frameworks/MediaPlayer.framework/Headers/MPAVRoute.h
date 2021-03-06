/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <NSObject.h> // Unknown library

@class NSString;

@interface MPAVRoute : NSObject {
	BOOL _displayIsPicked;	// 4 = 0x4
	int _displayRouteType;	// 8 = 0x8
	BOOL _isPicked;	// 12 = 0xc
	BOOL _requiresPassword;	// 13 = 0xd
	unsigned _routeIndex;	// 16 = 0x10
	NSString *_routeName;	// 20 = 0x14
	int _routeType;	// 24 = 0x18
	NSString *_routeUID;	// 28 = 0x1c
}
@property(assign, nonatomic) BOOL displayIsPicked;	// G=0x341daae1; S=0x341daaf1; @synthesize=_displayIsPicked
@property(assign, nonatomic) int displayRouteType;	// G=0x341dab01; S=0x341dab11; @synthesize=_displayRouteType
@property(assign, nonatomic) BOOL isPicked;	// G=0x341dab21; S=0x341dab31; @synthesize=_isPicked
@property(readonly, assign, nonatomic) NSString *name;	// G=0x341dab41; @synthesize=_routeName
@property(readonly, assign, nonatomic) BOOL requiresPassword;	// G=0x341dab51; @synthesize=_requiresPassword
@property(readonly, assign, nonatomic) unsigned routeIndex;	// G=0x341dab61; @synthesize=_routeIndex
@property(readonly, assign, nonatomic) int routeType;	// G=0x341dab71; @synthesize=_routeType
@property(readonly, assign, nonatomic) NSString *routeUID;	// G=0x341dab81; @synthesize=_routeUID
+ (id)_audioDeviceController;	// 0x341da59d
+ (id)_availableRoutesFromAudioDeviceController:(id)audioDeviceController forType:(unsigned)type;	// 0x341da609
+ (BOOL)availableRoutesExistForType:(unsigned)type;	// 0x341da269
+ (id)availableRoutesForType:(unsigned)type;	// 0x341da291
+ (id)videoRouteForRoute:(id)route;	// 0x341da2e5
+ (id)wirelessDisplayRouteForRoute:(id)route;	// 0x341da441
- (id)_initWithName:(id)name routeType:(int)type routeUID:(id)uid routeIndex:(unsigned)index requiresPassword:(BOOL)password;	// 0x341da055
- (void)dealloc;	// 0x341da101
// declared property getter: - (BOOL)displayIsPicked;	// 0x341daae1
// declared property getter: - (int)displayRouteType;	// 0x341dab01
- (unsigned)hash;	// 0x341da165
- (BOOL)isEqual:(id)equal;	// 0x341da1b5
// declared property getter: - (BOOL)isPicked;	// 0x341dab21
// declared property getter: - (id)name;	// 0x341dab41
// declared property getter: - (BOOL)requiresPassword;	// 0x341dab51
// declared property getter: - (unsigned)routeIndex;	// 0x341dab61
// declared property getter: - (int)routeType;	// 0x341dab71
// declared property getter: - (id)routeUID;	// 0x341dab81
// declared property setter: - (void)setDisplayIsPicked:(BOOL)picked;	// 0x341daaf1
// declared property setter: - (void)setDisplayRouteType:(int)type;	// 0x341dab11
// declared property setter: - (void)setIsPicked:(BOOL)picked;	// 0x341dab31
@end

