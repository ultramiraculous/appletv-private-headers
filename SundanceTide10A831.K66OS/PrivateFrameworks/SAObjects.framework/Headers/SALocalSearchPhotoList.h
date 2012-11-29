/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "AceObject.h"
#import "SAAceSerializable.h"

@class NSString, NSArray;

@interface SALocalSearchPhotoList : AceObject <SAAceSerializable> {
}
@property(copy, nonatomic) NSArray *photos;	// G=0x30512d49; S=0x30512dc5; 
@property(copy, nonatomic) NSString *providerId;	// G=0x30512e2d; S=0x30512e49; 
+ (id)photoList;	// 0x30512cb9
+ (id)photoListWithDictionary:(id)dictionary context:(id)context;	// 0x30512cfd
- (id)encodedClassName;	// 0x30512cad
- (id)groupIdentifier;	// 0x30512c9d
// declared property getter: - (id)photos;	// 0x30512d49
// declared property getter: - (id)providerId;	// 0x30512e2d
// declared property setter: - (void)setPhotos:(id)photos;	// 0x30512dc5
// declared property setter: - (void)setProviderId:(id)anId;	// 0x30512e49
@end
