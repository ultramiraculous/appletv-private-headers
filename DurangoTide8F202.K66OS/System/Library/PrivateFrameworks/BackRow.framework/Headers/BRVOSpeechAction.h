/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BackRow.framework/BackRow
 */

#import <NSObject.h> // Unknown library

@class NSString;

__attribute__((visibility("hidden")))
@interface BRVOSpeechAction : NSObject {
@private
	NSString *_string;	// 4 = 0x4
	NSString *_pitch;	// 8 = 0x8
	NSString *_language;	// 12 = 0xc
	BOOL _shouldQueue;	// 16 = 0x10
	BOOL _cannotInterrupt;	// 17 = 0x11
	id _completionCallback;	// 20 = 0x14
}
@property(assign, nonatomic) BOOL cannotInterrupt;	// G=0x3299a1dd; S=0x3299a1ed; @synthesize=_cannotInterrupt
@property(copy, nonatomic) id completionCallback;	// G=0x3299a1bd; S=0x3299ae51; @synthesize=_completionCallback
@property(retain, nonatomic) NSString *language;	// G=0x3299a1cd; S=0x3299ae29; @synthesize=_language
@property(retain, nonatomic) NSString *pitch;	// G=0x3299a21d; S=0x3299ae01; @synthesize=_pitch
@property(assign, nonatomic) BOOL shouldQueue;	// G=0x3299a1fd; S=0x3299a20d; @synthesize=_shouldQueue
@property(copy, nonatomic) NSString *string;	// G=0x3299a22d; S=0x3299add5; @synthesize=_string
+ (id)actionWithString:(id)string shouldQueue:(BOOL)queue;	// 0x3299ab5d
// declared property getter: - (BOOL)cannotInterrupt;	// 0x3299a1dd
// declared property getter: - (id)completionCallback;	// 0x3299a1bd
- (void)dealloc;	// 0x3299ad55
- (id)description;	// 0x3299ab0d
// declared property getter: - (id)language;	// 0x3299a1cd
// declared property getter: - (id)pitch;	// 0x3299a21d
// declared property setter: - (void)setCannotInterrupt:(BOOL)interrupt;	// 0x3299a1ed
// declared property setter: - (void)setCompletionCallback:(id)callback;	// 0x3299ae51
// declared property setter: - (void)setLanguage:(id)language;	// 0x3299ae29
// declared property setter: - (void)setPitch:(id)pitch;	// 0x3299ae01
// declared property setter: - (void)setShouldQueue:(BOOL)queue;	// 0x3299a20d
// declared property setter: - (void)setString:(id)string;	// 0x3299add5
// declared property getter: - (BOOL)shouldQueue;	// 0x3299a1fd
// declared property getter: - (id)string;	// 0x3299a22d
@end
