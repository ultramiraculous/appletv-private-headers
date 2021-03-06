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

@class BKSMachSendRight, NSNumber, NSString;

@interface BKSApplicationProcessInfo : NSObject <NSCopying, BKSXPCCoding> {
	NSString *_bundleIdentifier;	// 4 = 0x4
	NSNumber *_pidNumber;	// 8 = 0x8
	NSNumber *_beingDebugged;	// 12 = 0xc
	BKSMachSendRight *_eventPort;	// 16 = 0x10
	BOOL _suspended;	// 20 = 0x14
	BOOL _classic;	// 21 = 0x15
}
@property(retain, nonatomic) NSNumber *beingDebugged;	// G=0x3513139d; S=0x351313ad; @synthesize=_beingDebugged
@property(copy, nonatomic) NSString *bundleIdentifier;	// G=0x35131359; S=0x3513136d; @synthesize=_bundleIdentifier
@property(assign, nonatomic) BOOL classic;	// G=0x351313fd; S=0x3513140d; @synthesize=_classic
@property(retain, nonatomic) BKSMachSendRight *eventPort;	// G=0x351313bd; S=0x351313cd; @synthesize=_eventPort
@property(retain, nonatomic) NSNumber *pidNumber;	// G=0x3513137d; S=0x3513138d; @synthesize=_pidNumber
@property(assign, nonatomic) BOOL suspended;	// G=0x351313dd; S=0x351313ed; @synthesize=_suspended
- (id)initWithInfo:(id)info zone:(NSZone *)zone;	// 0x35130ecd
- (id)initWithXPCDictionary:(id)xpcdictionary;	// 0x351311a1
// declared property getter: - (id)beingDebugged;	// 0x3513139d
// declared property getter: - (id)bundleIdentifier;	// 0x35131359
// declared property getter: - (BOOL)classic;	// 0x351313fd
- (id)copyWithZone:(NSZone *)zone;	// 0x3513115d
- (void)dealloc;	// 0x35130fe9
- (id)description;	// 0x35131061
- (void)encodeWithXPCDictionary:(id)xpcdictionary;	// 0x3513128d
// declared property getter: - (id)eventPort;	// 0x351313bd
// declared property getter: - (id)pidNumber;	// 0x3513137d
// declared property setter: - (void)setBeingDebugged:(id)debugged;	// 0x351313ad
// declared property setter: - (void)setBundleIdentifier:(id)identifier;	// 0x3513136d
// declared property setter: - (void)setClassic:(BOOL)classic;	// 0x3513140d
// declared property setter: - (void)setEventPort:(id)port;	// 0x351313cd
// declared property setter: - (void)setPidNumber:(id)number;	// 0x3513138d
// declared property setter: - (void)setSuspended:(BOOL)suspended;	// 0x351313ed
// declared property getter: - (BOOL)suspended;	// 0x351313dd
@end

