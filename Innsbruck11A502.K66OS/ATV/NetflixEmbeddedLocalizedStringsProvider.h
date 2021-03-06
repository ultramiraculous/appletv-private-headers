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
@property(readonly, assign) NSString *localeIdentifier;	// G=0x567df9; @synthesize
@property(readonly, assign) NSString *stringsTableName;	// G=0x567de5; @synthesize
- (id)initWithLocaleIdentifier:(id)localeIdentifier tableName:(id)name dictionary:(id)dictionary;	// 0x567c69
- (void)dealloc;	// 0x567d6d
// declared property getter: - (id)localeIdentifier;	// 0x567df9
- (id)localizedString:(id)string;	// 0x567d3d
// declared property getter: - (id)stringsTableName;	// 0x567de5
@end

