/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "BRControlFactory.h"


__attribute__((visibility("hidden")))
@interface ATVDetailedMetadataControlFactory : XXUnknownSuperclass <BRControlFactory> {
}
+ (id)factory;	// 0xf686d
- (void)_populateActors:(id)actors forControl:(id)control;	// 0xf7119
- (void)_populateDirectors:(id)directors forControl:(id)control;	// 0xf7191
- (void)_populateMovieDetails:(id)details forControl:(id)control isTrailer:(BOOL)trailer;	// 0xf6c99
- (void)_populateProducers:(id)producers forControl:(id)control;	// 0xf7221
- (id)_setupBaseDetailedMetadataControl:(id)control;	// 0xf6a11
- (id)_setupMusicDetailedMetadataControl:(id)control;	// 0xf6b19
- (void)_setupSpecificDetailedMetadataControl:(id)control forControl:(id)control2;	// 0xf6b69
- (id)controlForData:(id)data currentControl:(id)control requestedBy:(id)by;	// 0xf68a5
@end

