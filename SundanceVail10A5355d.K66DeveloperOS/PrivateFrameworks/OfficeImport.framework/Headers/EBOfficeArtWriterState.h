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
- (id)initWithEBWriterState:(id)ebwriterState;	// 0x31d8e65d
- (void)cacheCHDChart:(id)chart forESDObject:(id)esdobject;	// 0x31d8e751
- (void)dealloc;	// 0x31d8e6f5
- (id)ebWriterState;	// 0x31d8e741
- (void)setTargetObject:(id)object forSourceDrawable:(id)sourceDrawable;	// 0x31d8e7d5
@end

