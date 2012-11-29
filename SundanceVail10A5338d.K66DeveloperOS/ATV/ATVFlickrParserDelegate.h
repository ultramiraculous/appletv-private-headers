/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRBaseParserDelegate.h"

@class NSString, NSMutableDictionary, NSMutableArray;

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
@property(readonly, retain) NSMutableArray *contactInfos;	// G=0x191f11; converted property
@property(readonly, retain) NSMutableDictionary *errInfo;	// G=0x191ded; converted property
@property(readonly, assign) long photoCount;	// G=0x191e3d; converted property
@property(readonly, retain) NSMutableArray *photoInfos;	// G=0x191e4d; converted property
@property(readonly, retain) NSMutableArray *photosetInfos;	// G=0x191e5d; converted property
@property(readonly, retain) NSString *userIconFarm;	// G=0x191e2d; converted property
@property(readonly, retain) NSString *userIconServer;	// G=0x191e1d; converted property
@property(readonly, retain) NSString *userNSID;	// G=0x191dfd; converted property
@property(readonly, retain) NSString *userRealName;	// G=0x191e0d; converted property
+ (id)parserDelegate;	// 0x191375
- (BOOL)_originalImageSizeExceedsMaxSize;	// 0x191fdd
// converted property getter: - (id)contactInfos;	// 0x191f11
- (void)dealloc;	// 0x1913b9
- (void)endCount;	// 0x191691
- (void)endPhotoset;	// 0x191c1d
- (void)endRealname;	// 0x191651
- (void)endTitle;	// 0x191c41
// converted property getter: - (id)errInfo;	// 0x191ded
- (id)largeImagePath;	// 0x191f21
// converted property getter: - (long)photoCount;	// 0x191e3d
// converted property getter: - (id)photoInfos;	// 0x191e4d
// converted property getter: - (id)photosetInfos;	// 0x191e5d
- (id)photosetInfosAlphabetically;	// 0x191e6d
- (void)startContactWithAttributes:(id)attributes;	// 0x191cd1
- (void)startErrWithAttributes:(id)attributes;	// 0x1914a9
- (void)startPersonWithAttributes:(id)attributes;	// 0x1915c5
- (void)startPhotoWithAttributes:(id)attributes;	// 0x191715
- (void)startPhotosWithAttributes:(id)attributes;	// 0x1916c9
- (void)startPhotosetWithAttributes:(id)attributes;	// 0x191a31
- (void)startSizeWithAttributes:(id)attributes;	// 0x191901
- (void)startUserWithAttributes:(id)attributes;	// 0x191579
// converted property getter: - (id)userIconFarm;	// 0x191e2d
// converted property getter: - (id)userIconServer;	// 0x191e1d
// converted property getter: - (id)userNSID;	// 0x191dfd
// converted property getter: - (id)userRealName;	// 0x191e0d
@end
