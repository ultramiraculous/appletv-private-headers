/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRPhotoMediaCollection.h"

@class NSString, NSDate;

__attribute__((visibility("hidden")))
@interface ATVInternetPhotosCollection : BRPhotoMediaCollection {
@private
	NSDate *_modDate;	// 44 = 0x2c
	NSDate *_lastCheckedDate;	// 48 = 0x30
	NSString *_parentAccountName;	// 52 = 0x34
	NSString *_parentAccountID;	// 56 = 0x38
	NSString *_previewURL;	// 60 = 0x3c
}
@property(retain) NSDate *lastCheckedDate;	// G=0x33967665; S=0x33967731; converted property
@property(retain) NSDate *modDate;	// G=0x33967161; S=0x3396722d; converted property
@property(retain) NSString *parentAccountID;	// G=0x33967499; S=0x33967565; converted property
@property(retain) NSString *parentAccountName;	// G=0x339672fd; S=0x339673c9; converted property
@property(retain) NSString *previewURL;	// G=0x339678d1; S=0x33967801; converted property
- (id)collectionDictionary;	// 0x3396765d
- (void)dealloc;	// 0x339670c5
- (BOOL)isLocal;	// 0x33967661
// converted property getter: - (id)lastCheckedDate;	// 0x33967665
// converted property getter: - (id)modDate;	// 0x33967161
- (long)numberOfPhotos;	// 0x33967635
// converted property getter: - (id)parentAccountID;	// 0x33967499
// converted property getter: - (id)parentAccountName;	// 0x339672fd
// converted property getter: - (id)previewURL;	// 0x339678d1
// converted property setter: - (void)setLastCheckedDate:(id)date;	// 0x33967731
// converted property setter: - (void)setModDate:(id)date;	// 0x3396722d
// converted property setter: - (void)setParentAccountID:(id)anId;	// 0x33967565
// converted property setter: - (void)setParentAccountName:(id)name;	// 0x339673c9
// converted property setter: - (void)setPreviewURL:(id)url;	// 0x33967801
@end
