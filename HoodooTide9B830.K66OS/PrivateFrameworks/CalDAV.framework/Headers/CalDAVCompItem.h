/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

#import <CoreDAVItem.h> // Unknown library

@class NSString;

@interface CalDAVCompItem : CoreDAVItem {
	NSString *_nameAttribute;	// 24 = 0x18
}
@property(retain) NSString *nameAttribute;	// G=0x31473a35; S=0x31473a11; @synthesize=_nameAttribute
- (id)init;	// 0x31473989
- (id)initWithNameSpace:(id)nameSpace andName:(id)name;	// 0x314739c5
- (void)dealloc;	// 0x31473be5
// declared property getter: - (id)nameAttribute;	// 0x31473a35
- (void)parserFoundAttributes:(id)attributes;	// 0x31473afd
// declared property setter: - (void)setNameAttribute:(id)attribute;	// 0x31473a11
- (void)write:(id)write;	// 0x31473a4d
@end
