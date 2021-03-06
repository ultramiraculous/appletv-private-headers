/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/EventKit.framework/EventKit
 */

#import "NSCoding.h"
#import <NSObject.h> // Unknown library

@class NSDictionary;

__attribute__((visibility("hidden")))
@interface CalItemMetadata : NSObject <NSCoding> {
	NSDictionary *_x_props;	// 4 = 0x4
	int _classification;	// 8 = 0x8
}
@property(assign) int classification;	// G=0x31809895; S=0x318098a9; @synthesize=_classification
@property(retain) NSDictionary *x_props;	// G=0x31809871; S=0x31809885; @synthesize=_x_props
+ (id)metadataWithData:(id)data;	// 0x318095f9
+ (id)metadataWithICSComponent:(id)icscomponent;	// 0x318095b1
- (id)init;	// 0x3180921d
- (id)initWithCoder:(id)coder;	// 0x318097d9
- (id)initWithICSComponent:(id)icscomponent;	// 0x31808f95
- (void)applyToComponent:(id)component;	// 0x31809231
// declared property getter: - (int)classification;	// 0x31809895
- (id)dataRepresentationWithExistingMetaData:(id)existingMetaData;	// 0x3180939d
- (void)dealloc;	// 0x3180972d
- (void)encodeWithCoder:(id)coder;	// 0x31809779
// declared property setter: - (void)setClassification:(int)classification;	// 0x318098a9
// declared property setter: - (void)setX_props:(id)props;	// 0x31809885
// declared property getter: - (id)x_props;	// 0x31809871
@end

