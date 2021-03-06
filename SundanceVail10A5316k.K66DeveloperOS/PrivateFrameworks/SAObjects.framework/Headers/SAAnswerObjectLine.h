/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "AceObject.h"
#import "SAAceSerializable.h"

@class NSString, NSURL;

@interface SAAnswerObjectLine : AceObject <SAAceSerializable> {
}
@property(copy, nonatomic) NSURL *image;	// G=0x32f597a5; S=0x32f59821; 
@property(copy, nonatomic) NSString *text;	// G=0x32f59881; S=0x32f5989d; 
+ (id)objectLine;	// 0x32f59715
+ (id)objectLineWithDictionary:(id)dictionary context:(id)context;	// 0x32f59759
- (id)encodedClassName;	// 0x32f59709
- (id)groupIdentifier;	// 0x32f596f9
// declared property getter: - (id)image;	// 0x32f597a5
// declared property setter: - (void)setImage:(id)image;	// 0x32f59821
// declared property setter: - (void)setText:(id)text;	// 0x32f5989d
// declared property getter: - (id)text;	// 0x32f59881
@end

