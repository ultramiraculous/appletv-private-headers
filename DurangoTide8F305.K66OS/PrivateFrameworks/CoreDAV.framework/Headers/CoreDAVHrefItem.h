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
}
@property(retain) NSURL *baseURL;	// G=0x338823f9; S=0x33882411; @synthesize=_baseURL
- (id)init;	// 0x3388228d
- (id)initWithURL:(id)url;	// 0x3388224d
// declared property getter: - (id)baseURL;	// 0x338823f9
- (void)dealloc;	// 0x338823b1
- (id)description;	// 0x338822b9
- (void)parserSuggestsBaseURL:(id)url;	// 0x338820ed
- (id)payloadAsFullURL;	// 0x33882141
- (id)payloadAsOriginalURL;	// 0x33882101
// declared property setter: - (void)setBaseURL:(id)url;	// 0x33882411
- (void)write:(id)write;	// 0x338821e5
@end

