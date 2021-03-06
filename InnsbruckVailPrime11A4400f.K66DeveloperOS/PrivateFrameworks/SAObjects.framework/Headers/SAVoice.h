/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SADomainObject.h"

@class NSString;

@interface SAVoice : SADomainObject {
}
@property(copy, nonatomic) NSString *gender;	// G=0x326bbfb5; S=0x326bbfd1; 
@property(copy, nonatomic) NSString *languageString;	// G=0x326bc021; S=0x326bc03d; 
@property(copy, nonatomic) NSString *name;	// G=0x326bc08d; S=0x326bc0a9; 
@property(copy, nonatomic) NSString *quality;	// G=0x326bc0f9; S=0x326bc115; 
+ (id)voice;	// 0x326bbf25
+ (id)voiceWithDictionary:(id)dictionary context:(id)context;	// 0x326bbf69
- (id)encodedClassName;	// 0x326bbf19
// declared property getter: - (id)gender;	// 0x326bbfb5
- (id)groupIdentifier;	// 0x326bbf09
// declared property getter: - (id)languageString;	// 0x326bc021
// declared property getter: - (id)name;	// 0x326bc08d
// declared property getter: - (id)quality;	// 0x326bc0f9
// declared property setter: - (void)setGender:(id)gender;	// 0x326bbfd1
// declared property setter: - (void)setLanguageString:(id)string;	// 0x326bc03d
// declared property setter: - (void)setName:(id)name;	// 0x326bc0a9
// declared property setter: - (void)setQuality:(id)quality;	// 0x326bc115
- (void)updateUsingSet:(id)set add:(id)add remove:(id)remove;	// 0x326bc165
@end

