/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/VoiceServices.framework/VoiceServices
 */

#import <NSObject.h> // Unknown library

@class NSArray, VSRecognitionAction;
@protocol VSRecognitionResultHandler;

@interface VSRecognitionResultHandlingRequest : NSObject {
	id<VSRecognitionResultHandler> _handler;	// 4 = 0x4
	NSArray *_results;	// 8 = 0x8
	VSRecognitionAction *_action;	// 12 = 0xc
}
@property(retain) id nextAction;	// G=0x328e879d; S=0x328e87d5; converted property
@property(readonly, retain) NSArray *results;	// G=0x328e8855; converted property
- (id)initWithHandler:(id)handler results:(id)results;	// 0x328e8901
- (void)dealloc;	// 0x328e888d
- (id)handler;	// 0x328e881d
// converted property getter: - (id)nextAction;	// 0x328e879d
// converted property getter: - (id)results;	// 0x328e8855
// converted property setter: - (void)setNextAction:(id)action;	// 0x328e87d5
@end

