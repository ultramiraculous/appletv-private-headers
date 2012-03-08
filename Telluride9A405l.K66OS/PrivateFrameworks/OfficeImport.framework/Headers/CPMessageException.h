/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSException.h> // Unknown library

@class CPMessageEntry;

__attribute__((visibility("hidden"),objc_exception))
@interface CPMessageException : NSException {
@private
	CPMessageEntry *m_entry;	// 20 = 0x14
}
+ (id)exceptionWithMessage:(CPTaggedMessageStructure *)message;	// 0x30eaec31
+ (id)exceptionWithUntaggedMessage:(id)untaggedMessage;	// 0x30eaeb85
+ (void)initialize;	// 0x30c87191
+ (id)nsError:(id)error domain:(id)domain;	// 0x30eae9c5
+ (void)raise:(CPTaggedMessageStructure *)raise;	// 0x30da0c8d
+ (void)raiseUntaggedMessage:(id)message;	// 0x30eaeae1
- (id)initWithMessage:(CPTaggedMessageStructure *)message;	// 0x30eaedc9
- (id)initWithUntaggedMessage:(id)untaggedMessage;	// 0x30eaed2d
- (void)dealloc;	// 0x30da0f69
- (id)description;	// 0x30eaecd9
- (id)getEntry;	// 0x30ead821
@end
