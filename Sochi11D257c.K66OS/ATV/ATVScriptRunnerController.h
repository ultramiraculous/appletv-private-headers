/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ATVFeedController.h"

@class BRTextControl, ATVJSContext, BRProgressBarWidget;

__attribute__((visibility("hidden")))
@interface ATVScriptRunnerController : ATVFeedController {
	BRTextControl *_statusText;	// 104 = 0x68
	BRProgressBarWidget *_progressBar;	// 108 = 0x6c
	ATVJSContext *_context;	// 112 = 0x70
}
@property(retain, nonatomic) ATVJSContext *context;	// G=0x1585a1; S=0x1585b1; @synthesize=_context
@property(retain, nonatomic) BRProgressBarWidget *progressBar;	// G=0x158581; S=0x158591; @synthesize=_progressBar
@property(retain, nonatomic) BRTextControl *statusText;	// G=0x158561; S=0x158571; @synthesize=_statusText
- (id)initWithDictionary:(id)dictionary;	// 0x157c1d
- (id)initWithFeedElement:(id)feedElement;	// 0x157b39
- (void)_evaluateScripts:(id)scripts;	// 0x157d71
- (void)_setStatus:(id)status withPercentComplete:(float)percentComplete;	// 0x1584e5
// declared property getter: - (id)context;	// 0x1585a1
- (void)dealloc;	// 0x157d01
- (void)layoutSubcontrols;	// 0x1583c1
// declared property getter: - (id)progressBar;	// 0x158581
// declared property setter: - (void)setContext:(id)context;	// 0x1585b1
// declared property setter: - (void)setProgressBar:(id)bar;	// 0x158591
// declared property setter: - (void)setStatusText:(id)text;	// 0x158571
// declared property getter: - (id)statusText;	// 0x158561
- (void)wasPopped;	// 0x158359
- (void)wasPushed;	// 0x158069
@end

