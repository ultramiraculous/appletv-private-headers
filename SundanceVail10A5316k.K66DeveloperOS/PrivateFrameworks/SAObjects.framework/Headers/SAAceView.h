/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SADeferredKeyObject.h"
#import "AceObject.h"
#import "SAAceSerializable.h"

@class NSNumber, NSString;

@interface SAAceView : AceObject <SAAceSerializable, SADeferredKeyObject> {
}
@property(retain, nonatomic) NSNumber *listenAfterSpeaking;	// G=0x32f4faf9; S=0x32f4fb15; 
@property(copy, nonatomic) NSString *speakableText;	// G=0x32f4fb31; S=0x32f4fb4d; 
@property(copy, nonatomic) NSString *viewId;	// G=0x32f4fb9d; S=0x32f4fbb9; 
+ (id)aceView;	// 0x32f4fa69
+ (id)aceViewWithDictionary:(id)dictionary context:(id)context;	// 0x32f4faad
- (id)deferredKeys;	// 0x32f4fc09
- (id)encodedClassName;	// 0x32f4fa5d
- (id)groupIdentifier;	// 0x32f4fa4d
// declared property getter: - (id)listenAfterSpeaking;	// 0x32f4faf9
// declared property setter: - (void)setListenAfterSpeaking:(id)speaking;	// 0x32f4fb15
// declared property setter: - (void)setSpeakableText:(id)text;	// 0x32f4fb4d
// declared property setter: - (void)setViewId:(id)anId;	// 0x32f4fbb9
// declared property getter: - (id)speakableText;	// 0x32f4fb31
// declared property getter: - (id)viewId;	// 0x32f4fb9d
@end
