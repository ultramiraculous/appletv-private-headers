/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/EventKit.framework/EventKit
 */

#import <NSObject.h> // Unknown library
#import "NSCoding.h"

@class NSDictionary;

__attribute__((visibility("hidden")))
@interface CalItemMetadata : NSObject <NSCoding> {
@private
	NSDictionary *_x_props;	// 4 = 0x4
	int _classification;	// 8 = 0x8
}
@property(assign) int classification;	// G=0x3139c1e1; S=0x3139c1f1; @synthesize=_classification
@property(retain) NSDictionary *x_props;	// G=0x3139c1a9; S=0x3139c1bd; @synthesize=_x_props
+ (id)metadataWithData:(id)data;	// 0x3139bf3d
+ (id)metadataWithICSComponent:(id)icscomponent;	// 0x3139bef5
- (id)init;	// 0x3139bb95
- (id)initWithCoder:(id)coder;	// 0x3139c111
- (id)initWithICSComponent:(id)icscomponent;	// 0x3139b931
- (void)applyToComponent:(id)component;	// 0x3139bba9
// declared property getter: - (int)classification;	// 0x3139c1e1
- (id)dataRepresentationWithExistingMetaData:(id)existingMetaData;	// 0x3139bcf1
- (void)dealloc;	// 0x3139c065
- (void)encodeWithCoder:(id)coder;	// 0x3139c0b1
// declared property setter: - (void)setClassification:(int)classification;	// 0x3139c1f1
// declared property setter: - (void)setX_props:(id)props;	// 0x3139c1bd
// declared property getter: - (id)x_props;	// 0x3139c1a9
@end
