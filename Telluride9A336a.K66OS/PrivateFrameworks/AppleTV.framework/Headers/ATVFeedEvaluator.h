/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library

@class NSDateFormatter, NSMutableDictionary, NSNumberFormatter;
@protocol ATVReadWriteFeedResource;

__attribute__((visibility("hidden")))
@interface ATVFeedEvaluator : NSObject {
@private
	NSDateFormatter *_zuluDateFormatter;	// 4 = 0x4
	NSNumberFormatter *_numberFormatter;	// 8 = 0x8
	NSMutableDictionary *_dateFormatterCache;	// 12 = 0xc
	id<ATVReadWriteFeedResource> _feedResource;	// 16 = 0x10
}
@property(retain) id<ATVReadWriteFeedResource> feedResource;	// G=0x33a011d5; S=0x33a011e9; @synthesize=_feedResource
+ (id)evaluatePlist:(id)plist withFeedResource:(id)feedResource;	// 0x33a01089
- (id)init;	// 0x33a010f1
- (id)_evaluateArguments:(id)arguments commandForErrorLogging:(id)errorLogging;	// 0x33a01a15
- (id)_evaluateFunctionString:(id)string;	// 0x33a01895
- (id)_evaluateObject:(id)object withRecursionLevel:(int)recursionLevel;	// 0x33a0120d
- (id)_ifElse:(id)anElse;	// 0x33a01dbd
- (id)_localtime:(id)localtime;	// 0x33a01ec1
- (id)_lookup:(id)lookup;	// 0x33a01e85
- (id)_removePreferences:(id)preferences;	// 0x33a021a1
- (id)_setPreference:(id)preference;	// 0x33a020e5
- (void)dealloc;	// 0x33a0114d
// declared property getter: - (id)feedResource;	// 0x33a011d5
// declared property setter: - (void)setFeedResource:(id)resource;	// 0x33a011e9
@end

