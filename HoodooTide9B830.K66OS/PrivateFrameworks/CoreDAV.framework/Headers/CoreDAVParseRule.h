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
@property(readonly, assign) NSString *elementName;	// G=0x35de843d; @synthesize=_elementName
@property(readonly, assign) int maximumNumber;	// G=0x35de841d; @synthesize=_maximumNumber
@property(readonly, assign) int minimumNumber;	// G=0x35de840d; @synthesize=_minimumNumber
@property(readonly, assign) NSString *nameSpace;	// G=0x35de842d; @synthesize=_nameSpace
@property(readonly, assign) Class objectClass;	// G=0x35de844d; @synthesize=_objectClass
@property(readonly, assign) SEL setterMethod;	// G=0x35de845d; @synthesize=_setterMethod
- (id)initWithMinimumNumber:(int)minimumNumber maximumNumber:(int)number nameSpace:(id)space elementName:(id)name objectClass:(Class)aClass setterMethod:(SEL)method;	// 0x35de8281
- (void)dealloc;	// 0x35de833d
- (id)description;	// 0x35de839d
// declared property getter: - (id)elementName;	// 0x35de843d
// declared property getter: - (int)maximumNumber;	// 0x35de841d
// declared property getter: - (int)minimumNumber;	// 0x35de840d
// declared property getter: - (id)nameSpace;	// 0x35de842d
// declared property getter: - (Class)objectClass;	// 0x35de844d
// declared property getter: - (SEL)setterMethod;	// 0x35de845d
@end

