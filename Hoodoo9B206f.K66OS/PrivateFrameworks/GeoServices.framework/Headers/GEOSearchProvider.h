/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h> // Unknown library


@interface GEOSearchProvider : NSObject {
	id _error;	// 4 = 0x4
}
@property(copy, nonatomic) id error;	// G=0x3287606d; S=0x3287607d; @synthesize=_error
+ (id)hostname;	// 0x3287600d
+ (unsigned short)provider;	// 0x32876009
- (void)cancel;	// 0x32876069
- (void)dealloc;	// 0x32876019
// declared property getter: - (id)error;	// 0x3287606d
- (void)search:(id)search finished:(id)finished spellingSuggestion:(id)suggestion refinement:(id)refinement error:(id)error;	// 0x32876065
// declared property setter: - (void)setError:(id)error;	// 0x3287607d
@end

