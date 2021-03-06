/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SADeferredKeyObject.h"
#import "SAAceView.h"

@class NSString;

@interface SAUIAssistantUtteranceView : SAAceView <SADeferredKeyObject> {
}
@property(copy, nonatomic) NSString *dialogIdentifier;	// G=0x325105e1; S=0x325105fd; 
@property(copy, nonatomic) NSString *text;	// G=0x3251064d; S=0x32510669; 
+ (id)assistantUtteranceView;	// 0x32510551
+ (id)assistantUtteranceViewWithDictionary:(id)dictionary context:(id)context;	// 0x32510595
- (id)deferredKeys;	// 0x325106b9
// declared property getter: - (id)dialogIdentifier;	// 0x325105e1
- (id)encodedClassName;	// 0x32510545
- (id)groupIdentifier;	// 0x32510535
// declared property setter: - (void)setDialogIdentifier:(id)identifier;	// 0x325105fd
// declared property setter: - (void)setText:(id)text;	// 0x32510669
// declared property getter: - (id)text;	// 0x3251064d
@end

