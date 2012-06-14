/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRPhotoMediaCollection.h"

@class NSDate, NSString;

__attribute__((visibility("hidden")))
@interface ATVInternetPhotosCollection : BRPhotoMediaCollection {
	NSDate *_modDate;	// 44 = 0x2c
	NSDate *_lastCheckedDate;	// 48 = 0x30
	NSString *_parentAccountName;	// 52 = 0x34
	NSString *_parentAccountID;	// 56 = 0x38
	NSString *_previewURL;	// 60 = 0x3c
}
@property(retain) NSDate *lastCheckedDate;	// G=0x191081; S=0x19115d; converted property
@property(retain) NSDate *modDate;	// G=0x190b05; S=0x190be1; converted property
@property(retain) NSString *parentAccountID;	// G=0x190e8d; S=0x190f69; converted property
@property(retain) NSString *parentAccountName;	// G=0x190cc9; S=0x190da5; converted property
@property(retain) NSString *previewURL;	// G=0x19132d; S=0x191245; converted property
- (id)collectionDictionary;	// 0x191079
- (void)dealloc;	// 0x190a65
- (BOOL)isLocal;	// 0x19107d
// converted property getter: - (id)lastCheckedDate;	// 0x191081
// converted property getter: - (id)modDate;	// 0x190b05
- (long)numberOfPhotos;	// 0x191051
// converted property getter: - (id)parentAccountID;	// 0x190e8d
// converted property getter: - (id)parentAccountName;	// 0x190cc9
// converted property getter: - (id)previewURL;	// 0x19132d
// converted property setter: - (void)setLastCheckedDate:(id)date;	// 0x19115d
// converted property setter: - (void)setModDate:(id)date;	// 0x190be1
// converted property setter: - (void)setParentAccountID:(id)anId;	// 0x190f69
// converted property setter: - (void)setParentAccountName:(id)name;	// 0x190da5
// converted property setter: - (void)setPreviewURL:(id)url;	// 0x191245
@end

