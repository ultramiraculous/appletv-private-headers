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
+ (id)instance;	// 0x3608057d
- (id)init;	// 0x360805c5
- (void)dealloc;	// 0x3608063d
- (BOOL)enabled;	// 0x36080689
- (void)finishSnippets;	// 0x360806ed
- (void)logData:(id)data;	// 0x36080781
- (void)logString:(id)string;	// 0x360806ad
- (void)logStringWithFormat:(id)format;	// 0x360806f1
@end

