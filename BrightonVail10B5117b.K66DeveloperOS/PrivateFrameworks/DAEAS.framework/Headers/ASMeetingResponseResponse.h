/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import "ASItem.h"

@class NSArray, NSMutableArray;

@interface ASMeetingResponseResponse : ASItem {
	NSMutableArray *_singularResponses;	// 40 = 0x28
}
@property(readonly, assign) NSArray *singularResponses;	// G=0x33bba4ed; @synthesize=_singularResponses
+ (BOOL)acceptsTopLevelLeaves;	// 0x33bba0b5
+ (id)asParseRules;	// 0x33bba2dd
+ (BOOL)frontingBasicTypes;	// 0x33bba1b1
+ (BOOL)notifyOfUnknownTokens;	// 0x33bba205
+ (BOOL)parsingLeafNode;	// 0x33bba109
+ (BOOL)parsingWithSubItems;	// 0x33bba15d
- (id)init;	// 0x33bba259
- (void)_addSingularResponse:(id)response;	// 0x33bba2bd
- (void)dealloc;	// 0x33bba4a1
- (id)description;	// 0x33bba439
// declared property getter: - (id)singularResponses;	// 0x33bba4ed
@end
