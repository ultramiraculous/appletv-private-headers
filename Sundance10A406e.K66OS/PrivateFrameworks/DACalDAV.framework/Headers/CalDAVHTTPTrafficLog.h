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
+ (id)instance;	// 0x378ba3ad
- (id)init;	// 0x378ba3f5
- (void)dealloc;	// 0x378ba46d
- (BOOL)enabled;	// 0x378ba4b9
- (void)finishSnippets;	// 0x378ba51d
- (void)logData:(id)data;	// 0x378ba5b1
- (void)logString:(id)string;	// 0x378ba4dd
- (void)logStringWithFormat:(id)format;	// 0x378ba521
@end

