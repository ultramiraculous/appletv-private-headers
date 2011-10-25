/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "ATVSlideshow-Structs.h"
#import "MPAnimationSupport.h"
#import "MPAnimationPath.h"

@class NSMutableDictionary, NSString;

@interface MPAnimationPathCombo : MPAnimationPath <MPAnimationSupport> {
	NSMutableDictionary *_animationPaths;	// 16 = 0x10
	NSString *_operation;	// 20 = 0x14
	NSString *_key;	// 24 = 0x18
}
@property(readonly, retain) NSMutableDictionary *animationPaths;	// G=0x342609b1; converted property
@property(copy, nonatomic) NSString *key;	// G=0x34260d85; S=0x34260dfd; @synthesize=_key
@property(copy, nonatomic) NSString *operation;	// G=0x34260efd; S=0x34260cb9; @synthesize=_operation
+ (id)animationPath;	// 0x34260561
- (id)init;	// 0x342605a5
- (id)initWithCoder:(id)coder;	// 0x342606cd
- (id)animationPathForKey:(id)key;	// 0x342609c1
// converted property getter: - (id)animationPaths;	// 0x342609b1
- (void)cleanup;	// 0x34262ef5
- (void)copyAnimationPaths:(id)paths;	// 0x342632b5
- (id)copyWithZone:(NSZone *)zone;	// 0x34260865
- (void)dealloc;	// 0x34260935
- (void)encodeWithCoder:(id)coder;	// 0x34260625
// declared property getter: - (id)key;	// 0x34260d85
// declared property getter: - (id)operation;	// 0x34260efd
- (void)removeAnimationPathForKey:(id)key;	// 0x34260be1
- (void)setAnimationPath:(id)path;	// 0x34262fad
- (void)setAnimationPath:(id)path forKey:(id)key;	// 0x342609e1
// declared property setter: - (void)setKey:(id)key;	// 0x34260dfd
// declared property setter: - (void)setOperation:(id)operation;	// 0x34260cb9
@end

