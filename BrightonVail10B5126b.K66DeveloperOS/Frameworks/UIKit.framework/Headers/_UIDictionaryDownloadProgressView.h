/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIView.h"

@class UILabel, UIProgressView, NSString;

__attribute__((visibility("hidden")))
@interface _UIDictionaryDownloadProgressView : UIView {
	UIProgressView *_progressView;	// 84 = 0x54
	UILabel *_downloadProgressLabel;	// 88 = 0x58
	NSString *_downloadStatusText;	// 92 = 0x5c
	float _downloadProgress;	// 96 = 0x60
}
@property(assign, nonatomic) float downloadProgress;	// G=0x32f46fc9; S=0x32f46f99; @synthesize=_downloadProgress
@property(copy, nonatomic) NSString *downloadStatusText;	// G=0x32f4703d; S=0x32f46fd9; @synthesize=_downloadStatusText
- (id)initWithFrame:(CGRect)frame;	// 0x32f46e05
- (void)dealloc;	// 0x32f46f4d
// declared property getter: - (float)downloadProgress;	// 0x32f46fc9
// declared property getter: - (id)downloadStatusText;	// 0x32f4703d
- (void)layoutSubviews;	// 0x32f47075
// declared property setter: - (void)setDownloadProgress:(float)progress;	// 0x32f46f99
// declared property setter: - (void)setDownloadStatusText:(id)text;	// 0x32f46fd9
@end

