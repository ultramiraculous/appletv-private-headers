/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/VoiceServices.framework/VoiceServices
 */

#import <NSObject.h> // Unknown library


@interface VSRecognitionResult : NSObject {
}
@property(retain) id recognitionAction;	// G=0x345bf109; S=0x345bf101; converted property
+ (void)initialize;	// 0x345beccd
+ (id)recognitionResultWithModelIdentifier:(id)modelIdentifier classIdentifiers:(id)identifiers values:(id)values;	// 0x345bed35
- (id)init;	// 0x345becfd
- (id)createHandler;	// 0x345befe1
- (id)description;	// 0x345bf10d
- (int)elementCount;	// 0x345bef2d
- (BOOL)getElementClassIdentifier:(id *)identifier value:(id *)value atIndex:(int)index;	// 0x345bef31
- (unsigned)hash;	// 0x345bed19
- (BOOL)isEqual:(id)equal;	// 0x345bed01
- (id)modelIdentifier;	// 0x345bef29
// converted property getter: - (id)recognitionAction;	// 0x345bf109
- (id)recognitionResultByReplacingValueForClassIdentifier:(id)classIdentifier withValue:(id)value;	// 0x345bed69
- (oneway void)release;	// 0x345bed2d
- (id)retain;	// 0x345bed1d
- (unsigned)retainCount;	// 0x345bed31
// converted property setter: - (void)setRecognitionAction:(id)action;	// 0x345bf101
- (id)valueOfFirstElementWithClassIdentifier:(id)classIdentifier;	// 0x345bef59
@end

