/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library


@interface ESDObjectFactory : NSObject {
}
+ (EshObject *)createObjectWithType:(unsigned short)type;	// 0x349e1d0d
+ (EshObject *)createObjectWithType:(unsigned short)type version:(unsigned short)version;	// 0x34a7e769
+ (void)initialize;	// 0x349e1a0d
+ (void)replaceHostEshFactoryWith:(EshObjectFactory *)with;	// 0x34a6d1b9
+ (void)restoreHostEshFactory;	// 0x34a7f981
+ (void)setEshFactory:(EshObjectFactory *)factory;	// 0x349e1a5d
@end

