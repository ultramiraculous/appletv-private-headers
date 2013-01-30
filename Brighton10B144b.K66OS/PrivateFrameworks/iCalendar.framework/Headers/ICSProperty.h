/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iCalendar.framework/iCalendar
 */

#import "NSCoding.h"
#import <NSObject.h> // Unknown library
#import "ICSWriting.h"

@class NSMutableDictionary;

@interface ICSProperty : NSObject <NSCoding, ICSWriting> {
	NSMutableDictionary *_parameters;	// 4 = 0x4
	unsigned _type;	// 8 = 0x8
	id _value;	// 12 = 0xc
}
@property(retain) NSMutableDictionary *parameters;	// G=0x36866999; S=0x368665dd; converted property
@property(readonly, assign) unsigned type;	// G=0x3686657d; converted property
@property(readonly, retain) id value;	// G=0x3686658d; converted property
- (id)initWithCoder:(id)coder;	// 0x368667d5
- (id)initWithValue:(id)value type:(unsigned)type;	// 0x368668dd
- (id)ICSStringWithOptions:(unsigned)options;	// 0x36866731
- (void)ICSStringWithOptions:(unsigned)options appendingToString:(id)string;	// 0x36866741
- (void)_ICSStringWithOptions:(unsigned)options appendingToString:(id)string;	// 0x36844769
- (void)_ICSStringWithOptions:(unsigned)options appendingToString:(id)string additionalParameters:(id)parameters;	// 0x36844251
- (void)_setParsedValues:(id)values type:(unsigned)type;	// 0x368503e9
- (void)addParameter:(id)parameter withRawValue:(id)rawValue options:(unsigned)options;	// 0x368501e1
- (void)addParametersFromDictionary:(id)dictionary;	// 0x368665bd
- (id)allParameters;	// 0x368668a5
- (void)dealloc;	// 0x36866515
- (id)description;	// 0x368669c9
- (void)encodeWithCoder:(id)coder;	// 0x36866751
- (BOOL)isMultiValued;	// 0x36866579
- (id)parameterValueForName:(id)name;	// 0x3686659d
// converted property getter: - (id)parameters;	// 0x36866999
- (void)removeParameterValueForName:(id)name;	// 0x36866711
- (void)setParameterValue:(id)value forName:(id)name;	// 0x36866681
// converted property setter: - (void)setParameters:(id)parameters;	// 0x368665dd
- (void)setValue:(id)value type:(int)type;	// 0x36866929
- (void)setValueAsProperty:(id)property withRawValue:(const char *)rawValue options:(unsigned)options;	// 0x36850439
- (id)stringValue;	// 0x368669a9
// converted property getter: - (unsigned)type;	// 0x3686657d
// converted property getter: - (id)value;	// 0x3686658d
@end
