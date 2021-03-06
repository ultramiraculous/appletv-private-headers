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
@property(retain, nonatomic) NSDate *timestamp;	// G=0x35131de5; S=0x35131df5; @synthesize=_timestamp
+ (id)token;	// 0x35131a9d
- (id)init;	// 0x35131ad5
- (id)initWithXPCDictionary:(id)xpcdictionary;	// 0x35131d1d
- (id)copyWithZone:(NSZone *)zone;	// 0x35131cb5
- (void)dealloc;	// 0x35131b39
- (id)description;	// 0x35131bf5
- (void)encodeWithXPCDictionary:(id)xpcdictionary;	// 0x35131da5
- (BOOL)isEqual:(id)equal;	// 0x35131b85
// declared property setter: - (void)setTimestamp:(id)timestamp;	// 0x35131df5
- (id)shortDescription;	// 0x35131c59
// declared property getter: - (id)timestamp;	// 0x35131de5
@end

