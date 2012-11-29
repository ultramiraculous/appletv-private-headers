/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
 */

#import "TIUserDictionaryWord.h"

@class NSNumber;

__attribute__((visibility("hidden")))
@interface TIUbiquitousUserDictionaryWord : TIUserDictionaryWord {
}
@property(retain) id target;	// G=0x377a428d; S=0x377a42a9; converted property
@property(retain, nonatomic) NSNumber *timestamp;	// @dynamic
+ (id)predicateFilteringForSearchText:(id)searchText;	// 0x377a4259
+ (id)predicateMatchingTarget:(id)target shortcut:(id)shortcut;	// 0x377a4221
+ (id)sortDescriptors;	// 0x377a4159
- (id)changeDescriptionKey:(id)key;	// 0x377a4421
- (int)compareTimestamps:(id)timestamps;	// 0x377a4355
- (BOOL)hasChangesToTargetOrShortcut;	// 0x377a43c5
// converted property setter: - (void)setTarget:(id)target;	// 0x377a42a9
// converted property getter: - (id)target;	// 0x377a428d
- (void)updateTimestamp;	// 0x377a4311
@end
