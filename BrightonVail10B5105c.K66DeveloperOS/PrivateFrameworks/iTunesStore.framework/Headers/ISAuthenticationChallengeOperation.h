/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

#import "ISDialogOperation.h"

@class ISAuthenticationChallenge;

@interface ISAuthenticationChallengeOperation : ISDialogOperation {
	ISAuthenticationChallenge *_challenge;	// 80 = 0x50
}
@property(retain) ISAuthenticationChallenge *challenge;	// G=0x3604a09d; S=0x3604a0b1; @synthesize=_challenge
+ (id)operationWithChallenge:(id)challenge;	// 0x36049de1
- (id)_copyCredentialForSignInResponseDictionary:(id)responseDictionary;	// 0x36049fa1
// declared property getter: - (id)challenge;	// 0x3604a09d
- (void)dealloc;	// 0x36049d9d
- (void)handleButtonSelected:(int)selected withResponseDictionary:(id)responseDictionary;	// 0x36049e45
- (void)run;	// 0x36049ef1
// declared property setter: - (void)setChallenge:(id)challenge;	// 0x3604a0b1
@end

