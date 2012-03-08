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
@property(retain) NSNumber *status;	// G=0x34390ebd; S=0x34390ed5; @synthesize=_status
+ (BOOL)acceptsTopLevelLeaves;	// 0x34390dc9
+ (BOOL)frontingBasicTypes;	// 0x34390cf1
+ (BOOL)notifyOfUnknownTokens;	// 0x34390ca9
+ (BOOL)parsingLeafNode;	// 0x34390d81
+ (BOOL)parsingWithSubItems;	// 0x34390d39
- (id)asParseRules;	// 0x34390be1
- (void)dealloc;	// 0x34390e75
- (id)description;	// 0x34390e11
// declared property setter: - (void)setStatus:(id)status;	// 0x34390ed5
// declared property getter: - (id)status;	// 0x34390ebd
@end
