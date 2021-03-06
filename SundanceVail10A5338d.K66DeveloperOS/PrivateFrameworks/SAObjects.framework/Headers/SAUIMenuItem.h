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
@property(copy, nonatomic) NSArray *commands;	// G=0x3794742d; S=0x37947495; 
@property(copy, nonatomic) NSURL *icon;	// G=0x379474fd; S=0x37947579; 
@property(copy, nonatomic) NSURL *ref;	// G=0x379475d9; S=0x37947655; 
@property(copy, nonatomic) NSString *subtitle;	// G=0x379476b5; S=0x379476d1; 
@property(copy, nonatomic) NSString *title;	// G=0x37947721; S=0x3794773d; 
+ (id)menuItem;	// 0x3794739d
+ (id)menuItemWithDictionary:(id)dictionary context:(id)context;	// 0x379473e1
// declared property getter: - (id)commands;	// 0x3794742d
- (id)encodedClassName;	// 0x37947391
- (id)groupIdentifier;	// 0x37947381
// declared property getter: - (id)icon;	// 0x379474fd
// declared property getter: - (id)ref;	// 0x379475d9
// declared property setter: - (void)setCommands:(id)commands;	// 0x37947495
// declared property setter: - (void)setIcon:(id)icon;	// 0x37947579
// declared property setter: - (void)setRef:(id)ref;	// 0x37947655
// declared property setter: - (void)setSubtitle:(id)subtitle;	// 0x379476d1
// declared property setter: - (void)setTitle:(id)title;	// 0x3794773d
// declared property getter: - (id)subtitle;	// 0x379476b5
// declared property getter: - (id)title;	// 0x37947721
@end

