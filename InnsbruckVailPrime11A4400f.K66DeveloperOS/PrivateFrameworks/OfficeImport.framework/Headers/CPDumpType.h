/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import </libobjc.A.h>
#import "OfficeImport-Structs.h"

@class NSString;

@interface CPDumpType : NSObject {
	NSString *mName;	// 4 = 0x4
}
@property(retain) id name;	// G=0x319a3201; S=0x319a3211; converted property
- (id)init;	// 0x319a314d
- (id)initWithName:(id)name;	// 0x319a3161
- (void)dealloc;	// 0x319a31b5
- (void)fromBinary:(FILE *)binary toXml:(xmlNode *)xml state:(id)state;	// 0x319a3251
- (void)fromXml:(xmlNode *)xml toBinary:(FILE *)binary state:(id)state;	// 0x319a3255
// converted property getter: - (id)name;	// 0x319a3201
// converted property setter: - (void)setName:(id)name;	// 0x319a3211
@end
