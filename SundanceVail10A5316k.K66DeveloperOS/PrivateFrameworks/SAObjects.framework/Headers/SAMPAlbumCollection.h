/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SAMPCollection.h"


@interface SAMPAlbumCollection : SAMPCollection {
}
@property(assign, nonatomic) int rating;	// G=0x32f3804d; S=0x32f380bd; 
+ (id)albumCollection;	// 0x32f37fbd
+ (id)albumCollectionWithDictionary:(id)dictionary context:(id)context;	// 0x32f38001
- (id)encodedClassName;	// 0x32f37fb1
- (id)groupIdentifier;	// 0x32f37fa1
// declared property getter: - (int)rating;	// 0x32f3804d
// declared property setter: - (void)setRating:(int)rating;	// 0x32f380bd
- (void)updateUsingSet:(id)set add:(id)add remove:(id)remove;	// 0x32f38101
@end

