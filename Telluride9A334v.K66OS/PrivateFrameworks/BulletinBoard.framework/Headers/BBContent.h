/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
 */

#import "NSCoding.h"
#import "NSCopying.h"
#import <NSObject.h> // Unknown library
#import "BulletinBoard-Structs.h"

@class NSString;

@interface BBContent : NSObject <NSCopying, NSCoding> {
@private
	NSString *_title;	// 4 = 0x4
	NSString *_subtitle;	// 8 = 0x8
	NSString *_message;	// 12 = 0xc
}
@property(copy, nonatomic) NSString *message;	// G=0x30b294b5; S=0x30b294c5; @synthesize=_message
@property(copy, nonatomic) NSString *subtitle;	// G=0x30b29481; S=0x30b29491; @synthesize=_subtitle
@property(copy, nonatomic) NSString *title;	// G=0x30b2944d; S=0x30b2945d; @synthesize=_title
+ (id)contentWithTitle:(id)title subtitle:(id)subtitle message:(id)message;	// 0x30b28fc5
- (id)initWithCoder:(id)coder;	// 0x30b29295
- (id)copyWithZone:(NSZone *)zone;	// 0x30b291e1
- (void)dealloc;	// 0x30b2904d
- (id)description;	// 0x30b293cd
- (void)encodeWithCoder:(id)coder;	// 0x30b29345
- (BOOL)isEqualToContent:(id)content;	// 0x30b290c1
// declared property getter: - (id)message;	// 0x30b294b5
// declared property setter: - (void)setMessage:(id)message;	// 0x30b294c5
// declared property setter: - (void)setSubtitle:(id)subtitle;	// 0x30b29491
// declared property setter: - (void)setTitle:(id)title;	// 0x30b2945d
// declared property getter: - (id)subtitle;	// 0x30b29481
// declared property getter: - (id)title;	// 0x30b2944d
@end

