/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SASportsSnippet.h"

@class NSArray;

@interface SASportsStandingsSnippet : SASportsSnippet {
}
@property(copy, nonatomic) NSArray *columns;	// G=0x355ccb7d; S=0x355ccb99; 
@property(copy, nonatomic) NSArray *entities;	// G=0x355ccbe9; S=0x355ccc65; 
@property(copy, nonatomic) NSArray *selectedEntities;	// G=0x355ccccd; S=0x355ccd49; 
@property(assign, nonatomic) BOOL showCardinalPositions;	// G=0x355ccdb1; S=0x355cce29; 
+ (id)standingsSnippet;	// 0x355ccaed
+ (id)standingsSnippetWithDictionary:(id)dictionary context:(id)context;	// 0x355ccb31
// declared property getter: - (id)columns;	// 0x355ccb7d
- (id)encodedClassName;	// 0x355ccae1
// declared property getter: - (id)entities;	// 0x355ccbe9
- (id)groupIdentifier;	// 0x355ccad1
// declared property getter: - (id)selectedEntities;	// 0x355ccccd
// declared property setter: - (void)setColumns:(id)columns;	// 0x355ccb99
// declared property setter: - (void)setEntities:(id)entities;	// 0x355ccc65
// declared property setter: - (void)setSelectedEntities:(id)entities;	// 0x355ccd49
// declared property setter: - (void)setShowCardinalPositions:(BOOL)positions;	// 0x355cce29
// declared property getter: - (BOOL)showCardinalPositions;	// 0x355ccdb1
@end
