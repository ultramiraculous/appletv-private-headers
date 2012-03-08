/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import <NSObject.h> // Unknown library

@class NSString;

@interface CoreDAVItemParserMapping : NSObject {
	NSString *_nameSpace;	// 4 = 0x4
	NSString *_name;	// 8 = 0x8
	Class _parseClass;	// 12 = 0xc
}
@property(retain) NSString *name;	// G=0x30083609; S=0x3008361d; @synthesize=_name
@property(retain) NSString *nameSpace;	// G=0x300835d1; S=0x300835e5; @synthesize=_nameSpace
@property(assign) Class parseClass;	// G=0x30083641; S=0x30083651; @synthesize=_parseClass
- (id)initWithNameSpace:(id)nameSpace name:(id)name parseClass:(Class)aClass;	// 0x30083441
- (void)dealloc;	// 0x300834c9
- (id)description;	// 0x30083529
// declared property getter: - (id)name;	// 0x30083609
// declared property getter: - (id)nameSpace;	// 0x300835d1
// declared property getter: - (Class)parseClass;	// 0x30083641
// declared property setter: - (void)setName:(id)name;	// 0x3008361d
// declared property setter: - (void)setNameSpace:(id)space;	// 0x300835e5
// declared property setter: - (void)setParseClass:(Class)aClass;	// 0x30083651
@end
