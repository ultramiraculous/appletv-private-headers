/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SAAceSerializable.h"
#import "AceObject.h"

@class NSString, NSURL;

@interface SASportsNewsItem : AceObject <SAAceSerializable> {
}
@property(copy, nonatomic) NSURL *link;	// G=0x353f395d; S=0x353f39d9; 
@property(copy, nonatomic) NSString *summary;	// G=0x353f3a39; S=0x353f3a55; 
@property(copy, nonatomic) NSString *title;	// G=0x353f3aa5; S=0x353f3ac1; 
+ (id)newsItem;	// 0x353f38cd
+ (id)newsItemWithDictionary:(id)dictionary context:(id)context;	// 0x353f3911
- (id)encodedClassName;	// 0x353f38c1
- (id)groupIdentifier;	// 0x353f38b1
// declared property getter: - (id)link;	// 0x353f395d
// declared property setter: - (void)setLink:(id)link;	// 0x353f39d9
// declared property setter: - (void)setSummary:(id)summary;	// 0x353f3a55
// declared property setter: - (void)setTitle:(id)title;	// 0x353f3ac1
// declared property getter: - (id)summary;	// 0x353f3a39
// declared property getter: - (id)title;	// 0x353f3aa5
@end

