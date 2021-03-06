/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import <NSObject.h> // Unknown library

@class NSString;

@interface CoreDAVParseRule : NSObject {
	int _minimumNumber;	// 4 = 0x4
	int _maximumNumber;	// 8 = 0x8
	NSString *_nameSpace;	// 12 = 0xc
	NSString *_elementName;	// 16 = 0x10
	Class _objectClass;	// 20 = 0x14
	SEL _setterMethod;	// 24 = 0x18
}
@property(readonly, assign) NSString *elementName;	// G=0x34c2ac39; @synthesize=_elementName
@property(readonly, assign) int maximumNumber;	// G=0x34c2ac11; @synthesize=_maximumNumber
@property(readonly, assign) int minimumNumber;	// G=0x34c2abfd; @synthesize=_minimumNumber
@property(readonly, assign) NSString *nameSpace;	// G=0x34c2ac25; @synthesize=_nameSpace
@property(readonly, assign) Class objectClass;	// G=0x34c2ac4d; @synthesize=_objectClass
@property(readonly, assign) SEL setterMethod;	// G=0x34c2ac61; @synthesize=_setterMethod
- (id)initWithMinimumNumber:(int)minimumNumber maximumNumber:(int)number nameSpace:(id)space elementName:(id)name objectClass:(Class)aClass setterMethod:(SEL)method;	// 0x34c2aa69
- (void)dealloc;	// 0x34c2ab25
- (id)description;	// 0x34c2ab89
// declared property getter: - (id)elementName;	// 0x34c2ac39
// declared property getter: - (int)maximumNumber;	// 0x34c2ac11
// declared property getter: - (int)minimumNumber;	// 0x34c2abfd
// declared property getter: - (id)nameSpace;	// 0x34c2ac25
// declared property getter: - (Class)objectClass;	// 0x34c2ac4d
// declared property getter: - (SEL)setterMethod;	// 0x34c2ac61
@end

