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
@property(assign) BOOL instantiatingForSimulator;	// G=0x3217ced9; S=0x3217ceb5; converted property
+ (id)nibWithData:(id)data bundle:(id)bundle;	// 0x3217cefd
+ (id)nibWithNibName:(id)nibName bundle:(id)bundle;	// 0x3217cf41
- (id)initWithBundle:(id)bundle;	// 0x3217d289
- (id)initWithContentsOfFile:(id)file;	// 0x3217cf85
- (id)initWithData:(id)data bundle:(id)bundle;	// 0x3217d125
- (id)initWithNibName:(id)nibName bundle:(id)bundle;	// 0x3217d009
- (void)dealloc;	// 0x3217d1e5
- (void)didReceiveMemoryWarning:(id)warning;	// 0x3217cca9
- (id)effectiveBundle;	// 0x3217ce79
- (id)instantiateWithOwner:(id)owner options:(id)options;	// 0x3217d5fd
// converted property getter: - (BOOL)instantiatingForSimulator;	// 0x3217ced9
- (id)lazyArchiveData;	// 0x3217cce1
// converted property setter: - (void)setInstantiatingForSimulator:(BOOL)simulator;	// 0x3217ceb5
- (id)unarchiverForInstantiatingReturningError:(id *)instantiatingReturningError;	// 0x3217d431
@end

