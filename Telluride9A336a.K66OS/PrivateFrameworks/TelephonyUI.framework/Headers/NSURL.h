/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
 */

#import <NSURL.h> // Unknown library


@interface NSURL (QueryParameters)
- (id)URLByDeletingQueryParameterWithKey:(id)key;	// 0x3171d605
- (id)URLBySettingQueryParameterValue:(id)value forKey:(id)key;	// 0x3171d58d
- (id)URLWithNewQueryParameterDictionary:(id)newQueryParameterDictionary;	// 0x3171d9d5
- (id)queryParameters;	// 0x3171d7f1
@end

@interface NSURL (NSURL_TelephonyAdditions)
- (id)formattedPhoneNumber;	// 0x31720369
- (id)numberQualifiedForAddressBook;	// 0x3172042d
@end

