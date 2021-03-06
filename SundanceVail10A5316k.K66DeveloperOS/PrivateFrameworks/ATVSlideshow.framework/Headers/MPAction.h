/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import <NSObject.h> // Unknown library
#import "ATVSlideshow-Structs.h"
#import "NSCoding.h"
#import "NSCopying.h"

@class MCAction;
@protocol MPActionSupport;

@interface MPAction : NSObject <NSCoding, NSCopying> {
	NSObject<MPActionSupport> *_parentObject;	// 4 = 0x4
	MCAction *_action;	// 8 = 0x8
	NSObject *_targetObject;	// 12 = 0xc
}
@property(retain) id parent;	// G=0x363d9129; S=0x363d9261; converted property
@property(retain, nonatomic) NSObject *targetObject;	// G=0x363d8e49; S=0x363d8f4d; @synthesize=_targetObject
+ (id)action;	// 0x363d8d49
- (id)init;	// 0x363d8d8d
- (id)initWithCoder:(id)coder;	// 0x363d8dd9
- (void)configureTarget;	// 0x363d92c1
- (id)copyWithZone:(NSZone *)zone;	// 0x363d9069
- (void)dealloc;	// 0x363d8fa5
- (void)encodeWithCoder:(id)coder;	// 0x363d901d
- (id)key;	// 0x363d90dd
// converted property getter: - (id)parent;	// 0x363d9129
- (id)parentDocument;	// 0x363d9139
- (void)setAction:(id)action;	// 0x363d93e1
// converted property setter: - (void)setParent:(id)parent;	// 0x363d9261
// declared property setter: - (void)setTargetObject:(id)object;	// 0x363d8f4d
// declared property getter: - (id)targetObject;	// 0x363d8e49
@end

