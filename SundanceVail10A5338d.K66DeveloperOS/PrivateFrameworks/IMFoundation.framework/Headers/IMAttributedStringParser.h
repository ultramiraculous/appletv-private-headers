/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
 */

#import <NSObject.h> // Unknown library

@class IMAttributedStringParserContext;

@interface IMAttributedStringParser : NSObject {
	IMAttributedStringParserContext *_context;	// 4 = 0x4
}
+ (id)sharedInstance;	// 0x3692d6f9
- (void)_preprocessWithContext:(id)context string:(id *)string;	// 0x3692e5a1
- (void)parseContext:(id)context;	// 0x36941a05
@end

