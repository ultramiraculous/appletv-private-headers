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
@property(assign, nonatomic) int autocompletedPhase;	// G=0x32c2e475; S=0x32c2e45d; @synthesize
@property(assign, nonatomic) UIResponder *fromResponder;	// G=0x32c26045; S=0x32d3ca55; @synthesize
@property(assign, nonatomic) int recordedPhase;	// G=0x32c2e44d; S=0x32c2401d; @synthesize
@property(assign, nonatomic) UIResponder *responder;	// G=0x32c26035; S=0x32d3ca65; @synthesize
- (id)initWithResponder:(id)responder fromResponder:(id)responder2;	// 0x32c23fcd
// declared property getter: - (int)autocompletedPhase;	// 0x32c2e475
- (id)description;	// 0x32d3c94d
// declared property getter: - (id)fromResponder;	// 0x32c26045
// declared property getter: - (int)recordedPhase;	// 0x32c2e44d
// declared property getter: - (id)responder;	// 0x32c26035
// declared property setter: - (void)setAutocompletedPhase:(int)phase;	// 0x32c2e45d
// declared property setter: - (void)setFromResponder:(id)responder;	// 0x32d3ca55
// declared property setter: - (void)setRecordedPhase:(int)phase;	// 0x32c2401d
// declared property setter: - (void)setResponder:(id)responder;	// 0x32d3ca65
@end

