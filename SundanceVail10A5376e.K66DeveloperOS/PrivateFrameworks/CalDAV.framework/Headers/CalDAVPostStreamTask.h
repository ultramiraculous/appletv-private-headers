/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

#import <CoreDAVPostTask.h> // Unknown library

@class NSString;

@interface CalDAVPostStreamTask : CoreDAVPostTask {
	NSString *_previousScheduleTag;	// 168 = 0xa8
	NSString *_filename;	// 172 = 0xac
}
@property(retain) NSString *filename;	// G=0x33815219; S=0x3381522d; @synthesize=_filename
@property(retain) NSString *previousScheduleTag;	// G=0x338151f5; S=0x33815209; @synthesize=_previousScheduleTag
- (id)additionalHeaderValues;	// 0x33814f4d
- (id)copyDefaultParserForContentType:(id)contentType;	// 0x3381514d
- (void)dealloc;	// 0x33814e4d
// declared property getter: - (id)filename;	// 0x33815219
- (id)lossyAsciiFilename;	// 0x33814eb1
// declared property getter: - (id)previousScheduleTag;	// 0x338151f5
- (id)requestBody;	// 0x33815149
- (id)requestBodyStream;	// 0x33815111
- (id)responseData;	// 0x33815181
// declared property setter: - (void)setFilename:(id)filename;	// 0x3381522d
// declared property setter: - (void)setPreviousScheduleTag:(id)tag;	// 0x33815209
- (id)utf8PercentEscapedFilename;	// 0x33814f21
@end

