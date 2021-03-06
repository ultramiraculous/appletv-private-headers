/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

#import <NSObject.h> // Unknown library

@class NSString;

@interface MSShareStateNotificationString : NSObject {
@private
	NSString *_sourcePersonID;	// 4 = 0x4
	NSString *_title;	// 8 = 0x8
	NSString *_body;	// 12 = 0xc
}
@property(retain, nonatomic) NSString *body;	// G=0x339a6cd5; S=0x339a6ce5; @synthesize=_body
@property(retain, nonatomic) NSString *sourcePersonID;	// G=0x339a6c65; S=0x339a6c75; @synthesize=_sourcePersonID
@property(retain, nonatomic) NSString *title;	// G=0x339a6c9d; S=0x339a6cad; @synthesize=_title
+ (id)notificationStringsWithTitle:(id)title body:(id)body sourcePersonID:(id)anId;	// 0x339a6b29
- (id)initWithTitle:(id)title body:(id)body sourcePersonID:(id)anId;	// 0x339a6ba1
- (void).cxx_destruct;	// 0x339a6d0d
// declared property getter: - (id)body;	// 0x339a6cd5
// declared property setter: - (void)setBody:(id)body;	// 0x339a6ce5
// declared property setter: - (void)setSourcePersonID:(id)anId;	// 0x339a6c75
// declared property setter: - (void)setTitle:(id)title;	// 0x339a6cad
// declared property getter: - (id)sourcePersonID;	// 0x339a6c65
// declared property getter: - (id)title;	// 0x339a6c9d
@end

