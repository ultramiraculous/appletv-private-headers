/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library


@interface UINib : NSObject {
@private
	id storage;	// 4 = 0x4
}
@property(assign) BOOL captureEnclosingNIBBundleOnDecode;	// G=0x33beecfd; S=0x33beed21; converted property
@property(assign) BOOL instantiatingForSimulator;	// G=0x33beecb9; S=0x33beecdd; converted property
+ (id)nibWithData:(id)data bundle:(id)bundle;	// 0x33bee849
+ (id)nibWithNibName:(id)nibName bundle:(id)bundle;	// 0x33bee7fd
- (id)initWithBundle:(id)bundle;	// 0x33bee511
- (id)initWithCoder:(id)coder;	// 0x33bee895
- (id)initWithContentsOfFile:(id)file;	// 0x33bee751
- (id)initWithData:(id)data bundle:(id)bundle;	// 0x33bee58d
- (id)initWithNibName:(id)nibName bundle:(id)bundle;	// 0x33bee65d
- (void)_registerForMemoryWarningIfNeeded;	// 0x33beec31
// converted property getter: - (BOOL)captureEnclosingNIBBundleOnDecode;	// 0x33beecfd
- (void)dealloc;	// 0x33beeb81
- (void)didReceiveMemoryWarning:(id)warning;	// 0x33bef785
- (id)effectiveBundle;	// 0x33beed41
- (void)encodeWithCoder:(id)coder;	// 0x33beea55
- (id)instantiateWithOwner:(id)owner options:(id)options;	// 0x33bef129
// converted property getter: - (BOOL)instantiatingForSimulator;	// 0x33beecb9
- (id)lazyArchiveData;	// 0x33beed89
// converted property setter: - (void)setCaptureEnclosingNIBBundleOnDecode:(BOOL)decode;	// 0x33beed21
// converted property setter: - (void)setInstantiatingForSimulator:(BOOL)simulator;	// 0x33beecdd
- (id)unarchiverForInstantiatingReturningError:(id *)instantiatingReturningError;	// 0x33beef45
@end

