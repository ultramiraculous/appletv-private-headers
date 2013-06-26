/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRBaseParserDelegate.h"

@class NSMutableArray, NSString, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface ATVFlickrParserDelegate : BRBaseParserDelegate {
	NSMutableDictionary *_errInfo;	// 12 = 0xc
	NSString *_userNSID;	// 16 = 0x10
	NSString *_userRealName;	// 20 = 0x14
	NSString *_userIconServer;	// 24 = 0x18
	NSString *_userIconFarm;	// 28 = 0x1c
	NSMutableArray *_photoInfos;	// 32 = 0x20
	NSMutableArray *_photosetInfos;	// 36 = 0x24
	BOOL _photosetInfoCreated;	// 40 = 0x28
	int _curPhotosetInfoIndex;	// 44 = 0x2c
	NSMutableArray *_contactInfos;	// 48 = 0x30
	NSMutableDictionary *_photoSizeInfo;	// 52 = 0x34
	long _photoCount;	// 56 = 0x38
}
@property(readonly, retain) NSMutableArray *contactInfos;	// G=0x1bc241; converted property
@property(readonly, retain) NSMutableDictionary *errInfo;	// G=0x1bc11d; converted property
@property(readonly, assign) long photoCount;	// G=0x1bc16d; converted property
@property(readonly, retain) NSMutableArray *photoInfos;	// G=0x1bc17d; converted property
@property(readonly, retain) NSMutableArray *photosetInfos;	// G=0x1bc18d; converted property
@property(readonly, retain) NSString *userIconFarm;	// G=0x1bc15d; converted property
@property(readonly, retain) NSString *userIconServer;	// G=0x1bc14d; converted property
@property(readonly, retain) NSString *userNSID;	// G=0x1bc12d; converted property
@property(readonly, retain) NSString *userRealName;	// G=0x1bc13d; converted property
+ (id)parserDelegate;	// 0x1bb6a5
- (BOOL)_originalImageSizeExceedsMaxSize;	// 0x1bc30d
// converted property getter: - (id)contactInfos;	// 0x1bc241
- (void)dealloc;	// 0x1bb6e9
- (void)endCount;	// 0x1bb9c1
- (void)endPhotoset;	// 0x1bbf4d
- (void)endRealname;	// 0x1bb981
- (void)endTitle;	// 0x1bbf71
// converted property getter: - (id)errInfo;	// 0x1bc11d
- (id)largeImagePath;	// 0x1bc251
// converted property getter: - (long)photoCount;	// 0x1bc16d
// converted property getter: - (id)photoInfos;	// 0x1bc17d
// converted property getter: - (id)photosetInfos;	// 0x1bc18d
- (id)photosetInfosAlphabetically;	// 0x1bc19d
- (void)startContactWithAttributes:(id)attributes;	// 0x1bc001
- (void)startErrWithAttributes:(id)attributes;	// 0x1bb7d9
- (void)startPersonWithAttributes:(id)attributes;	// 0x1bb8f5
- (void)startPhotoWithAttributes:(id)attributes;	// 0x1bba45
- (void)startPhotosWithAttributes:(id)attributes;	// 0x1bb9f9
- (void)startPhotosetWithAttributes:(id)attributes;	// 0x1bbd61
- (void)startSizeWithAttributes:(id)attributes;	// 0x1bbc31
- (void)startUserWithAttributes:(id)attributes;	// 0x1bb8a9
// converted property getter: - (id)userIconFarm;	// 0x1bc15d
// converted property getter: - (id)userIconServer;	// 0x1bc14d
// converted property getter: - (id)userNSID;	// 0x1bc12d
// converted property getter: - (id)userRealName;	// 0x1bc13d
@end
