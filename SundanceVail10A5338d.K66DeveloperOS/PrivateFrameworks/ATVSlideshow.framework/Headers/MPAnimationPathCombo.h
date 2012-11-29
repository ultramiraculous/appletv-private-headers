/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "MPAnimationPath.h"
#import "ATVSlideshow-Structs.h"
#import "MPAnimationSupport.h"

@class NSString, NSMutableDictionary;

@interface MPAnimationPathCombo : MPAnimationPath <MPAnimationSupport> {
	NSMutableDictionary *_animationPaths;	// 16 = 0x10
	NSString *_operation;	// 20 = 0x14
	NSString *_key;	// 24 = 0x18
}
@property(readonly, retain) NSMutableDictionary *animationPaths;	// G=0x3335c399; converted property
@property(copy, nonatomic) NSString *key;	// G=0x3335c6b1; S=0x3335c729; @synthesize=_key
@property(copy, nonatomic) NSString *operation;	// G=0x3335c7c9; S=0x3335c645; @synthesize=_operation
+ (id)animationPath;	// 0x3335bf35
- (id)init;	// 0x3335bf79
- (id)initWithCoder:(id)coder;	// 0x3335c0a5
- (id)animationPathForKey:(id)key;	// 0x3335c3a9
// converted property getter: - (id)animationPaths;	// 0x3335c399
- (void)cleanup;	// 0x3335e62d
- (void)copyAnimationPaths:(id)paths;	// 0x3335e9e1
- (id)copyWithZone:(NSZone *)zone;	// 0x3335c24d
- (void)dealloc;	// 0x3335c31d
- (void)encodeWithCoder:(id)coder;	// 0x3335bffd
// declared property getter: - (id)key;	// 0x3335c6b1
// declared property getter: - (id)operation;	// 0x3335c7c9
- (void)removeAnimationPathForKey:(id)key;	// 0x3335c571
- (void)setAnimationPath:(id)path;	// 0x3335e705
- (void)setAnimationPath:(id)path forKey:(id)key;	// 0x3335c3c9
// declared property setter: - (void)setKey:(id)key;	// 0x3335c729
// declared property setter: - (void)setOperation:(id)operation;	// 0x3335c645
@end
