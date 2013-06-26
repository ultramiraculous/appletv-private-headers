/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/PrototypeTools.framework/PrototypeTools
 */

#import "PrototypeTools-Structs.h"
#import "PTSRowAction.h"

@class NSString;

@interface PTSAddGroupSettingsRowAction : PTSRowAction {
	Class _settingsClass;	// 12 = 0xc
	NSString *_groupKeyPath;	// 16 = 0x10
}
@property(copy, nonatomic) NSString *groupKeyPath;	// G=0x325a0bfd; S=0x325a0c11; @synthesize=_groupKeyPath
@property(retain, nonatomic) Class settingsClass;	// G=0x325a0bd9; S=0x325a0be9; @synthesize=_settingsClass
+ (id)actionWithGroupKeyPath:(id)groupKeyPath settingsClass:(Class)aClass;	// 0x325a091d
- (id)init;	// 0x325a09a5
- (void).cxx_destruct;	// 0x325a0c21
- (id)copyWithZone:(NSZone *)zone;	// 0x325a0ad5
// declared property getter: - (id)groupKeyPath;	// 0x325a0bfd
- (void)resolveTemplatesWithIndex:(unsigned)index;	// 0x325a0b61
// declared property setter: - (void)setGroupKeyPath:(id)path;	// 0x325a0c11
// declared property setter: - (void)setSettingsClass:(Class)aClass;	// 0x325a0be9
// declared property getter: - (Class)settingsClass;	// 0x325a0bd9
@end
