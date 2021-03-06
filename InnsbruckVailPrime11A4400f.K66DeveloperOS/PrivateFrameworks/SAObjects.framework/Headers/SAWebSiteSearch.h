/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SADomainCommand.h"

@class NSString;

@interface SAWebSiteSearch : SADomainCommand {
}
@property(copy, nonatomic) NSString *provider;	// G=0x326bee59; S=0x326bee75; 
@property(copy, nonatomic) NSString *query;	// G=0x326beec5; S=0x326beee1; 
+ (id)siteSearch;	// 0x326bedc9
+ (id)siteSearchWithDictionary:(id)dictionary context:(id)context;	// 0x326bee0d
- (id)encodedClassName;	// 0x326bedbd
- (id)groupIdentifier;	// 0x326bedad
// declared property getter: - (id)provider;	// 0x326bee59
// declared property getter: - (id)query;	// 0x326beec5
- (BOOL)requiresResponse;	// 0x326bef31
// declared property setter: - (void)setProvider:(id)provider;	// 0x326bee75
// declared property setter: - (void)setQuery:(id)query;	// 0x326beee1
@end

