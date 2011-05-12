/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "CMMapper.h"

@class OADTextRun;

__attribute__((visibility("hidden")))
@interface PMTextRunMapper : CMMapper {
@private
	OADTextRun *mTextRun;	// 8 = 0x8
}
- (id)initWithOadTextRun:(id)oadTextRun parent:(id)parent;	// 0x3443606d
- (BOOL)_isDefaultFill:(id)fill;	// 0x3454f7b5
- (id)createCharacterStyleWithState:(id)state;	// 0x34436259
- (id)fontScheme;	// 0x3443685d
- (void)mapAt:(id)at withState:(id)state;	// 0x344360ad
@end
