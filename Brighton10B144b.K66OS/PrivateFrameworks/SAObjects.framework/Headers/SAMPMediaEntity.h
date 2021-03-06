/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SADomainObject.h"

@class NSString;

@interface SAMPMediaEntity : SADomainObject {
}
@property(copy, nonatomic) NSString *sortTitle;	// G=0x353c6f81; S=0x353c6f9d; 
@property(copy, nonatomic) NSString *title;	// G=0x353c6fed; S=0x353c7009; 
+ (id)mediaEntity;	// 0x353c6ef1
+ (id)mediaEntityWithDictionary:(id)dictionary context:(id)context;	// 0x353c6f35
- (id)encodedClassName;	// 0x353c6ee5
- (id)groupIdentifier;	// 0x353c6ed5
// declared property setter: - (void)setSortTitle:(id)title;	// 0x353c6f9d
// declared property setter: - (void)setTitle:(id)title;	// 0x353c7009
// declared property getter: - (id)sortTitle;	// 0x353c6f81
// declared property getter: - (id)title;	// 0x353c6fed
- (void)updateUsingSet:(id)set add:(id)add remove:(id)remove;	// 0x353c7059
@end

