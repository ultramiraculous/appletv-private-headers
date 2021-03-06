/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import "SSXPCCoding.h"
#import <NSObject.h> // Unknown library

@class NSMutableDictionary;

@interface SSSoftwareLibraryItem : NSObject <SSXPCCoding> {
	NSMutableDictionary *_etags;	// 4 = 0x4
	BOOL _profileValidated;	// 8 = 0x8
	NSMutableDictionary *_propertyValues;	// 12 = 0xc
}
@property(assign, nonatomic, getter=isProfileValidated) BOOL profileValidated;	// G=0x35882e79; S=0x35882e89; @synthesize=_profileValidated
- (id)initWithXPCEncoding:(id)xpcencoding;	// 0x35882cc5
- (id)ETagForAssetType:(id)assetType;	// 0x35882499
- (id)_initWithITunesMetadata:(id)itunesMetadata;	// 0x35882a39
- (void)_setValue:(id)value forProperty:(id)property;	// 0x35882c35
- (id)copyXPCEncoding;	// 0x35882e01
- (void)dealloc;	// 0x35882435
// declared property getter: - (BOOL)isProfileValidated;	// 0x35882e79
- (BOOL)setETag:(id)tag forAssetType:(id)assetType error:(id *)error;	// 0x358824e1
// declared property setter: - (void)setProfileValidated:(BOOL)validated;	// 0x35882e89
- (id)valueForProperty:(id)property;	// 0x358829f1
@end

