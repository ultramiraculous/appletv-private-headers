/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSNumberFormatter, NSMutableDictionary, NSDateFormatter;
@protocol ATVReadWriteFeedResource;

__attribute__((visibility("hidden")))
@interface ATVFeedEvaluator : XXUnknownSuperclass {
	NSDateFormatter *_zuluDateFormatter;	// 4 = 0x4
	NSNumberFormatter *_numberFormatter;	// 8 = 0x8
	NSMutableDictionary *_dateFormatterCache;	// 12 = 0xc
	id<ATVReadWriteFeedResource> _feedResource;	// 16 = 0x10
}
@property(retain) id<ATVReadWriteFeedResource> feedResource;	// G=0x17fafd; S=0x17fb11; @synthesize=_feedResource
+ (id)evaluatePlist:(id)plist withFeedResource:(id)feedResource;	// 0x17f9ad
- (id)init;	// 0x17fa15
- (id)_evaluateArguments:(id)arguments commandForErrorLogging:(id)errorLogging;	// 0x18076d
- (id)_evaluateFunctionString:(id)string;	// 0x180271
- (id)_evaluateObject:(id)object withRecursionLevel:(int)recursionLevel;	// 0x17fb21
- (id)_evaluateStoreCoverArts:(id)arts;	// 0x180481
- (id)_ifElse:(id)anElse;	// 0x180b25
- (id)_localtime:(id)localtime;	// 0x180cb5
- (id)_lookup:(id)lookup;	// 0x180c3d
- (id)_removePreferences:(id)preferences;	// 0x1810fd
- (id)_setPreference:(id)preference;	// 0x180fc5
- (void)dealloc;	// 0x17fa71
// declared property getter: - (id)feedResource;	// 0x17fafd
// declared property setter: - (void)setFeedResource:(id)resource;	// 0x17fb11
@end
