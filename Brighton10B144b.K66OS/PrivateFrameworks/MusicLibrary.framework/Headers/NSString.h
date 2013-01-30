/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import <NSString.h> // Unknown library
#import "MusicLibrary-Structs.h"


@interface NSString (InsignificantCharacterFiltering)
- (id)MLSortString;	// 0x346b29f1
- (id)_copyWithoutInsignificantPrefix:(BOOL)prefix andCharacters:(BOOL)characters;	// 0x346b296d
- (NSRange)_rangeWithoutInsignificantPrefix:(BOOL)prefix andCharacters:(BOOL)characters;	// 0x346b2675
- (id)copyWithoutInsignificantCharacters;	// 0x346b29dd
- (id)copyWithoutInsignificantPrefixAndCharacters;	// 0x346b29c9
@end

@interface NSString (MLSQLiteStatmentBindingAdditions)
- (void)MLBindToSQLiteStatement:(sqlite3_stmt *)sqliteStatement atPosition:(int)position;	// 0x346a83f1
@end

@interface NSString (ImportSanity)
- (id)sanitizedString;	// 0x3470c241
@end
