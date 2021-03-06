/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library

@class NSString;

__attribute__((visibility("hidden")))
@interface AlertInfo : NSObject {
@private
	int mType;	// 4 = 0x4
	unsigned mPriority;	// 8 = 0x8
	unsigned mErrorCode;	// 12 = 0xc
	unsigned mStatusCode;	// 16 = 0x10
	NSString *mTitle;	// 20 = 0x14
	NSString *mMessage;	// 24 = 0x18
	NSString *mUrlString;	// 28 = 0x1c
	NSString *mUrlLabel;	// 32 = 0x20
}
@property(assign) unsigned mErrorCode;	// G=0x3072c6f0; S=0x3072c704; @synthesize
@property(readonly, assign) NSString *mMessage;	// G=0x3072c6a0; @synthesize
@property(assign) unsigned mPriority;	// G=0x3072c718; S=0x3072c72c; @synthesize
@property(assign) unsigned mStatusCode;	// G=0x3072c6c8; S=0x3072c6dc; @synthesize
@property(readonly, assign) NSString *mTitle;	// G=0x3072c6b4; @synthesize
@property(assign) int mType;	// G=0x3072c740; S=0x3072c754; @synthesize
@property(readonly, assign) NSString *mUrlLabel;	// G=0x3072c678; @synthesize
@property(readonly, assign) NSString *mUrlString;	// G=0x3072c68c; @synthesize
+ (id)AlertErrorCodeAsNSString:(int)string;	// 0x3072cda0
- (id)init;	// 0x3072c768
- (void)dealloc;	// 0x3072cca4
// declared property getter: - (unsigned)mErrorCode;	// 0x3072c6f0
// declared property getter: - (id)mMessage;	// 0x3072c6a0
// declared property getter: - (unsigned)mPriority;	// 0x3072c718
// declared property getter: - (unsigned)mStatusCode;	// 0x3072c6c8
// declared property getter: - (id)mTitle;	// 0x3072c6b4
// declared property getter: - (int)mType;	// 0x3072c740
// declared property getter: - (id)mUrlLabel;	// 0x3072c678
// declared property getter: - (id)mUrlString;	// 0x3072c68c
// declared property setter: - (void)setMErrorCode:(unsigned)code;	// 0x3072c704
// declared property setter: - (void)setMPriority:(unsigned)priority;	// 0x3072c72c
// declared property setter: - (void)setMStatusCode:(unsigned)code;	// 0x3072c6dc
// declared property setter: - (void)setMType:(int)type;	// 0x3072c754
- (void)setMessage:(id)message withError:(unsigned)error;	// 0x3072c9b4
- (void)setMessage:(id)message withError:(unsigned)error withStatusCode:(unsigned)statusCode;	// 0x3072c830
- (void)setTitle:(id)title;	// 0x3072cc20
- (void)setURLLabel:(id)label;	// 0x3072cb18
- (void)setURLString:(id)string;	// 0x3072cb9c
@end

