/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AirTraffic.framework/AirTraffic
 */

#import <NSObject.h> // Unknown library

@class NSFileManager;

@interface ATAirlock : NSObject {
	NSFileManager *_fm;	// 4 = 0x4
}
+ (id)artworkPathForDataclass:(id)dataclass artworkIdentifier:(id)identifier;	// 0x314ff491
+ (id)geniusPathForDataclass:(id)dataclass geniusIdentifier:(id)identifier;	// 0x314ff4d1
+ (id)pathForDataclass:(id)dataclass;	// 0x314ff511
+ (id)sharedInstance;	// 0x314ff3f1
- (void)copyAssetToAirlock:(id)airlock;	// 0x314feba9
- (void)createAirlockForDataclasses:(id)dataclasses;	// 0x314fe735
- (void)evacuateDataclasses:(id)dataclasses;	// 0x314fe889
- (void)handleCompletedAsset:(id)asset;	// 0x314fef69
- (void)purgeAssetWithIdentifier:(id)identifier dataclass:(id)dataclass;	// 0x314feaed
@end
