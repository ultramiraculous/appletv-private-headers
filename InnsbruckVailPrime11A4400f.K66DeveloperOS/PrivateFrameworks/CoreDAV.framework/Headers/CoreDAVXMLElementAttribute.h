/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import </libobjc.A.h>

@class NSString;

@interface CoreDAVXMLElementAttribute : NSObject {
	NSString *_name;	// 4 = 0x4
	NSString *_nameSpace;	// 8 = 0x8
	NSString *_value;	// 12 = 0xc
}
@property(retain) NSString *name;	// G=0x304ad909; S=0x304ad91d; @synthesize=_name
@property(retain) NSString *nameSpace;	// G=0x304ad92d; S=0x304ad941; @synthesize=_nameSpace
@property(retain) NSString *value;	// G=0x304ad951; S=0x304ad965; @synthesize=_value
- (id)init;	// 0x304ad715
- (id)initWithNameSpace:(id)nameSpace name:(id)name value:(id)value;	// 0x304ad719
- (void)dealloc;	// 0x304ad7ed
- (id)description;	// 0x304ad865
// declared property getter: - (id)name;	// 0x304ad909
// declared property getter: - (id)nameSpace;	// 0x304ad92d
// declared property setter: - (void)setName:(id)name;	// 0x304ad91d
// declared property setter: - (void)setNameSpace:(id)space;	// 0x304ad941
// declared property setter: - (void)setValue:(id)value;	// 0x304ad965
// declared property getter: - (id)value;	// 0x304ad951
@end

