/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library


@protocol OAVClient
+ (void)readClientDataFromGroup:(xmlNode *)group toGroup:(id)group2 state:(id)state;
+ (void)readClientDataFromShape:(xmlNode *)shape toGraphic:(id)graphic state:(id)state;
+ (int)vmlSupportLevel;
@end

@interface OAVClient : NSObject {
}
+ (BOOL)sourceDrawableIsTopLevel:(xmlNode *)level;	// 0x36c1e225
@end
