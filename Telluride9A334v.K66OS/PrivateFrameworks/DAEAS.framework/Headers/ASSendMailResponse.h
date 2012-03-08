/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import "ASItem.h"

@class NSNumber;

@interface ASSendMailResponse : ASItem {
	NSNumber *_status;	// 40 = 0x28
}
@property(retain) NSNumber *status;	// G=0x30a801b9; S=0x30a801cd; @synthesize=_status
+ (BOOL)acceptsTopLevelLeaves;	// 0x30a7fe95
+ (BOOL)frontingBasicTypes;	// 0x30a7ff91
+ (BOOL)notifyOfUnknownTokens;	// 0x30a7ffe5
+ (BOOL)parsingLeafNode;	// 0x30a7fee9
+ (BOOL)parsingWithSubItems;	// 0x30a7ff3d
- (id)asParseRules;	// 0x30a80039
- (void)dealloc;	// 0x30a8016d
- (id)description;	// 0x30a80111
// declared property setter: - (void)setStatus:(id)status;	// 0x30a801cd
// declared property getter: - (id)status;	// 0x30a801b9
@end
