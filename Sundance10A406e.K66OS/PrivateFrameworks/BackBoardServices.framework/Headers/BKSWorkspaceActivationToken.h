/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
 */

#import <NSObject.h> // Unknown library
#import "NSCopying.h"
#import "BKSXPCCoding.h"
#import "BackBoardServices-Structs.h"

@class NSDate;

@interface BKSWorkspaceActivationToken : NSObject <NSCopying, BKSXPCCoding> {
	NSDate *_timestamp;	// 4 = 0x4
}
@property(retain, nonatomic) NSDate *timestamp;	// G=0x36418d69; S=0x36418d79; @synthesize=_timestamp
+ (id)token;	// 0x36418a21
- (id)init;	// 0x36418a59
- (id)initWithXPCDictionary:(id)xpcdictionary;	// 0x36418ca1
- (id)copyWithZone:(NSZone *)zone;	// 0x36418c39
- (void)dealloc;	// 0x36418abd
- (id)description;	// 0x36418b79
- (void)encodeWithXPCDictionary:(id)xpcdictionary;	// 0x36418d29
- (BOOL)isEqual:(id)equal;	// 0x36418b09
// declared property setter: - (void)setTimestamp:(id)timestamp;	// 0x36418d79
- (id)shortDescription;	// 0x36418bdd
// declared property getter: - (id)timestamp;	// 0x36418d69
@end

