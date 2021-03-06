/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SAAceView.h"

@class NSString, NSArray, NSURL;

@interface SAUIMenuItem : SAAceView {
}
@property(copy, nonatomic) NSArray *commands;	// G=0x30398cd1; S=0x30398d39; 
@property(copy, nonatomic) NSURL *icon;	// G=0x30398da1; S=0x30398e1d; 
@property(copy, nonatomic) NSURL *ref;	// G=0x30398e7d; S=0x30398ef9; 
@property(copy, nonatomic) NSString *subtitle;	// G=0x30398f59; S=0x30398f75; 
@property(copy, nonatomic) NSString *title;	// G=0x30398fc5; S=0x30398fe1; 
+ (id)menuItem;	// 0x30398c41
+ (id)menuItemWithDictionary:(id)dictionary context:(id)context;	// 0x30398c85
// declared property getter: - (id)commands;	// 0x30398cd1
- (id)encodedClassName;	// 0x30398c35
- (id)groupIdentifier;	// 0x30398c25
// declared property getter: - (id)icon;	// 0x30398da1
// declared property getter: - (id)ref;	// 0x30398e7d
// declared property setter: - (void)setCommands:(id)commands;	// 0x30398d39
// declared property setter: - (void)setIcon:(id)icon;	// 0x30398e1d
// declared property setter: - (void)setRef:(id)ref;	// 0x30398ef9
// declared property setter: - (void)setSubtitle:(id)subtitle;	// 0x30398f75
// declared property setter: - (void)setTitle:(id)title;	// 0x30398fe1
// declared property getter: - (id)subtitle;	// 0x30398f59
// declared property getter: - (id)title;	// 0x30398fc5
@end

