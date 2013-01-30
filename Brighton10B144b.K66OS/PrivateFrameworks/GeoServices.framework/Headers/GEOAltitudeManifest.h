/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import "GeoServices-Structs.h"
#import "NSXMLParserDelegate.h"
#import <NSObject.h> // Unknown library


@interface GEOAltitudeManifest : NSObject <NSXMLParserDelegate> {
	map<unsigned int, _GEOAltitudeTriggerData, std::__1::less<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, _GEOAltitudeTriggerData>> > _triggerData;	// 4 = 0x4
}
+ (id)sharedManager;	// 0x33ffd9b9
- (id)init;	// 0x33ffda25
- (id)initWithoutObserver;	// 0x33ffdab1
- (id).cxx_construct;	// 0x33ffdec5
- (void).cxx_destruct;	// 0x33ffdeb1
- (void)_activeTileGroupChanged:(id)changed;	// 0x33ffdaf5
- (id)availableRegions;	// 0x33ffdc65
- (void)dealloc;	// 0x33ffdbb1
- (void)parseManifest:(id)manifest;	// 0x33ffdd59
- (BOOL)parseXml:(id)xml;	// 0x33ffdb6d
- (void)parser:(id)parser didStartElement:(id)element namespaceURI:(id)uri qualifiedName:(id)name attributes:(id)attributes;	// 0x33ffddfd
- (unsigned)versionForRegion:(unsigned)region;	// 0x33ffdc0d
@end
