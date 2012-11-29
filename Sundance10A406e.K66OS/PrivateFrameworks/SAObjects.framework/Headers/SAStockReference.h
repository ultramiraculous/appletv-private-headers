/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SADomainObject.h"

@class NSString;

@interface SAStockReference : SADomainObject {
}
@property(copy, nonatomic) NSString *companyName;	// G=0x325220f5; S=0x32522111; 
@property(copy, nonatomic) NSString *symbol;	// G=0x32522161; S=0x3252217d; 
+ (id)reference;	// 0x32522065
+ (id)referenceWithDictionary:(id)dictionary context:(id)context;	// 0x325220a9
// declared property getter: - (id)companyName;	// 0x325220f5
- (id)encodedClassName;	// 0x32522059
- (id)groupIdentifier;	// 0x32522049
// declared property setter: - (void)setCompanyName:(id)name;	// 0x32522111
// declared property setter: - (void)setSymbol:(id)symbol;	// 0x3252217d
// declared property getter: - (id)symbol;	// 0x32522161
- (void)updateUsingSet:(id)set add:(id)add remove:(id)remove;	// 0x325221cd
@end
