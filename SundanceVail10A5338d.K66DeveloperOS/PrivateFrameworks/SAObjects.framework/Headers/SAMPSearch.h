/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SABaseClientBoundCommand.h"

@class NSString, NSArray, NSURL;

@interface SAMPSearch : SABaseClientBoundCommand {
}
@property(copy, nonatomic) NSArray *constraints;	// G=0x379529b1; S=0x37952a2d; 
@property(assign, nonatomic) int maxResults;	// G=0x37952a95; S=0x37952b05; 
@property(copy, nonatomic) NSArray *searchProperties;	// G=0x37952b49; S=0x37952b65; 
@property(copy, nonatomic) NSArray *searchTypes;	// G=0x37952bb5; S=0x37952bd1; 
@property(copy, nonatomic) NSString *searchValue;	// G=0x37952c21; S=0x37952c3d; 
@property(assign, nonatomic) BOOL strict;	// G=0x37952c8d; S=0x37952d05; 
@property(copy, nonatomic) NSURL *targetAppId;	// G=0x379528d5; S=0x37952951; 
+ (id)search;	// 0x37952845
+ (id)searchWithDictionary:(id)dictionary context:(id)context;	// 0x37952889
// declared property getter: - (id)constraints;	// 0x379529b1
- (id)encodedClassName;	// 0x37952839
- (id)groupIdentifier;	// 0x37952829
// declared property getter: - (int)maxResults;	// 0x37952a95
- (BOOL)requiresResponse;	// 0x37952d49
// declared property getter: - (id)searchProperties;	// 0x37952b49
// declared property getter: - (id)searchTypes;	// 0x37952bb5
// declared property getter: - (id)searchValue;	// 0x37952c21
// declared property setter: - (void)setConstraints:(id)constraints;	// 0x37952a2d
// declared property setter: - (void)setMaxResults:(int)results;	// 0x37952b05
// declared property setter: - (void)setSearchProperties:(id)properties;	// 0x37952b65
// declared property setter: - (void)setSearchTypes:(id)types;	// 0x37952bd1
// declared property setter: - (void)setSearchValue:(id)value;	// 0x37952c3d
// declared property setter: - (void)setStrict:(BOOL)strict;	// 0x37952d05
// declared property setter: - (void)setTargetAppId:(id)anId;	// 0x37952951
// declared property getter: - (BOOL)strict;	// 0x37952c8d
// declared property getter: - (id)targetAppId;	// 0x379528d5
@end

