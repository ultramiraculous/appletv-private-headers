/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SBJsonStreamParserState.h"


@interface SBJsonStreamParserStateStart : SBJsonStreamParserState {
}
+ (id)sharedInstance;	// 0x4a8601
- (id)name;	// 0x4a8705
- (BOOL)parser:(id)parser shouldAcceptToken:(int)token;	// 0x4a863d
- (void)parser:(id)parser shouldTransitionTo:(int)to;	// 0x4a8651
@end
