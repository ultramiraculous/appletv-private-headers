/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/PrintKit.framework/PrintKit
 */

#import </libobjc.A.h>

@class NSMutableDictionary, PKPaper;

@interface PKPrintSettings : NSObject {
	NSMutableDictionary *_dict;	// 4 = 0x4
	PKPaper *paper;	// 8 = 0x8
}
@property(retain, nonatomic) NSMutableDictionary *dict;	// G=0x324d01c9; S=0x324d01d9; @synthesize=_dict
@property(retain, nonatomic) PKPaper *paper;	// G=0x324d01e9; S=0x324d01f9; @synthesize
+ (id)default;	// 0x324cff71
+ (id)photo;	// 0x324d0019
+ (id)printSettingsForPrinter:(id)printer;	// 0x324d00f1
- (id)init;	// 0x324cfe95
- (void)dealloc;	// 0x324cfe3d
// declared property getter: - (id)dict;	// 0x324d01c9
- (id)objectForKey:(id)key;	// 0x324cff51
// declared property getter: - (id)paper;	// 0x324d01e9
- (void)removeObjectForKey:(id)key;	// 0x324cff31
// declared property setter: - (void)setDict:(id)dict;	// 0x324d01d9
- (void)setObject:(id)object forKey:(id)key;	// 0x324cff11
// declared property setter: - (void)setPaper:(id)paper;	// 0x324d01f9
- (id)settingsDict;	// 0x324cff01
@end
