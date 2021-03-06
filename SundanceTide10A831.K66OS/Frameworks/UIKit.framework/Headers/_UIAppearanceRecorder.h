/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library

@class NSString, NSMutableArray, NSArray, NSData;

@interface _UIAppearanceRecorder : NSObject {
	NSString *_classNameToRecord;	// 4 = 0x4
	Class _superclassToRecord;	// 8 = 0x8
	NSArray *_containerClassNames;	// 12 = 0xc
	NSMutableArray *_customizations;	// 16 = 0x10
	NSArray *_unarchivedCustomizations;	// 20 = 0x14
}
@property(copy, nonatomic, setter=_setClassNameToRecord:) NSString *_classNameToRecord;	// G=0x31f5e799; S=0x31f5e7ad; @synthesize
@property(copy, nonatomic, setter=_setContainerClassNames:) NSArray *_containerClassNames;	// G=0x31f5e7dd; S=0x31f5e7f1; @synthesize
@property(readonly, assign, nonatomic) NSData *_serializedRepresentation;	// G=0x31f5e665; 
@property(assign, nonatomic, setter=_setSuperclassToRecord:) Class _superclassToRecord;	// G=0x31f5e7bd; S=0x31f5e7cd; @synthesize
+ (id)_sharedAppearanceRecorder;	// 0x31f5d025
+ (id)_sharedAppearanceRecorderForClass:(Class)aClass whenContainedIn:(id)anIn;	// 0x31f5d0f9
+ (id)_sharedAppearanceRecorderForClassNamed:(id)classNamed superclass:(Class)superclass whenContainedIn:(id)anIn;	// 0x31f5d09d
- (id)init;	// 0x31f5d011
- (id)initWithSerializedRepresentation:(id)serializedRepresentation;	// 0x31f5ce85
- (void)_applyCustomizations;	// 0x31f5ddb9
// declared property getter: - (id)_classNameToRecord;	// 0x31f5e799
// declared property getter: - (id)_containerClassNames;	// 0x31f5e7dd
- (void)_importCustomizations:(id)customizations withArchiveVersion:(int)archiveVersion;	// 0x31f5cdd5
- (void)_recordInvocation:(id)invocation withClassName:(id)className containerClassNames:(id)names selectorString:(id)string forRemoteProcess:(BOOL)remoteProcess;	// 0x31f5d1f1
// declared property getter: - (id)_serializedRepresentation;	// 0x31f5e665
// declared property setter: - (void)_setClassNameToRecord:(id)record;	// 0x31f5e7ad
// declared property setter: - (void)_setContainerClassNames:(id)names;	// 0x31f5e7f1
// declared property setter: - (void)_setSuperclassToRecord:(Class)record;	// 0x31f5e7cd
// declared property getter: - (Class)_superclassToRecord;	// 0x31f5e7bd
- (void)dealloc;	// 0x31f5d125
- (void)forwardInvocation:(id)invocation;	// 0x31f5dd6d
- (id)methodSignatureForSelector:(SEL)selector;	// 0x31f5d1b1
@end

