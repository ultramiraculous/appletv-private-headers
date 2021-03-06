/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import "Celestial-Structs.h"
#import <NSObject.h> // Unknown library
#import "NSCopying.h"

@class AVItemErrorLogEventInternal, NSDate, NSString;

@interface AVItemErrorLogEvent : NSObject <NSCopying> {
	AVItemErrorLogEventInternal *_playerItemErrorLogEvent;	// 4 = 0x4
}
@property(readonly, assign, nonatomic) NSString *URI;	// G=0x3382ead1; 
@property(readonly, assign, nonatomic) NSDate *date;	// G=0x3382ea5d; 
@property(readonly, assign, nonatomic) NSString *errorComment;	// G=0x3382ecfd; 
@property(readonly, assign, nonatomic) NSString *errorDomain;	// G=0x3382ec89; 
@property(readonly, assign, nonatomic) int errorStatusCode;	// G=0x3382ec2d; 
@property(readonly, assign, nonatomic) NSString *playbackSessionID;	// G=0x3382ebb9; 
@property(readonly, assign, nonatomic) NSString *serverAddress;	// G=0x3382eb45; 
- (id)init;	// 0x3382e8b1
- (id)initWithDictionary:(id)dictionary;	// 0x3382e949
// declared property getter: - (id)URI;	// 0x3382ead1
- (id)copyWithZone:(NSZone *)zone;	// 0x3382e99d
// declared property getter: - (id)date;	// 0x3382ea5d
- (void)dealloc;	// 0x3382e9f1
// declared property getter: - (id)errorComment;	// 0x3382ecfd
// declared property getter: - (id)errorDomain;	// 0x3382ec89
// declared property getter: - (int)errorStatusCode;	// 0x3382ec2d
- (void)finalize;	// 0x3382e9ad
// declared property getter: - (id)playbackSessionID;	// 0x3382ebb9
// declared property getter: - (id)serverAddress;	// 0x3382eb45
@end

