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
@property(retain) ISAuthenticationChallenge *challenge;	// G=0x36a65555; S=0x36a65569; @synthesize=_challenge
+ (id)operationWithChallenge:(id)challenge;	// 0x36a65299
- (id)_copyCredentialForSignInResponseDictionary:(id)responseDictionary;	// 0x36a65459
// declared property getter: - (id)challenge;	// 0x36a65555
- (void)dealloc;	// 0x36a65255
- (void)handleButtonSelected:(int)selected withResponseDictionary:(id)responseDictionary;	// 0x36a652fd
- (void)run;	// 0x36a653a9
// declared property setter: - (void)setChallenge:(id)challenge;	// 0x36a65569
@end
