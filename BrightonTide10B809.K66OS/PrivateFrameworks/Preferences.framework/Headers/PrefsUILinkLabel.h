/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

#import <UILabel.h> // Unknown library
#import "Preferences-Structs.h"

@class NSURL;

@interface PrefsUILinkLabel : UILabel {
	NSURL *_url;	// 144 = 0x90
	BOOL _touchingURL;	// 148 = 0x94
	id _target;	// 152 = 0x98
	SEL _action;	// 156 = 0x9c
@private
	NSURL *_URL;	// 160 = 0xa0
}
@property(retain, nonatomic) NSURL *URL;	// G=0x35303fe1; S=0x35303cc9; @synthesize=_URL
@property(assign, nonatomic) SEL action;	// G=0x35304001; S=0x35303c49; @synthesize=_action
@property(assign, nonatomic) id target;	// G=0x35303ff1; S=0x35303c89; @synthesize=_target
- (id)initWithFrame:(CGRect)frame;	// 0x35303b19
// declared property getter: - (id)URL;	// 0x35303fe1
// declared property getter: - (SEL)action;	// 0x35304001
- (id)color:(id)color byMultiplyingSubComponentsBy:(float)by;	// 0x35303f59
- (void)dealloc;	// 0x35303bfd
- (void)openURL:(id)url;	// 0x35303d0d
// declared property setter: - (void)setAction:(SEL)action;	// 0x35303c49
// declared property setter: - (void)setTarget:(id)target;	// 0x35303c89
// declared property setter: - (void)setURL:(id)url;	// 0x35303cc9
- (void)tappedLink:(id)link;	// 0x35303ecd
// declared property getter: - (id)target;	// 0x35303ff1
- (void)touchesBegan:(id)began withEvent:(id)event;	// 0x35303d5d
- (void)touchesCancelled:(id)cancelled withEvent:(id)event;	// 0x35303e8d
- (void)touchesEnded:(id)ended withEvent:(id)event;	// 0x35303e4d
- (void)touchesMoved:(id)moved withEvent:(id)event;	// 0x35303db5
@end

