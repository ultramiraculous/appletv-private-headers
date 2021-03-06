/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/PowerlogCoreLoggers.framework/PowerlogCoreLoggers
 */

#import <PowerlogLoggerSupport/PLLogger.h>

@class NSString;

@interface PLConfigLogger : PLLogger {
}
@property(readonly, assign, nonatomic) int autolockTime;	// G=0x323f64f5; 
@property(readonly, assign, nonatomic) double backlightLevel;	// G=0x323f6549; 
@property(readonly, assign, nonatomic) NSString *bootArgs;	// G=0x323f642d; 
@property(readonly, assign, nonatomic) NSString *crashReporterKey;	// G=0x323f63d1; 
@property(readonly, assign, nonatomic) BOOL disableCABlanking;	// G=0x323f659d; 
@property(readonly, assign, nonatomic) BOOL noWatchdogs;	// G=0x323f6561; 
// declared property getter: - (int)autolockTime;	// 0x323f64f5
// declared property getter: - (double)backlightLevel;	// 0x323f6549
- (id)basebandFirmware;	// 0x323f63f9
// declared property getter: - (id)bootArgs;	// 0x323f642d
// declared property getter: - (id)crashReporterKey;	// 0x323f63d1
// declared property getter: - (BOOL)disableCABlanking;	// 0x323f659d
- (void)log;	// 0x323f6649
// declared property getter: - (BOOL)noWatchdogs;	// 0x323f6561
- (id)osType;	// 0x323f65d9
@end

