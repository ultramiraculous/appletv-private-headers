/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
 */

#import "TIWordSearchOperation.h"

@class TIMecabraWrapper;

@interface TIWordSearchOperationCancelLastAcceptedCandidate : TIWordSearchOperation {
	TIMecabraWrapper *_mecabraWrapper;	// 12 = 0xc
}
@property(retain, nonatomic) TIMecabraWrapper *mecabraWrapper;	// G=0x34c7f591; S=0x34c7f5a1; @synthesize=_mecabraWrapper
- (id)initWithWordSearch:(id)wordSearch;	// 0x34c7f4ad
- (void)cancel;	// 0x34c7f55d
- (void)dealloc;	// 0x34c7f511
// declared property getter: - (id)mecabraWrapper;	// 0x34c7f591
- (void)perform;	// 0x34c7f561
// declared property setter: - (void)setMecabraWrapper:(id)wrapper;	// 0x34c7f5a1
@end

