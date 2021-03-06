/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SAAbstractItemList.h"

@class SAMPCollection;

@interface SAMPMediaEntityList : SAAbstractItemList {
}
@property(assign, nonatomic) int mediaType;	// G=0x326fffd5; S=0x326ffffd; 
@property(retain, nonatomic) SAMPCollection *parentCollection;	// G=0x3270002d; S=0x32700071; 
+ (id)mediaEntityList;	// 0x326fff45
+ (id)mediaEntityListWithDictionary:(id)dictionary context:(id)context;	// 0x326fff89
- (id)encodedClassName;	// 0x326fff39
- (id)groupIdentifier;	// 0x326fff29
// declared property getter: - (int)mediaType;	// 0x326fffd5
// declared property getter: - (id)parentCollection;	// 0x3270002d
// declared property setter: - (void)setMediaType:(int)type;	// 0x326ffffd
// declared property setter: - (void)setParentCollection:(id)collection;	// 0x32700071
- (void)updateUsingSet:(id)set add:(id)add remove:(id)remove;	// 0x327000ad
@end

