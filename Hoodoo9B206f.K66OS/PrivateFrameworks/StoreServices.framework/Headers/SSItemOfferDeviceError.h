/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <NSObject.h> // Unknown library

@class NSString, NSURL;

@interface SSItemOfferDeviceError : NSObject {
@private
	NSString *_localizedMessage;	// 4 = 0x4
	NSString *_localizedTitle;	// 8 = 0x8
	NSString *_localizedURLTitle;	// 12 = 0xc
	NSURL *_url;	// 16 = 0x10
}
@property(readonly, assign, nonatomic) NSURL *URL;	// G=0x327d2b6d; @synthesize=_url
@property(readonly, assign, nonatomic) NSString *localizedMessage;	// G=0x327d2b3d; @synthesize=_localizedMessage
@property(readonly, assign, nonatomic) NSString *localizedTitle;	// G=0x327d2b4d; @synthesize=_localizedTitle
@property(readonly, assign, nonatomic) NSString *localizedURLTitle;	// G=0x327d2b5d; @synthesize=_localizedURLTitle
// declared property getter: - (id)URL;	// 0x327d2b6d
- (id)_initWithMessage:(id)message title:(id)title URLTitle:(id)title3 URL:(id)url;	// 0x327d2a0d
- (void)dealloc;	// 0x327d2ab5
// declared property getter: - (id)localizedMessage;	// 0x327d2b3d
// declared property getter: - (id)localizedTitle;	// 0x327d2b4d
// declared property getter: - (id)localizedURLTitle;	// 0x327d2b5d
@end
