/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SADomainCommand.h"

@class NSDate, NSString;

@interface SANoteSearch : SADomainCommand {
}
@property(copy, nonatomic) NSString *contentQuery;	// G=0x326b04b5; S=0x326b04d1; 
@property(copy, nonatomic) NSDate *fromDate;	// G=0x326b0521; S=0x326b053d; 
@property(copy, nonatomic) NSDate *toDate;	// G=0x326b058d; S=0x326b05a9; 
+ (id)search;	// 0x326b0425
+ (id)searchWithDictionary:(id)dictionary context:(id)context;	// 0x326b0469
// declared property getter: - (id)contentQuery;	// 0x326b04b5
- (id)encodedClassName;	// 0x326b0419
// declared property getter: - (id)fromDate;	// 0x326b0521
- (id)groupIdentifier;	// 0x326b0409
- (BOOL)requiresResponse;	// 0x326b05f9
// declared property setter: - (void)setContentQuery:(id)query;	// 0x326b04d1
// declared property setter: - (void)setFromDate:(id)date;	// 0x326b053d
// declared property setter: - (void)setToDate:(id)date;	// 0x326b05a9
// declared property getter: - (id)toDate;	// 0x326b058d
@end
