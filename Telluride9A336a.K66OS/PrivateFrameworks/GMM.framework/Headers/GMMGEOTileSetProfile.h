/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

#import "GMM-Structs.h"
#import <NSObject.h> // Unknown library
#import "GEOTileSetProfile.h"

@class NSString, NSURL;

__attribute__((visibility("hidden")))
@interface GMMGEOTileSetProfile : NSObject <GEOTileSetProfile> {
	BOOL _isChina;	// 4 = 0x4
}
@property(readonly, assign, nonatomic) NSString *baseURLString;	// G=0x338741e9; 
@property(assign, nonatomic) BOOL isChina;	// G=0x33874915; S=0x33874925; @synthesize=_isChina
@property(readonly, assign, nonatomic) NSURL *multiTileURL;	// G=0x338741ed; 
@property(readonly, assign, nonatomic) unsigned operatingEdition;	// G=0x338741f1; 
@property(readonly, assign, nonatomic) int scale;	// G=0x338741d1; 
@property(readonly, assign, nonatomic) int size;	// G=0x338741ad; 
@property(readonly, assign, nonatomic) int style;	// G=0x338741a9; 
+ (id)sharedProfile;	// 0x33874119
- (id)attributionInfoForTileKeys:(id)tileKeys;	// 0x3387450d
// declared property getter: - (id)baseURLString;	// 0x338741e9
- (BOOL)isAvailableForTileKey:(const GEOTileKey *)tileKey;	// 0x338741f5
// declared property getter: - (BOOL)isChina;	// 0x33874915
- (void)loadAttributionBadgeDataHiDPI:(BOOL)dpi isIPad:(BOOL)pad handler:(id)handler;	// 0x338743cd
- (int)maxChinaZoomLevel;	// 0x338741a5
- (unsigned)maxZoomLevelForTileKey:(const GEOTileKey *)tileKey;	// 0x338741f9
- (unsigned)minZoomLevelForTileKey:(const GEOTileKey *)tileKey;	// 0x338743a9
// declared property getter: - (id)multiTileURL;	// 0x338741ed
- (BOOL)needsAttributionBadge;	// 0x338743c9
// declared property getter: - (unsigned)operatingEdition;	// 0x338741f1
// declared property getter: - (int)scale;	// 0x338741d1
// declared property setter: - (void)setIsChina:(BOOL)china;	// 0x33874925
// declared property getter: - (int)size;	// 0x338741ad
// declared property getter: - (int)style;	// 0x338741a9
@end

