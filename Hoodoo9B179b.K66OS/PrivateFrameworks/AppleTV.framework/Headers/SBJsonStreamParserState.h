/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library


__attribute__((visibility("hidden")))
@interface SBJsonStreamParserState : NSObject {
}
+ (id)sharedInstance;	// 0x305008b1
- (id)name;	// 0x305008c5
- (BOOL)needKey;	// 0x305008c1
- (BOOL)parser:(id)parser shouldAcceptToken:(int)token;	// 0x305008b5
- (void)parser:(id)parser shouldTransitionTo:(int)to;	// 0x305008bd
- (int)parserShouldReturn:(id)parser;	// 0x305008b9
@end
