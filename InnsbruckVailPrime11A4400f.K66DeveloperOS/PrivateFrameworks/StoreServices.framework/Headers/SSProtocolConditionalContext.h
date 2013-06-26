/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import "StoreServices-Structs.h"
#import </libobjc.A.h>
#import "NSCopying.h"

@class NSString;

@interface SSProtocolConditionalContext : NSObject <NSCopying> {
	id _itemLookupBlock;	// 4 = 0x4
	NSString *_platformName;	// 8 = 0x8
	NSString *_systemVersion;	// 12 = 0xc
}
@property(copy, nonatomic) id itemLookupBlock;	// G=0x32809a81; S=0x32809a95; @synthesize=_itemLookupBlock
@property(copy, nonatomic) NSString *platformName;	// G=0x32809aa5; S=0x32809ab9; @synthesize=_platformName
@property(copy, nonatomic) NSString *systemVersion;	// G=0x32809ac9; S=0x32809add; @synthesize=_systemVersion
- (id)copyWithZone:(NSZone *)zone;	// 0x328099ed
- (void)dealloc;	// 0x32809975
// declared property getter: - (id)itemLookupBlock;	// 0x32809a81
// declared property getter: - (id)platformName;	// 0x32809aa5
// declared property setter: - (void)setItemLookupBlock:(id)block;	// 0x32809a95
// declared property setter: - (void)setPlatformName:(id)name;	// 0x32809ab9
// declared property setter: - (void)setSystemVersion:(id)version;	// 0x32809add
// declared property getter: - (id)systemVersion;	// 0x32809ac9
@end
