/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
 */

#import "NSCoding.h"
#import "BulletinBoard-Structs.h"
#import "NSCopying.h"
#import <NSObject.h> // Unknown library

@class BBAction, NSString;

@interface BBButton : NSObject <NSCopying, NSCoding> {
	NSString *_title;	// 4 = 0x4
	BBAction *_action;	// 8 = 0x8
}
@property(retain, nonatomic) BBAction *action;	// G=0x37269b0d; S=0x37269b1d; @synthesize=_action
@property(copy, nonatomic) NSString *title;	// G=0x37269ae9; S=0x37269afd; @synthesize=_title
+ (void)_addButtonToCache:(id)cache;	// 0x372694f1
+ (id)_possiblyCachedButtonForInitializedButton:(id)initializedButton;	// 0x372695bd
+ (void)_removeButtonFromCache:(id)cache;	// 0x37269549
+ (id)buttonWithTitle:(id)title action:(id)action;	// 0x3726965d
- (id)initWithCoder:(id)coder;	// 0x372699b5
// declared property getter: - (id)action;	// 0x37269b0d
- (id)copyWithZone:(NSZone *)zone;	// 0x372699a5
- (void)dealloc;	// 0x37269765
- (id)description;	// 0x37269915
- (void)encodeWithCoder:(id)coder;	// 0x37269a85
- (unsigned)hash;	// 0x372698cd
- (BOOL)isEqual:(id)equal;	// 0x372697d9
// declared property setter: - (void)setAction:(id)action;	// 0x37269b1d
// declared property setter: - (void)setTitle:(id)title;	// 0x37269afd
// declared property getter: - (id)title;	// 0x37269ae9
@end

