/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface CPBundleResourceManager : NSObject {
@private
	NSMutableDictionary *mPackageMap;	// 4 = 0x4
}
+ (void)disposeInstance;	// 0x30eaba3d
+ (id)instance;	// 0x30d91629
- (id)init;	// 0x30d9170d
- (id)dataForResource:(id)resource ofType:(id)type inPackage:(id)package;	// 0x30eabafd
- (void)dealloc;	// 0x30eabba9
- (id)packageWithName:(id)name;	// 0x30d9181d
- (xmlDoc *)xmlDocumentForResource:(id)resource ofType:(id)type inPackage:(id)package;	// 0x30d91771
@end
