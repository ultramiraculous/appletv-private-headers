/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import "CoreDAVLeafItem.h"

@class NSURL;

@interface CoreDAVHrefItem : CoreDAVLeafItem {
	NSURL *_baseURL;	// 24 = 0x18
	int _writeStyle;	// 28 = 0x1c
}
@property(retain) NSURL *baseURL;	// G=0x33a02d9d; S=0x33a02db1; @synthesize=_baseURL
@property(assign) int writeStyle;	// G=0x33a02dd5; S=0x33a02de5; @synthesize=_writeStyle
- (id)init;	// 0x33a027d1
- (id)initWithURL:(id)url;	// 0x33a02819
// declared property getter: - (id)baseURL;	// 0x33a02d9d
- (void)dealloc;	// 0x33a0285d
- (id)description;	// 0x33a028a9
- (void)parserSuggestsBaseURL:(id)url;	// 0x33a02d8d
- (id)payloadAsFullURL;	// 0x33a02b0d
- (id)payloadAsOriginalURL;	// 0x33a02d45
// declared property setter: - (void)setBaseURL:(id)url;	// 0x33a02db1
// declared property setter: - (void)setWriteStyle:(int)style;	// 0x33a02de5
- (void)write:(id)write;	// 0x33a029a9
// declared property getter: - (int)writeStyle;	// 0x33a02dd5
@end
