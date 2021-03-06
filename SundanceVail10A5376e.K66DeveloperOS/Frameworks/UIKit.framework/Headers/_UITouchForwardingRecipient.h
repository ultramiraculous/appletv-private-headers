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
@property(assign, nonatomic) int autocompletedPhase;	// G=0x3035e9c5; S=0x3035e9ad; @synthesize
@property(assign, nonatomic) UIResponder *fromResponder;	// G=0x303565e5; S=0x3046be75; @synthesize
@property(assign, nonatomic) int recordedPhase;	// G=0x3035e99d; S=0x303545bd; @synthesize
@property(assign, nonatomic) UIResponder *responder;	// G=0x303565d5; S=0x3046be85; @synthesize
- (id)initWithResponder:(id)responder fromResponder:(id)responder2;	// 0x3035456d
// declared property getter: - (int)autocompletedPhase;	// 0x3035e9c5
- (id)description;	// 0x3046bd6d
// declared property getter: - (id)fromResponder;	// 0x303565e5
// declared property getter: - (int)recordedPhase;	// 0x3035e99d
// declared property getter: - (id)responder;	// 0x303565d5
// declared property setter: - (void)setAutocompletedPhase:(int)phase;	// 0x3035e9ad
// declared property setter: - (void)setFromResponder:(id)responder;	// 0x3046be75
// declared property setter: - (void)setRecordedPhase:(int)phase;	// 0x303545bd
// declared property setter: - (void)setResponder:(id)responder;	// 0x3046be85
@end

