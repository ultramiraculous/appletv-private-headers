/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library

@class UIResponder;

__attribute__((visibility("hidden")))
@interface _UITouchForwardingRecipient : NSObject {
	UIResponder *fromResponder;	// 4 = 0x4
	UIResponder *responder;	// 8 = 0x8
	int recordedPhase;	// 12 = 0xc
	int autocompletedPhase;	// 16 = 0x10
}
@property(assign, nonatomic) int autocompletedPhase;	// G=0x32dd47cd; S=0x32dd47b5; @synthesize
@property(assign, nonatomic) UIResponder *fromResponder;	// G=0x32dcc39d; S=0x32ee2dad; @synthesize
@property(assign, nonatomic) int recordedPhase;	// G=0x32dd47a5; S=0x32dca375; @synthesize
@property(assign, nonatomic) UIResponder *responder;	// G=0x32dcc38d; S=0x32ee2dbd; @synthesize
- (id)initWithResponder:(id)responder fromResponder:(id)responder2;	// 0x32dca325
// declared property getter: - (int)autocompletedPhase;	// 0x32dd47cd
- (id)description;	// 0x32ee2ca5
// declared property getter: - (id)fromResponder;	// 0x32dcc39d
// declared property getter: - (int)recordedPhase;	// 0x32dd47a5
// declared property getter: - (id)responder;	// 0x32dcc38d
// declared property setter: - (void)setAutocompletedPhase:(int)phase;	// 0x32dd47b5
// declared property setter: - (void)setFromResponder:(id)responder;	// 0x32ee2dad
// declared property setter: - (void)setRecordedPhase:(int)phase;	// 0x32dca375
// declared property setter: - (void)setResponder:(id)responder;	// 0x32ee2dbd
@end
