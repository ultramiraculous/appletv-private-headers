/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SBJsonStreamParserState.h"


@interface SBJsonStreamParserStateStart : SBJsonStreamParserState {
}
+ (id)sharedInstance;	// 0x491061
- (id)name;	// 0x491165
- (BOOL)parser:(id)parser shouldAcceptToken:(int)token;	// 0x49109d
- (void)parser:(id)parser shouldTransitionTo:(int)to;	// 0x4910b1
@end

