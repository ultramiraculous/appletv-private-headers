/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library

@class NSArray, NSData, NSString, NSMutableArray;

@interface _UIAppearanceRecorder : NSObject {
@private
	NSString *_classNameToRecord;	// 4 = 0x4
	Class _superclassToRecord;	// 8 = 0x8
	NSArray *_containerClassNames;	// 12 = 0xc
	NSMutableArray *_customizations;	// 16 = 0x10
	NSArray *_unarchivedCustomizations;	// 20 = 0x14
}
@property(copy, nonatomic, setter=_setClassNameToRecord:) NSString *_classNameToRecord;	// G=0x303ed3b1; S=0x303ed3c5; @synthesize
@property(copy, nonatomic, setter=_setContainerClassNames:) NSArray *_containerClassNames;	// G=0x303ed3f5; S=0x303ed409; @synthesize
@property(readonly, assign, nonatomic) NSData *_serializedRepresentation;	// G=0x303ed27d; 
@property(assign, nonatomic, setter=_setSuperclassToRecord:) Class _superclassToRecord;	// G=0x303ed3d5; S=0x303ed3e5; @synthesize
+ (id)_sharedAppearanceRecorder;	// 0x303ebc55
+ (id)_sharedAppearanceRecorderForClass:(Class)aClass whenContainedIn:(id)anIn;	// 0x303ebd29
+ (id)_sharedAppearanceRecorderForClassNamed:(id)classNamed superclass:(Class)superclass whenContainedIn:(id)anIn;	// 0x303ebccd
- (id)init;	// 0x303ebc41
- (id)initWithSerializedRepresentation:(id)serializedRepresentation;	// 0x303ebab5
- (void)_applyCustomizations;	// 0x303ec9cd
// declared property getter: - (id)_classNameToRecord;	// 0x303ed3b1
// declared property getter: - (id)_containerClassNames;	// 0x303ed3f5
- (void)_importCustomizations:(id)customizations withArchiveVersion:(int)archiveVersion;	// 0x303eba05
- (void)_recordInvocation:(id)invocation withClassName:(id)className containerClassNames:(id)names requireArguments:(BOOL)arguments;	// 0x303ebe21
// declared property getter: - (id)_serializedRepresentation;	// 0x303ed27d
// declared property setter: - (void)_setClassNameToRecord:(id)record;	// 0x303ed3c5
// declared property setter: - (void)_setContainerClassNames:(id)names;	// 0x303ed409
// declared property setter: - (void)_setSuperclassToRecord:(Class)record;	// 0x303ed3e5
// declared property getter: - (Class)_superclassToRecord;	// 0x303ed3d5
- (void)dealloc;	// 0x303ebd55
- (void)forwardInvocation:(id)invocation;	// 0x303ec981
- (id)methodSignatureForSelector:(SEL)selector;	// 0x303ebde1
@end

