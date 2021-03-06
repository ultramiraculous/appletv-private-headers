/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import </libobjc.A.h>

@class NSString;
@protocol OS_dispatch_queue;

@interface _ML3ValidatableDatabase : NSObject {
	unsigned long _queueID;	// 4 = 0x4
	NSString *_databasePath;	// 8 = 0x8
	unsigned _validationState;	// 12 = 0xc
	NSObject<OS_dispatch_queue> *_validationSerialQueue;	// 16 = 0x10
}
@property(copy, nonatomic) NSString *databasePath;	// G=0x315a36ed; S=0x315a3701; @synthesize=_databasePath
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *validationSerialQueue;	// G=0x315a3731; S=0x315a3741; @synthesize=_validationSerialQueue
@property(assign, nonatomic) unsigned validationState;	// G=0x315a3711; S=0x315a3721; @synthesize=_validationState
- (id)init;	// 0x315a3679
- (id)initWithDatabasePath:(id)databasePath;	// 0x315a352d
- (void).cxx_destruct;	// 0x315a3769
- (BOOL)currentQueueIsValidationQueue;	// 0x315a36bd
// declared property getter: - (id)databasePath;	// 0x315a36ed
// declared property setter: - (void)setDatabasePath:(id)path;	// 0x315a3701
// declared property setter: - (void)setValidationSerialQueue:(id)queue;	// 0x315a3741
// declared property setter: - (void)setValidationState:(unsigned)state;	// 0x315a3721
// declared property getter: - (id)validationSerialQueue;	// 0x315a3731
// declared property getter: - (unsigned)validationState;	// 0x315a3711
@end

