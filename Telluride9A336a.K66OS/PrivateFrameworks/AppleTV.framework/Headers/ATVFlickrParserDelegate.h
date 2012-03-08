/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRBaseParserDelegate.h"

@class NSString, NSMutableDictionary, NSMutableArray;

__attribute__((visibility("hidden")))
@interface ATVFlickrParserDelegate : BRBaseParserDelegate {
@private
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
@property(readonly, retain) NSMutableArray *contactInfos;	// G=0x339628dd; converted property
@property(readonly, retain) NSMutableDictionary *errInfo;	// G=0x339627b9; converted property
@property(readonly, assign) long photoCount;	// G=0x33962809; converted property
@property(readonly, retain) NSMutableArray *photoInfos;	// G=0x33962819; converted property
@property(readonly, retain) NSMutableArray *photosetInfos;	// G=0x33962829; converted property
@property(readonly, retain) NSString *userIconFarm;	// G=0x339627f9; converted property
@property(readonly, retain) NSString *userIconServer;	// G=0x339627e9; converted property
@property(readonly, retain) NSString *userNSID;	// G=0x339627c9; converted property
@property(readonly, retain) NSString *userRealName;	// G=0x339627d9; converted property
+ (id)parserDelegate;	// 0x33961d21
- (BOOL)_originalImageSizeExceedsMaxSize;	// 0x339629a9
// converted property getter: - (id)contactInfos;	// 0x339628dd
- (void)dealloc;	// 0x33961d65
- (void)endCount;	// 0x33962045
- (void)endPhotoset;	// 0x339625e5
- (void)endRealname;	// 0x33962001
- (void)endTitle;	// 0x33962609
// converted property getter: - (id)errInfo;	// 0x339627b9
- (id)largeImagePath;	// 0x339628ed
// converted property getter: - (long)photoCount;	// 0x33962809
// converted property getter: - (id)photoInfos;	// 0x33962819
// converted property getter: - (id)photosetInfos;	// 0x33962829
- (id)photosetInfosAlphabetically;	// 0x33962839
- (void)startContactWithAttributes:(id)attributes;	// 0x33962695
- (void)startErrWithAttributes:(id)attributes;	// 0x33961e51
- (void)startPersonWithAttributes:(id)attributes;	// 0x33961f75
- (void)startPhotoWithAttributes:(id)attributes;	// 0x339620c9
- (void)startPhotosWithAttributes:(id)attributes;	// 0x3396207d
- (void)startPhotosetWithAttributes:(id)attributes;	// 0x339623cd
- (void)startSizeWithAttributes:(id)attributes;	// 0x339622a9
- (void)startUserWithAttributes:(id)attributes;	// 0x33961f25
// converted property getter: - (id)userIconFarm;	// 0x339627f9
// converted property getter: - (id)userIconServer;	// 0x339627e9
// converted property getter: - (id)userNSID;	// 0x339627c9
// converted property getter: - (id)userRealName;	// 0x339627d9
@end
