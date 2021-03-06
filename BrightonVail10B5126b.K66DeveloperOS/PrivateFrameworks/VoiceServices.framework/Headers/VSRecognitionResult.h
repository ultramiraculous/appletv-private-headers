/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/VoiceServices.framework/VoiceServices
 */

#import <NSObject.h> // Unknown library


@interface VSRecognitionResult : NSObject {
}
@property(retain) id recognitionAction;	// G=0x35c1e049; S=0x35c1e041; converted property
+ (void)initialize;	// 0x35c1dc0d
+ (id)recognitionResultWithModelIdentifier:(id)modelIdentifier classIdentifiers:(id)identifiers values:(id)values;	// 0x35c1dc75
- (id)init;	// 0x35c1dc3d
- (id)createHandler;	// 0x35c1df21
- (id)description;	// 0x35c1e04d
- (int)elementCount;	// 0x35c1de6d
- (BOOL)getElementClassIdentifier:(id *)identifier value:(id *)value atIndex:(int)index;	// 0x35c1de71
- (unsigned)hash;	// 0x35c1dc59
- (BOOL)isEqual:(id)equal;	// 0x35c1dc41
- (id)modelIdentifier;	// 0x35c1de69
// converted property getter: - (id)recognitionAction;	// 0x35c1e049
- (id)recognitionResultByReplacingValueForClassIdentifier:(id)classIdentifier withValue:(id)value;	// 0x35c1dca9
- (oneway void)release;	// 0x35c1dc6d
- (id)retain;	// 0x35c1dc5d
- (unsigned)retainCount;	// 0x35c1dc71
// converted property setter: - (void)setRecognitionAction:(id)action;	// 0x35c1e041
- (id)valueOfFirstElementWithClassIdentifier:(id)classIdentifier;	// 0x35c1de99
@end

