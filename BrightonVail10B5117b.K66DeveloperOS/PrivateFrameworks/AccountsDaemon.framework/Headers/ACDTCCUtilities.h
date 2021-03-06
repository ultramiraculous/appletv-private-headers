/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AccountsDaemon.framework/AccountsDaemon
 */

#import <NSObject.h> // Unknown library
#import "AccountsDaemon-Structs.h"


@interface ACDTCCUtilities : NSObject {
}
+ (int)TCCStateForClient:(id)client accountType:(id)type;	// 0x33581e49
+ (CFStringRef)_TCCServiceForAccountTypeID:(id)accountTypeID;	// 0x335823a5
+ (id)allTCCStatesForAccountType:(id)accountType;	// 0x3358228d
+ (BOOL)clearAllTCCStatesForAccountType:(id)accountType;	// 0x3358231d
+ (BOOL)clearTCCStateForClient:(id)client accountType:(id)type;	// 0x335821c9
+ (BOOL)setTCCStateForClient:(id)client accountType:(id)type toGranted:(BOOL)granted;	// 0x3358205d
@end

