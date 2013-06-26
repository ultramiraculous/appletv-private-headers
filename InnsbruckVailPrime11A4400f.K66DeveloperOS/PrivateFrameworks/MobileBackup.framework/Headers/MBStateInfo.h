/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MobileBackup.framework/MobileBackup
 */

#import "NSCopying.h"
#import </libobjc.A.h>
#import "NSCoding.h"
#import "MobileBackup-Structs.h"

@class NSDate, NSError;

@interface MBStateInfo : NSObject <NSCoding, NSCopying> {
	int _state;	// 4 = 0x4
	float _progress;	// 8 = 0x8
	unsigned _estimatedTimeRemaining;	// 12 = 0xc
	NSError *_error;	// 16 = 0x10
	NSDate *_date;	// 20 = 0x14
}
@property(readonly, assign, nonatomic) NSDate *date;	// G=0x31490b35; @synthesize=_date
@property(readonly, assign, nonatomic) NSError *error;	// G=0x31490b25; @synthesize=_error
@property(readonly, assign, nonatomic) unsigned estimatedTimeRemaining;	// G=0x31490b15; @synthesize=_estimatedTimeRemaining
@property(readonly, assign, nonatomic) float progress;	// G=0x31490b05; @synthesize=_progress
@property(readonly, assign, nonatomic) int state;	// G=0x31490af5; @synthesize=_state
- (id)initWithCoder:(id)coder;	// 0x31490601
- (id)initWithDictionaryRepresentation:(id)dictionaryRepresentation;	// 0x31490401
- (id)initWithState:(int)state progress:(float)progress estimatedTimeRemaining:(unsigned)remaining error:(id)error;	// 0x3149033d
- (id)copyWithZone:(NSZone *)zone;	// 0x31490795
// declared property getter: - (id)date;	// 0x31490b35
- (void)dealloc;	// 0x3149081d
- (id)description;	// 0x31490a39
- (id)dictionaryRepresentation;	// 0x314908f5
- (void)encodeWithCoder:(id)coder;	// 0x314906e9
// declared property getter: - (id)error;	// 0x31490b25
// declared property getter: - (unsigned)estimatedTimeRemaining;	// 0x31490b15
// declared property getter: - (float)progress;	// 0x31490b05
- (void)setError:(id)error;	// 0x314908b1
- (void)setEstimatedTimeRemaining:(unsigned)remaining;	// 0x314908a1
- (void)setProgress:(float)progress;	// 0x31490891
- (void)setState:(int)state;	// 0x31490881
// declared property getter: - (int)state;	// 0x31490af5
@end
