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

@class NSMutableDictionary, NSCountedSet;

@interface BBAttachments : NSObject <NSCopying, NSCoding> {
@private
	int primaryType;	// 4 = 0x4
	NSCountedSet *_additionalAttachments;	// 8 = 0x8
	NSMutableDictionary *_clientSideComposedImageInfos;	// 12 = 0xc
}
@property(retain, nonatomic) NSCountedSet *additionalAttachments;	// G=0x36b7efa5; S=0x36b7efb5; @synthesize=_additionalAttachments
@property(retain, nonatomic) NSMutableDictionary *clientSideComposedImageInfos;	// G=0x36b7efc5; S=0x36b7efd5; @synthesize=_clientSideComposedImageInfos
@property(assign, nonatomic) int primaryType;	// G=0x36b7ef85; S=0x36b7ef95; @synthesize
- (id)initWithCoder:(id)coder;	// 0x36b7ee65
- (void)addAttachmentOfType:(int)type;	// 0x36b7ec3d
// declared property getter: - (id)additionalAttachments;	// 0x36b7efa5
// declared property getter: - (id)clientSideComposedImageInfos;	// 0x36b7efc5
- (id)copyWithZone:(NSZone *)zone;	// 0x36b7edb5
- (void)dealloc;	// 0x36b7ebd9
- (void)encodeWithCoder:(id)coder;	// 0x36b7ef19
- (BOOL)isEqualToAttachments:(id)attachments;	// 0x36b7ed45
- (unsigned)numberOfAdditionalAttachments;	// 0x36b7ecc9
- (unsigned)numberOfAdditionalAttachmentsOfType:(int)type;	// 0x36b7ecfd
// declared property getter: - (int)primaryType;	// 0x36b7ef85
// declared property setter: - (void)setAdditionalAttachments:(id)attachments;	// 0x36b7efb5
// declared property setter: - (void)setClientSideComposedImageInfos:(id)infos;	// 0x36b7efd5
// declared property setter: - (void)setPrimaryType:(int)type;	// 0x36b7ef95
@end
