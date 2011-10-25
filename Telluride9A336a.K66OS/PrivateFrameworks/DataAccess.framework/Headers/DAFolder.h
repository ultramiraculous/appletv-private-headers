/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

#import <NSObject.h> // Unknown library

@class NSString;

@interface DAFolder : NSObject {
	NSString *_folderName;	// 4 = 0x4
	NSString *_folderID;	// 8 = 0x8
	NSString *_parentFolderID;	// 12 = 0xc
	int _dataclass;	// 16 = 0x10
	BOOL _isDefault;	// 20 = 0x14
	BOOL _hasRemoteChanges;	// 21 = 0x15
}
@property(assign) int dataclass;	// G=0x345f0ba5; S=0x345f0bb5; @synthesize=_dataclass
@property(copy) NSString *folderID;	// G=0x345f0b35; S=0x345f0b49; @synthesize=_folderID
@property(copy) NSString *folderName;	// G=0x345f0afd; S=0x345f0b11; @synthesize=_folderName
@property(assign) BOOL hasRemoteChanges;	// G=0x345f0be5; S=0x345f0bf5; @synthesize=_hasRemoteChanges
@property(assign) BOOL isDefault;	// G=0x345f0bc5; S=0x345f0bd5; @synthesize=_isDefault
@property(copy) NSString *parentFolderID;	// G=0x345f0b6d; S=0x345f0b81; @synthesize=_parentFolderID
// declared property getter: - (int)dataclass;	// 0x345f0ba5
- (void)dealloc;	// 0x345f08bd
- (id)description;	// 0x345f0931
// declared property getter: - (id)folderID;	// 0x345f0b35
// declared property getter: - (id)folderName;	// 0x345f0afd
// declared property getter: - (BOOL)hasRemoteChanges;	// 0x345f0be5
- (unsigned)hash;	// 0x345f09ed
// declared property getter: - (BOOL)isDefault;	// 0x345f0bc5
- (BOOL)isEqual:(id)equal;	// 0x345f0a0d
- (id)mailboxID;	// 0x345ecad5
// declared property getter: - (id)parentFolderID;	// 0x345f0b6d
- (id)parentMailboxID;	// 0x345ecae9
// declared property setter: - (void)setDataclass:(int)dataclass;	// 0x345f0bb5
// declared property setter: - (void)setFolderID:(id)anId;	// 0x345f0b49
// declared property setter: - (void)setFolderName:(id)name;	// 0x345f0b11
// declared property setter: - (void)setHasRemoteChanges:(BOOL)changes;	// 0x345f0bf5
// declared property setter: - (void)setIsDefault:(BOOL)aDefault;	// 0x345f0bd5
// declared property setter: - (void)setParentFolderID:(id)anId;	// 0x345f0b81
@end

