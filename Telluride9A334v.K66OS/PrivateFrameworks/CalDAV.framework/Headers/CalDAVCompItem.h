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
@property(retain) NSString *nameAttribute;	// G=0x3594bb89; S=0x3594bb65; @synthesize=_nameAttribute
- (id)init;	// 0x3594badd
- (id)initWithNameSpace:(id)nameSpace andName:(id)name;	// 0x3594bb19
- (void)dealloc;	// 0x3594bd39
// declared property getter: - (id)nameAttribute;	// 0x3594bb89
- (void)parserFoundAttributes:(id)attributes;	// 0x3594bc51
// declared property setter: - (void)setNameAttribute:(id)attribute;	// 0x3594bb65
- (void)write:(id)write;	// 0x3594bba1
@end

