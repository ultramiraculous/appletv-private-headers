/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import </libobjc.A.h>
#import "SSXPCCoding.h"

@class NSDate, SSItemImageCollection, NSNumber, NSString;

@interface SSPreorder : NSObject <SSXPCCoding> {
	NSNumber *_accountID;	// 4 = 0x4
	NSString *_artistName;	// 8 = 0x8
	SSItemImageCollection *_imageCollection;	// 12 = 0xc
	unsigned long long _itemID;	// 16 = 0x10
	NSString *_itemKind;	// 24 = 0x18
	double _releaseDate;	// 28 = 0x1c
	NSString *_releaseDateString;	// 36 = 0x24
	long long _pid;	// 40 = 0x28
	unsigned long long _preorderID;	// 48 = 0x30
	NSString *_title;	// 56 = 0x38
}
@property(readonly, assign, nonatomic) NSString *artistName;	// G=0x32830575; @synthesize=_artistName
@property(readonly, assign, nonatomic) SSItemImageCollection *imageCollection;	// G=0x32830585; @synthesize=_imageCollection
@property(readonly, assign, nonatomic) NSString *itemKind;	// G=0x32830595; @synthesize=_itemKind
@property(readonly, assign, nonatomic) long long persistentIdentifier;	// G=0x328305a5; @synthesize=_pid
@property(readonly, assign, nonatomic) NSDate *releaseDate;	// G=0x3282ff0d; 
@property(readonly, assign, nonatomic) NSString *releaseDateString;	// G=0x328305bd; @synthesize=_releaseDateString
@property(readonly, assign, nonatomic) NSNumber *storeAccountIdentifier;	// G=0x328305cd; @synthesize=_accountID
@property(readonly, assign, nonatomic) unsigned long long storeItemIdentifier;	// G=0x328305dd; @synthesize=_itemID
@property(readonly, assign, nonatomic) unsigned long long storePreorderIdentifier;	// G=0x328305f5; @synthesize=_preorderID
@property(readonly, assign, nonatomic) NSString *title;	// G=0x3283060d; @synthesize=_title
- (id)initWithXPCEncoding:(id)xpcencoding;	// 0x32830221
- (id)_initWithPersistentIdentifier:(long long)persistentIdentifier;	// 0x3282fd99
- (void)_setArtistName:(id)name;	// 0x3282ff41
- (void)_setImageCollection:(id)collection;	// 0x3282ff85
- (void)_setItemKind:(id)kind;	// 0x3282ffc9
- (void)_setReleaseDate:(id)date;	// 0x3283000d
- (void)_setReleaseDateString:(id)string;	// 0x32830039
- (void)_setStoreAccountIdentifier:(id)identifier;	// 0x3283007d
- (void)_setStoreItemIdentifier:(long long)identifier;	// 0x328300c1
- (void)_setStorePreorderIdentifier:(long long)identifier;	// 0x328300d5
- (void)_setTitle:(id)title;	// 0x328300e9
// declared property getter: - (id)artistName;	// 0x32830575
- (id)copyReleaseDateStringWithStyle:(long)style;	// 0x3282fe91
- (id)copyXPCEncoding;	// 0x32830401
- (void)dealloc;	// 0x3282fddd
- (id)description;	// 0x3283012d
- (unsigned)hash;	// 0x328301ad
// declared property getter: - (id)imageCollection;	// 0x32830585
- (BOOL)isEqual:(id)equal;	// 0x328301bd
// declared property getter: - (id)itemKind;	// 0x32830595
// declared property getter: - (long long)persistentIdentifier;	// 0x328305a5
// declared property getter: - (id)releaseDate;	// 0x3282ff0d
// declared property getter: - (id)releaseDateString;	// 0x328305bd
// declared property getter: - (id)storeAccountIdentifier;	// 0x328305cd
// declared property getter: - (unsigned long long)storeItemIdentifier;	// 0x328305dd
// declared property getter: - (unsigned long long)storePreorderIdentifier;	// 0x328305f5
// declared property getter: - (id)title;	// 0x3283060d
@end
