/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/UserFS.framework/UserFS
 */

#import </libobjc.A.h>

@class UserFSItem;
@protocol OS_xpc_object;

@interface UserFSStream : NSObject {
	UserFSItem *_item;	// 4 = 0x4
	NSObject<OS_xpc_object> *_connection;	// 8 = 0x8
	unsigned long long _length;	// 12 = 0xc
}
@property(retain, nonatomic) NSObject<OS_xpc_object> *connection;	// G=0x32d2bb2d; S=0x32d2bb3d; @synthesize=_connection
@property(retain, nonatomic) UserFSItem *item;	// G=0x32d2bac9; S=0x32d2bad9; @synthesize=_item
@property(assign, nonatomic) unsigned long long length;	// G=0x32d2bb01; S=0x32d2bb19; @synthesize=_length
@property(readonly, assign, nonatomic) BOOL writable;	// G=0x32d2b7e9; 
- (id)initWithUserFSItem:(id)userFSItem length:(unsigned long long)length connection:(id)connection;	// 0x32d2b721
- (void).cxx_destruct;	// 0x32d2bb65
- (void)_cancelConnection;	// 0x32d2b98d
- (long)_readBytesUpToLength:(unsigned long)length atOffset:(unsigned long long)offset toBuffer:(void *)buffer error:(id *)error;	// 0x32d2b7ed
- (BOOL)closeAndReturnError:(id *)error;	// 0x32d2ba01
// declared property getter: - (id)connection;	// 0x32d2bb2d
- (void)dealloc;	// 0x32d2ba89
// declared property getter: - (id)item;	// 0x32d2bac9
// declared property getter: - (unsigned long long)length;	// 0x32d2bb01
- (long)readBytesOfLength:(unsigned long)length atOffset:(unsigned long long)offset toBuffer:(void *)buffer error:(id *)error;	// 0x32d2b921
// declared property setter: - (void)setConnection:(id)connection;	// 0x32d2bb3d
// declared property setter: - (void)setItem:(id)item;	// 0x32d2bad9
// declared property setter: - (void)setLength:(unsigned long long)length;	// 0x32d2bb19
// declared property getter: - (BOOL)writable;	// 0x32d2b7e9
@end
