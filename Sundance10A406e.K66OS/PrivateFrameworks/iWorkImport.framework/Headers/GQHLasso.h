/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

#import "GQLassoGenerator.h"
#import <NSObject.h> // Unknown library


@interface GQHLasso : NSObject <GQLassoGenerator> {
}
+ (int)beginDocument:(id)document state:(id)state;	// 0x3246e9f9
+ (int)beginWorkspace:(const char *)workspace state:(id)state;	// 0x3246eb2d
+ (Class)beginWorkspacePage:(id)page state:(id)state;	// 0x3246ec81
+ (int)endDocument:(id)document state:(id)state;	// 0x3246ea59
+ (int)endWorkspace:(id)workspace;	// 0x3246eb61
+ (int)handleDrawableZOrder:(const char *)order state:(id)state;	// 0x3246ec9d
+ (int)handleStylesheet:(id)stylesheet state:(id)state;	// 0x3246eae5
+ (int)handleWorkspaceStyle:(id)style state:(id)state;	// 0x3246ec7d
@end
