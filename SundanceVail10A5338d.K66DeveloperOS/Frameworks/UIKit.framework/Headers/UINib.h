/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library


@interface UINib : NSObject {
	id storage;	// 4 = 0x4
}
@property(assign) BOOL captureEnclosingNIBBundleOnDecode;	// G=0x30e636d1; S=0x30e636e9; converted property
@property(assign) BOOL captureImplicitLoadingContextOnDecode;	// G=0x30e636f9; S=0x30e6371d; converted property
@property(retain) id identifierForStringsFile;	// G=0x30e637a5; S=0x30e63785; converted property
@property(assign) BOOL instantiatingForSimulator;	// G=0x30e6368d; S=0x30e636b1; converted property
+ (id)nibWithData:(id)data bundle:(id)bundle;	// 0x30e63149
+ (id)nibWithNibName:(id)nibName bundle:(id)bundle;	// 0x30e630f5
- (id)initWithBundle:(id)bundle;	// 0x30e62df1
- (id)initWithCoder:(id)coder;	// 0x30e63195
- (id)initWithContentsOfFile:(id)file;	// 0x30e63049
- (id)initWithData:(id)data bundle:(id)bundle;	// 0x30e62e6d
- (id)initWithNibName:(id)nibName directory:(id)directory bundle:(id)bundle;	// 0x30e62f3d
- (void)_registerForMemoryWarningIfNeeded;	// 0x30e63605
- (id)bundleResourcePath;	// 0x30e637c5
// converted property getter: - (BOOL)captureEnclosingNIBBundleOnDecode;	// 0x30e636d1
// converted property getter: - (BOOL)captureImplicitLoadingContextOnDecode;	// 0x30e636f9
- (void)dealloc;	// 0x30e63559
- (void)didReceiveMemoryWarning:(id)warning;	// 0x30e64311
- (id)effectiveBundle;	// 0x30e6373d
- (void)encodeWithCoder:(id)coder;	// 0x30e633bd
// converted property getter: - (id)identifierForStringsFile;	// 0x30e637a5
- (id)instantiateWithOwner:(id)owner options:(id)options;	// 0x30e63c25
// converted property getter: - (BOOL)instantiatingForSimulator;	// 0x30e6368d
- (id)lazyArchiveData;	// 0x30e638ad
// converted property setter: - (void)setCaptureEnclosingNIBBundleOnDecode:(BOOL)decode;	// 0x30e636e9
// converted property setter: - (void)setCaptureImplicitLoadingContextOnDecode:(BOOL)decode;	// 0x30e6371d
// converted property setter: - (void)setIdentifierForStringsFile:(id)stringsFile;	// 0x30e63785
// converted property setter: - (void)setInstantiatingForSimulator:(BOOL)simulator;	// 0x30e636b1
- (id)unarchiverForInstantiatingReturningError:(id *)instantiatingReturningError;	// 0x30e63a2d
@end
