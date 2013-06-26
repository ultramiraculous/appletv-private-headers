/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SAMicroblogMicroblogSearchResultPost.h"

@class NSURL, NSNumber;

@interface SAMicroblogMicroblogSearchEmbeddedImage : SAMicroblogMicroblogSearchResultPost {
}
@property(copy, nonatomic) NSNumber *height;	// G=0x326d8129; S=0x326d8145; 
@property(copy, nonatomic) NSURL *imageURL;	// G=0x326d8195; S=0x326d8211; 
@property(copy, nonatomic) NSNumber *width;	// G=0x326d8271; S=0x326d828d; 
+ (id)microblogSearchEmbeddedImage;	// 0x326d8099
+ (id)microblogSearchEmbeddedImageWithDictionary:(id)dictionary context:(id)context;	// 0x326d80dd
- (id)encodedClassName;	// 0x326d808d
- (id)groupIdentifier;	// 0x326d807d
// declared property getter: - (id)height;	// 0x326d8129
// declared property getter: - (id)imageURL;	// 0x326d8195
// declared property setter: - (void)setHeight:(id)height;	// 0x326d8145
// declared property setter: - (void)setImageURL:(id)url;	// 0x326d8211
// declared property setter: - (void)setWidth:(id)width;	// 0x326d828d
- (void)updateUsingSet:(id)set add:(id)add remove:(id)remove;	// 0x326d82dd
// declared property getter: - (id)width;	// 0x326d8271
@end
