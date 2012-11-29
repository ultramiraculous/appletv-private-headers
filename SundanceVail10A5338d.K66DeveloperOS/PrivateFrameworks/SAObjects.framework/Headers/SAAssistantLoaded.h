/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SABaseClientBoundCommand.h"

@class NSString, NSArray, NSNumber;

@interface SAAssistantLoaded : SABaseClientBoundCommand {
}
@property(copy, nonatomic) NSString *dataAnchor;	// G=0x37972e45; S=0x37972e61; 
@property(copy, nonatomic) NSNumber *requestSync;	// G=0x37972eb1; S=0x37972ecd; 
@property(copy, nonatomic) NSArray *syncAnchors;	// G=0x37972f1d; S=0x37972f99; 
@property(copy, nonatomic) NSString *version;	// G=0x37973001; S=0x3797301d; 
+ (id)assistantLoaded;	// 0x37972db5
+ (id)assistantLoadedWithDictionary:(id)dictionary context:(id)context;	// 0x37972df9
// declared property getter: - (id)dataAnchor;	// 0x37972e45
- (id)encodedClassName;	// 0x37972da9
- (id)groupIdentifier;	// 0x37972d99
// declared property getter: - (id)requestSync;	// 0x37972eb1
- (BOOL)requiresResponse;	// 0x3797306d
// declared property setter: - (void)setDataAnchor:(id)anchor;	// 0x37972e61
// declared property setter: - (void)setRequestSync:(id)sync;	// 0x37972ecd
// declared property setter: - (void)setSyncAnchors:(id)anchors;	// 0x37972f99
// declared property setter: - (void)setVersion:(id)version;	// 0x3797301d
// declared property getter: - (id)syncAnchors;	// 0x37972f1d
// declared property getter: - (id)version;	// 0x37973001
@end
