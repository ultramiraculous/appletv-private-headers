/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ATVFeedController.h"

@class ATVJSContext, BRTextControl, BRProgressBarWidget;

__attribute__((visibility("hidden")))
@interface ATVScriptRunnerController : ATVFeedController {
	BRTextControl *_statusText;	// 104 = 0x68
	BRProgressBarWidget *_progressBar;	// 108 = 0x6c
	ATVJSContext *_context;	// 112 = 0x70
}
@property(retain, nonatomic) ATVJSContext *context;	// G=0x16e995; S=0x16e9a5; @synthesize=_context
@property(retain, nonatomic) BRProgressBarWidget *progressBar;	// G=0x16e975; S=0x16e985; @synthesize=_progressBar
@property(retain, nonatomic) BRTextControl *statusText;	// G=0x16e955; S=0x16e965; @synthesize=_statusText
- (id)initWithDictionary:(id)dictionary;	// 0x16df3d
- (id)initWithFeedElement:(id)feedElement;	// 0x16de59
- (void)_evaluateScripts:(id)scripts inContext:(id)context;	// 0x16e091
- (void)_setStatus:(id)status withPercentComplete:(float)percentComplete;	// 0x16e811
// declared property getter: - (id)context;	// 0x16e995
- (void)dealloc;	// 0x16e021
- (void)layoutSubcontrols;	// 0x16e6fd
// declared property getter: - (id)progressBar;	// 0x16e975
// declared property setter: - (void)setContext:(id)context;	// 0x16e9a5
// declared property setter: - (void)setProgressBar:(id)bar;	// 0x16e985
// declared property setter: - (void)setStatusText:(id)text;	// 0x16e965
// declared property getter: - (id)statusText;	// 0x16e955
- (void)wasPopped;	// 0x16e699
- (void)wasPushed;	// 0x16e395
@end

