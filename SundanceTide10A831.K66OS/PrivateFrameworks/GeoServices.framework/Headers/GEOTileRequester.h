/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h> // Unknown library
#import "GeoServices-Structs.h"

@class NSThread, NSString, GEOTileKeyList;
@protocol GEOTileRequesterDelegate;

@interface GEOTileRequester : NSObject {
	GEOTileKeyList *_keyList;	// 4 = 0x4
	id<GEOTileRequesterDelegate> _delegate;	// 8 = 0x8
	id _context;	// 12 = 0xc
	NSThread *_thread;	// 16 = 0x10
	NSString *_bundleIdentifier;	// 20 = 0x14
	NSString *_bundleVersion;	// 24 = 0x18
}
@property(retain, nonatomic) NSString *bundleIdentifier;	// G=0x3025671d; S=0x3025672d; @synthesize=_bundleIdentifier
@property(retain, nonatomic) NSString *bundleVersion;	// G=0x3025673d; S=0x3025674d; @synthesize=_bundleVersion
@property(retain, nonatomic) id context;	// G=0x302566fd; S=0x3025670d; @synthesize=_context
@property(retain, nonatomic) id<GEOTileRequesterDelegate> delegate;	// G=0x302566ad; S=0x302566bd; @synthesize=_delegate
@property(readonly, assign, nonatomic) GEOTileKeyList *keyList;	// G=0x302566cd; @synthesize=_keyList
@property(retain, nonatomic) NSThread *thread;	// G=0x302566dd; S=0x302566ed; @synthesize=_thread
+ (XXStruct_nbUehC *)expiringTilesets;	// 0x302565f5
+ (unsigned)expiringTilesetsCount;	// 0x302565f1
+ (BOOL)skipNetworkForKeysWhenPreloading:(id)keysWhenPreloading;	// 0x302565f9
+ (unsigned char)tileProviderIdentifier;	// 0x3025658d
- (id)initWithKeyList:(id)keyList;	// 0x30256591
// declared property getter: - (id)bundleIdentifier;	// 0x3025671d
// declared property getter: - (id)bundleVersion;	// 0x3025673d
- (void)cancel;	// 0x302565e9
// declared property getter: - (id)context;	// 0x302566fd
- (void)dealloc;	// 0x302565fd
// declared property getter: - (id)delegate;	// 0x302566ad
// declared property getter: - (id)keyList;	// 0x302566cd
// declared property setter: - (void)setBundleIdentifier:(id)identifier;	// 0x3025672d
// declared property setter: - (void)setBundleVersion:(id)version;	// 0x3025674d
// declared property setter: - (void)setContext:(id)context;	// 0x3025670d
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x302566bd
// declared property setter: - (void)setThread:(id)thread;	// 0x302566ed
- (void)start;	// 0x302565e5
// declared property getter: - (id)thread;	// 0x302566dd
- (unsigned)tileSetForKey:(const GEOTileKey *)key;	// 0x302565ed
@end
