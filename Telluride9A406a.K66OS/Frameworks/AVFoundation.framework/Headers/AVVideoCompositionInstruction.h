/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <NSObject.h> // Unknown library
#import "NSMutableCopying.h"
#import "NSCopying.h"
#import "AVFoundation-Structs.h"
#import "NSCoding.h"

@class AVVideoCompositionInstructionInternal, NSArray;

@interface AVVideoCompositionInstruction : NSObject <NSCoding, NSCopying, NSMutableCopying> {
@private
	AVVideoCompositionInstructionInternal *_instruction;	// 4 = 0x4
}
@property(retain, nonatomic) CGColorRef backgroundColor;	// G=0x30e99231; S=0x30e9ab25; 
@property(readonly, assign, nonatomic) BOOL enablePostProcessing;	// G=0x30e99271; 
@property(readonly, copy, nonatomic) NSArray *layerInstructions;	// G=0x30e99251; 
@property(readonly, assign, nonatomic) XXStruct_yD8eWC timeRange;	// G=0x30e99181; 
+ (void)initialize;	// 0x30e9a29d
- (id)init;	// 0x30e9af9d
- (id)initWithCoder:(id)coder;	// 0x30e9aed5
- (void)_setValuesFromDictionary:(id)dictionary;	// 0x30e9a2dd
// declared property getter: - (CGColorRef)backgroundColor;	// 0x30e99231
- (id)copyWithZone:(NSZone *)zone;	// 0x30e9ad6d
- (void)dealloc;	// 0x30e9abc9
- (id)description;	// 0x30e9a249
- (id)dictionaryRepresentation;	// 0x30e9a6d9
// declared property getter: - (BOOL)enablePostProcessing;	// 0x30e99271
- (void)encodeWithCoder:(id)coder;	// 0x30e9a1b1
- (void)finalize;	// 0x30e9ab6d
// declared property getter: - (id)layerInstructions;	// 0x30e99251
- (id)mutableCopyWithZone:(NSZone *)zone;	// 0x30e9ac51
// declared property setter: - (void)setBackgroundColor:(CGColorRef)color;	// 0x30e9ab25
- (void)setEnablePostProcessing:(BOOL)processing;	// 0x30e99291
- (void)setLayerInstructions:(id)instructions;	// 0x30e9a1e9
- (void)setTimeRange:(XXStruct_yD8eWC)range;	// 0x30e991d1
// declared property getter: - (XXStruct_yD8eWC)timeRange;	// 0x30e99181
@end

