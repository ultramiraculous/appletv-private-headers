/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library
#import "OfficeImport-Structs.h"


__attribute__((visibility("hidden")))
@interface ESDObjectFactory : NSObject {
}
+ (EshObject *)createObjectWithType:(unsigned short)type;	// 0x327b1fad
+ (EshObject *)createObjectWithType:(unsigned short)type version:(unsigned short)version;	// 0x3281a1a9
+ (void)initialize;	// 0x327e05ed
+ (void)replaceHostEshFactoryWith:(EshObjectFactory *)with;	// 0x3280b2c9
+ (void)restoreHostEshFactory;	// 0x3281b3ed
+ (void)setEshFactory:(EshObjectFactory *)factory;	// 0x327e063d
@end

