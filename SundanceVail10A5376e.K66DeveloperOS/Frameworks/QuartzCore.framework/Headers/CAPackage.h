/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

#import <NSObject.h> // Unknown library
#import "QuartzCore-Structs.h"

@class CALayer;

@interface CAPackage : NSObject {
	CAPackageData *_data;	// 4 = 0x4
}
@property(readonly, assign, getter=isGeometryFlipped) BOOL geometryFlipped;	// G=0x33d6eef5; 
@property(readonly, assign) CALayer *rootLayer;	// G=0x33d6eedd; 
+ (id)packageWithContentsOfURL:(id)url type:(id)type options:(id)options error:(id *)error;	// 0x33d6e6d1
+ (id)packageWithData:(id)data type:(id)type options:(id)options error:(id *)error;	// 0x33d6e731
- (void)_addClassSubstitutions:(id)substitutions;	// 0x33d6ebfd
- (id)_initWithContentsOfURL:(id)url type:(id)type options:(id)options error:(id *)error;	// 0x33d6e791
- (id)_initWithData:(id)data type:(id)type options:(id)options error:(id *)error;	// 0x33d6e89d
- (void)_readFromArchiveData:(id)archiveData options:(id)options error:(id *)error;	// 0x33d6ece1
- (void)dealloc;	// 0x33d6ee75
- (void)foreachLayer:(id)layer;	// 0x33d6ef3d
// declared property getter: - (BOOL)isGeometryFlipped;	// 0x33d6eef5
- (id)publishedObjectWithName:(id)name;	// 0x33d6ef15
// declared property getter: - (id)rootLayer;	// 0x33d6eedd
- (id)substitutedClasses;	// 0x33d6e94d
- (Class)unarchiver:(id)unarchiver cannotDecodeObjectOfClassName:(id)className originalClasses:(id)classes;	// 0x33d6f0ed
- (id)unarchiver:(id)unarchiver didDecodeObject:(id)object;	// 0x33d6f181
@end

