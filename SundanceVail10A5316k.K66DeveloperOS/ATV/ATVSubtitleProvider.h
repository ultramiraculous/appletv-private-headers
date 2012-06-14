/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "NSObject.h"


@protocol ATVSubtitleProvider <NSObject>
- (id)defaultSubtitleOption;
- (void)loadSubtitleSamplesForOption:(id)option completionHandler:(id)handler;
- (id)subtitleOptions;
- (id)subtitleSamplesForOption:(id)option;
@end

