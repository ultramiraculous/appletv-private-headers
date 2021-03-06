/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DACoreDAVGlue.framework/DACoreDAVGlue
 */

#import "CoreDAVLogDelegate.h"
#import <DATrafficLogger.h> // Unknown library


@interface DACoreDAVLogger : DATrafficLogger <CoreDAVLogDelegate> {
}
+ (id)registerDefaultLoggerWithCoreDAV;	// 0x3273e415
- (void)coreDAVLogDiagnosticMessage:(id)message atLevel:(int)level;	// 0x3273e4d5
- (int)coreDAVLogLevel;	// 0x3273e4b5
- (void)coreDAVLogTransmittedDataPartial:(id)partial;	// 0x3273e519
- (int)coreDAVOutputLevel;	// 0x3273e4cd
- (void)coreDAVTransmittedDataFinished;	// 0x3273e51d
- (BOOL)shouldLogTransmittedData;	// 0x3273e515
@end

