/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import <NSObject.h> // Unknown library
#import "NSCoding.h"
#import "NSCopying.h"
#import "ATVSlideshow-Structs.h"

@class MCAction;
@protocol MPActionSupport;

@interface MPAction : NSObject <NSCoding, NSCopying> {
	NSObject<MPActionSupport> *_parentObject;	// 4 = 0x4
	MCAction *_action;	// 8 = 0x8
	NSObject *_targetObject;	// 12 = 0xc
}
@property(retain) id parent;	// G=0x33351f09; S=0x33352041; converted property
@property(retain, nonatomic) NSObject *targetObject;	// G=0x33351c29; S=0x33351d2d; @synthesize=_targetObject
+ (id)action;	// 0x33351b29
- (id)init;	// 0x33351b6d
- (id)initWithCoder:(id)coder;	// 0x33351bb9
- (void)configureTarget;	// 0x333520a1
- (id)copyWithZone:(NSZone *)zone;	// 0x33351e49
- (void)dealloc;	// 0x33351d85
- (void)encodeWithCoder:(id)coder;	// 0x33351dfd
- (id)key;	// 0x33351ebd
// converted property getter: - (id)parent;	// 0x33351f09
- (id)parentDocument;	// 0x33351f19
- (void)setAction:(id)action;	// 0x333521c1
// converted property setter: - (void)setParent:(id)parent;	// 0x33352041
// declared property setter: - (void)setTargetObject:(id)object;	// 0x33351d2d
// declared property getter: - (id)targetObject;	// 0x33351c29
@end

