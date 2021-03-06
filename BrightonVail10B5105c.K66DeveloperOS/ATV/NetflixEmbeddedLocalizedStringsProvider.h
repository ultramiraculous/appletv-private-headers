/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "NetflixLocalizedStringProvider.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSDictionary, NSString;

@interface NetflixEmbeddedLocalizedStringsProvider : XXUnknownSuperclass <NetflixLocalizedStringProvider> {
	NSString *stringsTableName;	// 4 = 0x4
	NSString *localeIdentifier;	// 8 = 0x8
	NSDictionary *stringsTable;	// 12 = 0xc
}
@property(readonly, assign) NSString *localeIdentifier;	// G=0x4aca49; @synthesize
@property(readonly, assign) NSString *stringsTableName;	// G=0x4aca35; @synthesize
- (id)initWithLocaleIdentifier:(id)localeIdentifier tableName:(id)name dictionary:(id)dictionary;	// 0x4ac8b9
- (void)dealloc;	// 0x4ac9bd
// declared property getter: - (id)localeIdentifier;	// 0x4aca49
- (id)localizedString:(id)string;	// 0x4ac98d
// declared property getter: - (id)stringsTableName;	// 0x4aca35
@end

