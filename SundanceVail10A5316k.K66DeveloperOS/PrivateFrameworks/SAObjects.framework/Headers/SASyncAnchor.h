/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "AceObject.h"
#import "SAAceSerializable.h"

@class NSString;

@interface SASyncAnchor : AceObject <SAAceSerializable> {
}
@property(copy, nonatomic) NSString *generation;	// G=0x32f36e9d; S=0x32f36eb9; 
@property(copy, nonatomic) NSString *key;	// G=0x32f36f09; S=0x32f36f25; 
@property(copy, nonatomic) NSString *validity;	// G=0x32f36f75; S=0x32f36f91; 
@property(copy, nonatomic) NSString *value;	// G=0x32f36fe1; S=0x32f36ffd; 
+ (id)anchor;	// 0x32f36e0d
+ (id)anchorWithDictionary:(id)dictionary context:(id)context;	// 0x32f36e51
- (id)encodedClassName;	// 0x32f36e01
// declared property getter: - (id)generation;	// 0x32f36e9d
- (id)groupIdentifier;	// 0x32f36df1
// declared property getter: - (id)key;	// 0x32f36f09
// declared property setter: - (void)setGeneration:(id)generation;	// 0x32f36eb9
// declared property setter: - (void)setKey:(id)key;	// 0x32f36f25
// declared property setter: - (void)setValidity:(id)validity;	// 0x32f36f91
// declared property setter: - (void)setValue:(id)value;	// 0x32f36ffd
// declared property getter: - (id)validity;	// 0x32f36f75
// declared property getter: - (id)value;	// 0x32f36fe1
@end
