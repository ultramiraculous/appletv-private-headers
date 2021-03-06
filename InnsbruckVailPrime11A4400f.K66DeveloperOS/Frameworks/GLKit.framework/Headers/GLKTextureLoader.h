/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/GLKit.framework/GLKit
 */

#import "GLKit-Structs.h"
#import </libobjc.A.h>

@class EAGLContext, NSLock;

@interface GLKTextureLoader : NSObject {
	EAGLContext *_glContext;	// 4 = 0x4
	NSLock *_nsLock;	// 8 = 0x8
}
@property(retain) EAGLContext *glContext;	// G=0x2dd51e51; S=0x2dd51e65; @synthesize=_glContext
@property(retain) NSLock *nsLock;	// G=0x2dd51e95; S=0x2dd51ea9; @synthesize=_nsLock
+ (id)_textureWithTexture:(id)texture error:(id *)error;	// 0x2dd4ff31
+ (id)commonCubeMapWithContentsOfFiles:(id)files options:(id)options error:(id *)error lock:(id)lock glContext:(id)context;	// 0x2dd503f1
+ (id)commonCubeMapWithContentsOfURL:(id)url options:(id)options error:(id *)error lock:(id)lock glContext:(id)context;	// 0x2dd50939
+ (id)commonTextureWithCGImage:(CGImageRef)cgimage options:(id)options error:(id *)error lock:(id)lock glContext:(id)context;	// 0x2dd50309
+ (id)commonTextureWithContentsOfData:(id)data options:(id)options error:(id *)error lock:(id)lock glContext:(id)context;	// 0x2dd50011
+ (id)commonTextureWithContentsOfURL:(id)url options:(id)options error:(id *)error lock:(id)lock glContext:(id)context;	// 0x2dd500f9
+ (id)cubeMapWithContentsOfFile:(id)file options:(id)options error:(id *)error;	// 0x2dd5126d
+ (id)cubeMapWithContentsOfFiles:(id)files options:(id)options error:(id *)error;	// 0x2dd511fd
+ (id)cubeMapWithContentsOfURL:(id)url options:(id)options error:(id *)error;	// 0x2dd512f5
+ (id)lockAndSwitchContext:(id)context glContext:(id)context2;	// 0x2dd4fe99
+ (id)textureWithCGImage:(CGImageRef)cgimage options:(id)options error:(id *)error;	// 0x2dd5118d
+ (id)textureWithContentsOfData:(id)data options:(id)options error:(id *)error;	// 0x2dd5111d
+ (id)textureWithContentsOfFile:(id)file options:(id)options error:(id *)error;	// 0x2dd51031
+ (id)textureWithContentsOfURL:(id)url options:(id)options error:(id *)error;	// 0x2dd510ad
+ (void)unlockAndRestoreContext:(id)context glContext:(id)context2;	// 0x2dd4feed
- (id)initWithSharegroup:(id)sharegroup;	// 0x2dd4fc8d
- (void)cubeMapWithContentsOfFile:(id)file options:(id)options queue:(dispatch_queue_s *)queue completionHandler:(id)handler;	// 0x2dd51bf9
- (void)cubeMapWithContentsOfFiles:(id)files options:(id)options queue:(dispatch_queue_s *)queue completionHandler:(id)handler;	// 0x2dd519e1
- (void)cubeMapWithContentsOfURL:(id)url options:(id)options queue:(dispatch_queue_s *)queue completionHandler:(id)handler;	// 0x2dd51c39
- (void)dealloc;	// 0x2dd4fe41
// declared property getter: - (id)glContext;	// 0x2dd51e51
// declared property getter: - (id)nsLock;	// 0x2dd51e95
// declared property setter: - (void)setGlContext:(id)context;	// 0x2dd51e65
// declared property setter: - (void)setNsLock:(id)lock;	// 0x2dd51ea9
- (void)textureWithCGImage:(CGImageRef)cgimage options:(id)options queue:(dispatch_queue_s *)queue completionHandler:(id)handler;	// 0x2dd517d9
- (void)textureWithContentsOfData:(id)data options:(id)options queue:(dispatch_queue_s *)queue completionHandler:(id)handler;	// 0x2dd515c1
- (void)textureWithContentsOfFile:(id)file options:(id)options queue:(dispatch_queue_s *)queue completionHandler:(id)handler;	// 0x2dd51369
- (void)textureWithContentsOfURL:(id)url options:(id)options queue:(dispatch_queue_s *)queue completionHandler:(id)handler;	// 0x2dd513a9
@end

