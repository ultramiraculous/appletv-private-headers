/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
 */

#import <NSObject.h> // Unknown library

@class NSDictionary;

@interface IMUserNotification : NSObject {
	id _reserved;	// 4 = 0x4
}
@property(readonly, assign, nonatomic) unsigned displayFlags;	// G=0x36eb7ce9; 
@property(readonly, assign, nonatomic) NSDictionary *displayInformation;	// G=0x36eb7d29; 
@property(readonly, assign, nonatomic) id identifier;	// G=0x36eb7c81; 
@property(readonly, assign, nonatomic) unsigned response;	// G=0x36eb7d51; 
@property(readonly, assign, nonatomic) unsigned responseFlags;	// G=0x36eb7ddd; 
@property(readonly, assign, nonatomic) NSDictionary *responseInformation;	// G=0x36eb7e1d; 
@property(readonly, assign, nonatomic) double timeout;	// G=0x36eb7ca9; 
@property(retain, nonatomic) NSDictionary *userInfo;	// G=0x36eb7d6d; S=0x36eb7d95; 
+ (id)userNotificationWithIdentifier:(id)identifier timeout:(double)timeout alertLevel:(unsigned)level displayFlags:(unsigned)flags displayInformation:(id)information;	// 0x36eb7add
+ (id)userNotificationWithIdentifier:(id)identifier title:(id)title message:(id)message defaultButton:(id)button alternateButton:(id)button5 otherButton:(id)button6;	// 0x36eb7b41
- (id)_initWithIdentifier:(id)identifier timeout:(double)timeout displayFlags:(unsigned)flags displayInformation:(id)information;	// 0x36eb7881
- (void)_setResponseFlags:(unsigned)flags responseInformation:(id)information;	// 0x36eb7e45
- (void)dealloc;	// 0x36eb7a91
// declared property getter: - (unsigned)displayFlags;	// 0x36eb7ce9
// declared property getter: - (id)displayInformation;	// 0x36eb7d29
// declared property getter: - (id)identifier;	// 0x36eb7c81
// declared property getter: - (unsigned)response;	// 0x36eb7d51
// declared property getter: - (unsigned)responseFlags;	// 0x36eb7ddd
// declared property getter: - (id)responseInformation;	// 0x36eb7e1d
// declared property setter: - (void)setUserInfo:(id)info;	// 0x36eb7d95
// declared property getter: - (double)timeout;	// 0x36eb7ca9
// declared property getter: - (id)userInfo;	// 0x36eb7d6d
@end

