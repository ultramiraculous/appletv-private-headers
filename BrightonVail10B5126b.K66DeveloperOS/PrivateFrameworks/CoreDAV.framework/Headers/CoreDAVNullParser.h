/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import <NSObject.h> // Unknown library
#import "CoreDAVResponseBodyParser.h"

@class NSError;

@interface CoreDAVNullParser : NSObject <CoreDAVResponseBodyParser> {
	NSError *_parserError;	// 4 = 0x4
}
@property(readonly, assign) NSError *parserError;	// G=0x33716e1d; 
+ (BOOL)canHandleContentType:(id)type;	// 0x33716e59
- (void)dealloc;	// 0x33716dd1
// declared property getter: - (id)parserError;	// 0x33716e1d
- (BOOL)processData:(id)data forTask:(id)task;	// 0x33716e55
@end
