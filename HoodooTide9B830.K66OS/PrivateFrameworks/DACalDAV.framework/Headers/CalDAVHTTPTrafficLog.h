/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DACalDAV.framework/DACalDAV
 */

#import <NSObject.h> // Unknown library

@class DACoreDAVLogger;

@interface CalDAVHTTPTrafficLog : NSObject {
	DACoreDAVLogger *_curLogger;	// 4 = 0x4
}
+ (id)instance;	// 0x3306a8d1
- (id)init;	// 0x3306a919
- (void)dealloc;	// 0x3306a991
- (BOOL)enabled;	// 0x3306a9dd
- (void)finishSnippets;	// 0x3306aa41
- (void)logData:(id)data;	// 0x3306aad5
- (void)logString:(id)string;	// 0x3306aa01
- (void)logStringWithFormat:(id)format;	// 0x3306aa45
@end

