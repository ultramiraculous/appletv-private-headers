/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
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
@property(assign, nonatomic) BOOL cannotInterrupt;	// G=0x329863f9; S=0x32986409; @synthesize=_cannotInterrupt
@property(copy, nonatomic) id completionCallback;	// G=0x3298644d; S=0x3298645d; @synthesize=_completionCallback
@property(retain, nonatomic) NSString *language;	// G=0x32986419; S=0x32986429; @synthesize=_language
@property(retain, nonatomic) NSString *pitch;	// G=0x329863a5; S=0x329863b5; @synthesize=_pitch
@property(assign, nonatomic) BOOL shouldQueue;	// G=0x329863d9; S=0x329863e9; @synthesize=_shouldQueue
@property(copy, nonatomic) NSString *string;	// G=0x32986371; S=0x32986381; @synthesize=_string
+ (id)actionWithString:(id)string shouldQueue:(BOOL)queue;	// 0x3298621d
// declared property getter: - (BOOL)cannotInterrupt;	// 0x329863f9
// declared property getter: - (id)completionCallback;	// 0x3298644d
- (void)dealloc;	// 0x32986291
- (id)description;	// 0x32986319
// declared property getter: - (id)language;	// 0x32986419
// declared property getter: - (id)pitch;	// 0x329863a5
// declared property setter: - (void)setCannotInterrupt:(BOOL)interrupt;	// 0x32986409
// declared property setter: - (void)setCompletionCallback:(id)callback;	// 0x3298645d
// declared property setter: - (void)setLanguage:(id)language;	// 0x32986429
// declared property setter: - (void)setPitch:(id)pitch;	// 0x329863b5
// declared property setter: - (void)setShouldQueue:(BOOL)queue;	// 0x329863e9
// declared property setter: - (void)setString:(id)string;	// 0x32986381
// declared property getter: - (BOOL)shouldQueue;	// 0x329863d9
// declared property getter: - (id)string;	// 0x32986371
@end
