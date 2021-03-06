/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SABaseClientBoundCommand.h"

@class NSArray, NSURL;

@interface SAStockSearch : SABaseClientBoundCommand {
}
@property(copy, nonatomic) NSArray *companyNameList;	// G=0x325227c9; S=0x325227e5; 
@property(copy, nonatomic) NSArray *stockReferences;	// G=0x32522835; S=0x325228b1; 
@property(copy, nonatomic) NSURL *targetAppId;	// G=0x325226ed; S=0x32522769; 
+ (id)search;	// 0x3252265d
+ (id)searchWithDictionary:(id)dictionary context:(id)context;	// 0x325226a1
// declared property getter: - (id)companyNameList;	// 0x325227c9
- (id)encodedClassName;	// 0x32522651
- (id)groupIdentifier;	// 0x32522641
- (BOOL)requiresResponse;	// 0x32522919
// declared property setter: - (void)setCompanyNameList:(id)list;	// 0x325227e5
// declared property setter: - (void)setStockReferences:(id)references;	// 0x325228b1
// declared property setter: - (void)setTargetAppId:(id)anId;	// 0x32522769
// declared property getter: - (id)stockReferences;	// 0x32522835
// declared property getter: - (id)targetAppId;	// 0x325226ed
@end

