/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library

@class NSString;

@interface UIMenuItem : NSObject {
	NSString *_title;	// 4 = 0x4
	SEL _action;	// 8 = 0x8
	BOOL _dontDismiss;	// 12 = 0xc
}
@property(assign, nonatomic) SEL action;	// G=0x31ebbb4d; S=0x31d3e7b5; @synthesize=_action
@property(assign, nonatomic) BOOL dontDismiss;	// G=0x31ebbb5d; S=0x31d3e7c5; @synthesize=_dontDismiss
@property(copy, nonatomic) NSString *title;	// G=0x31ebbb39; S=0x31d3e7a5; @synthesize=_title
- (id)initWithTitle:(id)title action:(SEL)action;	// 0x31d3e745
// declared property getter: - (SEL)action;	// 0x31ebbb4d
- (void)dealloc;	// 0x31d40379
// declared property getter: - (BOOL)dontDismiss;	// 0x31ebbb5d
// declared property setter: - (void)setAction:(SEL)action;	// 0x31d3e7b5
// declared property setter: - (void)setDontDismiss:(BOOL)dismiss;	// 0x31d3e7c5
// declared property setter: - (void)setTitle:(id)title;	// 0x31d3e7a5
// declared property getter: - (id)title;	// 0x31ebbb39
@end
