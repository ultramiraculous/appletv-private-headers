/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library

@class NSString;

__attribute__((visibility("hidden")))
@interface OpenURLTarget : NSObject {
@private
	unsigned _applicationState;	// 4 = 0x4
	struct {
		NSString *clientIdentifier;
		NSString *normalScheme;
		NSString *secureScheme;
	} _targetData;	// 8 = 0x8
	int _targetIndex;	// 20 = 0x14
}
- (id)init;	// 0x3337182d
- (id)initWithTargetIdentifier:(id)targetIdentifier;	// 0x33371841
- (int)compare:(id)compare;	// 0x33371939
- (id)copyURLForURL:(id)url;	// 0x3337199d
- (id)description;	// 0x33371ab9
@end

