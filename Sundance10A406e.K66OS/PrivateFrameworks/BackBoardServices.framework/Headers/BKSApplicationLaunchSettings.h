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

@class NSString, NSDictionary, NSArray;

@interface BKSApplicationLaunchSettings : NSObject <NSCopying, BKSXPCCoding> {
	NSDictionary *_environment;	// 4 = 0x4
	BOOL _waitForDebugger;	// 8 = 0x8
	BOOL _disableASLR;	// 9 = 0x9
	BOOL _checkForLeaks;	// 10 = 0xa
	NSArray *_arguments;	// 12 = 0xc
	NSString *_standardOut;	// 16 = 0x10
	NSString *_standardError;	// 20 = 0x14
}
@property(retain, nonatomic) NSArray *arguments;	// G=0x364164b5; S=0x364164c5; @synthesize=_arguments
@property(assign, nonatomic) BOOL checkForLeaks;	// G=0x36416495; S=0x364164a5; @synthesize=_checkForLeaks
@property(assign, nonatomic) BOOL disableASLR;	// G=0x36416475; S=0x36416485; @synthesize=_disableASLR
@property(retain, nonatomic) NSDictionary *environment;	// G=0x36416435; S=0x36416445; @synthesize=_environment
@property(copy, nonatomic) NSString *standardError;	// G=0x364164f9; S=0x3641650d; @synthesize=_standardError
@property(copy, nonatomic) NSString *standardOut;	// G=0x364164d5; S=0x364164e9; @synthesize=_standardOut
@property(assign, nonatomic) BOOL waitForDebugger;	// G=0x36416455; S=0x36416465; @synthesize=_waitForDebugger
- (id)initWithSettings:(id)settings zone:(NSZone *)zone;	// 0x36415e69
- (id)initWithXPCDictionary:(id)xpcdictionary;	// 0x3641623d
// declared property getter: - (id)arguments;	// 0x364164b5
// declared property getter: - (BOOL)checkForLeaks;	// 0x36416495
- (id)copyWithZone:(NSZone *)zone;	// 0x36416201
- (void)dealloc;	// 0x36415fb9
- (id)description;	// 0x36416045
// declared property getter: - (BOOL)disableASLR;	// 0x36416475
- (void)encodeWithXPCDictionary:(id)xpcdictionary;	// 0x36416345
// declared property getter: - (id)environment;	// 0x36416435
// declared property setter: - (void)setArguments:(id)arguments;	// 0x364164c5
// declared property setter: - (void)setCheckForLeaks:(BOOL)leaks;	// 0x364164a5
// declared property setter: - (void)setDisableASLR:(BOOL)aslr;	// 0x36416485
// declared property setter: - (void)setEnvironment:(id)environment;	// 0x36416445
// declared property setter: - (void)setStandardError:(id)error;	// 0x3641650d
// declared property setter: - (void)setStandardOut:(id)anOut;	// 0x364164e9
// declared property setter: - (void)setWaitForDebugger:(BOOL)debugger;	// 0x36416465
// declared property getter: - (id)standardError;	// 0x364164f9
// declared property getter: - (id)standardOut;	// 0x364164d5
// declared property getter: - (BOOL)waitForDebugger;	// 0x36416455
@end

