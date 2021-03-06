/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
 */

#import "TIKeyboardOperation.h"


@interface TIKeyboardOperationDeleteBackward : TIKeyboardOperation {
	BOOL _shouldNotify;	// 12 = 0xc
	unsigned _deletionCount;	// 16 = 0x10
}
@property(readonly, assign, nonatomic) unsigned deletionCount;	// G=0x32a159d5; @synthesize=_deletionCount
@property(readonly, assign, nonatomic) BOOL shouldNotify;	// G=0x32a159e5; @synthesize=_shouldNotify
+ (id)operationWithDeletionCount:(unsigned)deletionCount;	// 0x32a15759
+ (id)operationWithDeletionCount:(unsigned)deletionCount shouldNotify:(BOOL)notify;	// 0x32a157a5
+ (BOOL)supportsSecureCoding;	// 0x32a15755
- (id)initWithCoder:(id)coder;	// 0x32a15841
- (id)initWithDeletionCount:(unsigned)deletionCount shouldNotify:(BOOL)notify;	// 0x32a157f1
// declared property getter: - (unsigned)deletionCount;	// 0x32a159d5
- (void)encodeWithCoder:(id)coder;	// 0x32a158cd
- (id)propertiesForDescription;	// 0x32a15959
// declared property getter: - (BOOL)shouldNotify;	// 0x32a159e5
@end

