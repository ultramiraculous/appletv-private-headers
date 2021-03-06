/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSDate, NSArray;

__attribute__((visibility("hidden")))
@interface RUIYTAssetsInfo : XXUnknownSuperclass {
	int _type;	// 4 = 0x4
	int _count;	// 8 = 0x8
	NSArray *_assets;	// 12 = 0xc
	NSDate *_timeStamp;	// 16 = 0x10
	int _totalQueryResults;	// 20 = 0x14
}
@property(retain) NSArray *assets;	// G=0x26d0c1; S=0x26d099; converted property
@property(assign) int count;	// G=0x26d089; S=0x26d079; converted property
@property(retain) NSDate *timeStamp;	// G=0x26d11d; S=0x26d0f5; converted property
@property(assign) int totalQueryResults;	// G=0x26d0e5; S=0x26d0d5; converted property
@property(readonly, assign) int type;	// G=0x26d069; converted property
+ (id)infoFromCollectionsDocument:(id)collectionsDocument timeStamp:(id)stamp;	// 0x26cd69
+ (id)infoFromVideosDocument:(id)videosDocument timeStamp:(id)stamp;	// 0x26ccb1
+ (id)infoWithType:(int)type assets:(id)assets count:(int)count totalQueryResults:(int)results timeStamp:(id)stamp;	// 0x26cf41
- (id)initWithType:(int)type assets:(id)assets count:(int)count totalQueryResults:(int)results timeStamp:(id)stamp;	// 0x26cfad
- (void).cxx_destruct;	// 0x26d131
// converted property getter: - (id)assets;	// 0x26d0c1
// converted property getter: - (int)count;	// 0x26d089
// converted property setter: - (void)setAssets:(id)assets;	// 0x26d099
// converted property setter: - (void)setCount:(int)count;	// 0x26d079
// converted property setter: - (void)setTimeStamp:(id)stamp;	// 0x26d0f5
// converted property setter: - (void)setTotalQueryResults:(int)results;	// 0x26d0d5
// converted property getter: - (id)timeStamp;	// 0x26d11d
// converted property getter: - (int)totalQueryResults;	// 0x26d0e5
// converted property getter: - (int)type;	// 0x26d069
@end

