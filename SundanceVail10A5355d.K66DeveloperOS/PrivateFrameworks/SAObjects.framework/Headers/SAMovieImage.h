/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "AceObject.h"
#import "SAAceSerializable.h"

@class NSURL, SAMovieResolution;

@interface SAMovieImage : AceObject <SAAceSerializable> {
}
@property(retain, nonatomic) SAMovieResolution *resolution;	// G=0x366409a9; S=0x366409fd; 
@property(copy, nonatomic) NSURL *uri;	// G=0x36640a39; S=0x36640ab5; 
+ (id)image;	// 0x36640919
+ (id)imageWithDictionary:(id)dictionary context:(id)context;	// 0x3664095d
- (id)encodedClassName;	// 0x3664090d
- (id)groupIdentifier;	// 0x366408fd
// declared property getter: - (id)resolution;	// 0x366409a9
// declared property setter: - (void)setResolution:(id)resolution;	// 0x366409fd
// declared property setter: - (void)setUri:(id)uri;	// 0x36640ab5
// declared property getter: - (id)uri;	// 0x36640a39
@end

