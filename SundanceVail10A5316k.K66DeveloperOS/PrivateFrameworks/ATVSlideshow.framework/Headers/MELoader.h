/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import <NSObject.h> // Unknown library

@class NSMutableDictionary;

@interface MELoader : NSObject {
	NSMutableDictionary *_exporters;	// 4 = 0x4
	NSMutableDictionary *_exporterProperties;	// 8 = 0x8
}
- (id)init;	// 0x36599951
- (void)dealloc;	// 0x36599995
- (id)exporterIdentifierWithOptions:(id)options;	// 0x36599edd
- (id)exporterIdentifiers;	// 0x36599ebd
- (id)exporterPropertyWithIdentifier:(id)identifier andKey:(id)key;	// 0x3659a271
- (id)exporterWithIdentifier:(id)identifier andDocument:(id)document andDelegate:(id)delegate;	// 0x3659a201
- (void)loadBuiltInPlugins;	// 0x36599ab1
- (void)loadEmbeddedPlugins;	// 0x365999f9
- (void)loadPluginAtPath:(id)path matchingIdentifier:(id)identifier;	// 0x36599c15
- (void)loadPluginWithIdentifier:(id)identifier;	// 0x36599a19
- (void)loadPluginsInFolder:(id)folder matchingIdentifier:(id)identifier;	// 0x36599b25
- (void)registerExporterClass:(Class)aClass withIdentifier:(id)identifier andProperties:(id)properties;	// 0x36599d75
@end
