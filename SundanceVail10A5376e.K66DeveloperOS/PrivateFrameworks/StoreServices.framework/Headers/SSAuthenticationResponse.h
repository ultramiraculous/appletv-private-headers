/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <NSObject.h> // Unknown library

@class NSString, NSHTTPURLResponse, NSDictionary, NSNumber;

@interface SSAuthenticationResponse : NSObject {
	NSDictionary *_responseDictionary;	// 4 = 0x4
	int _urlBagType;	// 8 = 0x8
	NSHTTPURLResponse *_urlResponse;	// 12 = 0xc
}
@property(assign) int URLBagType;	// G=0x32ce7dd5; S=0x32ce7de9; @synthesize=_urlBagType
@property(readonly, assign) NSHTTPURLResponse *URLResponse;	// G=0x32ce7bd1; 
@property(readonly, assign) int accountKind;	// G=0x32ce73b5; 
@property(readonly, assign) NSString *accountName;	// G=0x32ce7411; 
@property(readonly, assign) NSNumber *accountUniqueIdentifier;	// G=0x32ce74a1; 
@property(readonly, assign) int availableServiceTypes;	// G=0x32ce74f5; 
@property(readonly, assign) NSString *creditsString;	// G=0x32ce7565; 
@property(readonly, assign) int enabledServiceTypes;	// G=0x32ce75f5; 
@property(readonly, assign) NSNumber *failureType;	// G=0x32ce777d; 
@property(readonly, assign) NSDictionary *responseDictionary;	// G=0x32ce7dc1; @synthesize=_responseDictionary
@property(readonly, assign) int responseType;	// G=0x32ce79a5; 
@property(readonly, assign) NSString *storeFrontIdentifier;	// G=0x32ce7a9d; 
@property(readonly, assign) NSString *token;	// G=0x32ce7b41; 
@property(readonly, assign) NSString *userMessage;	// G=0x32ce7c09; 
- (id)initWithURLResponse:(id)urlresponse dictionary:(id)dictionary;	// 0x32ce72d9
// declared property getter: - (int)URLBagType;	// 0x32ce7dd5
// declared property getter: - (id)URLResponse;	// 0x32ce7bd1
- (int)_responseTypeForErrorNumber:(int)errorNumber;	// 0x32ce7c99
- (int)_responseTypeForFailureType:(int)failureType;	// 0x32ce7cc1
- (int)_responseTypeForStatusValue:(int)statusValue;	// 0x32ce7ce1
- (id)_valueForFirstAvailableKey:(id)firstAvailableKey;	// 0x32ce7d09
// declared property getter: - (int)accountKind;	// 0x32ce73b5
// declared property getter: - (id)accountName;	// 0x32ce7411
// declared property getter: - (id)accountUniqueIdentifier;	// 0x32ce74a1
// declared property getter: - (int)availableServiceTypes;	// 0x32ce74f5
// declared property getter: - (id)creditsString;	// 0x32ce7565
- (void)dealloc;	// 0x32ce7351
// declared property getter: - (int)enabledServiceTypes;	// 0x32ce75f5
// declared property getter: - (id)failureType;	// 0x32ce777d
- (id)newAccount;	// 0x32ce7809
// declared property getter: - (id)responseDictionary;	// 0x32ce7dc1
// declared property getter: - (int)responseType;	// 0x32ce79a5
// declared property setter: - (void)setURLBagType:(int)type;	// 0x32ce7de9
// declared property getter: - (id)storeFrontIdentifier;	// 0x32ce7a9d
// declared property getter: - (id)token;	// 0x32ce7b41
// declared property getter: - (id)userMessage;	// 0x32ce7c09
@end

