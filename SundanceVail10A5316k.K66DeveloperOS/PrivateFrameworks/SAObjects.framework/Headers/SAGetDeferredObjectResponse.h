/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SABaseClientBoundCommand.h"


@interface SAGetDeferredObjectResponse : SABaseClientBoundCommand {
}
@property(retain, nonatomic) id<SAAceSerializable> object;	// G=0x32f6daa9; S=0x32f6dafd; 
+ (id)getDeferredObjectResponse;	// 0x32f6da19
+ (id)getDeferredObjectResponseWithDictionary:(id)dictionary context:(id)context;	// 0x32f6da5d
- (id)encodedClassName;	// 0x32f6da0d
- (id)groupIdentifier;	// 0x32f6d9fd
// declared property getter: - (id)object;	// 0x32f6daa9
- (BOOL)requiresResponse;	// 0x32f6db39
// declared property setter: - (void)setObject:(id)object;	// 0x32f6dafd
@end

