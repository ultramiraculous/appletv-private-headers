/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SABaseClientBoundCommand.h"

@class NSURL;

@interface SAMPSetState : SABaseClientBoundCommand {
}
@property(assign, nonatomic) int state;	// G=0x32518989; S=0x325189b1; 
@property(copy, nonatomic) NSURL *targetAppId;	// G=0x325188ad; S=0x32518929; 
+ (id)setState;	// 0x3251881d
+ (id)setStateWithDictionary:(id)dictionary context:(id)context;	// 0x32518861
- (id)encodedClassName;	// 0x32518811
- (id)groupIdentifier;	// 0x32518801
- (BOOL)requiresResponse;	// 0x325189e1
// declared property setter: - (void)setState:(int)state;	// 0x325189b1
// declared property setter: - (void)setTargetAppId:(id)anId;	// 0x32518929
// declared property getter: - (int)state;	// 0x32518989
// declared property getter: - (id)targetAppId;	// 0x325188ad
@end

