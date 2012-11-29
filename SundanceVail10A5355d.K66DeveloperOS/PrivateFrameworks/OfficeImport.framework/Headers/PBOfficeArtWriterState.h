/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OABWriterState.h"

@class PBPresentationWriterState, NSMutableDictionary;

@interface PBOfficeArtWriterState : OABWriterState {
	PBPresentationWriterState *mPresentationState;	// 36 = 0x24
	NSMutableDictionary *mTargetPlaceholders;	// 40 = 0x28
}
- (id)initWithClient:(id)client presentationState:(id)state;	// 0x31df7f65
- (void)dealloc;	// 0x31df7ff1
- (id)presentationState;	// 0x31df7fe1
- (id)targetPlaceholders;	// 0x31df803d
@end
