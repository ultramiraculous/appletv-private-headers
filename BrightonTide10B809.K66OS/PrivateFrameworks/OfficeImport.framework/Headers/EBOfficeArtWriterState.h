/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OABWriterState.h"

@class EBWriterState;

@interface EBOfficeArtWriterState : OABWriterState {
	EBWriterState *mEBWriterState;	// 36 = 0x24
}
- (id)initWithEBWriterState:(id)ebwriterState;	// 0x34a0d70d
- (void)cacheCHDChart:(id)chart forESDObject:(id)esdobject;	// 0x34a0d801
- (void)dealloc;	// 0x34a0d7a5
- (id)ebWriterState;	// 0x34a0d7f1
- (void)setTargetObject:(id)object forSourceDrawable:(id)sourceDrawable;	// 0x34a0d885
@end

