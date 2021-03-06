/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

#import </libobjc.A.h>
#import "NSCopying.h"
#import "iTunesStore-Structs.h"

@class NSURL, NSString;

@interface ISOpenURLRequest : NSObject <NSCopying> {
	BOOL _isITunesStoreURL;	// 4 = 0x4
	NSString *_targetIdentifier;	// 8 = 0x8
	NSString *_urlBagKey;	// 12 = 0xc
	NSURL *_url;	// 16 = 0x10
}
@property(assign, nonatomic, getter=isITunesStoreURL) BOOL ITunesStoreURL;	// G=0x33c8b6fd; S=0x33c8b70d; @synthesize=_isITunesStoreURL
@property(retain, nonatomic) NSURL *URL;	// G=0x33c8b741; S=0x33c8b751; @synthesize=_url
@property(copy, nonatomic) NSString *URLBagKey;	// G=0x33c8b761; S=0x33c8b775; @synthesize=_urlBagKey
@property(copy, nonatomic) NSString *targetIdentifier;	// G=0x33c8b71d; S=0x33c8b731; @synthesize=_targetIdentifier
+ (id)openURLRequestWithURL:(id)url;	// 0x33c8b645
- (id)init;	// 0x33c8b439
- (id)initWithURL:(id)url;	// 0x33c8b44d
- (id)initWithURLBagKey:(id)urlbagKey;	// 0x33c8b4b1
// declared property getter: - (id)URL;	// 0x33c8b741
// declared property getter: - (id)URLBagKey;	// 0x33c8b761
- (id)copyWithZone:(NSZone *)zone;	// 0x33c8b58d
- (void)dealloc;	// 0x33c8b515
- (id)description;	// 0x33c8b681
// declared property getter: - (BOOL)isITunesStoreURL;	// 0x33c8b6fd
// declared property setter: - (void)setITunesStoreURL:(BOOL)url;	// 0x33c8b70d
// declared property setter: - (void)setTargetIdentifier:(id)identifier;	// 0x33c8b731
// declared property setter: - (void)setURL:(id)url;	// 0x33c8b751
// declared property setter: - (void)setURLBagKey:(id)key;	// 0x33c8b775
// declared property getter: - (id)targetIdentifier;	// 0x33c8b71d
@end

