/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "AceObject.h"
#import "SAAceSerializable.h"


@interface SAMovieResolution : AceObject <SAAceSerializable> {
}
@property(assign, nonatomic) int height;	// G=0x305104dd; S=0x3051054d; 
@property(assign, nonatomic) int width;	// G=0x30510591; S=0x30510601; 
+ (id)resolution;	// 0x3051044d
+ (id)resolutionWithDictionary:(id)dictionary context:(id)context;	// 0x30510491
- (id)encodedClassName;	// 0x30510441
- (id)groupIdentifier;	// 0x30510431
// declared property getter: - (int)height;	// 0x305104dd
// declared property setter: - (void)setHeight:(int)height;	// 0x3051054d
// declared property setter: - (void)setWidth:(int)width;	// 0x30510601
// declared property getter: - (int)width;	// 0x30510591
@end
