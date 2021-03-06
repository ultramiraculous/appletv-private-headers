/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/PrototypeTools.framework/PrototypeTools
 */

#import "PrototypeTools-Structs.h"
#import "PTSHUDControl.h"
#import "_UISettingsKeyPathObserver.h"
#import <UIKit/UILabel.h>

@class _UISettings, NSString;

@interface PTSInfoLabel : UILabel <PTSHUDControl, _UISettingsKeyPathObserver> {
	BOOL _autoEnablesForDesignMode;	// 162 = 0xa2
	_UISettings *_settings;	// 164 = 0xa4
	NSString *_valueKeyPath;	// 168 = 0xa8
	int _alignment;	// 172 = 0xac
}
@property(assign, nonatomic) int alignment;	// G=0x325acbf5; S=0x325acc05; @synthesize=_alignment
@property(assign, nonatomic) BOOL autoEnablesForDesignMode;	// G=0x325acc15; S=0x325acc25; @synthesize=_autoEnablesForDesignMode
@property(assign, nonatomic) BOOL enabled;
@property(assign, nonatomic) __weak _UISettings *settings;	// G=0x325acb9d; S=0x325acbbd; @synthesize=_settings
@property(copy, nonatomic) NSString *valueKeyPath;	// G=0x325acbd1; S=0x325acbe5; @synthesize=_valueKeyPath
+ (CGRect)defaultFrame;	// 0x325ac601
+ (id)infoLabel;	// 0x325ac619
+ (id)infoLabelForSettings:(id)settings valueKeyPath:(id)path;	// 0x325ac68d
- (id)initWithFrame:(CGRect)frame;	// 0x325ac749
- (void).cxx_destruct;	// 0x325acc35
// declared property getter: - (int)alignment;	// 0x325acbf5
// declared property getter: - (BOOL)autoEnablesForDesignMode;	// 0x325acc15
- (void)dealloc;	// 0x325ac8e5
- (CGSize)intrinsicContentSize;	// 0x325ac949
// declared property setter: - (void)setAlignment:(int)alignment;	// 0x325acc05
// declared property setter: - (void)setAutoEnablesForDesignMode:(BOOL)designMode;	// 0x325acc25
// declared property setter: - (void)setSettings:(id)settings;	// 0x325acbbd
- (void)setSettings:(id)settings valueKeyPath:(id)path;	// 0x325ac981
// declared property setter: - (void)setValueKeyPath:(id)path;	// 0x325acbe5
// declared property getter: - (id)settings;	// 0x325acb9d
- (void)settings:(id)settings changedValueForKeyPath:(id)keyPath;	// 0x325aca09
// declared property getter: - (id)valueKeyPath;	// 0x325acbd1
@end

