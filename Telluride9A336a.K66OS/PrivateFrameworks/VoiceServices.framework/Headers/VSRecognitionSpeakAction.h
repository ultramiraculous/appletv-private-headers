/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/VoiceServices.framework/VoiceServices
 */

#import "VSRecognitionAction.h"

@class NSAttributedString, NSString;

@interface VSRecognitionSpeakAction : VSRecognitionAction {
	BOOL _shouldTerminate;	// 24 = 0x18
}
- (id)initWithSpokenFeedbackString:(id)spokenFeedbackString willTerminate:(BOOL)terminate;	// 0x328e81a5
- (int)completionType;	// 0x328e818d
- (id)perform;	// 0x328e8201
@end

