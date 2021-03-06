/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SAAceView.h"

@class NSString, NSArray;

@interface SAUIConfirmationView : SAAceView {
}
@property(copy, nonatomic) NSString *cancelTrigger;	// G=0x3425031d; S=0x34250339; 
@property(copy, nonatomic) NSArray *confirmCommands;	// G=0x34250389; S=0x342503f1; 
@property(copy, nonatomic) NSString *confirmText;	// G=0x34250459; S=0x34250475; 
@property(copy, nonatomic) NSArray *denyCommands;	// G=0x342504c5; S=0x3425052d; 
@property(copy, nonatomic) NSString *denyText;	// G=0x34250595; S=0x342505b1; 
+ (id)confirmationView;	// 0x3425028d
+ (id)confirmationViewWithDictionary:(id)dictionary context:(id)context;	// 0x342502d1
// declared property getter: - (id)cancelTrigger;	// 0x3425031d
// declared property getter: - (id)confirmCommands;	// 0x34250389
// declared property getter: - (id)confirmText;	// 0x34250459
// declared property getter: - (id)denyCommands;	// 0x342504c5
// declared property getter: - (id)denyText;	// 0x34250595
- (id)encodedClassName;	// 0x34250281
- (id)groupIdentifier;	// 0x34250271
// declared property setter: - (void)setCancelTrigger:(id)trigger;	// 0x34250339
// declared property setter: - (void)setConfirmCommands:(id)commands;	// 0x342503f1
// declared property setter: - (void)setConfirmText:(id)text;	// 0x34250475
// declared property setter: - (void)setDenyCommands:(id)commands;	// 0x3425052d
// declared property setter: - (void)setDenyText:(id)text;	// 0x342505b1
@end

