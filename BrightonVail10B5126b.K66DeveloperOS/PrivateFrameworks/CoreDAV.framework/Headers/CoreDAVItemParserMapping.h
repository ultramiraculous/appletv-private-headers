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
@property(retain) NSString *name;	// G=0x33729701; S=0x33729715; @synthesize=_name
@property(retain) NSString *nameSpace;	// G=0x337296dd; S=0x337296f1; @synthesize=_nameSpace
@property(assign) Class parseClass;	// G=0x33729725; S=0x33729739; @synthesize=_parseClass
- (id)initWithNameSpace:(id)nameSpace name:(id)name parseClass:(Class)aClass;	// 0x33729545
- (void)dealloc;	// 0x337295d1
- (id)description;	// 0x33729635
// declared property getter: - (id)name;	// 0x33729701
// declared property getter: - (id)nameSpace;	// 0x337296dd
// declared property getter: - (Class)parseClass;	// 0x33729725
// declared property setter: - (void)setName:(id)name;	// 0x33729715
// declared property setter: - (void)setNameSpace:(id)space;	// 0x337296f1
// declared property setter: - (void)setParseClass:(Class)aClass;	// 0x33729739
@end

